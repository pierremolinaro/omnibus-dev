#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@structureDeclaration semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structureDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                                  GALGAS_orderedGenerationList & ioArgument_ioOrderedGenerationList,
                                                                  GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  cEnumerator_lstringlist enumerator_7251 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_7251.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_7251.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
    }else if (kBoolFalse == test_0) {
      GALGAS_location location_1 (enumerator_7251.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 191)) ;
    }
    enumerator_7251.gotoNextObject () ;
  }
  GALGAS_structureFieldListForGeneration var_structureFieldListForGeneration = GALGAS_structureFieldListForGeneration::constructor_emptyList (SOURCE_FILE ("structure-declaration.galgas", 195)) ;
  GALGAS_stringset var_fieldNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("structure-declaration.galgas", 196)) ;
  cEnumerator_structureFieldListAST enumerator_7565 (object->mAttribute_mStructureFieldListAST, kEnumeration_up) ;
  while (enumerator_7565.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_7565.current_mOptionalFieldType (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("structure-declaration.galgas", 200)) ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_7565.current_mOptionalFieldType (HERE), inCompiler  COMMA_SOURCE_FILE ("structure-declaration.galgas", 201)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_fieldType = temp_2 ;
    const enumGalgasBool test_4 = var_fieldNameSet.reader_hasKey (enumerator_7565.current_mFieldName (HERE).mAttribute_string COMMA_SOURCE_FILE ("structure-declaration.galgas", 204)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location location_5 (enumerator_7565.current_mFieldName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (enumerator_7565.current_mFieldName (HERE).reader_string (SOURCE_FILE ("structure-declaration.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 205)).add_operation (GALGAS_string ("' field is already declared"), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 205))  COMMA_SOURCE_FILE ("structure-declaration.galgas", 205)) ;
    }
    var_fieldNameSet.addAssign_operation (enumerator_7565.current_mFieldName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("structure-declaration.galgas", 207)) ;
    GALGAS_variableMap joker_8196 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 215)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
    GALGAS_abstractExpressionGeneration var_initExpressionGeneratedCode ;
    callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_7565.current_mInitExpression (HERE).ptr (), GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("structure-declaration.galgas", 210)), var_fieldType, constinArgument_inContext, GALGAS_string::makeEmptyString (), ioArgument_ioGlobalLiteralStringMap, joker_8196, var_inferredType, var_initExpressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 209)) ;
    var_structureFieldListForGeneration.addAssign_operation (var_inferredType, enumerator_7565.current_mFieldName (HERE).mAttribute_string, var_initExpressionGeneratedCode  COMMA_SOURCE_FILE ("structure-declaration.galgas", 220)) ;
    enumerator_7565.gotoNextObject () ;
  }
  ioArgument_ioOrderedGenerationList.addAssign_operation (GALGAS_structureGeneration::constructor_new (object->mAttribute_mStructureName.mAttribute_string, var_structureFieldListForGeneration  COMMA_SOURCE_FILE ("structure-declaration.galgas", 226))  COMMA_SOURCE_FILE ("structure-declaration.galgas", 226)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structureDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                        categoryMethod_structureDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_semanticAnalysis (defineCategoryMethod_structureDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@structureGeneration headerCodeGeneration'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_structureGeneration_headerCodeGeneration (const cPtr_abstractGeneration * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_structureGeneration * object = (const cPtr_structureGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structureGeneration) ;
  result_outCode = GALGAS_string (filewrapperTemplate_structureGenerationTemplate_declaration (inCompiler, object->mAttribute_mStructureName, object->mAttribute_mStructureFieldListForGeneration COMMA_SOURCE_FILE ("structure-declaration.galgas", 266))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_structureGeneration_headerCodeGeneration (void) {
  enterCategoryReader_headerCodeGeneration (kTypeDescriptor_GALGAS_structureGeneration.mSlotID,
                                            categoryReader_structureGeneration_headerCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_structureGeneration_headerCodeGeneration (defineCategoryReader_structureGeneration_headerCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@structureGeneration implementationCodeGeneration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_structureGeneration_implementationCodeGeneration (const cPtr_abstractGeneration * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_structureGeneration * object = (const cPtr_structureGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structureGeneration) ;
  result_outCode = GALGAS_string (filewrapperTemplate_structureGenerationTemplate_implementation (inCompiler, object->mAttribute_mStructureName, object->mAttribute_mStructureFieldListForGeneration COMMA_SOURCE_FILE ("structure-declaration.galgas", 275))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_structureGeneration_implementationCodeGeneration (void) {
  enterCategoryReader_implementationCodeGeneration (kTypeDescriptor_GALGAS_structureGeneration.mSlotID,
                                                    categoryReader_structureGeneration_implementationCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_structureGeneration_implementationCodeGeneration (defineCategoryReader_structureGeneration_implementationCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category reader '@globalVarDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_globalVarDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_globalVarDeclaration * object = (const cPtr_globalVarDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalVarDeclaration) ;
  result_outLocation = object->mAttribute_mVarName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_globalVarDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_globalVarDeclaration.mSlotID,
                                categoryReader_globalVarDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_globalVarDeclaration_location (defineCategoryReader_globalVarDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@globalVarDeclaration enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalVarDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalVarDeclaration * object = (const cPtr_globalVarDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalVarDeclaration) ;
  {
  const GALGAS_globalVarDeclaration temp_0 = object ;
  routine_enterNodeInPrecedenceGraph (object->mAttribute_mVarName, temp_0, object->mAttribute_mType, ioArgument_ioGraph, inCompiler  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 56)) ;
  }
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), object->mAttribute_mVarName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 57)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_globalVarDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_globalVarDeclaration.mSlotID,
                                              categoryMethod_globalVarDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalVarDeclaration_enterInPrecedenceGraph (defineCategoryMethod_globalVarDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@globalVarDeclaration keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_globalVarDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalVarDeclaration * object = (const cPtr_globalVarDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalVarDeclaration) ;
  result_outRepresentation = GALGAS_string ("global variable ").add_operation (object->mAttribute_mVarName.reader_string (SOURCE_FILE ("global-variable-declaration.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 63)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_globalVarDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_globalVarDeclaration.mSlotID,
                                         categoryReader_globalVarDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_globalVarDeclaration_keyRepresentation (defineCategoryReader_globalVarDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@globalVarDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalVarDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                GALGAS_semanticContext & ioArgument_ioContext,
                                                                GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalVarDeclaration * object = (const cPtr_globalVarDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalVarDeclaration) ;
  switch (object->mAttribute_mType.enumValue ()) {
  case GALGAS_generalizedTypeEnumAST::kNotBuilt:
    break ;
  case GALGAS_generalizedTypeEnumAST::kEnum_valueType:
    {
      const cEnumAssociatedValues_generalizedTypeEnumAST_valueType * extractPtr_4104 = (const cEnumAssociatedValues_generalizedTypeEnumAST_valueType *) (object->mAttribute_mType.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_4104->mAssociatedValue0 ;
      GALGAS_unifiedTypeMap_2D_proxy var_constantType ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, extractedValue_typeName, var_constantType COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 78)) ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
      GALGAS_abstractExpressionGeneration var_expressionGeneratedCode ;
      callCategoryMethod_analyzeStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), var_constantType, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_inferredType, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 80)) ;
      GALGAS_stringset var_executionModes = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("global-variable-declaration.galgas", 88)) ;
      cEnumerator_lstringlist enumerator_3894 (object->mAttribute_mModeList, kEnumeration_up) ;
      while (enumerator_3894.hasCurrentObject ()) {
        var_executionModes.addAssign_operation (enumerator_3894.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 90)) ;
        enumerator_3894.gotoNextObject () ;
      }
      {
      ioArgument_ioContext.mAttribute_mGlobalVariableMap.modifier_insertKey (object->mAttribute_mVarName, var_inferredType, var_executionModes, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 93)) ;
      }
    }
    break ;
  case GALGAS_generalizedTypeEnumAST::kEnum_procType:
    {
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_globalVarDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_globalVarDeclaration.mSlotID,
                                      categoryMethod_globalVarDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalVarDeclaration_enterInContext (defineCategoryMethod_globalVarDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@globalVarDeclaration semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalVarDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                                  GALGAS_orderedGenerationList & ioArgument_ioOrderedGenerationList,
                                                                  GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalVarDeclaration * object = (const cPtr_globalVarDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalVarDeclaration) ;
  GALGAS_stringset var_executionModes = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("global-variable-declaration.galgas", 113)) ;
  cEnumerator_lstringlist enumerator_4826 (object->mAttribute_mModeList, kEnumeration_up) ;
  while (enumerator_4826.hasCurrentObject ()) {
    constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_4826.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 115)) ;
    var_executionModes.addAssign_operation (enumerator_4826.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 116)) ;
    enumerator_4826.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_stringset var_executionModeSet ;
  GALGAS_abstractExpressionGeneration var_expressionGeneratedCode ;
  constinArgument_inContext.mAttribute_mGlobalVariableMap.method_searchKey (object->mAttribute_mVarName, var_inferredType, var_executionModeSet, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 119)) ;
  ioArgument_ioOrderedGenerationList.addAssign_operation (GALGAS_globalVariableGeneration::constructor_new (object->mAttribute_mVarName.mAttribute_string, var_inferredType.reader_key (inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 127)), GALGAS_bool (kIsStrictSup, var_executionModeSet.reader_count (SOURCE_FILE ("global-variable-declaration.galgas", 128)).objectCompare (GALGAS_uint ((uint32_t) 1U))), var_expressionGeneratedCode  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 125))  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 125)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_globalVarDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_globalVarDeclaration.mSlotID,
                                        categoryMethod_globalVarDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalVarDeclaration_semanticAnalysis (defineCategoryMethod_globalVarDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@globalVariableGeneration headerCodeGeneration'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_globalVariableGeneration_headerCodeGeneration (const cPtr_abstractGeneration * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_globalVariableGeneration_headerCodeGeneration (void) {
  enterCategoryReader_headerCodeGeneration (kTypeDescriptor_GALGAS_globalVariableGeneration.mSlotID,
                                            categoryReader_globalVariableGeneration_headerCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_globalVariableGeneration_headerCodeGeneration (defineCategoryReader_globalVariableGeneration_headerCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@globalVariableGeneration implementationCodeGeneration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_globalVariableGeneration_implementationCodeGeneration (const cPtr_abstractGeneration * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_globalVariableGeneration * object = (const cPtr_globalVariableGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_globalVariableGeneration) ;
  result_outCode = GALGAS_string (filewrapperTemplate_globalVariableGenerationTemplate_implementation (inCompiler, object->mAttribute_mGlobalVariableName, object->mAttribute_mActualTypeName, object->mAttribute_mGenerateVolatile, callCategoryReader_expressionCode ((const cPtr_abstractExpressionGeneration *) object->mAttribute_mInitialValueExpressionGeneration.ptr (), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 169)) COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 165))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_globalVariableGeneration_implementationCodeGeneration (void) {
  enterCategoryReader_implementationCodeGeneration (kTypeDescriptor_GALGAS_globalVariableGeneration.mSlotID,
                                                    categoryReader_globalVariableGeneration_implementationCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_globalVariableGeneration_implementationCodeGeneration (defineCategoryReader_globalVariableGeneration_implementationCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@globalConstantDeclaration location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_globalConstantDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  result_outLocation = object->mAttribute_mConstantName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_globalConstantDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                categoryReader_globalConstantDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_globalConstantDeclaration_location (defineCategoryReader_globalConstantDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@globalConstantDeclaration enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalConstantDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  {
  const GALGAS_globalConstantDeclaration temp_0 = object ;
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 49)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (object->mAttribute_mConstantName, object->mAttribute_mTypeName COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 50)) ;
  }
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), object->mAttribute_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 51)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_globalConstantDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                              categoryMethod_globalConstantDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_enterInPrecedenceGraph (defineCategoryMethod_globalConstantDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@globalConstantDeclaration keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_globalConstantDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mAttribute_mConstantName.reader_string (SOURCE_FILE ("global-constant-declaration.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 57)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_globalConstantDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                         categoryReader_globalConstantDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_globalConstantDeclaration_keyRepresentation (defineCategoryReader_globalConstantDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@globalConstantDeclaration enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalConstantDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                     const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_constantType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, var_constantType COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 78)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_abstractExpressionGeneration var_expressionGeneratedCode ;
  callCategoryMethod_analyzeStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), var_constantType, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_inferredType, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 90)) ;
  {
  ioArgument_ioContext.mAttribute_mGlobalConstantMap.modifier_insertKey (object->mAttribute_mConstantName, var_inferredType, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 98)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_globalConstantDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                      categoryMethod_globalConstantDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_enterInContext (defineCategoryMethod_globalConstantDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@globalConstantDeclaration semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalConstantDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                       GALGAS_orderedGenerationList & /* ioArgument_ioOrderedGenerationList */,
                                                                       GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_globalConstantDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                        categoryMethod_globalConstantDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_semanticAnalysis (defineCategoryMethod_globalConstantDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category reader '@integerDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_integerDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  result_outLocation = object->mAttribute_mIntegerTypeName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_integerDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                categoryReader_integerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_integerDeclaration_location (defineCategoryReader_integerDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@integerDeclaration enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  {
  const GALGAS_integerDeclaration temp_0 = object ;
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mIntegerTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 45)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (object->mAttribute_mIntegerTypeName, GALGAS_lstring::constructor_new (GALGAS_string ("basetype ").add_operation (object->mAttribute_mBaseType.reader_string (SOURCE_FILE ("type-integer.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 46)), object->mAttribute_mBaseType.mAttribute_location  COMMA_SOURCE_FILE ("type-integer.galgas", 46)) COMMA_SOURCE_FILE ("type-integer.galgas", 46)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                              categoryMethod_integerDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_enterInPrecedenceGraph (defineCategoryMethod_integerDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@integerDeclaration keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_integerDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (object->mAttribute_mIntegerTypeName.reader_string (SOURCE_FILE ("type-integer.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 52)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_integerDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                         categoryReader_integerDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_integerDeclaration_keyRepresentation (defineCategoryReader_integerDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@integerDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                              const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                              GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  GALGAS_uint var_size ;
  GALGAS_bool var_isSigned ;
  GALGAS_string joker_3173 ; // Joker input parameter
  ioArgument_ioContext.mAttribute_mTargetBaseTypeMap.method_searchKey (object->mAttribute_mBaseType, joker_3173, var_size, var_isSigned, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 65)) ;
  GALGAS_sint_36__34_ var_min ;
  GALGAS_uint_36__34_ var_max ;
  const enumGalgasBool test_0 = var_isSigned.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_min = GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 71)) ;
      var_max = GALGAS_uint_36__34_ ((uint64_t) 127ULL) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 16U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_min = GALGAS_sint_36__34_ ((int64_t) 32768LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 74)) ;
        var_max = GALGAS_uint_36__34_ ((uint64_t) 32767ULL) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_min = GALGAS_sint::constructor_min (SOURCE_FILE ("type-integer.galgas", 77)).reader_sint_36__34_ (SOURCE_FILE ("type-integer.galgas", 77)) ;
          var_max = GALGAS_sint::constructor_max (SOURCE_FILE ("type-integer.galgas", 78)).reader_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 78)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 64U))).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_min = GALGAS_sint_36__34_::constructor_min (SOURCE_FILE ("type-integer.galgas", 80)) ;
            var_max = GALGAS_sint_36__34_::constructor_max (SOURCE_FILE ("type-integer.galgas", 81)).reader_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 81)) ;
          }else if (kBoolFalse == test_4) {
            GALGAS_location location_5 (object->mAttribute_mIntegerTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_5, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("type-integer.galgas", 83)) ;
            var_min.drop () ; // Release error dropped variable
            var_max.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }else if (kBoolFalse == test_0) {
    var_min = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_max = GALGAS_uint_36__34_ ((uint64_t) 255ULL) ;
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 16U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_max = GALGAS_uint_36__34_ ((uint64_t) 65535ULL) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_max = GALGAS_uint::constructor_max (SOURCE_FILE ("type-integer.galgas", 92)).reader_uint_36__34_ (SOURCE_FILE ("type-integer.galgas", 92)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 64U))).boolEnum () ;
          if (kBoolTrue == test_9) {
            var_max = GALGAS_uint_36__34_::constructor_max (SOURCE_FILE ("type-integer.galgas", 94)) ;
          }else if (kBoolFalse == test_9) {
            GALGAS_location location_10 (object->mAttribute_mIntegerTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_10, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("type-integer.galgas", 96)) ;
            var_max.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 100)) ;
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mIntegerTypeName, GALGAS_typeKind::constructor_integer (var_min, var_max  COMMA_SOURCE_FILE ("type-integer.galgas", 103)), var_constructorMap, GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 105)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 101)) ;
  }
  {
  routine_enterIntegerOperators (object->mAttribute_mIntegerTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 111)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                      categoryMethod_integerDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_enterInContext (defineCategoryMethod_integerDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@integerDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                GALGAS_orderedGenerationList & ioArgument_ioOrderedGenerationList,
                                                                GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  GALGAS_string var_cType ;
  GALGAS_uint joker_8880 ; // Joker input parameter
  GALGAS_bool joker_8883 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mTargetBaseTypeMap.method_searchKey (object->mAttribute_mBaseType, var_cType, joker_8880, joker_8883, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 220)) ;
  ioArgument_ioOrderedGenerationList.addAssign_operation (GALGAS_integerGeneration::constructor_new (object->mAttribute_mIntegerTypeName.mAttribute_string, var_cType  COMMA_SOURCE_FILE ("type-integer.galgas", 222))  COMMA_SOURCE_FILE ("type-integer.galgas", 222)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                        categoryMethod_integerDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_semanticAnalysis (defineCategoryMethod_integerDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@integerGeneration headerCodeGeneration'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_integerGeneration_headerCodeGeneration (const cPtr_abstractGeneration * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_integerGeneration * object = (const cPtr_integerGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_integerGeneration) ;
  result_outCode = GALGAS_string (filewrapperTemplate_integerGenerationTemplate_declaration (inCompiler, object->mAttribute_mIntegerTypeName, object->mAttribute_mActualTypeName COMMA_SOURCE_FILE ("type-integer.galgas", 250))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_integerGeneration_headerCodeGeneration (void) {
  enterCategoryReader_headerCodeGeneration (kTypeDescriptor_GALGAS_integerGeneration.mSlotID,
                                            categoryReader_integerGeneration_headerCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_integerGeneration_headerCodeGeneration (defineCategoryReader_integerGeneration_headerCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@integerGeneration implementationCodeGeneration'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_integerGeneration_implementationCodeGeneration (const cPtr_abstractGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_integerGeneration_implementationCodeGeneration (void) {
  enterCategoryReader_implementationCodeGeneration (kTypeDescriptor_GALGAS_integerGeneration.mSlotID,
                                                    categoryReader_integerGeneration_implementationCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_integerGeneration_implementationCodeGeneration (defineCategoryReader_integerGeneration_implementationCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category reader '@literalStringDeclaration location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_literalStringDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  result_outLocation = object->mAttribute_mLiteralStringTypeName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_literalStringDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                categoryReader_literalStringDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_literalStringDeclaration_location (defineCategoryReader_literalStringDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@literalStringDeclaration enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  {
  const GALGAS_literalStringDeclaration temp_0 = object ;
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mLiteralStringTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 22)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                              categoryMethod_literalStringDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_enterInPrecedenceGraph (defineCategoryMethod_literalStringDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@literalStringDeclaration keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_literalStringDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (object->mAttribute_mLiteralStringTypeName.reader_string (SOURCE_FILE ("type-static-string.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 28)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_literalStringDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                         categoryReader_literalStringDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_literalStringDeclaration_keyRepresentation (defineCategoryReader_literalStringDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@literalStringDeclaration enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                    const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mLiteralStringTypeName, GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("type-static-string.galgas", 43)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-static-string.galgas", 44)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-static-string.galgas", 45)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 41)) ;
  }
  {
  routine_enterStaticStringOperators (object->mAttribute_mLiteralStringTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 51)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                      categoryMethod_literalStringDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_enterInContext (defineCategoryMethod_literalStringDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@literalStringDeclaration semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                      const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                      GALGAS_orderedGenerationList & ioArgument_ioOrderedGenerationList,
                                                                      GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  ioArgument_ioOrderedGenerationList.addAssign_operation (GALGAS_literalStringGeneration::constructor_new (object->mAttribute_mLiteralStringTypeName.mAttribute_string  COMMA_SOURCE_FILE ("type-static-string.galgas", 130))  COMMA_SOURCE_FILE ("type-static-string.galgas", 130)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                        categoryMethod_literalStringDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_semanticAnalysis (defineCategoryMethod_literalStringDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@literalStringGeneration headerCodeGeneration'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_literalStringGeneration_headerCodeGeneration (const cPtr_abstractGeneration * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_literalStringGeneration * object = (const cPtr_literalStringGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringGeneration) ;
  result_outCode = GALGAS_string (filewrapperTemplate_literalStringGenerationTemplate_declaration (inCompiler, object->mAttribute_mLiteralStringTypeName COMMA_SOURCE_FILE ("type-static-string.galgas", 155))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_literalStringGeneration_headerCodeGeneration (void) {
  enterCategoryReader_headerCodeGeneration (kTypeDescriptor_GALGAS_literalStringGeneration.mSlotID,
                                            categoryReader_literalStringGeneration_headerCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_literalStringGeneration_headerCodeGeneration (defineCategoryReader_literalStringGeneration_headerCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@literalStringGeneration implementationCodeGeneration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_literalStringGeneration_implementationCodeGeneration (const cPtr_abstractGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_literalStringGeneration_implementationCodeGeneration (void) {
  enterCategoryReader_implementationCodeGeneration (kTypeDescriptor_GALGAS_literalStringGeneration.mSlotID,
                                                    categoryReader_literalStringGeneration_implementationCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_literalStringGeneration_implementationCodeGeneration (defineCategoryReader_literalStringGeneration_implementationCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@functionGeneration headerCodeGeneration'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_functionGeneration_headerCodeGeneration (const cPtr_abstractGeneration * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_functionGeneration * object = (const cPtr_functionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionGeneration) ;
  result_outCode = GALGAS_string (filewrapperTemplate_functionGenerationTemplate_declaration (inCompiler, object->mAttribute_mFunctionMangledName, object->mAttribute_mFormalArgumentListForGeneration, object->mAttribute_mResultType COMMA_SOURCE_FILE ("func-declaration.galgas", 267))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_functionGeneration_headerCodeGeneration (void) {
  enterCategoryReader_headerCodeGeneration (kTypeDescriptor_GALGAS_functionGeneration.mSlotID,
                                            categoryReader_functionGeneration_headerCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_functionGeneration_headerCodeGeneration (defineCategoryReader_functionGeneration_headerCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@functionGeneration implementationCodeGeneration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_functionGeneration_implementationCodeGeneration (const cPtr_abstractGeneration * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_functionGeneration * object = (const cPtr_functionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionGeneration) ;
  result_outCode = GALGAS_string (filewrapperTemplate_functionGenerationTemplate_implementation (inCompiler, object->mAttribute_mFunctionMangledName, object->mAttribute_mFormalArgumentListForGeneration, object->mAttribute_mInstructionGenerationList, object->mAttribute_mResultType, object->mAttribute_mResultVarName COMMA_SOURCE_FILE ("func-declaration.galgas", 277))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_functionGeneration_implementationCodeGeneration (void) {
  enterCategoryReader_implementationCodeGeneration (kTypeDescriptor_GALGAS_functionGeneration.mSlotID,
                                                    categoryReader_functionGeneration_implementationCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_functionGeneration_implementationCodeGeneration (defineCategoryReader_functionGeneration_implementationCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@procedureGeneration headerCodeGeneration'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_procedureGeneration_headerCodeGeneration (const cPtr_abstractGeneration * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_procedureGeneration * object = (const cPtr_procedureGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_procedureGeneration) ;
  result_outCode = GALGAS_string (filewrapperTemplate_procedureGenerationTemplate_declaration (inCompiler, object->mAttribute_mProcedureMangledName, object->mAttribute_mFormalArgumentListForGeneration COMMA_SOURCE_FILE ("proc-declaration.galgas", 421))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_procedureGeneration_headerCodeGeneration (void) {
  enterCategoryReader_headerCodeGeneration (kTypeDescriptor_GALGAS_procedureGeneration.mSlotID,
                                            categoryReader_procedureGeneration_headerCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_procedureGeneration_headerCodeGeneration (defineCategoryReader_procedureGeneration_headerCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@procedureGeneration implementationCodeGeneration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_procedureGeneration_implementationCodeGeneration (const cPtr_abstractGeneration * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_procedureGeneration * object = (const cPtr_procedureGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_procedureGeneration) ;
  result_outCode = GALGAS_string (filewrapperTemplate_procedureGenerationTemplate_implementation (inCompiler, object->mAttribute_mProcedureMangledName, object->mAttribute_mFormalArgumentListForGeneration, object->mAttribute_mInstructionGenerationList COMMA_SOURCE_FILE ("proc-declaration.galgas", 430))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_procedureGeneration_implementationCodeGeneration (void) {
  enterCategoryReader_implementationCodeGeneration (kTypeDescriptor_GALGAS_procedureGeneration.mSlotID,
                                                    categoryReader_procedureGeneration_implementationCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_procedureGeneration_implementationCodeGeneration (defineCategoryReader_procedureGeneration_implementationCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category reader '@registerDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_registerDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  result_outLocation = object->mAttribute_mRegisterName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_registerDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                categoryReader_registerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_registerDeclaration_location (defineCategoryReader_registerDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@registerDeclaration enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  {
  const GALGAS_registerDeclaration temp_0 = object ;
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mRegisterName, temp_0, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 56)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (object->mAttribute_mRegisterName, object->mAttribute_mRegisterTypeName COMMA_SOURCE_FILE ("register-declaration.galgas", 57)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                              categoryMethod_registerDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerDeclaration_enterInPrecedenceGraph (defineCategoryMethod_registerDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@registerDeclaration keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_registerDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  result_outRepresentation = GALGAS_string ("register ").add_operation (object->mAttribute_mRegisterName.reader_string (SOURCE_FILE ("register-declaration.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 63)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_registerDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                         categoryReader_registerDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_registerDeclaration_keyRepresentation (defineCategoryReader_registerDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@registerDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                               const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_registerType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mRegisterTypeName, var_registerType COMMA_SOURCE_FILE ("register-declaration.galgas", 76)) ;
  }
  GALGAS_bool var_isReadOnly = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_3499 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3499.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_3499.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("ro"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_3499.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("only @ro attribute (read only) is accepted here")  COMMA_SOURCE_FILE ("register-declaration.galgas", 81)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = var_isReadOnly.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (enumerator_3499.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("register-declaration.galgas", 83)) ;
      }else if (kBoolFalse == test_2) {
        var_isReadOnly = GALGAS_bool (true) ;
      }
    }
    enumerator_3499.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mRegisterMap.modifier_insertKey (object->mAttribute_mRegisterName, var_registerType, var_isReadOnly, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 89)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                      categoryMethod_registerDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerDeclaration_enterInContext (defineCategoryMethod_registerDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@registerDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 GALGAS_orderedGenerationList & ioArgument_ioOrderedGenerationList,
                                                                 GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_registerType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mRegisterTypeName, inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 106)) ;
  switch (var_registerType.reader_kind (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 107)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      GALGAS_location location_0 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_0, GALGAS_string ("a boolean type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 108)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
    {
      GALGAS_location location_1 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("a boolset type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 109)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      GALGAS_location location_2 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("a literal string type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 111)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      GALGAS_location location_3 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("a structure type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 112)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      GALGAS_location location_4 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("an enumeration type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 113)) ;
    }
    break ;
  }
  GALGAS_uint var_size ;
  GALGAS_bool var_isSigned ;
  GALGAS_string joker_5148 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mTargetBaseTypeMap.method_searchKey (GALGAS_string ("size").reader_nowhere (SOURCE_FILE ("register-declaration.galgas", 116)), joker_5148, var_size, var_isSigned, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 116)) ;
  const enumGalgasBool test_5 = var_isSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_location location_6 (object->mAttribute_mRegisterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_6, GALGAS_string ("base type 'size' should be unsigned")  COMMA_SOURCE_FILE ("register-declaration.galgas", 118)) ;
  }
  GALGAS_uint_36__34_ var_maxAddress ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    var_maxAddress = GALGAS_uint_36__34_ ((uint64_t) 255ULL) ;
  }else if (kBoolFalse == test_7) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 16U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_maxAddress = GALGAS_uint_36__34_ ((uint64_t) 65535ULL) ;
    }else if (kBoolFalse == test_8) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
      if (kBoolTrue == test_9) {
        var_maxAddress = GALGAS_uint::constructor_max (SOURCE_FILE ("register-declaration.galgas", 126)).reader_uint_36__34_ (SOURCE_FILE ("register-declaration.galgas", 126)) ;
      }else if (kBoolFalse == test_9) {
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 16U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          var_maxAddress = GALGAS_uint_36__34_::constructor_max (SOURCE_FILE ("register-declaration.galgas", 128)) ;
        }else if (kBoolFalse == test_10) {
          GALGAS_location location_11 (object->mAttribute_mRegisterName.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_11, GALGAS_string ("base type 'size' has an invalid size")  COMMA_SOURCE_FILE ("register-declaration.galgas", 130)) ;
          var_maxAddress.drop () ; // Release error dropped variable
        }
      }
    }
  }
  const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, object->mAttribute_mRegisterAddress.mAttribute_uint_36__34_.objectCompare (var_maxAddress)).boolEnum () ;
  if (kBoolTrue == test_12) {
    GALGAS_location location_13 (object->mAttribute_mRegisterAddress.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_13, GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxAddress.reader_hexString (SOURCE_FILE ("register-declaration.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 133))  COMMA_SOURCE_FILE ("register-declaration.galgas", 133)) ;
  }
  ioArgument_ioOrderedGenerationList.addAssign_operation (GALGAS_registerGeneration::constructor_new (object->mAttribute_mRegisterTypeName.mAttribute_string, object->mAttribute_mRegisterName.mAttribute_string, object->mAttribute_mRegisterAddress.mAttribute_uint_36__34_  COMMA_SOURCE_FILE ("register-declaration.galgas", 136))  COMMA_SOURCE_FILE ("register-declaration.galgas", 136)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                        categoryMethod_registerDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerDeclaration_semanticAnalysis (defineCategoryMethod_registerDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@registerGeneration headerCodeGeneration'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_registerGeneration_headerCodeGeneration (const cPtr_abstractGeneration * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_registerGeneration * object = (const cPtr_registerGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_registerGeneration) ;
  result_outCode = GALGAS_string (filewrapperTemplate_registerGenerationTemplate_declaration (inCompiler, object->mAttribute_mRegisterTypeName, object->mAttribute_mRegisterName, object->mAttribute_mRegisterAddress COMMA_SOURCE_FILE ("register-declaration.galgas", 167))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_registerGeneration_headerCodeGeneration (void) {
  enterCategoryReader_headerCodeGeneration (kTypeDescriptor_GALGAS_registerGeneration.mSlotID,
                                            categoryReader_registerGeneration_headerCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_registerGeneration_headerCodeGeneration (defineCategoryReader_registerGeneration_headerCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@registerGeneration implementationCodeGeneration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_registerGeneration_implementationCodeGeneration (const cPtr_abstractGeneration * /* inObject */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_registerGeneration_implementationCodeGeneration (void) {
  enterCategoryReader_implementationCodeGeneration (kTypeDescriptor_GALGAS_registerGeneration.mSlotID,
                                                    categoryReader_registerGeneration_implementationCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_registerGeneration_implementationCodeGeneration (defineCategoryReader_registerGeneration_implementationCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@incrementationInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incrementationInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                 const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_string constinArgument_inMode,
                                                                 GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionGenerationList & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incrementationInstructionAST * object = (const cPtr_incrementationInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incrementationInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_stringset var_acceptedModeSet ;
  {
  GALGAS_string joker_2658_2 ; // Joker input parameter
  GALGAS_bool joker_2658_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mVarName, var_type, var_acceptedModeSet, joker_2658_2, joker_2658_1, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 58)) ;
  }
  const enumGalgasBool test_0 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 65)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 65)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 66)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 66))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 66)) ;
  }
  const enumGalgasBool test_2 = constinArgument_inContext.mAttribute_mTypeNameSetForIncDec.reader_hasKey (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 69)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 70)).add_operation (GALGAS_string (" type does handle ++ operator"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 70))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 70)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_incrementInstructionGeneration::constructor_new (object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incrementationInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_incrementationInstructionAST.mSlotID,
                               categoryMethod_incrementationInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incrementationInstructionAST_analyze (defineCategoryMethod_incrementationInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@decrementationInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_decrementationInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                 const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_string constinArgument_inMode,
                                                                 GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionGenerationList & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decrementationInstructionAST * object = (const cPtr_decrementationInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_decrementationInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_stringset var_acceptedModeSet ;
  {
  GALGAS_string joker_3729_2 ; // Joker input parameter
  GALGAS_bool joker_3729_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mVarName, var_type, var_acceptedModeSet, joker_3729_2, joker_3729_1, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 89)) ;
  }
  const enumGalgasBool test_0 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 96)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 96)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 97)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 97))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 97)) ;
  }
  const enumGalgasBool test_2 = constinArgument_inContext.mAttribute_mTypeNameSetForIncDec.reader_hasKey (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 100)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)).add_operation (GALGAS_string (" type does handle -- operator"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_decrementInstructionGeneration::constructor_new (object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 104))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 104)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_decrementationInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_decrementationInstructionAST.mSlotID,
                               categoryMethod_decrementationInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decrementationInstructionAST_analyze (defineCategoryMethod_decrementationInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@incrementInstructionGeneration instructionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_incrementInstructionGeneration_instructionCode (const cPtr_abstractInstructionGeneration * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_incrementInstructionGeneration * object = (const cPtr_incrementInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_incrementInstructionGeneration) ;
  result_outCode = object->mAttribute_mLocalVariable.add_operation (GALGAS_string (" ++ ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 120)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_incrementInstructionGeneration_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_incrementInstructionGeneration.mSlotID,
                                       categoryReader_incrementInstructionGeneration_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_incrementInstructionGeneration_instructionCode (defineCategoryReader_incrementInstructionGeneration_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@decrementInstructionGeneration instructionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_decrementInstructionGeneration_instructionCode (const cPtr_abstractInstructionGeneration * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_decrementInstructionGeneration * object = (const cPtr_decrementInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_decrementInstructionGeneration) ;
  result_outCode = object->mAttribute_mLocalVariable.add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 132)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_decrementInstructionGeneration_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_decrementInstructionGeneration.mSlotID,
                                       categoryReader_decrementInstructionGeneration_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_decrementInstructionGeneration_instructionCode (defineCategoryReader_decrementInstructionGeneration_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@varInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                    const GALGAS_receiverType constinArgument_inReceiverType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_string constinArgument_inMode,
                                                                    GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_instructionGenerationList & ioArgument_ioInstructionGenerationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 107)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 108)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_abstractExpressionGeneration var_expressionGeneratedCode ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_inferredType, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 111)) ;
  {
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-var.galgas", 125)) ;
  temp_2.addAssign_operation (constinArgument_inMode  COMMA_SOURCE_FILE ("instruction-var.galgas", 125)) ;
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVarName, var_inferredType, temp_2, function_varPrefix (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 126)).add_operation (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 126)), var_inferredType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 122)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_varInstructionWithAssignmentGeneration::constructor_new (var_inferredType, object->mAttribute_mVarName.mAttribute_string, var_expressionGeneratedCode  COMMA_SOURCE_FILE ("instruction-var.galgas", 130))  COMMA_SOURCE_FILE ("instruction-var.galgas", 130)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInstructionWithAssignmentAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                               categoryMethod_varInstructionWithAssignmentAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_analyze (defineCategoryMethod_varInstructionWithAssignmentAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@varInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                      const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_string constinArgument_inMode,
                                                      GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                      GALGAS_instructionGenerationList & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 147)) ;
  {
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-var.galgas", 152)) ;
  temp_0.addAssign_operation (constinArgument_inMode  COMMA_SOURCE_FILE ("instruction-var.galgas", 152)) ;
  ioArgument_ioVariableMap.modifier_insertUndefinedLocalVariable (object->mAttribute_mVarName, var_targetType, temp_0, function_varPrefix (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)).add_operation (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)), var_targetType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_varInstructionGeneration::constructor_new (var_targetType, object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-var.galgas", 157))  COMMA_SOURCE_FILE ("instruction-var.galgas", 157)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_varInstructionAST.mSlotID,
                               categoryMethod_varInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionAST_analyze (defineCategoryMethod_varInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@varInstructionWithAssignmentGeneration instructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_varInstructionWithAssignmentGeneration_instructionCode (const cPtr_abstractInstructionGeneration * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_varInstructionWithAssignmentGeneration * object = (const cPtr_varInstructionWithAssignmentGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentGeneration) ;
  result_outCode = function_typePrefix (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)).add_operation (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)).add_operation (function_varPrefix (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)).add_operation (object->mAttribute_mLocalVariable, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)).add_operation (callCategoryReader_expressionCode ((const cPtr_abstractExpressionGeneration *) object->mAttribute_mExpressionGeneration.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 174)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 174)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_varInstructionWithAssignmentGeneration_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_varInstructionWithAssignmentGeneration.mSlotID,
                                       categoryReader_varInstructionWithAssignmentGeneration_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_varInstructionWithAssignmentGeneration_instructionCode (defineCategoryReader_varInstructionWithAssignmentGeneration_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@varInstructionGeneration instructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_varInstructionGeneration_instructionCode (const cPtr_abstractInstructionGeneration * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_varInstructionGeneration * object = (const cPtr_varInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionGeneration) ;
  result_outCode = function_typePrefix (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 187)).add_operation (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 187)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 187)).add_operation (function_varPrefix (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 187)).add_operation (object->mAttribute_mLocalVariable, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 187)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 187)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_varInstructionGeneration_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_varInstructionGeneration.mSlotID,
                                       categoryReader_varInstructionGeneration_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_varInstructionGeneration_instructionCode (defineCategoryReader_varInstructionGeneration_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@assignmentInstructionAST analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                             const GALGAS_receiverType constinArgument_inReceiverType,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             const GALGAS_string constinArgument_inMode,
                                                             GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                             GALGAS_instructionGenerationList & ioArgument_ioInstructionGenerationList,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  {
  GALGAS_stringset joker_2201_3 ; // Joker input parameter
  GALGAS_string joker_2201_2 ; // Joker input parameter
  GALGAS_bool joker_2201_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2201_3, joker_2201_2, joker_2201_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 45)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_abstractExpressionGeneration var_expressionGeneratedCode ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_inferredType, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 62)).objectCompare (var_inferredType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 62)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("source expression type is '").add_operation (var_inferredType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 63)).add_operation (GALGAS_string ("', and is not compatible with target type '"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 63)).add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 64)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 64))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 63)) ;
  }
  GALGAS_stringset var_acceptedModeSet ;
  GALGAS_string var_targetVar ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_2889 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mTargetVarName, joker_2889, var_acceptedModeSet, var_targetVar, var_isCopiable, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 67)) ;
  }
  const enumGalgasBool test_2 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-assignment.galgas", 75)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 75)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 76)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 76))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 76)) ;
  }
  const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 78)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.reader_string (SOURCE_FILE ("instruction-assignment.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 79)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 79))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 79)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assignmentInstructionGeneration::constructor_new (var_targetVar, var_targetType, var_expressionGeneratedCode  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                               categoryMethod_assignmentInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_analyze (defineCategoryMethod_assignmentInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@assignmentInstructionGeneration instructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_assignmentInstructionGeneration_instructionCode (const cPtr_abstractInstructionGeneration * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_assignmentInstructionGeneration * object = (const cPtr_assignmentInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionGeneration) ;
  result_outCode = object->mAttribute_mLocalVariable.add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)).add_operation (function_typePrefix (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)).add_operation (object->mAttribute_mTargetVarType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)) ;
  result_outCode.dotAssign_operation (GALGAS_string (") (").add_operation (callCategoryReader_expressionCode ((const cPtr_abstractExpressionGeneration *) object->mAttribute_mExpressionGeneration.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 103)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 103))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 103)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_assignmentInstructionGeneration_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_assignmentInstructionGeneration.mSlotID,
                                       categoryReader_assignmentInstructionGeneration_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_assignmentInstructionGeneration_instructionCode (defineCategoryReader_assignmentInstructionGeneration_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@ifInstructionAST analyze'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                     const GALGAS_receiverType constinArgument_inReceiverType,
                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                     const GALGAS_string constinArgument_inMode,
                                                     GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                     GALGAS_instructionGenerationList & ioArgument_ioInstructionGenerationList,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_testExpressionType ;
  GALGAS_abstractExpressionGeneration var_testExpressionGeneratedCode ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 80)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_testExpressionType, var_testExpressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 78)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 89)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 89)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (var_testExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 90)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 90))  COMMA_SOURCE_FILE ("instruction-if.galgas", 90)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 92)) ;
  }
  GALGAS_instructionGenerationList var_thenInstructionGenerationList = GALGAS_instructionGenerationList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 94)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mThenInstructionList, object->mAttribute_mEndOfThenInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_thenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 95)) ;
  GALGAS_instructionGenerationList var_elseInstructionGenerationList = GALGAS_instructionGenerationList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 105)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mElseInstructionList, object->mAttribute_mEndOfElseInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_elseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 106)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 115)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionGeneration::constructor_new (var_testExpressionGeneratedCode, var_thenInstructionGenerationList, var_elseInstructionGenerationList  COMMA_SOURCE_FILE ("instruction-if.galgas", 117))  COMMA_SOURCE_FILE ("instruction-if.galgas", 117)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                               categoryMethod_ifInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_analyze (defineCategoryMethod_ifInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@ifInstructionGeneration instructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ifInstructionGeneration_instructionCode (const cPtr_abstractInstructionGeneration * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_ifInstructionGeneration * object = (const cPtr_ifInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionGeneration) ;
  result_outCode = GALGAS_string ("if (").add_operation (callCategoryReader_expressionCode ((const cPtr_abstractExpressionGeneration *) object->mAttribute_mTestExpressionGeneration.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mThenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138))  COMMA_SOURCE_FILE ("instruction-if.galgas", 138)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionGenerationList.reader_length (SOURCE_FILE ("instruction-if.galgas", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
    result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mElseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141))  COMMA_SOURCE_FILE ("instruction-if.galgas", 141)) ;
  }
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-if.galgas", 143)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ifInstructionGeneration_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_ifInstructionGeneration.mSlotID,
                                       categoryReader_ifInstructionGeneration_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ifInstructionGeneration_instructionCode (defineCategoryReader_ifInstructionGeneration_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@methodCallInstructionAST analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_methodCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                             const GALGAS_receiverType constinArgument_inReceiverType,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             const GALGAS_string constinArgument_inMode,
                                                             GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                             GALGAS_instructionGenerationList & ioArgument_ioInstructionGenerationList,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverExpressionType ;
  GALGAS_abstractExpressionGeneration var_receiverExpressionGeneratedCode ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mReceiverExpression.ptr (), constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 65)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_receiverExpressionType, var_receiverExpressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 63)) ;
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 74)) ;
  GALGAS_string var_procMangledName = object->mAttribute_mMethodName.mAttribute_string ;
  cEnumerator_procEffectiveParameterListAST enumerator_3280 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_3280.hasCurrentObject ()) {
    var_procMangledName.dotAssign_operation (GALGAS_string (" ")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 77)) ;
    switch (enumerator_3280.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingMode::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingMode::kEnum_input:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 80)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_valueAccess ;
        GALGAS_bool var_isCopiable ;
        {
        ioArgument_ioVariableMap.modifier_searchForWriteAccess (enumerator_3280.current_mEffectiveParameterName (HERE), var_type, var_acceptedModeSet, var_valueAccess, var_isCopiable, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 81)) ;
        }
        const enumGalgasBool test_0 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-method-call.galgas", 89)).operator_not (SOURCE_FILE ("instruction-method-call.galgas", 89)).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_location location_1 (enumerator_3280.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_1, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 90)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 90))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 90)) ;
        }
        const enumGalgasBool test_2 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-method-call.galgas", 92)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_3280.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_3280.current_mEffectiveParameterName (HERE).reader_string (SOURCE_FILE ("instruction-method-call.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 93)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 93))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 93)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3280.current_mEffectiveParameterKind (HERE), enumerator_3280.current_mSelector (HERE), var_type, GALGAS_string ("& (").add_operation (var_valueAccess, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 95)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 95))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 95)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingMode::kEnum_output:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 97)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_valueAccess ;
        {
        GALGAS_bool joker_4202 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadAccess (enumerator_3280.current_mEffectiveParameterName (HERE), var_type, var_acceptedModeSet, var_valueAccess, joker_4202, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 98)) ;
        }
        const enumGalgasBool test_4 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-method-call.galgas", 106)).operator_not (SOURCE_FILE ("instruction-method-call.galgas", 106)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (enumerator_3280.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 107)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 107))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 107)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3280.current_mEffectiveParameterKind (HERE), enumerator_3280.current_mSelector (HERE), var_type, var_valueAccess  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 109)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingMode::kEnum_outputInput:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 111)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_valueAccess ;
        {
        GALGAS_bool joker_4683 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (enumerator_3280.current_mEffectiveParameterName (HERE), var_type, var_acceptedModeSet, var_valueAccess, joker_4683, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 112)) ;
        }
        const enumGalgasBool test_6 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-method-call.galgas", 120)).operator_not (SOURCE_FILE ("instruction-method-call.galgas", 120)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_location location_7 (enumerator_3280.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_7, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 121)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 121))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 121)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3280.current_mEffectiveParameterKind (HERE), enumerator_3280.current_mSelector (HERE), var_type, GALGAS_string ("& (").add_operation (var_valueAccess, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 123)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 123))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 123)) ;
      }
      break ;
    }
    var_procMangledName.dotAssign_operation (enumerator_3280.current_mSelector (HERE).mAttribute_string  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 125)) ;
    enumerator_3280.gotoNextObject () ;
  }
  GALGAS_procedureMap var_receiverTypeProcedureMap = var_receiverExpressionType.reader_procedureMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 128)) ;
  GALGAS_bool var_calledProcIsMutating ;
  GALGAS_lstring var_procedureMode ;
  GALGAS_procedureSignature var_calledProcSignature ;
  var_receiverTypeProcedureMap.method_searchKey (GALGAS_lstring::constructor_new (var_procMangledName, object->mAttribute_mMethodName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 130)), var_calledProcIsMutating, var_procedureMode, var_calledProcSignature, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 129)) ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_procedureMode.mAttribute_string.objectCompare (constinArgument_inMode)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_9, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 137)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 137))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 137)) ;
  }
  switch (constinArgument_inReceiverType.enumValue ()) {
  case GALGAS_receiverType::kNotBuilt:
    break ;
  case GALGAS_receiverType::kEnum_noReceiver:
    {
      const enumGalgasBool test_10 = var_calledProcIsMutating.boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_location location_11 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_11, GALGAS_string ("a mutating method cannot be called from a non mutating procedure")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 143)) ;
      }
    }
    break ;
  case GALGAS_receiverType::kEnum_receiver:
    {
      const enumGalgasBool test_12 = var_calledProcIsMutating.boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_13, GALGAS_string ("a mutating method cannot be called from a non mutating method")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 147)) ;
      }
    }
    break ;
  case GALGAS_receiverType::kEnum_mutatingReceiver:
    {
    }
    break ;
  }
  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, var_calledProcSignature.reader_length (SOURCE_FILE ("instruction-method-call.galgas", 152)).objectCompare (var_parameterList.reader_length (SOURCE_FILE ("instruction-method-call.galgas", 152)))).boolEnum () ;
  if (kBoolTrue == test_14) {
    GALGAS_location location_15 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_15, GALGAS_string ("this proc requires ").add_operation (var_calledProcSignature.reader_length (SOURCE_FILE ("instruction-method-call.galgas", 153)).reader_string (SOURCE_FILE ("instruction-method-call.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 153)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 153)).add_operation (var_parameterList.reader_length (SOURCE_FILE ("instruction-method-call.galgas", 154)).reader_string (SOURCE_FILE ("instruction-method-call.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 153)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 154))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 153)) ;
  }else if (kBoolFalse == test_14) {
    cEnumerator_procedureSignature enumerator_6165 (var_calledProcSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_6194 (var_parameterList, kEnumeration_up) ;
    while (enumerator_6165.hasCurrentObject () && enumerator_6194.hasCurrentObject ()) {
      const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, enumerator_6165.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 157)).objectCompare (enumerator_6194.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 157)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_location location_17 (enumerator_6194.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_17, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_6194.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 158)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 158)).add_operation (enumerator_6165.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 158)) ;
      }
      GALGAS_string var_requiredPassingMode = categoryReader_requiredActualPassingModeForSelector (enumerator_6165.current_mFormalArgumentPassingMode (HERE), enumerator_6165.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)) ;
      GALGAS_string var_testedPassingMode = categoryReader_passingModeForActualSelector (enumerator_6194.current_mEffectiveParameterPassingMode (HERE), enumerator_6194.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)) ;
      const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_location location_19 (enumerator_6194.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_19, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 164)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 164))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 164)) ;
      }
      enumerator_6165.gotoNextObject () ;
      enumerator_6194.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_20 = var_calledProcIsMutating.boolEnum () ;
  if (kBoolTrue == test_20) {
    {
    var_parameterList.modifier_insertAtIndex (GALGAS_procEffectiveParameterPassingMode::constructor_outputInput (SOURCE_FILE ("instruction-method-call.galgas", 171)), GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-method-call.galgas", 172)), var_receiverExpressionType, GALGAS_string ("& ").add_operation (callCategoryReader_expressionCode ((const cPtr_abstractExpressionGeneration *) var_receiverExpressionGeneratedCode.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 174)), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 170)) ;
    }
  }else if (kBoolFalse == test_20) {
    {
    var_parameterList.modifier_insertAtIndex (GALGAS_procEffectiveParameterPassingMode::constructor_output (SOURCE_FILE ("instruction-method-call.galgas", 179)), GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-method-call.galgas", 180)), var_receiverExpressionType, callCategoryReader_expressionCode ((const cPtr_abstractExpressionGeneration *) var_receiverExpressionGeneratedCode.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 178)) ;
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionGeneration::constructor_new (var_receiverExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)).add_operation (var_procMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)), var_parameterList  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 186))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 186)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_methodCallInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                               categoryMethod_methodCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionAST_analyze (defineCategoryMethod_methodCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@mutatingMethodCallInstructionAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mutatingMethodCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_receiverType constinArgument_inReceiverType,
                                                                     const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                     const GALGAS_string constinArgument_inMode,
                                                                     GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                     GALGAS_instructionGenerationList & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mutatingMethodCallInstructionAST * object = (const cPtr_mutatingMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_mutatingMethodCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType ;
  GALGAS_stringset var_receiverVarAcceptedModeSet ;
  GALGAS_string var_targetVar ;
  {
  GALGAS_bool joker_3067 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_receiverType, var_receiverVarAcceptedModeSet, var_targetVar, joker_3067, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 67)) ;
  }
  const enumGalgasBool test_0 = var_receiverVarAcceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 75)).operator_not (SOURCE_FILE ("instruction-mutating-method-call.galgas", 75)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mReceiverName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 76)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 76))  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 76)) ;
  }
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-mutating-method-call.galgas", 79)) ;
  GALGAS_string var_procMangledName = object->mAttribute_mMethodName.mAttribute_string ;
  cEnumerator_procEffectiveParameterListAST enumerator_3387 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_3387.hasCurrentObject ()) {
    var_procMangledName.dotAssign_operation (GALGAS_string (" ")  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 82)) ;
    switch (enumerator_3387.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingMode::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingMode::kEnum_input:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 85)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_valueAccess ;
        GALGAS_bool var_isCopiable ;
        {
        ioArgument_ioVariableMap.modifier_searchForWriteAccess (enumerator_3387.current_mEffectiveParameterName (HERE), var_type, var_acceptedModeSet, var_valueAccess, var_isCopiable, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 86)) ;
        }
        const enumGalgasBool test_2 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 94)).operator_not (SOURCE_FILE ("instruction-mutating-method-call.galgas", 94)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_3387.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 95)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 95))  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 95)) ;
        }
        const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-mutating-method-call.galgas", 97)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (enumerator_3387.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (enumerator_3387.current_mEffectiveParameterName (HERE).reader_string (SOURCE_FILE ("instruction-mutating-method-call.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 98)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 98))  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 98)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3387.current_mEffectiveParameterKind (HERE), enumerator_3387.current_mSelector (HERE), var_type, GALGAS_string ("& (").add_operation (var_valueAccess, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 100)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 100))  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 100)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingMode::kEnum_output:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 102)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_valueAccess ;
        {
        GALGAS_bool joker_4309 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadAccess (enumerator_3387.current_mEffectiveParameterName (HERE), var_type, var_acceptedModeSet, var_valueAccess, joker_4309, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 103)) ;
        }
        const enumGalgasBool test_6 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 111)).operator_not (SOURCE_FILE ("instruction-mutating-method-call.galgas", 111)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_location location_7 (enumerator_3387.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_7, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 112)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 112))  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 112)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3387.current_mEffectiveParameterKind (HERE), enumerator_3387.current_mSelector (HERE), var_type, var_valueAccess  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 114)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingMode::kEnum_outputInput:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 116)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_valueAccess ;
        {
        GALGAS_bool joker_4790 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (enumerator_3387.current_mEffectiveParameterName (HERE), var_type, var_acceptedModeSet, var_valueAccess, joker_4790, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 117)) ;
        }
        const enumGalgasBool test_8 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 125)).operator_not (SOURCE_FILE ("instruction-mutating-method-call.galgas", 125)).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_location location_9 (enumerator_3387.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_9, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 126)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 126))  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 126)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3387.current_mEffectiveParameterKind (HERE), enumerator_3387.current_mSelector (HERE), var_type, GALGAS_string ("& (").add_operation (var_valueAccess, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 128)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 128))  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 128)) ;
      }
      break ;
    }
    var_procMangledName.dotAssign_operation (enumerator_3387.current_mSelector (HERE).mAttribute_string  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 130)) ;
    enumerator_3387.gotoNextObject () ;
  }
  GALGAS_procedureMap var_receiverTypeProcedureMap = var_receiverType.reader_procedureMap (inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 133)) ;
  GALGAS_bool var_calledProcIsMutating ;
  GALGAS_lstring var_procedureMode ;
  GALGAS_procedureSignature var_calledProcSignature ;
  var_receiverTypeProcedureMap.method_searchKey (GALGAS_lstring::constructor_new (var_procMangledName, object->mAttribute_mMethodName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 135)), var_calledProcIsMutating, var_procedureMode, var_calledProcSignature, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 134)) ;
  const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_procedureMode.mAttribute_string.objectCompare (constinArgument_inMode)).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_11, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 142)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 142))  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 142)) ;
  }
  switch (constinArgument_inReceiverType.enumValue ()) {
  case GALGAS_receiverType::kNotBuilt:
    break ;
  case GALGAS_receiverType::kEnum_noReceiver:
    {
      const enumGalgasBool test_12 = var_calledProcIsMutating.boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_13, GALGAS_string ("a mutating method cannot be called from a non mutating procedure")  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 148)) ;
      }
    }
    break ;
  case GALGAS_receiverType::kEnum_receiver:
    {
      const enumGalgasBool test_14 = var_calledProcIsMutating.boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_location location_15 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_15, GALGAS_string ("a mutating method cannot be called from a non mutating method")  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 152)) ;
      }
    }
    break ;
  case GALGAS_receiverType::kEnum_mutatingReceiver:
    {
    }
    break ;
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, var_calledProcSignature.reader_length (SOURCE_FILE ("instruction-mutating-method-call.galgas", 157)).objectCompare (var_parameterList.reader_length (SOURCE_FILE ("instruction-mutating-method-call.galgas", 157)))).boolEnum () ;
  if (kBoolTrue == test_16) {
    GALGAS_location location_17 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_17, GALGAS_string ("this proc requires ").add_operation (var_calledProcSignature.reader_length (SOURCE_FILE ("instruction-mutating-method-call.galgas", 158)).reader_string (SOURCE_FILE ("instruction-mutating-method-call.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 158)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 158)).add_operation (var_parameterList.reader_length (SOURCE_FILE ("instruction-mutating-method-call.galgas", 159)).reader_string (SOURCE_FILE ("instruction-mutating-method-call.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 158)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 159))  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 158)) ;
  }else if (kBoolFalse == test_16) {
    cEnumerator_procedureSignature enumerator_6262 (var_calledProcSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_6291 (var_parameterList, kEnumeration_up) ;
    while (enumerator_6262.hasCurrentObject () && enumerator_6291.hasCurrentObject ()) {
      const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, enumerator_6262.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 162)).objectCompare (enumerator_6291.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 162)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_location location_19 (enumerator_6291.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_19, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_6291.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 163)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 163)).add_operation (enumerator_6262.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 164)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 164))  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 163)) ;
      }
      GALGAS_string var_requiredPassingMode = categoryReader_requiredActualPassingModeForSelector (enumerator_6262.current_mFormalArgumentPassingMode (HERE), enumerator_6262.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 166)) ;
      GALGAS_string var_testedPassingMode = categoryReader_passingModeForActualSelector (enumerator_6291.current_mEffectiveParameterPassingMode (HERE), enumerator_6291.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 167)) ;
      const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_20) {
        GALGAS_location location_21 (enumerator_6291.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_21, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 169)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 169))  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 169)) ;
      }
      enumerator_6262.gotoNextObject () ;
      enumerator_6291.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_22 = var_calledProcIsMutating.boolEnum () ;
  if (kBoolTrue == test_22) {
    {
    var_parameterList.modifier_insertAtIndex (GALGAS_procEffectiveParameterPassingMode::constructor_outputInput (SOURCE_FILE ("instruction-mutating-method-call.galgas", 176)), GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-mutating-method-call.galgas", 177)), var_receiverType, GALGAS_string ("& ").add_operation (var_targetVar, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 179)), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 175)) ;
    }
  }else if (kBoolFalse == test_22) {
    {
    var_parameterList.modifier_insertAtIndex (GALGAS_procEffectiveParameterPassingMode::constructor_output (SOURCE_FILE ("instruction-mutating-method-call.galgas", 184)), GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-mutating-method-call.galgas", 185)), var_receiverType, var_targetVar, GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 183)) ;
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionGeneration::constructor_new (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 192)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 192)).add_operation (var_procMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 192)), var_parameterList  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 191))  COMMA_SOURCE_FILE ("instruction-mutating-method-call.galgas", 191)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mutatingMethodCallInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_mutatingMethodCallInstructionAST.mSlotID,
                               categoryMethod_mutatingMethodCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mutatingMethodCallInstructionAST_analyze (defineCategoryMethod_mutatingMethodCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@selfMutatingMethodCallInstructionAST analyze'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfMutatingMethodCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                         const GALGAS_receiverType constinArgument_inReceiverType,
                                                                         const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                         const GALGAS_string constinArgument_inMode,
                                                                         GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_instructionGenerationList & ioArgument_ioInstructionGenerationList,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMutatingMethodCallInstructionAST * object = (const cPtr_selfMutatingMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMutatingMethodCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType ;
  GALGAS_string var_targetVar ;
  switch (constinArgument_inReceiverType.enumValue ()) {
  case GALGAS_receiverType::kNotBuilt:
    break ;
  case GALGAS_receiverType::kEnum_noReceiver:
    {
      GALGAS_location location_0 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_0, GALGAS_string ("'self' cannot be used outside a method")  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 69)) ;
      var_receiverType.drop () ; // Release error dropped variable
      var_targetVar.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_receiverType::kEnum_receiver:
    {
      const cEnumAssociatedValues_receiverType_receiver * extractPtr_3157 = (const cEnumAssociatedValues_receiverType_receiver *) (constinArgument_inReceiverType.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_3157->mAssociatedValue0 ;
      const GALGAS_string extractedValue_receiverValue = extractPtr_3157->mAssociatedValue1 ;
      var_receiverType = extractedValue_type ;
      var_targetVar = extractedValue_receiverValue ;
    }
    break ;
  case GALGAS_receiverType::kEnum_mutatingReceiver:
    {
      const cEnumAssociatedValues_receiverType_mutatingReceiver * extractPtr_3262 = (const cEnumAssociatedValues_receiverType_mutatingReceiver *) (constinArgument_inReceiverType.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_3262->mAssociatedValue0 ;
      const GALGAS_string extractedValue_receiverPointer = extractPtr_3262->mAssociatedValue1 ;
      var_receiverType = extractedValue_type ;
      var_targetVar = extractedValue_receiverPointer ;
    }
    break ;
  }
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 78)) ;
  GALGAS_string var_procMangledName = object->mAttribute_mMethodName.mAttribute_string ;
  cEnumerator_procEffectiveParameterListAST enumerator_3422 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_3422.hasCurrentObject ()) {
    var_procMangledName.dotAssign_operation (GALGAS_string (" ")  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 81)) ;
    switch (enumerator_3422.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingMode::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingMode::kEnum_input:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 84)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_valueAccess ;
        GALGAS_bool var_isCopiable ;
        {
        ioArgument_ioVariableMap.modifier_searchForWriteAccess (enumerator_3422.current_mEffectiveParameterName (HERE), var_type, var_acceptedModeSet, var_valueAccess, var_isCopiable, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 85)) ;
        }
        const enumGalgasBool test_1 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 93)).operator_not (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 93)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (enumerator_3422.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_2, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 94)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 94))  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 94)) ;
        }
        const enumGalgasBool test_3 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 96)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (enumerator_3422.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (enumerator_3422.current_mEffectiveParameterName (HERE).reader_string (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 97)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 97))  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 97)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3422.current_mEffectiveParameterKind (HERE), enumerator_3422.current_mSelector (HERE), var_type, GALGAS_string ("& (").add_operation (var_valueAccess, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 99)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 99))  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 99)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingMode::kEnum_output:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 101)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_valueAccess ;
        {
        GALGAS_bool joker_4344 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadAccess (enumerator_3422.current_mEffectiveParameterName (HERE), var_type, var_acceptedModeSet, var_valueAccess, joker_4344, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 102)) ;
        }
        const enumGalgasBool test_5 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 110)).operator_not (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 110)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (enumerator_3422.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_6, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 111)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 111))  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 111)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3422.current_mEffectiveParameterKind (HERE), enumerator_3422.current_mSelector (HERE), var_type, var_valueAccess  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 113)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingMode::kEnum_outputInput:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 115)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_valueAccess ;
        {
        GALGAS_bool joker_4825 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (enumerator_3422.current_mEffectiveParameterName (HERE), var_type, var_acceptedModeSet, var_valueAccess, joker_4825, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 116)) ;
        }
        const enumGalgasBool test_7 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 124)).operator_not (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 124)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_location location_8 (enumerator_3422.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_8, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 125)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 125))  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 125)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3422.current_mEffectiveParameterKind (HERE), enumerator_3422.current_mSelector (HERE), var_type, GALGAS_string ("& (").add_operation (var_valueAccess, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 127)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 127))  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 127)) ;
      }
      break ;
    }
    var_procMangledName.dotAssign_operation (enumerator_3422.current_mSelector (HERE).mAttribute_string  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 129)) ;
    enumerator_3422.gotoNextObject () ;
  }
  GALGAS_procedureMap var_receiverTypeProcedureMap = var_receiverType.reader_procedureMap (inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 132)) ;
  GALGAS_bool var_calledProcIsMutating ;
  GALGAS_lstring var_procedureMode ;
  GALGAS_procedureSignature var_calledProcSignature ;
  var_receiverTypeProcedureMap.method_searchKey (GALGAS_lstring::constructor_new (var_procMangledName, object->mAttribute_mMethodName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 134)), var_calledProcIsMutating, var_procedureMode, var_calledProcSignature, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 133)) ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_procedureMode.mAttribute_string.objectCompare (constinArgument_inMode)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_location location_10 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_10, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 141)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 141))  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 141)) ;
  }
  switch (constinArgument_inReceiverType.enumValue ()) {
  case GALGAS_receiverType::kNotBuilt:
    break ;
  case GALGAS_receiverType::kEnum_noReceiver:
    {
      const enumGalgasBool test_11 = var_calledProcIsMutating.boolEnum () ;
      if (kBoolTrue == test_11) {
        GALGAS_location location_12 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_12, GALGAS_string ("a mutating method cannot be called from a non mutating procedure")  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 147)) ;
      }
    }
    break ;
  case GALGAS_receiverType::kEnum_receiver:
    {
      const enumGalgasBool test_13 = var_calledProcIsMutating.boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_location location_14 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_14, GALGAS_string ("a mutating method cannot be called from a non mutating method")  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 151)) ;
      }
    }
    break ;
  case GALGAS_receiverType::kEnum_mutatingReceiver:
    {
    }
    break ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, var_calledProcSignature.reader_length (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 156)).objectCompare (var_parameterList.reader_length (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 156)))).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_location location_16 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_16, GALGAS_string ("this proc requires ").add_operation (var_calledProcSignature.reader_length (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 157)).reader_string (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 157)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 157)).add_operation (var_parameterList.reader_length (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 158)).reader_string (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 157)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 158))  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 157)) ;
  }else if (kBoolFalse == test_15) {
    cEnumerator_procedureSignature enumerator_6297 (var_calledProcSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_6326 (var_parameterList, kEnumeration_up) ;
    while (enumerator_6297.hasCurrentObject () && enumerator_6326.hasCurrentObject ()) {
      const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_6297.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 161)).objectCompare (enumerator_6326.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 161)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        GALGAS_location location_18 (enumerator_6326.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_18, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_6326.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 162)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 162)).add_operation (enumerator_6297.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 163)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 163))  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 162)) ;
      }
      GALGAS_string var_requiredPassingMode = categoryReader_requiredActualPassingModeForSelector (enumerator_6297.current_mFormalArgumentPassingMode (HERE), enumerator_6297.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 165)) ;
      GALGAS_string var_testedPassingMode = categoryReader_passingModeForActualSelector (enumerator_6326.current_mEffectiveParameterPassingMode (HERE), enumerator_6326.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 166)) ;
      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_19) {
        GALGAS_location location_20 (enumerator_6326.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_20, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 168)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 168))  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 168)) ;
      }
      enumerator_6297.gotoNextObject () ;
      enumerator_6326.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_21 = var_calledProcIsMutating.boolEnum () ;
  if (kBoolTrue == test_21) {
    {
    var_parameterList.modifier_insertAtIndex (GALGAS_procEffectiveParameterPassingMode::constructor_outputInput (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 175)), GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 176)), var_receiverType, var_targetVar, GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 174)) ;
    }
  }else if (kBoolFalse == test_21) {
    {
    var_parameterList.modifier_insertAtIndex (GALGAS_procEffectiveParameterPassingMode::constructor_output (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 183)), GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 184)), var_receiverType, GALGAS_string ("* ").add_operation (var_targetVar, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 186)), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 182)) ;
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionGeneration::constructor_new (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 191)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 191)).add_operation (var_procMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 191)), var_parameterList  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 190))  COMMA_SOURCE_FILE ("instruction-mutating-method-call-self.galgas", 190)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfMutatingMethodCallInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_selfMutatingMethodCallInstructionAST.mSlotID,
                               categoryMethod_selfMutatingMethodCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfMutatingMethodCallInstructionAST_analyze (defineCategoryMethod_selfMutatingMethodCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@procCallInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                           const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                           const GALGAS_string constinArgument_inMode,
                                                           GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                           GALGAS_instructionGenerationList & ioArgument_ioInstructionGenerationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  GALGAS_string var_procMangledName = object->mAttribute_mProcRoutineName.mAttribute_string ;
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 95)) ;
  cEnumerator_procEffectiveParameterListAST enumerator_3841 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_3841.hasCurrentObject ()) {
    var_procMangledName.dotAssign_operation (GALGAS_string (" ")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 97)) ;
    switch (enumerator_3841.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingMode::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingMode::kEnum_input:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 100)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_variableAccess ;
        GALGAS_bool var_isCopiable ;
        {
        ioArgument_ioVariableMap.modifier_searchForWriteAccess (enumerator_3841.current_mEffectiveParameterName (HERE), var_type, var_acceptedModeSet, var_variableAccess, var_isCopiable, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)) ;
        }
        const enumGalgasBool test_0 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 109)).operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 109)).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_location location_1 (enumerator_3841.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_1, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 110)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 110))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 110)) ;
        }
        const enumGalgasBool test_2 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 112)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_3841.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_3841.current_mEffectiveParameterName (HERE).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 113)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 113))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 113)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3841.current_mEffectiveParameterKind (HERE), enumerator_3841.current_mSelector (HERE), var_type, GALGAS_string ("& (").add_operation (var_variableAccess, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 115)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 115))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 115)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingMode::kEnum_output:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 117)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_valueAccess ;
        {
        GALGAS_bool joker_4761 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadAccess (enumerator_3841.current_mEffectiveParameterName (HERE), var_type, var_acceptedModeSet, var_valueAccess, joker_4761, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 118)) ;
        }
        const enumGalgasBool test_4 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)).operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 126)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (enumerator_3841.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3841.current_mEffectiveParameterKind (HERE), enumerator_3841.current_mSelector (HERE), var_type, var_valueAccess  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 129)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingMode::kEnum_outputInput:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_variableAccess ;
        {
        GALGAS_bool joker_5245 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (enumerator_3841.current_mEffectiveParameterName (HERE), var_type, var_acceptedModeSet, var_variableAccess, joker_5245, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 132)) ;
        }
        const enumGalgasBool test_6 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 140)).operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 140)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_location location_7 (enumerator_3841.current_mEffectiveParameterName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_7, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 141)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 141))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 141)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3841.current_mEffectiveParameterKind (HERE), enumerator_3841.current_mSelector (HERE), var_type, GALGAS_string ("& (").add_operation (var_variableAccess, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143)) ;
      }
      break ;
    }
    var_procMangledName.dotAssign_operation (enumerator_3841.current_mSelector (HERE).mAttribute_string  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145)) ;
    enumerator_3841.gotoNextObject () ;
  }
  GALGAS_lstring var_procedureMode ;
  GALGAS_procedureSignature var_procSignature ;
  GALGAS_bool joker_5707 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mProcedureMap.method_searchKey (GALGAS_lstring::constructor_new (var_procMangledName, object->mAttribute_mProcRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 149)), joker_5707, var_procedureMode, var_procSignature, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)) ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_procedureMode.mAttribute_string.objectCompare (constinArgument_inMode)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mProcRoutineName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_9, GALGAS_string ("this procedure cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 156)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 156))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 156)) ;
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 158)).objectCompare (var_parameterList.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 158)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mProcRoutineName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_11, GALGAS_string ("this proc requires ").add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 159)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 159)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 159)).add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 160)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 159)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 160))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 159)) ;
  }else if (kBoolFalse == test_10) {
    cEnumerator_procedureSignature enumerator_6186 (var_procSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_6215 (var_parameterList, kEnumeration_up) ;
    while (enumerator_6186.hasCurrentObject () && enumerator_6215.hasCurrentObject ()) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_6186.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)).objectCompare (enumerator_6215.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (enumerator_6215.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_13, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_6215.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 164)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 164)).add_operation (enumerator_6186.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 165)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 165))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 164)) ;
      }
      GALGAS_string var_requiredPassingMode = categoryReader_requiredActualPassingModeForSelector (enumerator_6186.current_mFormalArgumentPassingMode (HERE), enumerator_6186.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
      GALGAS_string var_testedPassingMode = categoryReader_passingModeForActualSelector (enumerator_6215.current_mEffectiveParameterPassingMode (HERE), enumerator_6215.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)) ;
      const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_location location_15 (enumerator_6215.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_15, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 170)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 170))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 170)) ;
      }
      enumerator_6186.gotoNextObject () ;
      enumerator_6215.gotoNextObject () ;
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionGeneration::constructor_new (var_procMangledName, var_parameterList  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 175))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 175)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_procCallInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                               categoryMethod_procCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionAST_analyze (defineCategoryMethod_procCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@procCallInstructionGeneration instructionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_procCallInstructionGeneration_instructionCode (const cPtr_abstractInstructionGeneration * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_procCallInstructionGeneration * object = (const cPtr_procCallInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionGeneration) ;
  result_outCode = object->mAttribute_mProcName.reader_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 193)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 193)) ;
  cEnumerator_procEffectiveParameterList enumerator_7813 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_7813.hasCurrentObject ()) {
    result_outCode.dotAssign_operation (enumerator_7813.current_mParameterAccess (HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 195)) ;
    if (enumerator_7813.hasNextObject ()) {
      result_outCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)) ;
    }
    enumerator_7813.gotoNextObject () ;
  }
  result_outCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 198)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_procCallInstructionGeneration_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_procCallInstructionGeneration.mSlotID,
                                       categoryReader_procCallInstructionGeneration_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_procCallInstructionGeneration_instructionCode (defineCategoryReader_procCallInstructionGeneration_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@whileInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_receiverType constinArgument_inReceiverType,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_string constinArgument_inMode,
                                                        GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionGenerationList & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_testExpressionType ;
  GALGAS_abstractExpressionGeneration var_testExpressionGeneratedCode ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 55)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_testExpressionType, var_testExpressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 53)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 64)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 64)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (var_testExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 65)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 65))  COMMA_SOURCE_FILE ("instruction-while.galgas", 65)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 67)) ;
  }
  GALGAS_instructionGenerationList var_instructionGenerationList = GALGAS_instructionGenerationList::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 69)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 70)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 79)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionGeneration::constructor_new (var_testExpressionGeneratedCode, var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-while.galgas", 81))  COMMA_SOURCE_FILE ("instruction-while.galgas", 81)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_whileInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                               categoryMethod_whileInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionAST_analyze (defineCategoryMethod_whileInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@whileInstructionGeneration instructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_whileInstructionGeneration_instructionCode (const cPtr_abstractInstructionGeneration * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_whileInstructionGeneration * object = (const cPtr_whileInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionGeneration) ;
  result_outCode = GALGAS_string ("while (").add_operation (callCategoryReader_expressionCode ((const cPtr_abstractExpressionGeneration *) object->mAttribute_mTestExpressionGeneration.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 99)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 99)) ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 100))  COMMA_SOURCE_FILE ("instruction-while.galgas", 100)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-while.galgas", 101)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_whileInstructionGeneration_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_whileInstructionGeneration.mSlotID,
                                       categoryReader_whileInstructionGeneration_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_whileInstructionGeneration_instructionCode (defineCategoryReader_whileInstructionGeneration_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@foreverInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreverInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                          const GALGAS_receiverType constinArgument_inReceiverType,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_string constinArgument_inMode,
                                                          GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                          GALGAS_instructionGenerationList & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreverInstructionAST * object = (const cPtr_foreverInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_foreverInstructionAST) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 46)) ;
  }
  GALGAS_instructionGenerationList var_instructionGenerationList = GALGAS_instructionGenerationList::constructor_emptyList (SOURCE_FILE ("instruction-forever.galgas", 47)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 48)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 57)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_foreverInstructionGeneration::constructor_new (var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-forever.galgas", 59))  COMMA_SOURCE_FILE ("instruction-forever.galgas", 59)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreverInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_foreverInstructionAST.mSlotID,
                               categoryMethod_foreverInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreverInstructionAST_analyze (defineCategoryMethod_foreverInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@foreverInstructionGeneration instructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_foreverInstructionGeneration_instructionCode (const cPtr_abstractInstructionGeneration * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_foreverInstructionGeneration * object = (const cPtr_foreverInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_foreverInstructionGeneration) ;
  result_outCode = GALGAS_string ("while (1) {\n") ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 76))  COMMA_SOURCE_FILE ("instruction-forever.galgas", 76)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-forever.galgas", 77)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_foreverInstructionGeneration_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_foreverInstructionGeneration.mSlotID,
                                       categoryReader_foreverInstructionGeneration_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_foreverInstructionGeneration_instructionCode (defineCategoryReader_foreverInstructionGeneration_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@constructorCall addDependenceEdgeForStaticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorCall_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inConstantName,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mOptionalTypeName COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 45)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorCall_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                                            categoryMethod_constructorCall_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_addDependenceEdgeForStaticExpression (defineCategoryMethod_constructorCall_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@constructorCall analyzeStaticExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorCall_analyzeStaticExpression (const cPtr_expressionAST * inObject,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                    GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                    GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-constructor-call.galgas", 62)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 63)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_optionalSourceType = temp_0 ;
  outArgument_outExpressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_optionalSourceType, object->mAttribute_mConstructorName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 66)) ;
  GALGAS_constructorMap var_constructorMap = outArgument_outExpressionType.reader_constructorMap (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 72)) ;
  GALGAS_string var_generatedCodeString ;
  var_constructorMap.method_searchKey (object->mAttribute_mConstructorName, var_generatedCodeString, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 74)) ;
  outArgument_outGeneratedCode = GALGAS_inLineExpressionGeneration::constructor_new (var_generatedCodeString  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 76)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorCall_analyzeStaticExpression (void) {
  enterCategoryMethod_analyzeStaticExpression (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                               categoryMethod_constructorCall_analyzeStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_analyzeStaticExpression (defineCategoryMethod_constructorCall_analyzeStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@constructorCall analyzeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                              const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                              const GALGAS_string /* constinArgument_inMode */,
                                                              GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                              GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-constructor-call.galgas", 93)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 94)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_optionalSourceType = temp_0 ;
  outArgument_outExpressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_optionalSourceType, object->mAttribute_mConstructorName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 97)) ;
  GALGAS_constructorMap var_constructorMap = outArgument_outExpressionType.reader_constructorMap (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 103)) ;
  GALGAS_string var_generatedCodeString ;
  var_constructorMap.method_searchKey (object->mAttribute_mConstructorName, var_generatedCodeString, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)) ;
  outArgument_outGeneratedCode = GALGAS_inLineExpressionGeneration::constructor_new (var_generatedCodeString  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 107)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorCall_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                         categoryMethod_constructorCall_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_analyzeExpression (defineCategoryMethod_constructorCall_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@infixOperatorExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                            const GALGAS_lstring constinArgument_inConstantName,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 257)) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 258)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                                            categoryMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@infixOperatorExpressionAST analyzeStaticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_infixOperatorExpressionAST_analyzeStaticExpression (const cPtr_expressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                                               GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                               GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                               GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftExpressionType ;
  GALGAS_abstractExpressionGeneration var_leftExpressionGeneratedCode ;
  callCategoryMethod_analyzeStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inOptionalTargetType, constinArgument_inContext, ioArgument_ioGlobalLiteralStringMap, var_leftExpressionType, var_leftExpressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 273)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightExpressionType ;
  GALGAS_abstractExpressionGeneration var_rightExpressionGeneratedCode ;
  callCategoryMethod_analyzeStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftExpressionType, constinArgument_inContext, ioArgument_ioGlobalLiteralStringMap, var_rightExpressionType, var_rightExpressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 281)) ;
  GALGAS_infixOperatorMap var_operatorMap ;
  switch (object->mAttribute_mOp.enumValue ()) {
  case GALGAS_infixOperator::kNotBuilt:
    break ;
  case GALGAS_infixOperator::kEnum_equal:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_nonEqual:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mNonEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictInf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mStrictInfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_infEqual:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mInfEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictSup:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mStrictSupOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_supEqual:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mSupEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andShortCircuitOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndShortCircuitOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orShortCircuitOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrShortCircuitOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_xorOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAddOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mSubOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mMulOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mDivOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mModOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_leftShiftOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mLeftShiftOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_rightShiftOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mRightShiftOperatorMap ;
    }
    break ;
  }
  GALGAS_abstractInfixOperatorGeneration var_resultOperator ;
  categoryMethod_checkWith (var_operatorMap, var_leftExpressionType, var_rightExpressionType, object->mAttribute_mOperator, outArgument_outExpressionType, var_resultOperator, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 310)) ;
  outArgument_outGeneratedCode = GALGAS_operatorInfixExpressionGeneration::constructor_new (var_leftExpressionGeneratedCode, var_resultOperator, var_rightExpressionGeneratedCode  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 318)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_infixOperatorExpressionAST_analyzeStaticExpression (void) {
  enterCategoryMethod_analyzeStaticExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                               categoryMethod_infixOperatorExpressionAST_analyzeStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_analyzeStaticExpression (defineCategoryMethod_infixOperatorExpressionAST_analyzeStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@infixOperatorExpressionAST analyzeExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_infixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                         const GALGAS_receiverType constinArgument_inReceiverType,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                         const GALGAS_string constinArgument_inMode,
                                                                         GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                         GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftExpressionType ;
  GALGAS_abstractExpressionGeneration var_leftExpressionGeneratedCode ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_leftExpressionType, var_leftExpressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 357)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightExpressionType ;
  GALGAS_abstractExpressionGeneration var_rightExpressionGeneratedCode ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inReceiverType, var_leftExpressionType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_rightExpressionType, var_rightExpressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 368)) ;
  GALGAS_abstractInfixOperatorGeneration var_resultOperator ;
  GALGAS_infixOperatorMap var_operatorMap ;
  switch (object->mAttribute_mOp.enumValue ()) {
  case GALGAS_infixOperator::kNotBuilt:
    break ;
  case GALGAS_infixOperator::kEnum_equal:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_nonEqual:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mNonEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictInf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mStrictInfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_infEqual:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mInfEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictSup:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mStrictSupOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_supEqual:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mSupEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andShortCircuitOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndShortCircuitOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orShortCircuitOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrShortCircuitOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_xorOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAddOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mSubOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mMulOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mDivOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mModOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_leftShiftOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mLeftShiftOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_rightShiftOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mRightShiftOperatorMap ;
    }
    break ;
  }
  categoryMethod_checkWith (var_operatorMap, var_leftExpressionType, var_rightExpressionType, object->mAttribute_mOperator, outArgument_outExpressionType, var_resultOperator, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 401)) ;
  outArgument_outGeneratedCode = GALGAS_operatorInfixExpressionGeneration::constructor_new (var_leftExpressionGeneratedCode, var_resultOperator, var_rightExpressionGeneratedCode  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 409)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_infixOperatorExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                         categoryMethod_infixOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_analyzeExpression (defineCategoryMethod_infixOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@standardInfixOperatorGeneration generateInfixExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_standardInfixOperatorGeneration_generateInfixExpression (const cPtr_abstractInfixOperatorGeneration * inObject,
                                                                                             GALGAS_abstractExpressionGeneration inArgument_inleft,
                                                                                             GALGAS_abstractExpressionGeneration inArgument_inRight,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_standardInfixOperatorGeneration * object = (const cPtr_standardInfixOperatorGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_standardInfixOperatorGeneration) ;
  result_outCode = GALGAS_string ("(").add_operation (callCategoryReader_expressionCode ((const cPtr_abstractExpressionGeneration *) inArgument_inleft.ptr (), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 432)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 432)).add_operation (object->mAttribute_mInfixOperator, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 432)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 432)).add_operation (callCategoryReader_expressionCode ((const cPtr_abstractExpressionGeneration *) inArgument_inRight.ptr (), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 432)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 432)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_standardInfixOperatorGeneration_generateInfixExpression (void) {
  enterCategoryReader_generateInfixExpression (kTypeDescriptor_GALGAS_standardInfixOperatorGeneration.mSlotID,
                                               categoryReader_standardInfixOperatorGeneration_generateInfixExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_standardInfixOperatorGeneration_generateInfixExpression (defineCategoryReader_standardInfixOperatorGeneration_generateInfixExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@operatorInfixExpressionGeneration expressionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_operatorInfixExpressionGeneration_expressionCode (const cPtr_abstractExpressionGeneration * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_operatorInfixExpressionGeneration * object = (const cPtr_operatorInfixExpressionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_operatorInfixExpressionGeneration) ;
  result_outCode = callCategoryReader_generateInfixExpression ((const cPtr_abstractInfixOperatorGeneration *) object->mAttribute_mOperator.ptr (), object->mAttribute_mLeftExpression, object->mAttribute_mRightExpression, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 446)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_operatorInfixExpressionGeneration_expressionCode (void) {
  enterCategoryReader_expressionCode (kTypeDescriptor_GALGAS_operatorInfixExpressionGeneration.mSlotID,
                                      categoryReader_operatorInfixExpressionGeneration_expressionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_operatorInfixExpressionGeneration_expressionCode (defineCategoryReader_operatorInfixExpressionGeneration_expressionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                               const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                               GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                            categoryMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalIntegerInExpressionAST analyzeStaticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerInExpressionAST_analyzeStaticExpression (const cPtr_expressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                  const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                  GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                                  GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                                  GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-literal-integer.galgas", 43)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 44)) ;
    outArgument_outExpressionType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    switch (constinArgument_inOptionalTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 46)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_2749 = (const cEnumAssociatedValues_typeKind_integer *) (constinArgument_inOptionalTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 46)).unsafePointer ()) ;
        const GALGAS_uint_36__34_ extractedValue_max = extractPtr_2749->mAssociatedValue1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mAttribute_mLiteralInteger.mAttribute_uint_36__34_.objectCompare (extractedValue_max)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("literal integer is > ").add_operation (constinArgument_inOptionalTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 49)).add_operation (GALGAS_string (" max value ("), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 49)).add_operation (extractedValue_max.reader_string (SOURCE_FILE ("expression-literal-integer.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 50)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 50))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 49)) ;
          outArgument_outExpressionType.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_2) {
          outArgument_outExpressionType = constinArgument_inOptionalTargetType ;
        }
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_4 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("an enumeration cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 55)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        GALGAS_location location_5 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_5, GALGAS_string ("a structure cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 57)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_6 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("a boolean cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 59)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_7 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a literal string cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 61)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_8 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("a boolset cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    }
  }
  outArgument_outGeneratedCode = GALGAS_inLineExpressionGeneration::constructor_new (object->mAttribute_mLiteralInteger.mAttribute_uint_36__34_.reader_string (SOURCE_FILE ("expression-literal-integer.galgas", 67))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 67)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerInExpressionAST_analyzeStaticExpression (void) {
  enterCategoryMethod_analyzeStaticExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                               categoryMethod_literalIntegerInExpressionAST_analyzeStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_analyzeStaticExpression (defineCategoryMethod_literalIntegerInExpressionAST_analyzeStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@literalIntegerInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                            const GALGAS_string /* constinArgument_inMode */,
                                                                            GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                            GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                            GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-literal-integer.galgas", 82)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 83)) ;
    outArgument_outExpressionType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    switch (constinArgument_inOptionalTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 85)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_4613 = (const cEnumAssociatedValues_typeKind_integer *) (constinArgument_inOptionalTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 85)).unsafePointer ()) ;
        const GALGAS_uint_36__34_ extractedValue_max = extractPtr_4613->mAssociatedValue1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mAttribute_mLiteralInteger.mAttribute_uint_36__34_.objectCompare (extractedValue_max)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("literal integer is > ").add_operation (constinArgument_inOptionalTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 88)).add_operation (GALGAS_string (" max value ("), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 88)).add_operation (extractedValue_max.reader_string (SOURCE_FILE ("expression-literal-integer.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 89)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 89))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 88)) ;
          outArgument_outExpressionType.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_2) {
          outArgument_outExpressionType = constinArgument_inOptionalTargetType ;
        }
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_4 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("an enumeration cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 94)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        GALGAS_location location_5 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_5, GALGAS_string ("a structure cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 96)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_6 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("a boolean cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 98)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_7 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a boolset cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 100)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_8 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("a literal string cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 102)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    }
  }
  outArgument_outGeneratedCode = GALGAS_inLineExpressionGeneration::constructor_new (GALGAS_string ("(").add_operation (function_typePrefix (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 107)).add_operation (constinArgument_inOptionalTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 107)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 107)).add_operation (object->mAttribute_mLiteralInteger.mAttribute_uint_36__34_.reader_string (SOURCE_FILE ("expression-literal-integer.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 107))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 106)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                         categoryMethod_literalIntegerInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_analyzeExpression (defineCategoryMethod_literalIntegerInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                              const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                              GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                            categoryMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalStringInExpressionAST analyzeStaticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringInExpressionAST_analyzeStaticExpression (const cPtr_expressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                                 GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                 GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                                 GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_string var_literalStringName ;
  const enumGalgasBool test_0 = ioArgument_ioGlobalLiteralStringMap.reader_hasKey (object->mAttribute_mLiteralString.mAttribute_string COMMA_SOURCE_FILE ("expression-literal-string.galgas", 44)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGlobalLiteralStringMap.method_searchKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 45)) ;
  }else if (kBoolFalse == test_0) {
    var_literalStringName = function_literalStringPrefix (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 47)).add_operation (ioArgument_ioGlobalLiteralStringMap.reader_count (SOURCE_FILE ("expression-literal-string.galgas", 47)).reader_string (SOURCE_FILE ("expression-literal-string.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 47)) ;
    {
    ioArgument_ioGlobalLiteralStringMap.modifier_insertKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 48)) ;
    }
  }
  outArgument_outGeneratedCode = GALGAS_inLineExpressionGeneration::constructor_new (var_literalStringName  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 51)) ;
  outArgument_outExpressionType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 52)).reader_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 52)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringInExpressionAST_analyzeStaticExpression (void) {
  enterCategoryMethod_analyzeStaticExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                               categoryMethod_literalStringInExpressionAST_analyzeStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_analyzeStaticExpression (defineCategoryMethod_literalStringInExpressionAST_analyzeStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@literalStringInExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                           const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_string /* constinArgument_inMode */,
                                                                           GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                           GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_string var_literalStringName ;
  const enumGalgasBool test_0 = ioArgument_ioGlobalLiteralStringMap.reader_hasKey (object->mAttribute_mLiteralString.mAttribute_string COMMA_SOURCE_FILE ("expression-literal-string.galgas", 68)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGlobalLiteralStringMap.method_searchKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 69)) ;
  }else if (kBoolFalse == test_0) {
    var_literalStringName = function_literalStringPrefix (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 71)).add_operation (ioArgument_ioGlobalLiteralStringMap.reader_count (SOURCE_FILE ("expression-literal-string.galgas", 71)).reader_string (SOURCE_FILE ("expression-literal-string.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 71)) ;
    {
    ioArgument_ioGlobalLiteralStringMap.modifier_insertKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 72)) ;
    }
  }
  outArgument_outGeneratedCode = GALGAS_inLineExpressionGeneration::constructor_new (var_literalStringName  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 75)) ;
  outArgument_outExpressionType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 76)).reader_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 76)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 76)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                         categoryMethod_literalStringInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_analyzeExpression (defineCategoryMethod_literalStringInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@selfExpressionAST addDependenceEdgeForStaticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                   const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                   GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_selfExpressionAST.mSlotID,
                                                            categoryMethod_selfExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_selfExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@selfExpressionAST analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                const GALGAS_receiverType constinArgument_inReceiverType,
                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                const GALGAS_string /* constinArgument_inMode */,
                                                                GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfExpressionAST * object = (const cPtr_selfExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfExpressionAST) ;
  switch (constinArgument_inReceiverType.enumValue ()) {
  case GALGAS_receiverType::kNotBuilt:
    break ;
  case GALGAS_receiverType::kEnum_noReceiver:
    {
      inCompiler->emitSemanticError (object->mAttribute_mSelfLocation, GALGAS_string ("'self' is undefined in this context")  COMMA_SOURCE_FILE ("expression-self.galgas", 52)) ;
      outArgument_outExpressionType.drop () ; // Release error dropped variable
      outArgument_outGeneratedCode.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_receiverType::kEnum_receiver:
    {
      const cEnumAssociatedValues_receiverType_receiver * extractPtr_2893 = (const cEnumAssociatedValues_receiverType_receiver *) (constinArgument_inReceiverType.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_2893->mAssociatedValue0 ;
      const GALGAS_string extractedValue_receiverValue = extractPtr_2893->mAssociatedValue1 ;
      outArgument_outExpressionType = extractedValue_type ;
      outArgument_outGeneratedCode = GALGAS_inLineExpressionGeneration::constructor_new (extractedValue_receiverValue  COMMA_SOURCE_FILE ("expression-self.galgas", 55)) ;
    }
    break ;
  case GALGAS_receiverType::kEnum_mutatingReceiver:
    {
      const cEnumAssociatedValues_receiverType_mutatingReceiver * extractPtr_3052 = (const cEnumAssociatedValues_receiverType_mutatingReceiver *) (constinArgument_inReceiverType.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_3052->mAssociatedValue0 ;
      const GALGAS_string extractedValue_receiverPointer = extractPtr_3052->mAssociatedValue1 ;
      outArgument_outExpressionType = extractedValue_type ;
      outArgument_outGeneratedCode = GALGAS_inLineExpressionGeneration::constructor_new (GALGAS_string ("* ").add_operation (extractedValue_receiverPointer, inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 58))  COMMA_SOURCE_FILE ("expression-self.galgas", 58)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_selfExpressionAST.mSlotID,
                                         categoryMethod_selfExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfExpressionAST_analyzeExpression (defineCategoryMethod_selfExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@selfExpressionAST analyzeStaticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfExpressionAST_analyzeStaticExpression (const cPtr_expressionAST * inObject,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inTargetType */,
                                                                      const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                      GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                      GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                      GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfExpressionAST * object = (const cPtr_selfExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfExpressionAST) ;
  inCompiler->emitSemanticError (object->mAttribute_mSelfLocation, GALGAS_string ("'self' is undefined in this context")  COMMA_SOURCE_FILE ("expression-self.galgas", 71)) ;
  outArgument_outExpressionType.drop () ; // Release error dropped variable
  outArgument_outGeneratedCode.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfExpressionAST_analyzeStaticExpression (void) {
  enterCategoryMethod_analyzeStaticExpression (kTypeDescriptor_GALGAS_selfExpressionAST.mSlotID,
                                               categoryMethod_selfExpressionAST_analyzeStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfExpressionAST_analyzeStaticExpression (defineCategoryMethod_selfExpressionAST_analyzeStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@varInExpressionAST addDependenceEdgeForStaticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mSourceVarName COMMA_SOURCE_FILE ("expression-var.galgas", 30)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                            categoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@varInExpressionAST analyzeStaticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_analyzeStaticExpression (const cPtr_expressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                       GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                       GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                       GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_sourceVarType ;
  GALGAS_abstractExpressionGeneration var_globalConstantValue ;
  constinArgument_inContext.mAttribute_mGlobalConstantMap.method_searchKey (object->mAttribute_mSourceVarName, var_sourceVarType, var_globalConstantValue, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 43)) ;
  outArgument_outExpressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_sourceVarType, object->mAttribute_mSourceVarName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 49)) ;
  outArgument_outGeneratedCode = GALGAS_inLineExpressionGeneration::constructor_new (callCategoryReader_expressionCode ((const cPtr_abstractExpressionGeneration *) var_globalConstantValue.ptr (), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 55))  COMMA_SOURCE_FILE ("expression-var.galgas", 55)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_analyzeStaticExpression (void) {
  enterCategoryMethod_analyzeStaticExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                               categoryMethod_varInExpressionAST_analyzeStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_analyzeStaticExpression (defineCategoryMethod_varInExpressionAST_analyzeStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@varInExpressionAST analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                 const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                 const GALGAS_string constinArgument_inMode,
                                                                 GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                 GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_sourceVarType ;
  GALGAS_stringset var_acceptedModeSet ;
  GALGAS_string var_varAccess ;
  {
  GALGAS_bool joker_3515 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadAccess (object->mAttribute_mSourceVarName, var_sourceVarType, var_acceptedModeSet, var_varAccess, joker_3515, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 73)) ;
  }
  const enumGalgasBool test_0 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("expression-var.galgas", 81)).operator_not (SOURCE_FILE ("expression-var.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSourceVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 82)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 82))  COMMA_SOURCE_FILE ("expression-var.galgas", 82)) ;
  }
  outArgument_outExpressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_sourceVarType, object->mAttribute_mSourceVarName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 85)) ;
  outArgument_outGeneratedCode = GALGAS_inLineExpressionGeneration::constructor_new (var_varAccess  COMMA_SOURCE_FILE ("expression-var.galgas", 91)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                         categoryMethod_varInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_analyzeExpression (defineCategoryMethod_varInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@functionCallInExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                             const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                             GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_functionCallInExpressionAST.mSlotID,
                                                            categoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@functionCallInExpressionAST analyzeStaticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallInExpressionAST_analyzeStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                                const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                                GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                                GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outExpressionType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-func-call.galgas", 59)) ;
  outArgument_outGeneratedCode = GALGAS_inLineExpressionGeneration::constructor_new (GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("expression-func-call.galgas", 61)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallInExpressionAST_analyzeStaticExpression (void) {
  enterCategoryMethod_analyzeStaticExpression (kTypeDescriptor_GALGAS_functionCallInExpressionAST.mSlotID,
                                               categoryMethod_functionCallInExpressionAST_analyzeStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallInExpressionAST_analyzeStaticExpression (defineCategoryMethod_functionCallInExpressionAST_analyzeStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@functionCallInExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_string constinArgument_inMode,
                                                                          GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                          GALGAS_abstractExpressionGeneration & outArgument_outGeneratedCode,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallInExpressionAST * object = (const cPtr_functionCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallInExpressionAST) ;
  GALGAS_lstring var_functionMode ;
  GALGAS_funcSignature var_formalParameterList ;
  constinArgument_inContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionVarName, var_functionMode, var_formalParameterList, outArgument_outExpressionType, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 78)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inMode.objectCompare (var_functionMode.mAttribute_string)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFunctionVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this function should be called in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 86)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 86))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 86)) ;
  }
  GALGAS_string var_s = function_functionPrefix (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 89)).add_operation (object->mAttribute_mFunctionVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 89)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 89)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_formalParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 90)).objectCompare (object->mAttribute_mParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 90)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mFunctionVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this function declares ").add_operation (var_formalParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 91)).reader_string (SOURCE_FILE ("expression-func-call.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 91)).add_operation (GALGAS_string (" formal parameters, the call names "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 91)).add_operation (object->mAttribute_mParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 92)).reader_string (SOURCE_FILE ("expression-func-call.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 92)).add_operation (GALGAS_string (" effective arguments"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 92))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 91)) ;
  }else if (kBoolFalse == test_2) {
    cEnumerator_funcSignature enumerator_4204 (var_formalParameterList, kEnumeration_up) ;
    cEnumerator_functionCallEffectiveParameterList enumerator_4230 (object->mAttribute_mParameterList, kEnumeration_up) ;
    while (enumerator_4204.hasCurrentObject () && enumerator_4230.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_4230.current (HERE).mAttribute_mSelector.mAttribute_string.objectCompare (enumerator_4204.current (HERE).mAttribute_mFormalSelector.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_s = GALGAS_string ("!") ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_4204.current (HERE).mAttribute_mFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_s.dotAssign_operation (enumerator_4204.current (HERE).mAttribute_mFormalSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 99))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 99)) ;
        }
        GALGAS_location location_6 (enumerator_4230.current (HERE).mAttribute_mSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("required selector: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 101))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 101)) ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_argumentExpressionType ;
      GALGAS_abstractExpressionGeneration var_argumentGeneratedCode ;
      callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_4230.current (HERE).mAttribute_mExpression.ptr (), GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("expression-func-call.galgas", 104)), enumerator_4204.current (HERE).mAttribute_mArgumentType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_argumentExpressionType, var_argumentGeneratedCode, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 103)) ;
      var_s.dotAssign_operation (callCategoryReader_expressionCode ((const cPtr_abstractExpressionGeneration *) var_argumentGeneratedCode.ptr (), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 113))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 113)) ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_argumentExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 114)).objectCompare (enumerator_4204.current (HERE).mAttribute_mArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 114)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_location location_8 (enumerator_4230.current (HERE).mAttribute_mSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the actual parameter has the ").add_operation (var_argumentExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 115)).add_operation (GALGAS_string (", but the formal argument has the "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 115)).add_operation (enumerator_4204.current (HERE).mAttribute_mArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 116)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 116))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 115)) ;
      }
      if (enumerator_4204.hasNextObject () && enumerator_4230.hasNextObject ()) {
        var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 119)) ;
      }
      enumerator_4204.gotoNextObject () ;
      enumerator_4230.gotoNextObject () ;
    }
  }
  var_s.dotAssign_operation (GALGAS_string (")")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 122)) ;
  outArgument_outGeneratedCode = GALGAS_inLineExpressionGeneration::constructor_new (var_s  COMMA_SOURCE_FILE ("expression-func-call.galgas", 124)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_functionCallInExpressionAST.mSlotID,
                                         categoryMethod_functionCallInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallInExpressionAST_analyzeExpression (defineCategoryMethod_functionCallInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@inLineExpressionGeneration expressionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_inLineExpressionGeneration_expressionCode (const cPtr_abstractExpressionGeneration * inObject,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_inLineExpressionGeneration * object = (const cPtr_inLineExpressionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inLineExpressionGeneration) ;
  result_outCode = object->mAttribute_mCode ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_inLineExpressionGeneration_expressionCode (void) {
  enterCategoryReader_expressionCode (kTypeDescriptor_GALGAS_inLineExpressionGeneration.mSlotID,
                                      categoryReader_inLineExpressionGeneration_expressionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_inLineExpressionGeneration_expressionCode (defineCategoryReader_inLineExpressionGeneration_expressionCode, NULL) ;

