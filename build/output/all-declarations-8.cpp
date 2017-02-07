#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@structureDeclaration enterRoutinesInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * inObject,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & ioArgument_ioContext,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  extensionMethod_enterFunctionInContext (object->mProperty_mFunctionDeclarationListAST, function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 415)).getter_string (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 414)) ;
  extensionMethod_enterInContext (object->mProperty_mSystemRoutineListAST, function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 419)).getter_string (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 418)) ;
  extensionMethod_enterInContext (object->mProperty_mGuardListAST, function_llvmRegularTypeMangledNameFromName (object->mProperty_mStructureName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 423)).getter_string (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 422)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                               extensionMethod_structureDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_enterRoutinesInContext (defineExtensionMethod_structureDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@structureDeclaration semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_structureType_16987 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mStructureName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 437)) ;
  const GALGAS_structureDeclaration temp_0 = object ;
  callExtensionMethod_functionSemanticAnalysis ((const cPtr_structureDeclaration *) temp_0.ptr (), var_structureType_16987, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 439)) ;
  extensionMethod_systemRoutineSemanticAnalysis (object->mProperty_mSystemRoutineListAST, var_structureType_16987, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 446)) ;
  extensionMethod_guardSemanticAnalysis (object->mProperty_mGuardListAST, var_structureType_16987, constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 453)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                         extensionMethod_structureDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_semanticAnalysis (defineExtensionMethod_structureDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@typeAliasDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_typeAliasDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  result_outLocation = object->mProperty_mNewTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeAliasDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                 extensionGetter_typeAliasDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeAliasDeclaration_location (defineExtensionGetter_typeAliasDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@typeAliasDeclaration addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                               GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                               GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  const GALGAS_typeAliasDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                     extensionMethod_typeAliasDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_addExtension (defineExtensionMethod_typeAliasDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@typeAliasDeclaration enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  GALGAS_lstring var_newTypeName_2625 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mNewTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 54)) ;
  GALGAS_lstring var_aliasedTypeName_2700 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mAliasedTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 55)) ;
  {
  const GALGAS_typeAliasDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_newTypeName_2625, temp_0, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_newTypeName_2625, var_aliasedTypeName_2700 COMMA_SOURCE_FILE ("type-alias.galgas", 57)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                               extensionMethod_typeAliasDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_enterInPrecedenceGraph (defineExtensionMethod_typeAliasDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@typeAliasDeclaration keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  result_outRepresentation = GALGAS_string ("typealias $").add_operation (object->mProperty_mNewTypeName.getter_string (SOURCE_FILE ("type-alias.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 63)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                                           extensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_typeAliasDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@typeAliasDeclaration enterRoutinesInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                               extensionMethod_typeAliasDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_enterRoutinesInContext (defineExtensionMethod_typeAliasDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@typeAliasDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclaration * object = (const cPtr_typeAliasDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclaration) ;
  GALGAS_typeKind var_kind_4304 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAliasedTypeName, var_kind_4304, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 86)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mNewTypeName, var_kind_4304, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 88)) ;
  }
  GALGAS_lstring var_newNewInfixKey_4442 = function_combineTypeNamesForInfixOperator (object->mProperty_mNewTypeName.getter_string (HERE), object->mProperty_mNewTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 90)) ;
  GALGAS_lstring var_aliasAliasInfixKey_4546 = function_combineTypeNamesForInfixOperator (object->mProperty_mAliasedTypeName.getter_string (HERE), object->mProperty_mAliasedTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 91)) ;
  GALGAS_lstring var_newLiteralIntegerInfixKey_4665 = function_combineTypeNamesForInfixOperator (object->mProperty_mNewTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 92)) ;
  GALGAS_lstring var_aliasLiteralIntegerInfixKey_4783 = function_combineTypeNamesForInfixOperator (object->mProperty_mAliasedTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 93)) ;
  GALGAS_lstring var_literalIntegerNewInfixKey_4903 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 94)), object->mProperty_mNewTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 94)) ;
  GALGAS_lstring var_literalIntegerAliasInfixKey_5020 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 95)), object->mProperty_mAliasedTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 95)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_newTypeProxy_5126 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mNewTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 96)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_oldTypeProxy_5215 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 97)) ;
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mEqualOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 98)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mNonEqualOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 109)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mStrictInfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 120)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mInfEqualOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 131)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mStrictSupOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 142)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSupEqualOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 153)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAndOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 164)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mOrOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 175)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mXorOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 186)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mBooleanXorOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 197)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAddOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 208)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 219)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSubOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 230)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 241)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mMulOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 252)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 263)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mDivOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 274)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 285)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mModOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 296)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mModNoOvfOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 307)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mLeftShiftOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 318)) ;
  }
  {
  routine_enterAliasInfixOperator (ioArgument_ioContext.mProperty_mRightShiftOperatorMap, var_newNewInfixKey_4442, var_aliasAliasInfixKey_4546, var_newLiteralIntegerInfixKey_4665, var_aliasLiteralIntegerInfixKey_4783, var_literalIntegerNewInfixKey_4903, var_literalIntegerAliasInfixKey_5020, var_newTypeProxy_5126, var_oldTypeProxy_5215, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 329)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 340)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mNotOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 341)) ;
  }
  {
  routine_enterAliasPrefixOperator (ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap, object->mProperty_mNewTypeName, object->mProperty_mAliasedTypeName, inCompiler  COMMA_SOURCE_FILE ("type-alias.galgas", 342)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                       extensionMethod_typeAliasDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_enterInContext (defineExtensionMethod_typeAliasDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'enterAliasPrefixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasPrefixOperator (GALGAS_prefixOperatorMap & ioArgument_ioInfixOperatorMap,
                                       const GALGAS_lstring constinArgument_inNewTypeName,
                                       const GALGAS_lstring constinArgument_inAliasedTypeName,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedTypeName.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 352)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 353)) ;
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewTypeName, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 357)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'enterAliasInfixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasInfixOperator (GALGAS_infixOperatorMap & ioArgument_ioInfixOperatorMap,
                                      const GALGAS_lstring constinArgument_inNewNewInfixKey,
                                      const GALGAS_lstring constinArgument_inAliasedAliasedInfixKey,
                                      const GALGAS_lstring constinArgument_inNewLiteralIntegerInfixKey,
                                      const GALGAS_lstring constinArgument_inAliasedLiteralIntegerInfixKey,
                                      const GALGAS_lstring constinArgument_inLiteralIntegerNewInfixKey,
                                      const GALGAS_lstring constinArgument_inLiteralIntegerAliasInfixKey,
                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inNewTypeProxy,
                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOldTypeProxy,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedAliasedInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 377)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_12890 ;
    GALGAS_infixOperatorDescription var_operation_12937 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedAliasedInfixKey, var_resultType_12890, var_operation_12937, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 378)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_12890.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_resultType_12890 = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewNewInfixKey, var_resultType_12890, var_operation_12937, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 386)) ;
    }
  }
  const enumGalgasBool test_2 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inAliasedLiteralIntegerInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 392)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_13324 ;
    GALGAS_infixOperatorDescription var_operation_13371 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inAliasedLiteralIntegerInfixKey, var_resultType_13324, var_operation_13371, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 393)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_resultType_13324.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_resultType_13324 = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inNewLiteralIntegerInfixKey, var_resultType_13324, var_operation_13371, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 401)) ;
    }
  }
  const enumGalgasBool test_4 = ioArgument_ioInfixOperatorMap.getter_hasKey (constinArgument_inLiteralIntegerAliasInfixKey.getter_string (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 407)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_13765 ;
    GALGAS_infixOperatorDescription var_operation_13812 ;
    ioArgument_ioInfixOperatorMap.method_searchKey (constinArgument_inLiteralIntegerAliasInfixKey, var_resultType_13765, var_operation_13812, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 408)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_resultType_13765.objectCompare (constinArgument_inOldTypeProxy)).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_resultType_13765 = constinArgument_inNewTypeProxy ;
    }
    {
    ioArgument_ioInfixOperatorMap.setter_insertKey (constinArgument_inLiteralIntegerNewInfixKey, var_resultType_13765, var_operation_13812, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 416)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@typeAliasDeclaration semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeAliasDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                   const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeAliasDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_typeAliasDeclaration.mSlotID,
                                         extensionMethod_typeAliasDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeAliasDeclaration_semanticAnalysis (defineExtensionMethod_typeAliasDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@integerDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_integerDeclaration_location (const cPtr_abstractDeclaration * /* inObject */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_integerDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                 extensionGetter_integerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclaration_location (defineExtensionGetter_integerDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@integerDeclaration addExtension'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                             GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                             GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                     extensionMethod_integerDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_addExtension (defineExtensionMethod_integerDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@integerDeclaration enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  GALGAS_lstring var_integerTypeName_1957 = function_llvmRegularTypeMangledNameFromName (callExtensionGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 40)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 40)) ;
  {
  const GALGAS_integerDeclaration temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName_1957, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 41)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName_1957, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 42)) COMMA_SOURCE_FILE ("type-integer.galgas", 42)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                               extensionMethod_integerDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_enterInPrecedenceGraph (defineExtensionMethod_integerDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@integerDeclaration keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_integerDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (function_llvmRegularTypeMangledNameFromName (callExtensionGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)).getter_string (SOURCE_FILE ("type-integer.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_integerDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                                           extensionGetter_integerDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_integerDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@integerDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                               const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  GALGAS_lstring var_integerTypeName_3218 = callExtensionGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 61)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 61)) ;
  GALGAS_bigint var_min_3281 ;
  GALGAS_bigint var_max_3295 ;
  const enumGalgasBool test_1 = object->mProperty_mIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    var_min_3281 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 66)).left_shift_operation (object->mProperty_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 66)) COMMA_SOURCE_FILE ("type-integer.galgas", 66)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 66)) ;
    var_max_3295 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 67)).left_shift_operation (object->mProperty_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 67)) COMMA_SOURCE_FILE ("type-integer.galgas", 67)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 67)) ;
  }else if (kBoolFalse == test_1) {
    var_min_3281 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 69)) ;
    var_max_3295 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 70)).left_shift_operation (object->mProperty_mSize COMMA_SOURCE_FILE ("type-integer.galgas", 70)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 70)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3218, GALGAS_typeKind::constructor_integer (var_min_3281, var_max_3295, object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 75)), object->mProperty_mSize  COMMA_SOURCE_FILE ("type-integer.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 73)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName_3218, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 78)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName_3218, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 84)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName_3218, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 90)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                       extensionMethod_integerDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_enterInContext (defineExtensionMethod_integerDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@integerDeclaration enterRoutinesInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                       const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                               extensionMethod_integerDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_enterRoutinesInContext (defineExtensionMethod_integerDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@integerDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                 const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                         extensionMethod_integerDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_semanticAnalysis (defineExtensionMethod_integerDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_5783 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 128)) ;
  GALGAS_lstring var_intIntOp_5904 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 130)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_5904, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 134))  COMMA_SOURCE_FILE ("type-integer.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 131)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_5904, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 139))  COMMA_SOURCE_FILE ("type-integer.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 136)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 144)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 144)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_5904, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 141)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 149)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 149)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_5904, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 146)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 154)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 154)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_5904, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 151)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 159)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 159)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_5904, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 156)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 162)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 166))  COMMA_SOURCE_FILE ("type-integer.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 163)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 171))  COMMA_SOURCE_FILE ("type-integer.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 168)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 176))  COMMA_SOURCE_FILE ("type-integer.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 173)) ;
    }
    {
    ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 178)) ;
    }
  }
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 185)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 194)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 194)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 191)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 199))  COMMA_SOURCE_FILE ("type-integer.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 196)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 204)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 204)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 201)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 209))  COMMA_SOURCE_FILE ("type-integer.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 206)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 214)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 214)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 211)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 219))  COMMA_SOURCE_FILE ("type-integer.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 216)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 224)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 224)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 221)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 229)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 229)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 226)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 234)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 234)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 231)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_22 ;
  const enumGalgasBool test_23 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 239)) ;
  }else if (kBoolFalse == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 239)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_22  COMMA_SOURCE_FILE ("type-integer.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 236)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 245))  COMMA_SOURCE_FILE ("type-integer.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 242)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_24 ;
  const enumGalgasBool test_25 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 250)) ;
  }else if (kBoolFalse == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 250)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_5904, var_selfTypeProxy_5783, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_24  COMMA_SOURCE_FILE ("type-integer.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 247)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@infixObjectObjectOperatorDescription generateInfixOperatorCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                            const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                            const GALGAS_location constinArgument_inOperatorLocation,
                                                                                            const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixObjectObjectOperatorDescription * object = (const cPtr_infixObjectObjectOperatorDescription *) inObject ;
  macroValidSharedObject (object, cPtr_infixObjectObjectOperatorDescription) ;
  GALGAS_bool test_0 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 270)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 270)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bigint var_left_10680 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_10654_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_10654_1, var_left_10680, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 271)) ;
    GALGAS_bigint var_right_10745 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_10718_1 ; // Joker input parameter
    constinArgument_inRightOperand.method_literalInteger (joker_10718_1, var_right_10745, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 272)) ;
    const GALGAS_infixObjectObjectOperatorDescription temp_2 = object ;
    GALGAS_bigint var_resultValue_10766 = callExtensionGetter_performStaticOperation ((const cPtr_infixObjectObjectOperatorDescription *) temp_2.ptr (), var_left_10680, var_right_10745, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 273)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_10766  COMMA_SOURCE_FILE ("type-integer.galgas", 274)) ;
  }else if (kBoolFalse == test_1) {
    {
    routine_getNewTempVariable (constinArgument_inResultType, constinArgument_inOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 276)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 280)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 278)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription.mSlotID,
                                                  extensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (defineExtensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_literal_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_literal_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_11924 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 301)) ;
  GALGAS_lstring var_intLiteralOp_12049 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 303)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_12049, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 307))  COMMA_SOURCE_FILE ("type-integer.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 304)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_12049, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 312))  COMMA_SOURCE_FILE ("type-integer.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 309)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 317)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 317)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_12049, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 314)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 322)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 322)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_12049, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 319)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 327)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 327)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_12049, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 324)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 332)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 332)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_12049, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 329)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 335)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 339))  COMMA_SOURCE_FILE ("type-integer.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 336)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 344))  COMMA_SOURCE_FILE ("type-integer.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 341)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 349))  COMMA_SOURCE_FILE ("type-integer.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 346)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 356)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 356)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 353)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 361))  COMMA_SOURCE_FILE ("type-integer.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 358)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 366)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 366)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 371))  COMMA_SOURCE_FILE ("type-integer.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 368)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 376)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 376)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 373)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 381))  COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 378)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 386)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 386)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 383)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 391)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 391)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 388)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 396)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 396)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 393)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 401)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 401)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 398)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 407))  COMMA_SOURCE_FILE ("type-integer.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 412)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 412)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_12049, var_selfTypeProxy_11924, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@integerObject_literal_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_infixOperator * object = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_16623 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_16589_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_16589_1, var_literalValue_16623, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 433)) ;
  GALGAS_bigint var_min_16677 ;
  GALGAS_bigint var_max_16698 ;
  GALGAS_bool joker_16700_2 ; // Joker input parameter
  GALGAS_uint joker_16700_1 ; // Joker input parameter
  extensionGetter_kind (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 434)).method_integer (var_min_16677, var_max_16698, joker_16700_2, joker_16700_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 434)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_16623.objectCompare (var_min_16677)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min_16677.getter_string (SOURCE_FILE ("type-integer.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 436)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 436)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 436)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_16623.objectCompare (var_max_16698)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max_16698.getter_string (SOURCE_FILE ("type-integer.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 438)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 438)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 438)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, constinArgument_inOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 440)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 443)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 441)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator.mSlotID,
                                                  extensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (defineExtensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_literal_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_literal_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_18013 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 464)) ;
  GALGAS_lstring var_intLiteralOp_18138 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 466)), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 466)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_18138, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 470))  COMMA_SOURCE_FILE ("type-integer.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 467)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_18138, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 475))  COMMA_SOURCE_FILE ("type-integer.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 472)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 480)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 480)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_18138, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 477)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 485)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 485)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_18138, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 482)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 490)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 490)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_18138, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 487)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 495)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 495)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_18138, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 492)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 498)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 502))  COMMA_SOURCE_FILE ("type-integer.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 499)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 507))  COMMA_SOURCE_FILE ("type-integer.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 504)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 512))  COMMA_SOURCE_FILE ("type-integer.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 509)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 519)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 519)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 516)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 524))  COMMA_SOURCE_FILE ("type-integer.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 521)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 529)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 529)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 526)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 534))  COMMA_SOURCE_FILE ("type-integer.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 531)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 539)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 539)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 536)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 544))  COMMA_SOURCE_FILE ("type-integer.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 541)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 549)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 549)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 546)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 554)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 554)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 551)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 559)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 559)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 556)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 564)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 564)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 561)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 570))  COMMA_SOURCE_FILE ("type-integer.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 567)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 575)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 575)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_18138, var_selfTypeProxy_18013, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 572)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@literal_integerObject_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_integerObject_5F_infixOperator * object = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  GALGAS_bigint var_literalValue_22720 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_22686_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_22686_1, var_literalValue_22720, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 597)) ;
  GALGAS_bigint var_min_22775 ;
  GALGAS_bigint var_max_22796 ;
  GALGAS_bool joker_22798_2 ; // Joker input parameter
  GALGAS_uint joker_22798_1 ; // Joker input parameter
  extensionGetter_kind (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 598)).method_integer (var_min_22775, var_max_22796, joker_22798_2, joker_22798_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 598)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_22720.objectCompare (var_min_22775)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min_22775.getter_string (SOURCE_FILE ("type-integer.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 600)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 600)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 600)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_22720.objectCompare (var_max_22796)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max_22796.getter_string (SOURCE_FILE ("type-integer.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 602)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 602)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 602)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, constinArgument_inOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 604)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 607)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 605)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator.mSlotID,
                                                  extensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (defineExtensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@literalIntegerDeclaration location'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_literalIntegerDeclaration_location (const cPtr_abstractDeclaration * /* inObject */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 11)) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalIntegerDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                 extensionGetter_literalIntegerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclaration_location (defineExtensionGetter_literalIntegerDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@literalIntegerDeclaration addExtension'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                    GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                    GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclaration * object = (const cPtr_literalIntegerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclaration) ;
  const GALGAS_literalIntegerDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                     extensionMethod_literalIntegerDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_addExtension (defineExtensionMethod_literalIntegerDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalIntegerDeclaration enterInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclaration * object = (const cPtr_literalIntegerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclaration) ;
  GALGAS_lstring var_staticIntegerTypeName_1717 = function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 32)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 32)) ;
  {
  const GALGAS_literalIntegerDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_staticIntegerTypeName_1717, temp_0, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 33)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_staticIntegerTypeName_1717, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                               extensionMethod_literalIntegerDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_enterInPrecedenceGraph (defineExtensionMethod_literalIntegerDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@literalIntegerDeclaration keyRepresentationForErrorSignaling'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * /* inObject */,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 40)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                                           extensionGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_literalIntegerDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalIntegerDeclaration enterRoutinesInContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                              const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                              GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                               extensionMethod_literalIntegerDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_enterRoutinesInContext (defineExtensionMethod_literalIntegerDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@literalIntegerDeclaration enterInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_enterInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                      const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                      GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName_3347 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 62)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 62)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3347, GALGAS_typeKind::constructor_staticInteger (SOURCE_FILE ("type-literal-integer.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 64)) ;
  }
  {
  routine_enterLiteralIntegerOperators (var_integerTypeName_3347, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 69)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                       extensionMethod_literalIntegerDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_enterInContext (defineExtensionMethod_literalIntegerDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterLiteralIntegerOperators'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterLiteralIntegerOperators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                           GALGAS_semanticContext & ioArgument_ioContext,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_intIntOp_3901 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 82)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_4010 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 83)) ;
  ioArgument_ioContext.mProperty_mLiteralIntegerType = var_selfTypeProxy_4010 ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 89))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 86)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-literal-integer.galgas", 94))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 91)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 99))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 96)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 104))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 101)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-literal-integer.galgas", 109))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 106)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.getter_mBooleanType (HERE), GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-literal-integer.galgas", 114))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 111)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 120))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 117)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 125))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 122)) ;
  }
  {
  ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 130))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 127)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 132)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 137)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-literal-integer.galgas", 145))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 142)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 150))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 147)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-literal-integer.galgas", 155))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 152)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 160))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 157)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-literal-integer.galgas", 165))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 162)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 170))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 167)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-literal-integer.galgas", 175))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 172)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 180))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 177)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-literal-integer.galgas", 185))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 182)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 190))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 187)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-literal-integer.galgas", 196))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 193)) ;
  }
  {
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_3901, var_selfTypeProxy_4010, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-literal-integer.galgas", 201))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 198)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@literalIntegerDeclaration semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                        const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                        GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                        GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                         extensionMethod_literalIntegerDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_semanticAnalysis (defineExtensionMethod_literalIntegerDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@literal_literal_integerInfixOperation generateInfixOperatorCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                                   GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                                   const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                   const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                                                   const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue_9540 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_9509_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_9509_1, var_leftValue_9540, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 255)) ;
  GALGAS_bigint var_rightValue_9608 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_9576_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_9576_1, var_rightValue_9608, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 256)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result_9622 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue_9540, var_rightValue_9608, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 257)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_9622  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 258)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation.mSlotID,
                                                  extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@literalStringDeclaration location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_literalStringDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  result_outLocation = object->mProperty_mLiteralStringTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalStringDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                 extensionGetter_literalStringDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalStringDeclaration_location (defineExtensionGetter_literalStringDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@literalStringDeclaration addExtension'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                   GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                   GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  const GALGAS_literalStringDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                     extensionMethod_literalStringDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_addExtension (defineExtensionMethod_literalStringDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalStringDeclaration enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  GALGAS_lstring var_literalStringTypeName_1770 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mLiteralStringTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 33)) ;
  {
  const GALGAS_literalStringDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1770, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 34)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1770, function_llvmRegularTypeMangledNameFromName (GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 35)) COMMA_SOURCE_FILE ("type-static-string.galgas", 35)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                               extensionMethod_literalStringDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_enterInPrecedenceGraph (defineExtensionMethod_literalStringDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@literalStringDeclaration keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalStringDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (object->mProperty_mLiteralStringTypeName.getter_string (SOURCE_FILE ("type-static-string.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 41)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_literalStringDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                                           extensionGetter_literalStringDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalStringDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_literalStringDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalStringDeclaration enterRoutinesInContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                             const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                             GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                               extensionMethod_literalStringDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_enterRoutinesInContext (defineExtensionMethod_literalStringDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@literalStringDeclaration enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                     const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                     GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mLiteralStringTypeName, GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("type-static-string.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 64)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                       extensionMethod_literalStringDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_enterInContext (defineExtensionMethod_literalStringDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@literalStringDeclaration semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                         extensionMethod_literalStringDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_semanticAnalysis (defineExtensionMethod_literalStringDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@opaqueTypeDeclaration location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_opaqueTypeDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_opaqueTypeDeclaration * object = (const cPtr_opaqueTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclaration) ;
  result_outLocation = object->mProperty_mOpaqueTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_opaqueTypeDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                 extensionGetter_opaqueTypeDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_opaqueTypeDeclaration_location (defineExtensionGetter_opaqueTypeDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@opaqueTypeDeclaration addExtension'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclaration * object = (const cPtr_opaqueTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclaration) ;
  const GALGAS_opaqueTypeDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                     extensionMethod_opaqueTypeDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclaration_addExtension (defineExtensionMethod_opaqueTypeDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@opaqueTypeDeclaration enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclaration * object = (const cPtr_opaqueTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclaration) ;
  GALGAS_lstring var_typeName_2940 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mOpaqueTypeName, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 64)) ;
  {
  const GALGAS_opaqueTypeDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_typeName_2940, temp_0, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 65)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName_2940, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)).getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), var_typeName_2940, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                               extensionMethod_opaqueTypeDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclaration_enterInPrecedenceGraph (defineExtensionMethod_opaqueTypeDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@opaqueTypeDeclaration keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_opaqueTypeDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_opaqueTypeDeclaration * object = (const cPtr_opaqueTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclaration) ;
  result_outRepresentation = GALGAS_string ("opaqueType $").add_operation (object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 73)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_opaqueTypeDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                                           extensionGetter_opaqueTypeDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_opaqueTypeDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_opaqueTypeDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@opaqueTypeDeclaration enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclaration * object = (const cPtr_opaqueTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclaration) ;
  GALGAS_uint var_flags_4214 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_lstringlist enumerator_4254 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4254.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4254.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("instantiable"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_flags_4214.operator_and (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 90)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 90)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4254.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 91)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 91)) ;
      }else if (kBoolFalse == test_1) {
        var_flags_4214 = var_flags_4214.operator_or (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_4254.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("copyable"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_flags_4214.operator_and (function_copyableFlag (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_4254.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 97)), GALGAS_string ("duplicated attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 97)) ;
        }else if (kBoolFalse == test_4) {
          var_flags_4214 = var_flags_4214.operator_or (function_copyableFlag (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 99)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 99)) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_4254.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 102)), GALGAS_string ("only @copyable and @instantiable attributes are allowed here"), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 102)) ;
      }
    }
    enumerator_4254.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_4853 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 106)) ;
  GALGAS_allocaList var_allocaList_4883 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 107)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_4929 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-opaque-declaration.galgas", 108)) ;
  GALGAS_unifiedSymbolMap var_variableMap_5027 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_5087 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_variableMap_5027, var_universalMap_5087, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 109)) ;
  }
  GALGAS_staticStringMap joker_5432 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 123)) ;
  GALGAS_objectIR var_sizeExpressionIR_5611 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-opaque-declaration.galgas", 115)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mOpaqueTypeName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 118)), object->mProperty_mOpaqueTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 118)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-opaque-declaration.galgas", 119)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-opaque-declaration.galgas", 121)), var_temporaries_4929, joker_5432, var_variableMap_5027, var_universalMap_5087, var_allocaList_4883, var_initInstructionGenerationList_4853, var_sizeExpressionIR_5611, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 114)) ;
  GALGAS_bool test_7 = GALGAS_bool (kIsStrictSup, var_allocaList_4883.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 130)).add_operation (var_initInstructionGenerationList_4853.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 130)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_7.boolEnum ()) {
    test_7 = var_sizeExpressionIR_5611.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 130)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 130)) ;
  }
  const enumGalgasBool test_8 = test_7.boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 131)) ;
  }else if (kBoolFalse == test_8) {
    GALGAS_bigint var_bitSize_5878 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_5857_1 ; // Joker input parameter
    var_sizeExpressionIR_5611.method_literalInteger (joker_5857_1, var_bitSize_5878, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mOpaqueTypeName, GALGAS_typeKind::constructor_opaque (var_bitSize_5878, var_flags_4214  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 134)) ;
    }
    {
    ioArgument_ioContext.mProperty_mConstructorMap.setter_insertKey (object->mProperty_mOpaqueTypeName, GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 141))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 139)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                       extensionMethod_opaqueTypeDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclaration_enterInContext (defineExtensionMethod_opaqueTypeDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@opaqueTypeDeclaration enterRoutinesInContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                          const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                          GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                          GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                               extensionMethod_opaqueTypeDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclaration_enterRoutinesInContext (defineExtensionMethod_opaqueTypeDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@opaqueTypeDeclaration semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opaqueTypeDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opaqueTypeDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_opaqueTypeDeclaration.mSlotID,
                                         extensionMethod_opaqueTypeDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opaqueTypeDeclaration_semanticAnalysis (defineExtensionMethod_opaqueTypeDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterControlRegistersInContext'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterControlRegistersInContext (const GALGAS_controlRegisterDeclarationListAST constinArgument_inRegisterDeclarationListAST,
                                             GALGAS_semanticContext & ioArgument_ioContext,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_controlRegisterDeclarationListAST enumerator_7318 (constinArgument_inRegisterDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_7318.hasCurrentObject ()) {
    extensionMethod_enterControlRegistersInContext (enumerator_7318.current (HERE), ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 200)) ;
    enumerator_7318.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_16745 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 438)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_writeControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_16895 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-control-register.galgas", 440)) ;
    cEnumerator_controlRegisterMap enumerator_16935 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
    while (enumerator_16935.hasCurrentObject ()) {
      var_firstLetterSet_16895.addAssign_operation (enumerator_16935.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 442)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 442))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 442)) ;
      enumerator_16935.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_17043 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_17077 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_controlRegisterMap enumerator_17124 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
    while (enumerator_17124.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_17077.objectCompare (enumerator_17124.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 447)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_17077 = enumerator_17124.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 448)) ;
        var_tableOfTypeString_17043.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_17077.getter_uint (SOURCE_FILE ("declaration-control-register.galgas", 449)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)).add_operation (var_currentFirstLetter_17077.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_17124.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_tableOfTypeString_17043.plusAssign_operation(function_linkForControlRegister (enumerator_17124.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 452)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 452)) ;
      }else if (kBoolFalse == test_2) {
        cEnumerator_range enumerator_17569 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), enumerator_17124.current_mArraySize (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 454))), kENUMERATION_UP) ;
        while (enumerator_17569.hasCurrentObject ()) {
          var_tableOfTypeString_17043.plusAssign_operation(function_linkForControlRegister (enumerator_17124.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)).add_operation (enumerator_17569.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)).add_operation (GALGAS_string ("<br/>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)) ;
          enumerator_17569.gotoNextObject () ;
        }
      }
      enumerator_17124.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_17734 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 460)), constinArgument_inControlRegisterMap, var_firstLetterSet_16895, var_tableOfTypeString_17043 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459))) ;
    GALGAS_bool joker_17986 ; // Joker input parameter
    var_typeDumpString_17734.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_16745, joker_17986, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 465)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_16745, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Filewrapper 'controlRegisterDumpGenerationTemplate'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_controlRegisterDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'controlRegisterDumpGenerationTemplate dump'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_PROJECT_5F_NAME,
                                                                              const GALGAS_controlRegisterMap & in_CONTROL_5F_REGISTER_5F_MAP,
                                                                              const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                              const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</title>\n"
    "<style type=\"text/css\">body {\n"
    "  font-family: Georgia, sans-serif ;\n"
    "  font-size: small ;\n"
    "}\n"
    "\n"
    "h1 {\n"
    "  text-align: center ;\n"
    "}\n"
    "\n"
    ".selecteur {\n"
    "  color:green ;\n"
    "}\n"
    "\n"
    "a.header_link {\n"
    "  background-color: #FFFFCC ;\n"
    "}\n"
    "\n"
    "a:visited, a:link, a:active{\n"
    "  color: blue ;\n"
    "  text-decoration: underline ;\n"
    "}\n"
    "\n"
    "a:hover {\n"
    "  color:green ;\n"
    "  background-color: #FFFF00 ;\n"
    "  text-decoration: none ;\n"
    "}\n"
    "\n"
    "table.result {\n"
    "  border: 1px solid #666666 ;\n"
    "}\n"
    "\n"
    "table.fields {\n"
    "\xC2""\xA0""\xC2""\xA0""border-collapse: collapse ;\n"
    "  border-spacing: 1px 1px;\n"
    "}\n"
    "\n"
    "td.fields {\n"
    "  border: 1px solid #333333 ;\n"
    "  text-align: center ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "td.address {\n"
    "  font-family: Courier ;\n"
    "}\n"
    "\n"
    "tr.result_line {\n"
    "  background-color: #EEEEEE ;\n"
    "}\n"
    "\n"
    "</style>\n"
    "</head>\n"
    "<body>\n"
    "<div>\n"
    "<h1>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_CONTROL_5F_REGISTER_5F_MAP.getter_count (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 68)).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 68)).stringValue () ;
  result << " defined control registers, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_1211_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1211 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1211.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1211.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).getter_uint (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).stringValue () ;
      result << "\">" ;
      result << enumerator_1211.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1211.hasNextObject ()) {
        result << " - " ;
      }
      index_1211_.increment () ;
      enumerator_1211.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">Address</td><td class=\"result_ti"
    "tle\">Value</td></tr>\n" ;
  GALGAS_uint index_1588_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_MAP.isValid ()) {
    cEnumerator_controlRegisterMap enumerator_1588 (in_CONTROL_5F_REGISTER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1588.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td>" ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1588.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "<a name=\"" ;
        result << enumerator_1588.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "\">" ;
        result << enumerator_1588.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "</a>" ;
      }else if (kBoolFalse == test_0) {
        GALGAS_uint index_1759_ (0) ;
        if (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 85)).isValid ()) {
          cEnumerator_uintlist enumerator_1759 (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 85)), kENUMERATION_UP) ;
          while (enumerator_1759.hasCurrentObject ()) {
            result << "<a name=\"" ;
            result << enumerator_1588.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << " [" ;
            result << enumerator_1759.current_mValue (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 86)).stringValue () ;
            result << "]\">" ;
            result << enumerator_1588.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << " [" ;
            result << enumerator_1759.current_mValue (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 86)).stringValue () ;
            result << "]</a><br/>" ;
            index_1759_.increment () ;
            enumerator_1759.gotoNextObject () ;
          }
        }
      }
      result << "</td><td class=\"address\">$" ;
      result << enumerator_1588.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 89)).stringValue () ;
      result << "</td><td class=\"address\">" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1588.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << enumerator_1588.current_mAddress (HERE).getter_hexString (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 91)).stringValue () ;
      }else if (kBoolFalse == test_1) {
        GALGAS_uint index_2053_ (0) ;
        if (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 93)).isValid ()) {
          cEnumerator_uintlist enumerator_2053 (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 93)), kENUMERATION_UP) ;
          while (enumerator_2053.hasCurrentObject ()) {
            result << enumerator_1588.current_mAddress (HERE).add_operation (enumerator_2053.current_mValue (HERE).multiply_operation (enumerator_1588.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).getter_bigint (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).getter_hexString (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).add_operation (GALGAS_string ("<br/>"), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 94)).stringValue () ;
            index_2053_.increment () ;
            enumerator_2053.gotoNextObject () ;
          }
        }
      }
      result << "</td><td>" ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_1588.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 98)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "<table class=\"fields\"><tr>" ;
        result << function_fieldIndexColumns (enumerator_1588.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 100)).stringValue () ;
        result << "</tr><tr>" ;
        GALGAS_uint index_2346_ (0) ;
        if (enumerator_1588.current_mControlRegisterFieldList (HERE).isValid ()) {
          cEnumerator_controlRegisterFieldList enumerator_2346 (enumerator_1588.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
          while (enumerator_2346.hasCurrentObject ()) {
            result << "<td class=\"fields\" colspan=\"" ;
            result << enumerator_2346.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 103)).stringValue () ;
            result << "\">" ;
            result << enumerator_2346.current_mFieldName (HERE).stringValue () ;
            result << "</td>" ;
            index_2346_.increment () ;
            enumerator_2346.gotoNextObject () ;
          }
        }
        result << "</tr></table>" ;
      }else if (kBoolFalse == test_2) {
      }
      result << "</td></tr>\n" ;
      index_1588_.increment () ;
      enumerator_1588.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'linkForControlRegister'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_linkForControlRegister (const GALGAS_string & constinArgument_inControlRegisterName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 486)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 486)).add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 486)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 486)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_linkForControlRegister [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_linkForControlRegister (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForControlRegister (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_linkForControlRegister ("linkForControlRegister",
                                                                        functionWithGenericHeader_linkForControlRegister,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_linkForControlRegister) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'fieldIndexColumns'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_fieldIndexColumns (const GALGAS_uint & constinArgument_inBitCount,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_19037 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 493))), kENUMERATION_DOWN) ;
  while (enumerator_19037.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_19037.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 494)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 494)) ;
    enumerator_19037.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_fieldIndexColumns [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_fieldIndexColumns (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_fieldIndexColumns (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_fieldIndexColumns ("fieldIndexColumns",
                                                                   functionWithGenericHeader_fieldIndexColumns,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_fieldIndexColumns) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'arrayIndexListFor'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist function_arrayIndexListFor (const GALGAS_uint & constinArgument_inSize,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist result_outResult ; // Returned variable
  result_outResult = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 501)) ;
  cEnumerator_range enumerator_19338 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inSize.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 502))), kENUMERATION_UP) ;
  while (enumerator_19338.hasCurrentObject ()) {
    result_outResult.addAssign_operation (enumerator_19338.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 503)) ;
    enumerator_19338.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_arrayIndexListFor [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_arrayIndexListFor (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_arrayIndexListFor (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_arrayIndexListFor ("arrayIndexListFor",
                                                                   functionWithGenericHeader_arrayIndexListFor,
                                                                   & kTypeDescriptor_GALGAS_uintlist,
                                                                   1,
                                                                   functionArgs_arrayIndexListFor) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@globalConstantDeclaration location'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_globalConstantDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  result_outLocation = object->mProperty_mConstantName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_globalConstantDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                 extensionGetter_globalConstantDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclaration_location (defineExtensionGetter_globalConstantDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@globalConstantDeclaration addExtension'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                    GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                    GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  const GALGAS_globalConstantDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                     extensionMethod_globalConstantDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_addExtension (defineExtensionMethod_globalConstantDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@globalConstantDeclaration enterInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  {
  const GALGAS_globalConstantDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 70)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mConstantTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_lstring var_typeName_3242 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mConstantTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 73)) ;
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mConstantName, var_typeName_3242 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) ;
    }
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                               extensionMethod_globalConstantDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_enterInPrecedenceGraph (defineExtensionMethod_globalConstantDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@globalConstantDeclaration keyRepresentationForErrorSignaling'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mProperty_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 83)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                                           extensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@globalConstantDeclaration enterInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                      const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  GALGAS_unifiedSymbolMap var_variableMap_4689 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_4749 ;
  {
  routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-constant.galgas", 98)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 100)), var_variableMap_4689, var_universalMap_4749, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 96)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_annotationType_4818 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mConstantTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_annotationType_4818 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-constant.galgas", 107)) ;
  }else if (kBoolFalse == test_0) {
    var_annotationType_4818 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mConstantTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 109)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_5065 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-constant.galgas", 112)) ;
  GALGAS_instructionListIR var_instructionGenerationList_5123 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 113)) ;
  GALGAS_allocaList var_allocaList_5153 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 114)) ;
  GALGAS_objectIR var_expressionResult_5666 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-constant.galgas", 116)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 119)), var_annotationType_4818, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-constant.galgas", 122)), var_temporaries_5065, ioArgument_ioGlobalLiteralStringMap, var_variableMap_4689, var_universalMap_4749, var_allocaList_5153, var_instructionGenerationList_5123, var_expressionResult_5666, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 115)) ;
  GALGAS_objectIR var_result_5719 = function_checkAssignmentCompatibility (var_expressionResult_5666, var_annotationType_4818, object->mProperty_mConstantName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 132)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_5123.getter_length (SOURCE_FILE ("declaration-global-constant.galgas", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_allocaList_5153.getter_length (SOURCE_FILE ("declaration-global-constant.galgas", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (var_result_5719, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 139)).operator_not (SOURCE_FILE ("declaration-global-constant.galgas", 139)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 140)), GALGAS_string ("source expression cannot be statically computed"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 140)) ;
  }
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mConstantName, var_result_5719, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 143)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                       extensionMethod_globalConstantDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_enterInContext (defineExtensionMethod_globalConstantDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@globalConstantDeclaration enterRoutinesInContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                              const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                              GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                               extensionMethod_globalConstantDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_enterRoutinesInContext (defineExtensionMethod_globalConstantDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildGlobalConstantMapHTMLFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGlobalConstantMapHTMLFile (GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                             const GALGAS_lstring constinArgument_inSourceFile,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_7232 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 164)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_7379 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 166)) ;
    cEnumerator_globalConstantMap enumerator_7418 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_7418.hasCurrentObject ()) {
      var_firstLetterSet_7379.addAssign_operation (enumerator_7418.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 168)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 168))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 168)) ;
      enumerator_7418.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_7526 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_7560 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_globalConstantMap enumerator_7606 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_7606.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_7560.objectCompare (enumerator_7606.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 173)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_7560 = enumerator_7606.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 174)) ;
        var_tableOfTypeString_7526.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_7560.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 175)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)).add_operation (var_currentFirstLetter_7560.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)) ;
      }
      var_tableOfTypeString_7526.plusAssign_operation(function_linkForGlobalConstant (enumerator_7606.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)) ;
      enumerator_7606.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_8002 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 180)), inArgument_inGlobalConstantMap, var_firstLetterSet_7379, var_tableOfTypeString_7526 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179))) ;
    GALGAS_bool joker_8246 ; // Joker input parameter
    var_typeDumpString_8002.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_7232, joker_8246, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 185)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_7232, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 187)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Filewrapper 'constantDumpGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_constantDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_constantDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_constantDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_constantDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_constantDumpGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Filewrapper template 'constantDumpGenerationTemplate dump'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const GALGAS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
                                                                       const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Global constants of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</title>\n"
    "<style type=\"text/css\">body {\n"
    "  font-family: Georgia, sans-serif ;\n"
    "  font-size: small ;\n"
    "}\n"
    "\n"
    "h1 {\n"
    "  text-align: center ;\n"
    "}\n"
    "\n"
    ".selecteur {\n"
    "  color:green ;\n"
    "}\n"
    "\n"
    "a.header_link {\n"
    "  background-color: #FFFFCC ;\n"
    "}\n"
    "\n"
    "a:visited, a:link, a:active{\n"
    "  color: blue ;\n"
    "  text-decoration: underline ;\n"
    "}\n"
    "\n"
    "a:hover {\n"
    "  color:green ;\n"
    "  background-color: #FFFF00 ;\n"
    "  text-decoration: none ;\n"
    "}\n"
    "\n"
    "table.result {\n"
    "  border: 1px solid #666666 ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "tr.result_line {\n"
    "  background-color: #EEEEEE ;\n"
    "}\n"
    "\n"
    "</style>\n"
    "</head>\n"
    "<body>\n"
    "<div>\n"
    "<h1>Global Constants of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_GLOBAL_5F_CONSTANT_5F_MAP.getter_count (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).stringValue () ;
  result << " defined global constants, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_1005_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1005 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1005.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1005.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).stringValue () ;
      result << "\">" ;
      result << enumerator_1005.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1005.hasNextObject ()) {
        result << " - " ;
      }
      index_1005_.increment () ;
      enumerator_1005.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Constant Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">LLVM Type</td><td class=\"result_title\">V"
    "alue</td></tr>\n" ;
  GALGAS_uint index_1375_ (0) ;
  if (in_GLOBAL_5F_CONSTANT_5F_MAP.isValid ()) {
    cEnumerator_globalConstantMap enumerator_1375 (in_GLOBAL_5F_CONSTANT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1375.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1375.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "\">" ;
      result << enumerator_1375.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</a></td><td>$" ;
      result << extensionGetter_key (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmTypeName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td></tr>\n" ;
      index_1375_.increment () ;
      enumerator_1375.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'linkForGlobalConstant'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_linkForGlobalConstant (const GALGAS_string & constinArgument_inConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 206)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 206)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 206)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 206)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_linkForGlobalConstant [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_linkForGlobalConstant (C_Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForGlobalConstant (operand0,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_linkForGlobalConstant ("linkForGlobalConstant",
                                                                       functionWithGenericHeader_linkForGlobalConstant,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       1,
                                                                       functionArgs_linkForGlobalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@globalConstantDeclaration semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                        const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                        GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                        GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                         extensionMethod_globalConstantDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_semanticAnalysis (defineExtensionMethod_globalConstantDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@moduleDeclarationAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  {
  const GALGAS_moduleDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mModuleName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 126)) ;
  }
  GALGAS_lstring var_moduleTypeName_4662 = function_llvmRegularTypeMangledNameFromName (function_moduleMangledNameFromModuleName (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 127)) ;
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mModuleName, var_moduleTypeName_4662 COMMA_SOURCE_FILE ("declaration-module.galgas", 128)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                               extensionMethod_moduleDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_moduleDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@moduleDeclarationAST keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("module ").add_operation (object->mProperty_mModuleName.getter_string (SOURCE_FILE ("declaration-module.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 134)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                                           extensionGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@moduleDeclarationAST location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_moduleDeclarationAST_location (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  result_outLocation = object->mProperty_mModuleName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_moduleDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                 extensionGetter_moduleDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_moduleDeclarationAST_location (defineExtensionGetter_moduleDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@moduleDeclarationAST addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_addExtension (const cPtr_abstractDeclaration * inObject,
                                                               GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                               GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  const GALGAS_moduleDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                     extensionMethod_moduleDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_addExtension (defineExtensionMethod_moduleDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@moduleDeclarationAST enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  {
  ioArgument_ioContext.mProperty_mModuleMap.setter_insertKey (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 170)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                       extensionMethod_moduleDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_enterInContext (defineExtensionMethod_moduleDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@moduleDeclarationAST enterRoutinesInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                               extensionMethod_moduleDeclarationAST_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_enterRoutinesInContext (defineExtensionMethod_moduleDeclarationAST_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@moduleDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  GALGAS_lstring var_moduleTypeName_8071 = function_moduleMangledNameFromModuleName (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 199)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_moduleType_8137 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_moduleTypeName_8071, inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 200)) ;
  GALGAS_constructorValue var_constructorValue_8286 ;
  constinArgument_inContext.getter_mConstructorMap (HERE).method_searchKey (var_moduleTypeName_8071, var_constructorValue_8286, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 201)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_8382 ;
  GALGAS_constructorSignature joker_8340 ; // Joker input parameter
  var_constructorValue_8286.method_structure (joker_8340, var_sortedOperandList_8382, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 202)) ;
  GALGAS_operandIRList var_initialValueList_8417 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 203)) ;
  cEnumerator_sortedOperandIRList enumerator_8466 (var_sortedOperandList_8382, kENUMERATION_UP) ;
  while (enumerator_8466.hasCurrentObject ()) {
    var_initialValueList_8417.addAssign_operation (enumerator_8466.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 205)) ;
    enumerator_8466.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mModuleList.addAssign_operation (object->mProperty_mModuleName.getter_string (HERE), var_moduleType_8137, var_initialValueList_8417  COMMA_SOURCE_FILE ("declaration-module.galgas", 207)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                         extensionMethod_moduleDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_semanticAnalysis (defineExtensionMethod_moduleDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@staticArrayAST location'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_staticArrayAST_location (const cPtr_abstractDeclaration * inObject,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  result_result = object->mProperty_mStaticListName.getter_location (HERE) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_staticArrayAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                 extensionGetter_staticArrayAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_staticArrayAST_location (defineExtensionGetter_staticArrayAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@staticArrayAST keyRepresentationForErrorSignaling'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_staticArrayAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  result_result = GALGAS_string ("staticlist ").add_operation (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 33)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_staticArrayAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                                           extensionGetter_staticArrayAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_staticArrayAST_keyRepresentationForErrorSignaling (defineExtensionGetter_staticArrayAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@staticArrayAST addExtension'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_addExtension (const cPtr_abstractDeclaration * inObject,
                                                         GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                         GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  const GALGAS_staticArrayAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                     extensionMethod_staticArrayAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_addExtension (defineExtensionMethod_staticArrayAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@staticArrayAST enterInPrecedenceGraph'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  {
  const GALGAS_staticArrayAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mStaticListName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 95)) ;
  }
  cEnumerator_staticArrayPropertyListAST enumerator_4040 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_4040.hasCurrentObject ()) {
    switch (enumerator_4040.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticArrayPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType * extractPtr_4237 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType *) (enumerator_4040.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_4237->mAssociatedValue0 ;
        GALGAS_lstring var_typeName_4127 = function_llvmRegularTypeMangledNameFromName (extractedValue_propertyTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 100)) ;
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_typeName_4127 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 101)) ;
        }
      }
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_function * extractPtr_4696 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_function *) (enumerator_4040.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_4696->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnType = extractPtr_4696->mAssociatedValue2 ;
        cEnumerator_routineFormalArgumentList enumerator_4374 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_4374.hasCurrentObject ()) {
          GALGAS_lstring var_typeName_4398 = function_llvmRegularTypeMangledNameFromName (enumerator_4374.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 104)) ;
          {
          ioArgument_ioGraph.setter_noteNode (var_typeName_4398 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 105)) ;
          }
          enumerator_4374.gotoNextObject () ;
        }
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_returnType.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_lstring var_returnTypeName_4574 = function_llvmRegularTypeMangledNameFromName (extractedValue_returnType, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 108)) ;
          {
          ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_returnTypeName_4574 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 109)) ;
          }
        }
      }
      break ;
    }
    enumerator_4040.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                               extensionMethod_staticArrayAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_enterInPrecedenceGraph (defineExtensionMethod_staticArrayAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@staticArrayAST enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                           const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                           GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                           GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  GALGAS_propertyList var_propertyList_5749 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 134)) ;
  GALGAS_propertyMap var_staticlistPropertyMap_5791 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 135)) ;
  GALGAS_stringset var_propertyNameSet_5825 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-array.galgas", 136)) ;
  GALGAS_lstring var_plmTypeName_5848 = function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 137)) ;
  cEnumerator_staticArrayPropertyListAST enumerator_5944 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_5944.hasCurrentObject ()) {
    switch (enumerator_5944.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticArrayPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType * extractPtr_6550 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType *) (enumerator_5944.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_6550->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_propertyType_6035 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_propertyTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 141)) ;
        const enumGalgasBool test_0 = var_propertyNameSet_5825.getter_hasKey (enumerator_5944.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 142)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 142)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_5944.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 143)), GALGAS_string ("duplicated property name"), fixItArray1  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 143)) ;
        }
        var_propertyNameSet_5825.addAssign_operation (enumerator_5944.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 145))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 145)) ;
        var_propertyList_5749.addAssign_operation (enumerator_5944.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 146)), var_propertyType_6035  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 146)) ;
        GALGAS_uint var_propertyIndex_6341 = var_staticlistPropertyMap_5791.getter_count (SOURCE_FILE ("declaration-static-array.galgas", 147)) ;
        {
        var_staticlistPropertyMap_5791.setter_insertKey (enumerator_5944.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_objectIR::constructor_property (var_propertyType_6035, enumerator_5944.current_mPropertyName (HERE), var_propertyIndex_6341  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 148)) ;
        }
      }
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_function * extractPtr_7965 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_function *) (enumerator_5944.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_mode = extractPtr_7965->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_7965->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnTypeName = extractPtr_7965->mAssociatedValue2 ;
        GALGAS_lstring var_routineMangledName_6704 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_5944.current_mPropertyName (HERE), extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 155)) ;
        GALGAS_routineTypedSignature var_signature_6888 ;
        {
        routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_formalArgs, var_signature_6888, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 161)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 163)) ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 165)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_returnType_6932 = temp_2 ;
        GALGAS_routineDescriptor var_descriptor_7083 = GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (extractedValue_mode  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 167)), var_signature_6888, var_returnType_6932, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 167)) ;
        const enumGalgasBool test_4 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_routineMangledName_6704.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 168)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 168)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 168)).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_routineMangledName_6704, GALGAS_typeKind::constructor_function (var_descriptor_7083  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 169)) ;
          }
        }
        GALGAS_unifiedTypeMap_2D_proxy var_propertyType_7585 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_routineMangledName_6704, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 176)) ;
        var_propertyList_5749.addAssign_operation (enumerator_5944.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 177)), var_propertyType_7585  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 177)) ;
        GALGAS_uint var_propertyIndex_7735 = var_staticlistPropertyMap_5791.getter_count (SOURCE_FILE ("declaration-static-array.galgas", 178)) ;
        {
        var_staticlistPropertyMap_5791.setter_insertKey (var_routineMangledName_6704, GALGAS_bool (true), GALGAS_objectIR::constructor_property (var_propertyType_7585, enumerator_5944.current_mPropertyName (HERE), var_propertyIndex_7735  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 179)) ;
        }
      }
      break ;
    }
    enumerator_5944.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mProperty_mStaticlistMap.setter_insertKey (object->mProperty_mStaticListName, var_propertyList_5749, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 186)) ;
  }
  GALGAS_typeKind var_kind_8109 = GALGAS_typeKind::constructor_structure (function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 192)), var_staticlistPropertyMap_5791, GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("declaration-static-array.galgas", 194)), var_propertyList_5749, GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 191)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_plmTypeName_5848, var_kind_8109, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 198)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                       extensionMethod_staticArrayAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_enterInContext (defineExtensionMethod_staticArrayAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@staticArrayAST enterRoutinesInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                   const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                   GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                   GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                               extensionMethod_staticArrayAST_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_enterRoutinesInContext (defineExtensionMethod_staticArrayAST_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@staticArrayAST semanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                             const GALGAS_semanticContext /* constinArgument_inContext */,
                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                         extensionMethod_staticArrayAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_semanticAnalysis (defineExtensionMethod_staticArrayAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@extendStaticArrayDeclarationAST location'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_extendStaticArrayDeclarationAST_location (const cPtr_abstractDeclaration * inObject,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  result_outLocation = object->mProperty_mStaticlistName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extendStaticArrayDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                 extensionGetter_extendStaticArrayDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extendStaticArrayDeclarationAST_location (defineExtensionGetter_extendStaticArrayDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@extendStaticArrayDeclarationAST keyRepresentationForErrorSignaling'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  result_result = GALGAS_string ("staticlist ").add_operation (object->mProperty_mStaticlistName.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 33)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                                           extensionGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@extendStaticArrayDeclarationAST addExtension'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                          GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                          GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  const GALGAS_extendStaticArrayDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                     extensionMethod_extendStaticArrayDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_addExtension (defineExtensionMethod_extendStaticArrayDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@extendStaticArrayDeclarationAST enterInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  GALGAS_lstring var_nodeName_3941 = GALGAS_lstring::constructor_new (object->mProperty_mStaticlistName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 90)).add_operation (ioArgument_ioGraph.getter_keyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 90)).getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 90)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 90)), object->mProperty_mStaticlistName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 90))  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 90)) ;
  {
  const GALGAS_extendStaticArrayDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3941, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 92)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3941, object->mProperty_mStaticlistName COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 94)) ;
  }
  cEnumerator_extendStaticArrayExpressionListAST enumerator_4276 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_4276.hasCurrentObject ()) {
    switch (enumerator_4276.current_mExpression (HERE).enumValue ()) {
    case GALGAS_extendStaticArrayExpressionAST::kNotBuilt:
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_4410 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_4276.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_4410->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), var_nodeName_3941, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 99)) ;
      }
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_4663 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_4276.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_4663->mAssociatedValue1 ;
        cEnumerator_routineFormalArgumentList enumerator_4527 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_4527.hasCurrentObject ()) {
          GALGAS_lstring var_typeName_4551 = function_llvmRegularTypeMangledNameFromName (enumerator_4527.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 102)) ;
          {
          ioArgument_ioGraph.setter_noteNode (var_typeName_4551 COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 103)) ;
          }
          enumerator_4527.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_4276.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                               extensionMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@extendStaticArrayDeclarationAST enterInContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                            const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                            GALGAS_semanticContext & ioArgument_ioContext,
                                                                            GALGAS_staticlistValues_5F_listMap & ioArgument_ioStaticListValueMap,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  GALGAS_propertyList var_staticArrayPropertyList_5620 ;
  ioArgument_ioContext.getter_mStaticlistMap (HERE).method_searchKey (object->mProperty_mStaticlistName, var_staticArrayPropertyList_5620, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 123)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_staticArrayPropertyList_5620.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 124)).objectCompare (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 124)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mStaticlistName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 125)), var_staticArrayPropertyList_5620.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 126)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 126)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 126)).add_operation (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 127)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 126)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 127)), fixItArray1  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 125)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_staticValue_5869 = GALGAS_string ("{") ;
    cEnumerator_extendStaticArrayExpressionListAST enumerator_5918 (object->mProperty_mExpressions, kENUMERATION_UP) ;
    cEnumerator_propertyList enumerator_5955 (var_staticArrayPropertyList_5620, kENUMERATION_UP) ;
    while (enumerator_5918.hasCurrentObject () && enumerator_5955.hasCurrentObject ()) {
      switch (enumerator_5918.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticArrayExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticArrayExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_7868 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_5918.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_7868->mAssociatedValue0 ;
          const enumGalgasBool test_2 = enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 133)).getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 133)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_5918.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray3  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 134)) ;
          }else if (kBoolFalse == test_2) {
            GALGAS_unifiedSymbolMap var_variableMap_6414 ;
            GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6482 ;
            {
            routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-extend-static-array.galgas", 138)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-extend-static-array.galgas", 140)), var_variableMap_6414, var_universalMap_6482, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 136)) ;
            }
            GALGAS_semanticTemporariesStruct var_temporaries_6543 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-extend-static-array.galgas", 144)) ;
            GALGAS_instructionListIR var_instructionGenerationList_6609 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 145)) ;
            GALGAS_allocaList var_allocaList_6647 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 146)) ;
            GALGAS_objectIR var_expressionResult_7256 ;
            callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 148)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-extend-static-array.galgas", 151)), enumerator_5955.current_mType (HERE), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-extend-static-array.galgas", 154)), var_temporaries_6543, ioArgument_ioGlobalLiteralStringMap, var_variableMap_6414, var_universalMap_6482, var_allocaList_6647, var_instructionGenerationList_6609, var_expressionResult_7256, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 147)) ;
            GALGAS_objectIR var_result_7333 = function_checkAssignmentCompatibility (var_expressionResult_7256, enumerator_5955.current_mType (HERE), enumerator_5918.current_mEndOfExpression (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 164)) ;
            GALGAS_bool test_4 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_6609.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 170)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
            if (kBoolTrue != test_4.boolEnum ()) {
              test_4 = GALGAS_bool (kIsStrictSup, var_allocaList_6647.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 170)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
            }
            GALGAS_bool test_5 = test_4 ;
            if (kBoolTrue != test_5.boolEnum ()) {
              test_5 = extensionGetter_isStatic (var_result_7333, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 170)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 170)) ;
            }
            const enumGalgasBool test_6 = test_5.boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_5918.current_mEndOfExpression (HERE), GALGAS_string ("source expression cannot be statically computed"), fixItArray7  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 171)) ;
            }
            var_staticValue_5869.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)).add_operation (extensionGetter_llvmName (var_expressionResult_7256, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)) ;
          }
        }
        break ;
      case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_10703 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_5918.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_functionName = extractPtr_10703->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_10703->mAssociatedValue1 ;
          const enumGalgasBool test_8 = enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 177)).getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 177)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 177)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_5918.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray9  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 178)) ;
          }else if (kBoolFalse == test_8) {
            GALGAS_routineDescriptor var_functionDescriptor_8149 ;
            enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 180)).method_function (var_functionDescriptor_8149, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 180)) ;
            GALGAS_lstring var_argumentSignature_8182 = extensionGetter_routineSignature (extractedValue_formalArgs, extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 181)) ;
            GALGAS_lstring var_candidateRoutineLLVMName_8389 ;
            GALGAS_routineDescriptor var_routineDescriptor_8443 ;
            GALGAS_location var_functionDefinitionLocation_8487 ;
            extensionMethod_searchKey (ioArgument_ioContext.getter_mRoutineMapForContext (HERE), extractedValue_functionName, var_argumentSignature_8182, var_candidateRoutineLLVMName_8389, var_routineDescriptor_8443, var_functionDefinitionLocation_8487, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 182)) ;
            GALGAS_bool var_candidateIsPublic_8531 = var_routineDescriptor_8443.getter_mIsPublic (HERE) ;
            GALGAS_routineKind var_candidateRoutineKind_8596 = var_routineDescriptor_8443.getter_mRoutineKind (HERE) ;
            GALGAS_mode var_candidateMode_8657 = extensionGetter_executionMode (var_routineDescriptor_8443.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 191)) ;
            GALGAS_routineTypedSignature var_candidateSignature_8774 = var_routineDescriptor_8443.getter_mSignature (HERE) ;
            GALGAS_unifiedTypeMap_2D_proxy var_candidateReturnType_8839 = var_routineDescriptor_8443.getter_mReturnType (HERE) ;
            const enumGalgasBool test_10 = var_candidateIsPublic_8531.operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 195)).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string var_declarationFile_8976 = var_functionDefinitionLocation_8487.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 196)) ;
              GALGAS_string var_invocationFile_9043 = extractedValue_functionName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 197)) ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_invocationFile_9043.objectCompare (var_declarationFile_8976)).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 199)), GALGAS_string ("this function is not public"), fixItArray12  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 199)) ;
              }
            }
            const enumGalgasBool test_13 = var_candidateRoutineKind_8596.getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 202)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 202)).boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 203)), GALGAS_string ("this routine is not a function"), fixItArray14  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 203)) ;
            }
            GALGAS_mode var_currentMode_9385 = extensionGetter_executionMode (var_functionDescriptor_8149.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 205)) ;
            const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, var_currentMode_9385.objectCompare (var_candidateMode_8657)).boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 207)), GALGAS_string ("this function runs in ").add_operation (extensionGetter_string (var_candidateMode_8657, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)).add_operation (GALGAS_string (" mode, but "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)).add_operation (extensionGetter_string (var_currentMode_9385, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)).add_operation (GALGAS_string (" is required"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)), fixItArray16  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)) ;
            }
            GALGAS_bool test_17 = GALGAS_bool (kIsEqual, var_functionDescriptor_8149.getter_mReturnType (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 209)))) ;
            if (kBoolTrue == test_17.boolEnum ()) {
              test_17 = GALGAS_bool (kIsNotEqual, var_candidateReturnType_8839.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 209)))) ;
            }
            const enumGalgasBool test_18 = test_17.boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 210)), GALGAS_string ("this function should return an $").add_operation (var_candidateReturnType_8839.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 210)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 210)), fixItArray19  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 210)) ;
            }else if (kBoolFalse == test_18) {
              GALGAS_bool test_20 = GALGAS_bool (kIsNotEqual, var_functionDescriptor_8149.getter_mReturnType (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 211)))) ;
              if (kBoolTrue == test_20.boolEnum ()) {
                test_20 = GALGAS_bool (kIsEqual, var_candidateReturnType_8839.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 211)))) ;
              }
              const enumGalgasBool test_21 = test_20.boolEnum () ;
              if (kBoolTrue == test_21) {
                TC_Array <C_FixItDescription> fixItArray22 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 212)), GALGAS_string ("this function should return no object"), fixItArray22  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 212)) ;
              }
            }
            const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, var_functionDescriptor_8149.getter_mSignature (HERE).getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 214)).objectCompare (var_candidateSignature_8774.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 214)))).boolEnum () ;
            if (kBoolTrue == test_23) {
              TC_Array <C_FixItDescription> fixItArray24 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 215)), GALGAS_string ("this function has ").add_operation (var_candidateSignature_8774.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 216)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 216)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 216)).add_operation (var_functionDescriptor_8149.getter_mSignature (HERE).getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 217)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 216)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 217)), fixItArray24  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 215)) ;
            }else if (kBoolFalse == test_23) {
              cEnumerator_routineTypedSignature enumerator_10347 (var_functionDescriptor_8149.getter_mSignature (HERE), kENUMERATION_UP) ;
              cEnumerator_routineTypedSignature enumerator_10380 (var_candidateSignature_8774, kENUMERATION_UP) ;
              while (enumerator_10347.hasCurrentObject () && enumerator_10380.hasCurrentObject ()) {
                const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_10347.current (HERE).getter_mType (HERE).objectCompare (enumerator_10380.current (HERE).getter_mType (HERE))).boolEnum () ;
                if (kBoolTrue == test_25) {
                  TC_Array <C_FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (enumerator_10380.current (HERE).getter_mSelector (HERE).getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 221)), GALGAS_string ("argument type should be $").add_operation (enumerator_10347.current (HERE).getter_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 221)), fixItArray26  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 221)) ;
                }
                enumerator_10347.gotoNextObject () ;
                enumerator_10380.gotoNextObject () ;
              }
            }
            var_staticValue_5869.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)).add_operation (function_llvmNameForFunction (var_candidateRoutineLLVMName_8389.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)) ;
          }
        }
        break ;
      }
      if (enumerator_5918.hasNextObject () && enumerator_5955.hasNextObject ()) {
        var_staticValue_5869.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 229)) ;
      }
      enumerator_5918.gotoNextObject () ;
      enumerator_5955.gotoNextObject () ;
    }
    var_staticValue_5869.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 231)) ;
    ioArgument_ioStaticListValueMap.addAssign_operation (object->mProperty_mStaticlistName.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 232)), var_staticValue_5869  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 232)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                       extensionMethod_extendStaticArrayDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_enterInContext (defineExtensionMethod_extendStaticArrayDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@extendStaticArrayDeclarationAST enterRoutinesInContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                                    GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                                    GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                               extensionMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext (defineExtensionMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@extendStaticArrayDeclarationAST semanticAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                              const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  GALGAS_stringset var_invokedFunctionSet_12170 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-extend-static-array.galgas", 263)) ;
  cEnumerator_extendStaticArrayExpressionListAST enumerator_12216 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_12216.hasCurrentObject ()) {
    switch (enumerator_12216.current_mExpression (HERE).enumValue ()) {
    case GALGAS_extendStaticArrayExpressionAST::kNotBuilt:
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_12288 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_12216.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_12288->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_12570 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_12216.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_functionName = extractPtr_12570->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_12570->mAssociatedValue1 ;
        GALGAS_lstring var_routineMangledName_12429 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_functionName, extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 269)) ;
        var_invokedFunctionSet_12170.addAssign_operation (var_routineMangledName_12429.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 274))  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 274)) ;
      }
      break ;
    }
    enumerator_12216.gotoNextObject () ;
  }
  cMapElement_staticArrayMap * objectArray_12591 = (cMapElement_staticArrayMap *) ioArgument_ioTemporaries.mProperty_mStaticArrayMap.readWriteAccessForWithInstruction (inCompiler, object->mProperty_mStaticlistName.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 277)) ;
  if (NULL != objectArray_12591) {
      macroValidSharedObject (objectArray_12591, cMapElement_staticArrayMap) ;
    objectArray_12591->mProperty_mInvokedFunctionSet.plusAssign_operation(var_invokedFunctionSet_12170, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 278)) ;
  }else{
    {
    ioArgument_ioTemporaries.mProperty_mStaticArrayMap.setter_insertKey (object->mProperty_mStaticlistName, var_invokedFunctionSet_12170, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 280)) ;
    }
  }
  cMapElement_staticArrayMap * objectArray_12803 = (cMapElement_staticArrayMap *) ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMap.readWriteAccessForWithInstruction (inCompiler, object->mProperty_mStaticlistName.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 282)) ;
  if (NULL != objectArray_12803) {
      macroValidSharedObject (objectArray_12803, cMapElement_staticArrayMap) ;
    objectArray_12803->mProperty_mInvokedFunctionSet.plusAssign_operation(var_invokedFunctionSet_12170, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 283)) ;
  }else{
    {
    ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMap.setter_insertKey (object->mProperty_mStaticlistName, var_invokedFunctionSet_12170, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 285)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                         extensionMethod_extendStaticArrayDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_semanticAnalysis (defineExtensionMethod_extendStaticArrayDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'checkMode'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_calleeKindIR function_checkMode (const GALGAS_mode & constinArgument_inCallerMode,
                                        const GALGAS_mode & constinArgument_inCalleeMode,
                                        const GALGAS_routineKind & constinArgument_inRoutineKind,
                                        const GALGAS_location & constinArgument_inErrorLocation,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_calleeKindIR result_outResult ; // Returned variable
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 63)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_outResult = GALGAS_calleeKindIR::constructor_safeFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 64)) ;
      }else if (kBoolFalse == test_0) {
        result_outResult = GALGAS_calleeKindIR::constructor_safeFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 66)) ;
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 69)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_outResult = GALGAS_calleeKindIR::constructor_sectionFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 70)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_bool test_2 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 71)))) ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 71)))) ;
        }
        const enumGalgasBool test_3 = test_2.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_outResult = GALGAS_calleeKindIR::constructor_sectionFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 72)) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a section cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 74)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 74)), fixItArray4  COMMA_SOURCE_FILE ("logical-modes.galgas", 74)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 77)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_outResult = GALGAS_calleeKindIR::constructor_primitiveFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 78)) ;
      }else if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a primitive cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 80)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 80)), fixItArray6  COMMA_SOURCE_FILE ("logical-modes.galgas", 80)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 83)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        result_outResult = GALGAS_calleeKindIR::constructor_serviceFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 84)) ;
      }else if (kBoolFalse == test_7) {
        GALGAS_bool test_8 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 85)))) ;
        if (kBoolTrue != test_8.boolEnum ()) {
          test_8 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_guardMode (SOURCE_FILE ("logical-modes.galgas", 85)))) ;
        }
        const enumGalgasBool test_9 = test_8.boolEnum () ;
        if (kBoolTrue == test_9) {
          result_outResult = GALGAS_calleeKindIR::constructor_serviceFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 86)) ;
        }else if (kBoolFalse == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a service cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 88)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 88)), fixItArray10  COMMA_SOURCE_FILE ("logical-modes.galgas", 88)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      GALGAS_bool var_ok_3103 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (constinArgument_inCalleeMode)) ;
      const enumGalgasBool test_11 = var_ok_3103.operator_not (SOURCE_FILE ("logical-modes.galgas", 92)).boolEnum () ;
      if (kBoolTrue == test_11) {
        switch (constinArgument_inCallerMode.enumValue ()) {
        case GALGAS_mode::kNotBuilt:
          break ;
        case GALGAS_mode::kEnum_userMode:
          {
            var_ok_3103 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 95)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_sectionMode:
          {
            GALGAS_bool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 97)))) ;
            if (kBoolTrue != test_12.boolEnum ()) {
              test_12 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 97)))) ;
            }
            var_ok_3103 = test_12 ;
          }
          break ;
        case GALGAS_mode::kEnum_serviceMode:
          {
            GALGAS_bool test_13 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 99)))) ;
            if (kBoolTrue != test_13.boolEnum ()) {
              test_13 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 99)))) ;
            }
            GALGAS_bool test_14 = test_13 ;
            if (kBoolTrue != test_14.boolEnum ()) {
              test_14 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 99)))) ;
            }
            var_ok_3103 = test_14 ;
          }
          break ;
        case GALGAS_mode::kEnum_primitiveMode:
          {
            GALGAS_bool test_15 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            if (kBoolTrue != test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            }
            GALGAS_bool test_16 = test_15 ;
            if (kBoolTrue != test_16.boolEnum ()) {
              test_16 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            }
            GALGAS_bool test_17 = test_16 ;
            if (kBoolTrue != test_17.boolEnum ()) {
              test_17 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            }
            var_ok_3103 = test_17 ;
          }
          break ;
        case GALGAS_mode::kEnum_guardMode:
          {
            GALGAS_bool test_18 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            if (kBoolTrue != test_18.boolEnum ()) {
              test_18 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            }
            GALGAS_bool test_19 = test_18 ;
            if (kBoolTrue != test_19.boolEnum ()) {
              test_19 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            }
            GALGAS_bool test_20 = test_19 ;
            if (kBoolTrue != test_20.boolEnum ()) {
              test_20 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            }
            var_ok_3103 = test_20 ;
          }
          break ;
        case GALGAS_mode::kEnum_panicMode:
        case GALGAS_mode::kEnum_initMode:
          {
            GALGAS_bool test_21 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 105)))) ;
            if (kBoolTrue != test_21.boolEnum ()) {
              test_21 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 105)))) ;
            }
            var_ok_3103 = test_21 ;
          }
          break ;
        case GALGAS_mode::kEnum_bootMode:
          {
          }
          break ;
        case GALGAS_mode::kEnum_safeMode:
          {
            var_ok_3103 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 108)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_anyMode:
          {
          }
          break ;
        }
      }
      const enumGalgasBool test_22 = var_ok_3103.operator_not (SOURCE_FILE ("logical-modes.galgas", 112)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a func ").add_operation (extensionGetter_string (constinArgument_inCalleeMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)).add_operation (GALGAS_string (" cannot be called from "), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)).add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)), fixItArray23  COMMA_SOURCE_FILE ("logical-modes.galgas", 113)) ;
      }
      result_outResult = GALGAS_calleeKindIR::constructor_function (SOURCE_FILE ("logical-modes.galgas", 116)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkMode [5] = {
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkMode (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_mode operand0 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_mode operand1 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_routineKind operand2 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_location operand3 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_checkMode (operand0,
                             operand1,
                             operand2,
                             operand3,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkMode ("checkMode",
                                                           functionWithGenericHeader_checkMode,
                                                           & kTypeDescriptor_GALGAS_calleeKindIR,
                                                           4,
                                                           functionArgs_checkMode) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'panicModeName'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_panicModeName (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("panic") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicModeName = false ;
static GALGAS_string gOnceFunctionResult_panicModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_panicModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicModeName) {
    gOnceFunctionResult_panicModeName = onceFunction_panicModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicModeName = true ;
  }
  return gOnceFunctionResult_panicModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicModeName (void) {
  gOnceFunctionResult_panicModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicModeName (NULL,
                                                           releaseOnceFunctionResult_panicModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicModeName (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_panicModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicModeName ("panicModeName",
                                                               functionWithGenericHeader_panicModeName,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_panicModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'generateSectionAndSafeDispatcher'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSectionAndSafeDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                               const GALGAS_string constinArgument_inTargetName,
                                               const GALGAS_string constinArgument_inSectionInvocationScheme,
                                               GALGAS_string & ioArgument_ioAssemblerCode,
                                               const GALGAS__32_stringlist constinArgument_inSectionAndSafeList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator__32_stringlist enumerator_9585 (constinArgument_inSectionAndSafeList, kENUMERATION_UP) ;
  GALGAS_uint index_9531 ((uint32_t) 0) ;
  while (enumerator_9585.hasCurrentObject ()) {
    GALGAS_string var_s_9604 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 266)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 266)).add_operation (GALGAS_string ("-section-invocation.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 264)) ;
    var_s_9604 = var_s_9604.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_9585.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 268)) ;
    var_s_9604 = var_s_9604.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_9585.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 269)) ;
    var_s_9604 = var_s_9604.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_9531.getter_string (SOURCE_FILE ("declaration-svc.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 270)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_9604, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 271)) ;
    enumerator_9585.gotoNextObject () ;
    index_9531.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 275)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 275)).add_operation (GALGAS_string ("-section-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 273)) ;
  cEnumerator__32_stringlist enumerator_10246 (constinArgument_inSectionAndSafeList, kENUMERATION_UP) ;
  GALGAS_uint index_10192 ((uint32_t) 0) ;
  while (enumerator_10246.hasCurrentObject ()) {
    GALGAS_string var_s_10265 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 280)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 280)).add_operation (GALGAS_string ("-section-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 278)) ;
    var_s_10265 = var_s_10265.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_10246.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 282)) ;
    var_s_10265 = var_s_10265.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_10246.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 283)) ;
    var_s_10265 = var_s_10265.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_10192.getter_string (SOURCE_FILE ("declaration-svc.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 284)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_10265, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 285)) ;
    enumerator_10246.gotoNextObject () ;
    index_10192.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 277)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 287)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)).add_operation (GALGAS_string ("-section-dispatcher-code.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 288)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 292)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 293)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'generatePrimitiveAndServiceDispatcher'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generatePrimitiveAndServiceDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                                    const GALGAS_string constinArgument_inTargetName,
                                                    GALGAS_string & ioArgument_ioAssemblerCode,
                                                    const GALGAS__32_stringlist constinArgument_inServiceList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator__32_stringlist enumerator_11377 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_11347 ((uint32_t) 0) ;
  while (enumerator_11377.hasCurrentObject ()) {
    GALGAS_string var_s_11396 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)) ;
    var_s_11396 = var_s_11396.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_11377.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 306)) ;
    var_s_11396 = var_s_11396.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_11347.getter_string (SOURCE_FILE ("declaration-svc.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 307)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_11396, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 308)) ;
    enumerator_11377.gotoNextObject () ;
    index_11347.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 304)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 310)) ;
  cEnumerator__32_stringlist enumerator_11822 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_11782 ((uint32_t) 0) ;
  while (enumerator_11822.hasCurrentObject ()) {
    GALGAS_string var_s_11841 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 312)) ;
    var_s_11841 = var_s_11841.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_11822.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 313)) ;
    var_s_11841 = var_s_11841.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_11782.getter_string (SOURCE_FILE ("declaration-svc.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 314)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_11841, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 315)) ;
    enumerator_11822.gotoNextObject () ;
    index_11782.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 311)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 317)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'initSemanticAnalysis'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initSemanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                   const GALGAS_lbigint constinArgument_inPriority,
                                   const GALGAS_mode constinArgument_inCurrentMode,
                                   const GALGAS_lstringlist constinArgument_inRequiredByProcList,
                                   const GALGAS_instructionListAST constinArgument_inInstructionListAST,
                                   const GALGAS_location constinArgument_inEndOfInitDeclaration,
                                   GALGAS_allocaList & outArgument_outAllocaList,
                                   GALGAS_instructionListIR & outArgument_outInstructionGenerationList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAllocaList.drop () ; // Release 'out' argument
  outArgument_outInstructionGenerationList.drop () ; // Release 'out' argument
  GALGAS_lstring var_routineNameForInvocationGraph_5574 = function_initNameForInvocationGraph (constinArgument_inSelfType, constinArgument_inPriority, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 138)) ;
  {
  ioArgument_ioTemporaries.mProperty_mInitRoutinePriorityMap.setter_insertKey (var_routineNameForInvocationGraph_5574, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 139)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineNameForInvocationGraph_5574.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-init.galgas", 141)).operator_not (SOURCE_FILE ("declaration-init.galgas", 141)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_5574, var_routineNameForInvocationGraph_5574, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 142)) ;
    }
  }
  cEnumerator_lstringlist enumerator_6021 (constinArgument_inRequiredByProcList, kENUMERATION_UP) ;
  while (enumerator_6021.hasCurrentObject ()) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (enumerator_6021.current_mValue (HERE), var_routineNameForInvocationGraph_5574 COMMA_SOURCE_FILE ("declaration-init.galgas", 148)) ;
    }
    enumerator_6021.gotoNextObject () ;
  }
  GALGAS_unifiedSymbolMap var_variableMap_6337 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6397 ;
  {
  routine_initialVariableMap (constinArgument_inContext, GALGAS_mode::constructor_initMode (SOURCE_FILE ("declaration-init.galgas", 156)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-init.galgas", 158)), var_variableMap_6337, var_universalMap_6397, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 154)) ;
  }
  outArgument_outInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 163)) ;
  outArgument_outAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 164)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inInstructionListAST, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_routineNameForInvocationGraph_5574, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6337, var_universalMap_6397, outArgument_outAllocaList, outArgument_outInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 165)) ;
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_6397.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 181)) ;
  var_variableMap_6337.method_checkAutomatonStates (constinArgument_inEndOfInitDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 182)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'checkRequiredProcedures'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkRequiredProcedures (const GALGAS_ast constinArgument_inAST,
                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                      const GALGAS_location /* constinArgument_inEndOfSourceFile */,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_requiredProcedureDeclarationListAST enumerator_2388 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2388.hasCurrentObject ()) {
    GALGAS_lstring var_argumentSignature_2417 = extensionGetter_routineSignature (enumerator_2388.current (HERE).getter_mFormalArgumentList (HERE), enumerator_2388.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
    const enumGalgasBool test_0 = extensionGetter_hasKey (constinArgument_inSemanticContext.getter_mRoutineMapForContext (HERE), enumerator_2388.current (HERE).getter_mName (HERE), var_argumentSignature_2417, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 65)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 65)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_2388.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 66)), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_routineDescriptor var_routineDescriptor_2845 ;
      GALGAS_location var_routineLocation_2884 ;
      GALGAS_lstring joker_2794 ; // Joker input parameter
      extensionMethod_searchKey (constinArgument_inSemanticContext.getter_mRoutineMapForContext (HERE), enumerator_2388.current (HERE).getter_mName (HERE), var_argumentSignature_2417, joker_2794, var_routineDescriptor_2845, var_routineLocation_2884, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 68)) ;
      GALGAS_bool var_isExported_2913 = var_routineDescriptor_2845.getter_mExported (HERE) ;
      GALGAS_mode var_mode_2958 = extensionGetter_executionMode (var_routineDescriptor_2845.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 76)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_mode_2958.objectCompare (enumerator_2388.current (HERE).getter_mExecutionMode (HERE))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_routineLocation_2884, GALGAS_string ("required mode should be '").add_operation (extensionGetter_string (enumerator_2388.current (HERE).getter_mExecutionMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)) ;
      }
      GALGAS_bool test_4 = enumerator_2388.current (HERE).getter_mIsExported (HERE) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_isExported_2913.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 82)) ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        appendFixItActions (fixItArray6, kFixItInsertAfter, GALGAS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 85))) ;
        inCompiler->emitSemanticError (var_routineLocation_2884, GALGAS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)).add_operation (GALGAS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)), fixItArray6  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 83)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_7 = var_isExported_2913 ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = enumerator_2388.current (HERE).getter_mIsExported (HERE).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 86)) ;
        }
        const enumGalgasBool test_8 = test_7.boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_routineLocation_2884, GALGAS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 88)).add_operation (GALGAS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 88)), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 87)) ;
        }
      }
    }
    enumerator_2388.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'guardSemanticAnalysis'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_guardSemanticAnalysis (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                    const GALGAS_lstring constinArgument_inRoutineName,
                                    const GALGAS_routineFormalArgumentList constinArgument_inRoutineFormalArgumentList,
                                    const GALGAS_guardKind constinArgument_inGuardKind,
                                    const GALGAS_instructionListAST constinArgument_inRoutineInstructionList,
                                    const GALGAS_location constinArgument_inEndOfRoutineDeclaration,
                                    const GALGAS_bool constinArgument_inWarnIfUnused,
                                    const GALGAS_semanticContext constinArgument_inContext,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 169)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("$").add_operation (constinArgument_inSelfType.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 169)) ;
  }
  GALGAS_lstring var_guardMangledName_6153 = function_routineMangledNameFromAST (temp_0, constinArgument_inRoutineName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 168)) ;
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_guardMangledName_6153.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 174)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 174)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_guardMangledName_6153, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)) ;
    }
  }
  GALGAS_unifiedSymbolMap var_variableMap_6738 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6798 ;
  {
  routine_initialVariableMap (constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 183)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 185)), var_variableMap_6738, var_universalMap_6798, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 181)) ;
  }
  GALGAS_routineFormalArgumentListForGeneration var_formalArguments_6860 = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 189)) ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR_6919 ;
  GALGAS_allocaList var_allocaList_6944 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 191)) ;
  GALGAS_instructionListIR var_instructionGenerationList_6996 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 192)) ;
  switch (constinArgument_inGuardKind.enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      GALGAS_lstring var_resultVarName_7099 = GALGAS_lstring::constructor_new (function_acceptVariableName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_7181 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 197)).getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 197)) ;
      var_allocaList_6944.addAssign_operation (var_resultVarName_7099.getter_string (HERE), extensionGetter_llvmTypeName (var_resultType_7181.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 198))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)) ;
      {
      var_universalMap_6798.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_7358 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_6798.ptr () ;
      callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7358, var_resultVarName_7099, GALGAS_objectIR::constructor_localVariableReference (var_resultType_7181, var_resultVarName_7099  COMMA_SOURCE_FILE ("declaration-guard.galgas", 201)), GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("declaration-guard.galgas", 202)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 199)) ;
      }
      {
      var_variableMap_6738.setter_insertOutputFormalArgument (var_resultVarName_7099, var_resultType_7181, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_resultType_7181, var_resultVarName_7099  COMMA_SOURCE_FILE ("declaration-guard.galgas", 209)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 205)) ;
      }
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_6738, var_universalMap_6798, var_formalArguments_6860, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 214)) ;
      }
      var_convenienceGuardGenerationIR_6919 = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 221)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6153, constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 229)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6738, var_universalMap_6798, var_allocaList_6944, var_instructionGenerationList_6996, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 223)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_9844 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (constinArgument_inGuardKind.unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_baseGuardInstruction = extractPtr_9844->mAssociatedValue0 ;
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_6738, var_universalMap_6798, var_formalArguments_6860, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 239)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((const cPtr_callInstructionAST *) extractedValue_baseGuardInstruction.ptr (), constinArgument_inSelfType, var_guardMangledName_6153, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 251)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6738, var_universalMap_6798, var_convenienceGuardGenerationIR_6919, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 247)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6153, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 265)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6738, var_universalMap_6798, var_allocaList_6944, var_instructionGenerationList_6996, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 259)) ;
    }
    break ;
  }
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_6798.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 276)) ;
  var_variableMap_6738.method_checkAutomatonStates (constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 277)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mGuardMapIR.setter_insertKey (var_guardMangledName_6153, var_formalArguments_6860, constinArgument_inSelfType, var_convenienceGuardGenerationIR_6919, var_allocaList_6944, var_instructionGenerationList_6996, constinArgument_inWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 280)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@simpleCallInstructionAST baseGuardAnalyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_simpleCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                       const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                       const GALGAS_mode /* constinArgument_inMode */,
                                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                       GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                                       GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                       GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_simpleCallInstructionAST * object = (const cPtr_simpleCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_simpleCallInstructionAST) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_mSandAloneRoutineName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 317)), GALGAS_string ("NOT HANDLED YET"), fixItArray0  COMMA_SOURCE_FILE ("declaration-guard.galgas", 317)) ;
  outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_simpleCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_simpleCallInstructionAST.mSlotID,
                                         extensionMethod_simpleCallInstructionAST_baseGuardAnalyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_simpleCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_simpleCallInstructionAST_baseGuardAnalyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@complexCallInstructionAST baseGuardAnalyze'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complexCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                                        const GALGAS_mode constinArgument_inMode,
                                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                        GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                        GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                        GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complexCallInstructionAST * object = (const cPtr_complexCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complexCallInstructionAST) ;
  GALGAS_allocaList var_baseGuardAllocaList_12460 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 333)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_12521 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 334)) ;
  GALGAS_objectIR var_currentObject_13086 ;
  GALGAS_string var_globalVariableReceiverName_13157 ;
  callExtensionMethod_analyzeAssignmentTarget ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("declaration-guard.galgas", 337)), GALGAS_bool (false), GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 342)), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_12460, var_baseGuardInstructionGenerationList_12521, var_currentObject_13086, var_globalVariableReceiverName_13157, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 335)) ;
  const enumGalgasBool test_0 = var_currentObject_13086.getter_isPossibleFunction (SOURCE_FILE ("declaration-guard.galgas", 353)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 353)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-guard.galgas", 354)), GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("declaration-guard.galgas", 354)) ;
    outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_objectIR var_receiver_13381 ;
    GALGAS_lstring var_functionName_13412 ;
    var_currentObject_13086.method_possibleFunction (var_receiver_13381, var_functionName_13412, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 356)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14080 ;
    GALGAS_calleeKindIR var_routineKind_14136 ;
    GALGAS_lstring var_functionMangledName_14195 ;
    GALGAS_lstring var_functionNameForGeneration_14273 ;
    GALGAS_unifiedTypeMap_2D_proxy var_returnedType_14330 ;
    {
    routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, GALGAS_bool (false), GALGAS_bool (true), var_receiver_13381, var_functionName_13412, object->mProperty_mArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_12460, var_baseGuardInstructionGenerationList_12521, var_effectiveParameterListIR_14080, var_routineKind_14136, var_functionMangledName_14195, var_functionNameForGeneration_14273, var_returnedType_14330, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 357)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_returnedType_14330.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 379)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_13412.getter_location (SOURCE_FILE ("declaration-guard.galgas", 380)), GALGAS_string ("<< internal guard error >>"), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 380)) ;
    }
    outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_12460, var_baseGuardInstructionGenerationList_12521, var_functionMangledName_14195.getter_string (HERE), var_effectiveParameterListIR_14080  COMMA_SOURCE_FILE ("declaration-guard.galgas", 383)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complexCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_complexCallInstructionAST.mSlotID,
                                         extensionMethod_complexCallInstructionAST_baseGuardAnalyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complexCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_complexCallInstructionAST_baseGuardAnalyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@convertExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inConstantName,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 44)) ;
  GALGAS_lstring var_typeName_2042 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2042 COMMA_SOURCE_FILE ("expression-convert.galgas", 46)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                             extensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@convertExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 54)) ;
  GALGAS_lstring var_typeName_2686 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2686 COMMA_SOURCE_FILE ("expression-convert.galgas", 56)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                             extensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@convertExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                    const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                    const GALGAS_bool constinArgument_inGuard,
                                                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode constinArgument_inCurrentMode,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                    GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_objectIR & outArgument_outResult,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4689 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4689, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 82)) ;
  GALGAS_objectIR var_expressionResult_4850 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4689, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 101)), var_expressionResult_4850, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 98)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 105)).operator_not (SOURCE_FILE ("expression-convert.galgas", 105)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 106)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), fixItArray1  COMMA_SOURCE_FILE ("expression-convert.galgas", 106)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_5055 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 109)) ;
  const enumGalgasBool test_2 = var_resultType_5055.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 111)).operator_not (SOURCE_FILE ("expression-convert.galgas", 111)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 112)), GALGAS_string ("this type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-convert.galgas", 112)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = extensionGetter_kind (var_expressionResult_4850, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 113)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 113)).operator_not (SOURCE_FILE ("expression-convert.galgas", 113)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-convert.galgas", 114)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bigint var_minSource_5450 ;
      GALGAS_bigint var_maxSource_5469 ;
      GALGAS_bool joker_5471_2 ; // Joker input parameter
      GALGAS_uint joker_5471_1 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4850, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)).method_integer (var_minSource_5450, var_maxSource_5469, joker_5471_2, joker_5471_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)) ;
      GALGAS_bigint var_minTarget_5524 ;
      GALGAS_bigint var_maxTarget_5543 ;
      GALGAS_bool joker_5545_2 ; // Joker input parameter
      GALGAS_uint joker_5545_1 ; // Joker input parameter
      var_resultType_5055.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 117)).method_integer (var_minTarget_5524, var_maxTarget_5543, joker_5545_2, joker_5545_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 117)) ;
      GALGAS_bool test_6 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5524.objectCompare (var_minSource_5450)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5543.objectCompare (var_maxSource_5469)) ;
      }
      GALGAS_bool var_alwaysPossible_5571 = test_6 ;
      const enumGalgasBool test_7 = var_alwaysPossible_5571.boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 120)), GALGAS_string ("useless explicit conversion"), fixItArray8  COMMA_SOURCE_FILE ("expression-convert.galgas", 120)) ;
      }
      {
      routine_getNewTempVariable (var_resultType_5055, object->mProperty_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 122)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4850  COMMA_SOURCE_FILE ("expression-convert.galgas", 124))  COMMA_SOURCE_FILE ("expression-convert.galgas", 124)) ;
      }else if (kBoolFalse == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4850, object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-convert.galgas", 129))  COMMA_SOURCE_FILE ("expression-convert.galgas", 129)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                          extensionMethod_convertExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_analyzeExpression (defineExtensionMethod_convertExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@convertInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                          GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                                extensionMethod_convertInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertInstructionIR_enterAccessibleEntities (defineExtensionMethod_convertInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@convertInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                      GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertInstructionIR * object = (const cPtr_convertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_convertInstructionIR) ;
  GALGAS_uint var_staticStringIndex_7512 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 166)).getter_stringByDeletingPathExtension (SOURCE_FILE ("expression-convert.galgas", 166)), var_staticStringIndex_7512, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)) ;
  }
  GALGAS_string var_lbl_7526 = object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)).getter_string (SOURCE_FILE ("expression-convert.galgas", 169)) ;
  GALGAS_string var_convertMinOkLabel_7587 = GALGAS_string ("min.").add_operation (var_lbl_7526, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)) ;
  GALGAS_string var_convertMaxOkLabel_7634 = GALGAS_string ("max.").add_operation (var_lbl_7526, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)) ;
  GALGAS_string var_convertFailLabel_7680 = GALGAS_string ("fail.").add_operation (var_lbl_7526, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)) ;
  GALGAS_string var_compareMinVar_7717 = GALGAS_string ("cmp.").add_operation (var_lbl_7526, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
  GALGAS_string var_compareMaxVar_7765 = GALGAS_string ("cmp.").add_operation (var_lbl_7526, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)) ;
  GALGAS_bigint var_minTarget_7838 ;
  GALGAS_bigint var_maxTarget_7857 ;
  GALGAS_bool joker_7859_2 ; // Joker input parameter
  GALGAS_uint joker_7859_1 ; // Joker input parameter
  extensionGetter_kind (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).method_integer (var_minTarget_7838, var_maxTarget_7857, joker_7859_2, joker_7859_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)) ;
  GALGAS_bigint var_minSource_7908 ;
  GALGAS_bool var_operandIsUnsigned_7947 ;
  GALGAS_bigint joker_7914 ; // Joker input parameter
  GALGAS_uint joker_7949_1 ; // Joker input parameter
  extensionGetter_kind (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).method_integer (var_minSource_7908, joker_7914, var_operandIsUnsigned_7947, joker_7949_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)) ;
  GALGAS_string var_operandType_7970 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_minTarget_7838.objectCompare (var_minSource_7908)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar_7717, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_operandIsUnsigned_7947.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("uge") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("sge") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 180)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7970, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (var_minTarget_7838.getter_string (SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar_7717, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertMinOkLabel_7587, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertFailLabel_7680, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel_7587.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar_7765, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  GALGAS_string temp_3 ;
  const enumGalgasBool test_4 = var_operandIsUnsigned_7947.boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 186)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7970, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (var_maxTarget_7857.getter_string (SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar_7765, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertMaxOkLabel_7634, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertFailLabel_7680, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel_7680.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 189)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_7512.getter_string (SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 190)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).getter_string (SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 191)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_string (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel_7634.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 194)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (var_operandType_7970, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 195)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                            extensionMethod_convertInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertInstructionIR_llvmInstructionCode (defineExtensionMethod_convertInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@extendExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inConstantName,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 44)) ;
  GALGAS_lstring var_typeName_2038 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2038 COMMA_SOURCE_FILE ("expression-extend.galgas", 46)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                             extensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@extendExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 54)) ;
  GALGAS_lstring var_typeName_2681 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2681 COMMA_SOURCE_FILE ("expression-extend.galgas", 56)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                             extensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@extendExpressionAST analyzeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                   const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                   const GALGAS_bool constinArgument_inGuard,
                                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_mode constinArgument_inCurrentMode,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                   GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                   GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4683 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4683, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 82)) ;
  GALGAS_objectIR var_expressionResult_4844 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4683, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 101)), var_expressionResult_4844, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 98)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_4885 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 105)) ;
  const enumGalgasBool test_0 = var_resultType_4885.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 107)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 107)).operator_not (SOURCE_FILE ("expression-extend.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 108)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-extend.galgas", 108)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_kind (var_expressionResult_4844, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 109)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 109)).operator_not (SOURCE_FILE ("expression-extend.galgas", 109)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-extend.galgas", 110)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bool var_sourceIsUnsigned_5306 ;
      GALGAS_uint var_sourceSize_5331 ;
      GALGAS_bigint joker_5267 ; // Joker input parameter
      GALGAS_bigint joker_5274 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4844, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 112)).method_integer (joker_5267, joker_5274, var_sourceIsUnsigned_5306, var_sourceSize_5331, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 112)) ;
      GALGAS_bool var_targetIsUnsigned_5408 ;
      GALGAS_uint var_targetSize_5433 ;
      GALGAS_bigint joker_5369 ; // Joker input parameter
      GALGAS_bigint joker_5376 ; // Joker input parameter
      var_resultType_4885.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)).method_integer (joker_5369, joker_5376, var_targetIsUnsigned_5408, var_targetSize_5433, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)) ;
      GALGAS_bool test_4 = var_sourceIsUnsigned_5306 ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_targetIsUnsigned_5408 ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_sourceSize_5331.objectCompare (var_targetSize_5433)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 116)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray7  COMMA_SOURCE_FILE ("expression-extend.galgas", 116)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_sourceSize_5331.objectCompare (var_targetSize_5433)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 118)), GALGAS_string ("same size: useless extend operation"), fixItArray9  COMMA_SOURCE_FILE ("expression-extend.galgas", 118)) ;
          }
        }
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_10 = var_sourceIsUnsigned_5306 ;
        if (kBoolTrue == test_10.boolEnum ()) {
          test_10 = var_targetIsUnsigned_5408.operator_not (SOURCE_FILE ("expression-extend.galgas", 120)) ;
        }
        const enumGalgasBool test_11 = test_10.boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsSupOrEqual, var_sourceSize_5331.objectCompare (var_targetSize_5433)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 122)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray13  COMMA_SOURCE_FILE ("expression-extend.galgas", 122)) ;
          }
        }else if (kBoolFalse == test_11) {
          GALGAS_bool test_14 = var_sourceIsUnsigned_5306.operator_not (SOURCE_FILE ("expression-extend.galgas", 124)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = var_targetIsUnsigned_5408 ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 125)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray16  COMMA_SOURCE_FILE ("expression-extend.galgas", 125)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_sourceSize_5331.objectCompare (var_targetSize_5433)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 128)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 128)) ;
            }else if (kBoolFalse == test_17) {
              const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, var_sourceSize_5331.objectCompare (var_targetSize_5433)).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 130)), GALGAS_string ("same size: useless extend operation"), fixItArray20  COMMA_SOURCE_FILE ("expression-extend.galgas", 130)) ;
              }
            }
          }
        }
      }
      {
      routine_getNewTempVariable (var_resultType_4885, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 133)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 133)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_4844, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 134)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                          extensionMethod_extendExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_analyzeExpression (defineExtensionMethod_extendExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@truncateExpressionAST addDependenceEdgeForStaticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inConstantName,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 44)) ;
  GALGAS_lstring var_typeName_2046 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2046 COMMA_SOURCE_FILE ("expression-truncate.galgas", 46)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                             extensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@truncateExpressionAST noteExpressionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 54)) ;
  GALGAS_lstring var_typeName_2691 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2691 COMMA_SOURCE_FILE ("expression-truncate.galgas", 56)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                             extensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@truncateExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_bool constinArgument_inGuard,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     GALGAS_objectIR & outArgument_outResult,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4689 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-truncate.galgas", 87)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4689, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 82)) ;
  GALGAS_objectIR var_expressionResult_4850 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4689, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 101)), var_expressionResult_4850, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 98)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_4891 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 105)) ;
  const enumGalgasBool test_0 = var_resultType_4891.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 107)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 108)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-truncate.galgas", 108)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_kind (var_expressionResult_4850, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 109)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 109)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 109)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-truncate.galgas", 110)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bigint var_minSource_5286 ;
      GALGAS_bigint var_maxSource_5305 ;
      GALGAS_uint var_expSize_5339 ;
      GALGAS_bool joker_5316 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4850, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)).method_integer (var_minSource_5286, var_maxSource_5305, joker_5316, var_expSize_5339, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)) ;
      GALGAS_bigint var_minTarget_5390 ;
      GALGAS_bigint var_maxTarget_5409 ;
      GALGAS_uint var_resultSize_5446 ;
      GALGAS_bool joker_5420 ; // Joker input parameter
      var_resultType_4891.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 113)).method_integer (var_minTarget_5390, var_maxTarget_5409, joker_5420, var_resultSize_5446, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 113)) ;
      GALGAS_bool test_4 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5390.objectCompare (var_minSource_5286)) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5409.objectCompare (var_maxSource_5305)) ;
      }
      GALGAS_bool var_alwaysPossible_5470 = test_4 ;
      const enumGalgasBool test_5 = var_alwaysPossible_5470.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 116)), GALGAS_string ("useless explicit conversion"), fixItArray6  COMMA_SOURCE_FILE ("expression-truncate.galgas", 116)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictInf, var_resultSize_5446.objectCompare (var_expSize_5339)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        routine_getNewTempVariable (var_resultType_4891, object->mProperty_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 119)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4850  COMMA_SOURCE_FILE ("expression-truncate.galgas", 120))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 120)) ;
      }else if (kBoolFalse == test_7) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4850, var_resultType_4891, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 125)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                          extensionMethod_truncateExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_analyzeExpression (defineExtensionMethod_truncateExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@truncateInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                           GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                           GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                                extensionMethod_truncateInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateInstructionIR_enterAccessibleEntities (defineExtensionMethod_truncateInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@truncateInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateInstructionIR * object = (const cPtr_truncateInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_truncateInstructionIR) ;
  GALGAS_string var_operandType_7152 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (var_operandType_7152, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 158)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                            extensionMethod_truncateInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateInstructionIR_llvmInstructionCode (defineExtensionMethod_truncateInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@constructorCall addDependenceEdgeForStaticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCall_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inConstantName,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_lstring var_typeName_2058 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, var_typeName_2058 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 50)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCall_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                                             extensionMethod_constructorCall_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_addDependenceEdgeForStaticExpression (defineExtensionMethod_constructorCall_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@constructorCall noteExpressionTypesInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_lstring var_typeName_2649 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 58)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2649 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 59)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                                             extensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@constructorCall analyzeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                               const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                               const GALGAS_bool constinArgument_inGuard,
                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_mode constinArgument_inCurrentMode,
                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                               GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & outArgument_outResult,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_3970 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_resultType_3970 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_resultType_3970 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_3970.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-constructor-call.galgas", 89)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 90)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constructorValue var_initValue_4295 ;
    constinArgument_inContext.getter_mConstructorMap (HERE).method_searchKey (var_resultType_3970.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)).getter_nowhere (SOURCE_FILE ("expression-constructor-call.galgas", 92)), var_initValue_4295, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)) ;
    switch (var_initValue_4295.enumValue ()) {
    case GALGAS_constructorValue::kNotBuilt:
      break ;
    case GALGAS_constructorValue::kEnum_zero:
      {
        outArgument_outResult = GALGAS_objectIR::constructor_zero (var_resultType_3970  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)) ;
      }
      break ;
    case GALGAS_constructorValue::kEnum_simple:
      {
        const cEnumAssociatedValues_constructorValue_simple * extractPtr_4644 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_4295.unsafePointer ()) ;
        const GALGAS_bigint extractedValue_value = extractPtr_4644->mAssociatedValue0 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 97)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("$").add_operation (var_resultType_3970.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 98)).add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 98)), fixItArray4  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 98)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_3970, extractedValue_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 100)) ;
        }
      }
      break ;
    case GALGAS_constructorValue::kEnum_structure:
      {
        const cEnumAssociatedValues_constructorValue_structure * extractPtr_6624 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_4295.unsafePointer ()) ;
        const GALGAS_constructorSignature extractedValue_constructorSignature = extractPtr_6624->mAssociatedValue0 ;
        const GALGAS_sortedOperandIRList extractedValue_sortedOperandList = extractPtr_6624->mAssociatedValue1 ;
        GALGAS_sortedOperandIRList var_sortedOperandIRList_4736 = extractedValue_sortedOperandList ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 104)).objectCompare (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 104)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 106)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("this constructor call should name ").add_operation (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 105)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 106)).add_operation (object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 107)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 107)), fixItArray8  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          cEnumerator_constructorSignature enumerator_5143 (extractedValue_constructorSignature, kENUMERATION_UP) ;
          cEnumerator_functionCallEffectiveParameterList enumerator_5176 (object->mProperty_mParameterList, kENUMERATION_UP) ;
          while (enumerator_5143.hasCurrentObject () && enumerator_5176.hasCurrentObject ()) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_5176.current_mSelector (HERE).getter_string (HERE).objectCompare (enumerator_5143.current_mSelector (HERE))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_5176.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-constructor-call.galgas", 112)), GALGAS_string ("the selector should be '!").add_operation (enumerator_5143.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 112)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 112)), fixItArray10  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 112)) ;
            }
            GALGAS_objectIR var_expressionResult_6042 ;
            callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5176.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, enumerator_5143.current_mType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6042, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 114)) ;
            GALGAS_objectIR var_result_6075 = function_checkAssignmentCompatibility (var_expressionResult_6042, enumerator_5143.current_mType (HERE), enumerator_5176.current_mSelector (HERE).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)) ;
            var_sortedOperandIRList_4736.addAssign_operation (var_result_6075, enumerator_5143.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 136)) ;
            enumerator_5143.gotoNextObject () ;
            enumerator_5176.gotoNextObject () ;
          }
          GALGAS_operandIRList var_initialValueList_6410 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 138)) ;
          cEnumerator_sortedOperandIRList enumerator_6467 (var_sortedOperandIRList_4736, kENUMERATION_UP) ;
          while (enumerator_6467.hasCurrentObject ()) {
            var_initialValueList_6410.addAssign_operation (enumerator_6467.current_mOperand (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 140)) ;
            enumerator_6467.gotoNextObject () ;
          }
          outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureConstant (var_resultType_3970, var_initialValueList_6410  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 142)) ;
        }
      }
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCall_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                          extensionMethod_constructorCall_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_analyzeExpression (defineExtensionMethod_constructorCall_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@typedConstantCall addDependenceEdgeForStaticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 42)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 42)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                                             extensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_addDependenceEdgeForStaticExpression (defineExtensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@typedConstantCall noteExpressionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                                             extensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@typedConstantCall analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                 const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                 const GALGAS_bool /* constinArgument_inGuard */,
                                                                 const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                 GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inferredResultType_4001 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_inferredResultType_4001 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_inferredResultType_4001 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 81)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_inferredResultType_4001.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-typed-constant.galgas", 83)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("expression-typed-constant.galgas", 84)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 84)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_classConstantMap var_classConstantMap_4309 = extensionGetter_classConstantMap (var_inferredResultType_4001, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 86)) ;
    var_classConstantMap_4309.method_searchKey (object->mProperty_mConstructorName, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 87)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCall_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                          extensionMethod_typedConstantCall_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_analyzeExpression (defineExtensionMethod_typedConstantCall_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@ifExpressionAST addDependenceEdgeForStaticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inConstantName,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 54)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 55)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                             extensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@ifExpressionAST noteExpressionTypesInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 64)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 65)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                             extensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@ifExpressionAST analyzeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                               const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                               const GALGAS_bool constinArgument_inGuard,
                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_mode constinArgument_inCurrentMode,
                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                               GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & outArgument_outResult,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_objectIR var_ifExpressionResult_5020 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResult_5020, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 90)) ;
  const enumGalgasBool test_0 = extensionGetter_kind (var_ifExpressionResult_5020, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 107)).getter_isBoolean (SOURCE_FILE ("expression-if.galgas", 107)).operator_not (SOURCE_FILE ("expression-if.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mIfExpressionEndLocation, GALGAS_string ("'if' expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-if.galgas", 108)) ;
  }
  GALGAS_objectIR var_thenExpressionTempResult_5808 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionTempResult_5808, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 111)) ;
  GALGAS_objectIR var_thenExpressionResult_5839 = function_checkAssignmentCompatibility (var_thenExpressionTempResult_5808, constinArgument_inOptionalTargetType, object->mProperty_mThenExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 127)) ;
  GALGAS_objectIR var_elseExpressionTempResult_6645 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionTempResult_6645, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 134)) ;
  GALGAS_objectIR var_elseExpressionResult_6676 = function_checkAssignmentCompatibility (var_elseExpressionTempResult_6645, extensionGetter_type (var_thenExpressionResult_5839, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 152)), object->mProperty_mElseExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 150)) ;
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_ifExpressionResult_5020, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 157)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value_7043 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_7024_1 ; // Joker input parameter
    var_ifExpressionResult_5020.method_literalInteger (joker_7024_1, var_value_7043, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 158)) ;
    GALGAS_objectIR temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_7043.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 159)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = var_thenExpressionResult_5839 ;
    }else if (kBoolFalse == test_4) {
      temp_3 = var_elseExpressionResult_6676 ;
    }
    outArgument_outResult = temp_3 ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempVariable (extensionGetter_type (var_elseExpressionResult_6676, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 161)), object->mProperty_mIfExpressionEndLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 161)) ;
    }
    {
    extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_ifExpressionResult_5020, var_thenExpressionResult_5839, var_elseExpressionResult_6676, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 162)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                          extensionMethod_ifExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_analyzeExpression (defineExtensionMethod_ifExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@infixOperatorExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inConstantName,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 55)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST addDependenceEdgeForStaticExpression'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                              const GALGAS_lstring constinArgument_inConstantName,
                                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 65)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                                             extensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@infixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 74)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 81)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                                             extensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@infixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                          const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                          const GALGAS_bool constinArgument_inGuard,
                                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_objectIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_objectIR var_leftOperandPossibleReference_6264 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperandPossibleReference_6264, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 131)) ;
  GALGAS_objectIR var_leftOperand_6423 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_6264, object->mProperty_mOperatorLocation, var_leftOperand_6423, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 147)) ;
  }
  GALGAS_objectIR var_rightOperandPossibleReference_7058 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_6423, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 159)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperandPossibleReference_7058, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 154)) ;
  GALGAS_objectIR var_rightOperand_7219 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_7058, object->mProperty_mOperatorLocation, var_rightOperand_7219, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 170)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap_7281 = function_getInfixOperatorMap (object->mProperty_mOp, constinArgument_inContext, constinArgument_inCurrentMode, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 177)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_7588 ;
  GALGAS_infixOperatorDescription var_binaryOperator_7641 ;
  extensionMethod_checkBinaryOperationWith (var_operatorMap_7281, extensionGetter_type (var_leftOperand_6423, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 180)), extensionGetter_type (var_rightOperand_7219, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 181)), object->mProperty_mOperatorLocation, var_resultType_7588, var_binaryOperator_7641, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 179)) ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_7641.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_leftOperand_6423, object->mProperty_mOperatorLocation, var_rightOperand_7219, var_resultType_7588, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 187)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                          extensionMethod_infixOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_infixOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'getInfixOperatorMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap function_getInfixOperatorMap (const GALGAS_infixOperator & constinArgument_inOp,
                                                      const GALGAS_semanticContext & constinArgument_inContext,
                                                      const GALGAS_mode & constinArgument_inCurrentMode,
                                                      const GALGAS_location & constinArgument_inOperatorLocation,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result_outOperatorMap ; // Returned variable
  switch (constinArgument_inOp.enumValue ()) {
  case GALGAS_infixOperator::kNotBuilt:
    break ;
  case GALGAS_infixOperator::kEnum_equal:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_nonEqual:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mNonEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictInf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mStrictInfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_infEqual:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mInfEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictSup:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mStrictSupOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_supEqual:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mSupEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mAndOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mOrOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_xorOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_booleanXorOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mBooleanXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOp:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 230)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_outOperatorMap = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_2) {
        result_outOperatorMap = constinArgument_inContext.getter_mAddOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOp:
    {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 241)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 242)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 242)), fixItArray4  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 242)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_outOperatorMap = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_5) {
        result_outOperatorMap = constinArgument_inContext.getter_mSubOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 252)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 253)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 253)), fixItArray7  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 253)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_8) {
        result_outOperatorMap = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_8) {
        result_outOperatorMap = constinArgument_inContext.getter_mMulOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOp:
    {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 263)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 264)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 264)), fixItArray10  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 264)) ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_11) {
        result_outOperatorMap = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_11) {
        result_outOperatorMap = constinArgument_inContext.getter_mDivOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOp:
    {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 274)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 275)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 275)), fixItArray13  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 275)) ;
      }
      const enumGalgasBool test_14 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_14) {
        result_outOperatorMap = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_14) {
        result_outOperatorMap = constinArgument_inContext.getter_mModOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_leftShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mLeftShiftOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_rightShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mRightShiftOperatorMap (HERE) ;
    }
    break ;
  }
//---
  return result_outOperatorMap ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_getInfixOperatorMap [5] = {
  & kTypeDescriptor_GALGAS_infixOperator,
  & kTypeDescriptor_GALGAS_semanticContext,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_getInfixOperatorMap (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_infixOperator operand0 = GALGAS_infixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                             inCompiler
                                                                             COMMA_THERE) ;
  const GALGAS_semanticContext operand1 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  const GALGAS_mode operand2 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_location operand3 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_getInfixOperatorMap (operand0,
                                       operand1,
                                       operand2,
                                       operand3,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_getInfixOperatorMap ("getInfixOperatorMap",
                                                                     functionWithGenericHeader_getInfixOperatorMap,
                                                                     & kTypeDescriptor_GALGAS_infixOperatorMap,
                                                                     4,
                                                                     functionArgs_getInfixOperatorMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                                           const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                           GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  GALGAS_instructionListIR var_leftInstructionGenerationList_12248 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 310)) ;
  GALGAS_objectIR var_leftOperandPossibleReference_12838 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_12248, var_leftOperandPossibleReference_12838, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 311)) ;
  GALGAS_objectIR var_leftOperand_12997 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_12838, object->mProperty_mOperatorLocation, var_leftOperand_12997, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 327)) ;
  }
  GALGAS_instructionListIR var_rightInstructionGenerationList_13085 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 334)) ;
  GALGAS_objectIR var_rightOperandPossibleReference_13676 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_12997, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 340)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_13085, var_rightOperandPossibleReference_13676, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 335)) ;
  GALGAS_objectIR var_rightOperand_13837 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_13676, object->mProperty_mOperatorLocation, var_rightOperand_13837, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 351)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_leftOperand_12997, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 358)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 358)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 359)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_rightOperand_13837, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 362)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 362)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray3  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 363)) ;
  }
  {
  routine_getNewTempVariable (constinArgument_inContext.getter_mBooleanType (HERE), object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 366)) ;
  }
  {
  extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand_12997, var_leftInstructionGenerationList_12248, var_rightOperand_13837, var_rightInstructionGenerationList_13085, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 368)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                          extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@prefixOperatorExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                              const GALGAS_lstring constinArgument_inConstantName,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@prefixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@prefixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_prefixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                           const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                           GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_3662 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_3662, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 60)) ;
  GALGAS_objectIR var_expressionResult_3831 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_3662, object->mProperty_mOperatorLocation, var_expressionResult_3831, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 76)) ;
  }
  GALGAS_prefixOperatorMap var_prefixOperatorMap_3927 ;
  GALGAS_llvmBinaryOperation var_binaryOperator_3965 ;
  GALGAS_objectIR var_leftOperand_3989 ;
  switch (object->mProperty_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_prefixOperatorMap_3927 = constinArgument_inContext.getter_mUnsignedComplementOperatorMap (HERE) ;
      var_binaryOperator_3965 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 89)) ;
      switch (extensionGetter_kind (var_expressionResult_3831, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 90)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_arrayType:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray0  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 92)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_opaque:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray1  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 94)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray2  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 96)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 98)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 100)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray5  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 102)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray6  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 104)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_pointer:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 106)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-prefix-operators.galgas", 108)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to static int, without inferred type"), fixItArray9  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)) ;
            var_leftOperand_3989.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_8) {
            const enumGalgasBool test_10 = constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 110)).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 110)).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_bigint var_minTarget_5181 ;
              GALGAS_bigint var_maxTarget_5200 ;
              GALGAS_bool joker_5202_2 ; // Joker input parameter
              GALGAS_uint joker_5202_1 ; // Joker input parameter
              constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 111)).method_integer (var_minTarget_5181, var_maxTarget_5200, joker_5202_2, joker_5202_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 111)) ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsStrictInf, var_minTarget_5181.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 112)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray12  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 113)) ;
                var_leftOperand_3989.drop () ; // Release error dropped variable
              }else if (kBoolFalse == test_11) {
                var_leftOperand_3989 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), var_maxTarget_5200  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 115)) ;
              }
            }else if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray13  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 118)) ;
              var_leftOperand_3989.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_5761 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_kind (var_expressionResult_3831, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 90)).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_5761->mAssociatedValue3 ;
          var_leftOperand_3989 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_prefixOperatorMap_3927 = constinArgument_inContext.getter_mNotOperatorMap (HERE) ;
      var_binaryOperator_3965 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 125)) ;
      var_leftOperand_3989 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_prefixOperatorMap_3927 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      var_binaryOperator_3965 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 129)) ;
      var_leftOperand_3989 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 130))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 130)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_prefixOperatorMap_3927 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-prefix-operators.galgas", 133)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)), fixItArray15  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 134)) ;
      }
      const enumGalgasBool test_16 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_16) {
        var_binaryOperator_3965 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 138)) ;
        var_leftOperand_3989 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139)) ;
      }else if (kBoolFalse == test_16) {
        var_binaryOperator_3965 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 141)) ;
        var_leftOperand_3989 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)) ;
      }
    }
    break ;
  }
  var_prefixOperatorMap_3927.method_searchKey (GALGAS_lstring::constructor_new (extensionGetter_key (var_expressionResult_3831, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 146)), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 146)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_6822 = extensionGetter_type (var_expressionResult_3831, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 147)) ;
  const enumGalgasBool test_17 = var_expressionResult_3831.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 149)).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_bigint var_value_6965 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_6938_1 ; // Joker input parameter
    var_expressionResult_3831.method_literalInteger (joker_6938_1, var_value_6965, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 150)) ;
    GALGAS_bigint var_result_6985 ;
    switch (object->mProperty_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result_6985 = var_value_6965.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 154)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-prefix-operators.galgas", 156)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to static int, without inferred type"), fixItArray19  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 157)) ;
          var_result_6985.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_18) {
          const enumGalgasBool test_20 = constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 158)).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 158)).boolEnum () ;
          if (kBoolTrue == test_20) {
            GALGAS_bigint var_minTarget_7356 ;
            GALGAS_bigint var_maxTarget_7375 ;
            GALGAS_bool joker_7377_2 ; // Joker input parameter
            GALGAS_uint joker_7377_1 ; // Joker input parameter
            constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 159)).method_integer (var_minTarget_7356, var_maxTarget_7375, joker_7377_2, joker_7377_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 159)) ;
            const enumGalgasBool test_21 = GALGAS_bool (kIsStrictInf, var_minTarget_7356.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 160)))).boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray22  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 161)) ;
              var_result_6985.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_21) {
              var_result_6985 = var_value_6965.operator_xor (var_maxTarget_7375 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)) ;
            }
          }else if (kBoolFalse == test_20) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray23  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 166)) ;
            var_result_6985.drop () ; // Release error dropped variable
          }
        }
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result_6985 = var_value_6965.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 169)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result_6985 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 171)).operator_xor (var_value_6965 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 171)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_6822, var_result_6985  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 173)) ;
  }else if (kBoolFalse == test_17) {
    {
    routine_getNewTempVariable (var_resultType_6822, object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 176)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 180)), object->mProperty_mOperatorLocation, var_leftOperand_3989, var_binaryOperator_3965, var_expressionResult_3831, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 178)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                          extensionMethod_prefixOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring constinArgument_inConstantName,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                             extensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalIntegerInExpressionAST noteExpressionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                             extensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalIntegerInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                             const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), object->mProperty_mLiteralInteger.getter_bigint (HERE)  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                          extensionMethod_literalIntegerInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_analyzeExpression (defineExtensionMethod_literalIntegerInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                               const GALGAS_lstring constinArgument_inConstantName,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (GALGAS_lstring::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                             extensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalStringInExpressionAST noteExpressionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                             extensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@literalStringInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                            const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                            const GALGAS_bool /* constinArgument_inGuard */,
                                                                            const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                            GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_3769 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 65)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 65)) ;
  GALGAS_uint var_staticStringIndex_3959 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mProperty_mLiteralString.getter_string (HERE), var_staticStringIndex_3959, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 66)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (var_type_3769, object->mProperty_mLiteralString.getter_string (HERE).getter_length (SOURCE_FILE ("expression-literal-string.galgas", 67)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 67)), var_staticStringIndex_3959  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                          extensionMethod_literalStringInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_analyzeExpression (defineExtensionMethod_literalStringInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalBooleanInExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring constinArgument_inConstantName,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                             extensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalBooleanInExpressionAST noteExpressionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                             extensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalBooleanInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBooleanInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                             const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBooleanInExpressionAST * object = (const cPtr_literalBooleanInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBooleanInExpressionAST) ;
  GALGAS_bigint temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mValue.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 72)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 72)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mBooleanType (HERE), temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBooleanInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                          extensionMethod_literalBooleanInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_analyzeExpression (defineExtensionMethod_literalBooleanInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@registerConstantExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                                             extensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@registerConstantExpressionAST noteExpressionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  cEnumerator_registerIntegerFieldListAST enumerator_3082 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_3082.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_3082.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 70)) ;
    enumerator_3082.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                                             extensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@registerConstantExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                             const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                             const GALGAS_bool constinArgument_inGuard,
                                                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inCurrentMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                             GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_registerType_4447 ;
  GALGAS_sliceMap var_registerBitSliceMap_4507 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_4558 ;
  GALGAS_bigint var_registerAddress_4598 ;
  GALGAS_uint var_registerBitCount_4631 ;
  GALGAS_uint var_powerOfTwoForArraySize_4670 ;
  GALGAS_uint var_elementArraySize_4703 ;
  GALGAS_bool joker_4453 ; // Joker input parameter
  GALGAS_bool joker_4460 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_4604 ; // Joker input parameter
  constinArgument_inContext.getter_mControlRegisterMap (HERE).method_searchKey (object->mProperty_mRegisterName, var_registerType_4447, joker_4453, joker_4460, var_registerBitSliceMap_4507, var_registerFieldMap_4558, var_registerAddress_4598, joker_4604, var_registerBitCount_4631, var_powerOfTwoForArraySize_4670, var_elementArraySize_4703, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 95)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_4815 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 109)) ;
  cEnumerator_lstringlist enumerator_4857 (object->mProperty_mMaskFieldNames, kENUMERATION_UP) ;
  while (enumerator_4857.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_4940 ;
    GALGAS_uint var_fieldBitCount_4971 ;
    var_registerFieldMap_4558.method_searchKey (enumerator_4857.current_mValue (HERE), var_fieldBitIndex_4940, var_fieldBitCount_4971, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 111)) ;
    GALGAS_bigint var_mask_4990 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)).left_shift_operation (var_fieldBitCount_4971 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)) ;
    var_accumulatedFieldStaticValues_4815 = var_accumulatedFieldStaticValues_4815.operator_or (var_mask_4990.left_shift_operation (var_fieldBitIndex_4940 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 117)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 117)) ;
    enumerator_4857.gotoNextObject () ;
  }
  GALGAS_operandList var_operandList_5214 = GALGAS_operandList::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 120)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_5283 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_5283.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_5366 ;
    GALGAS_uint var_fieldBitCount_5397 ;
    var_registerFieldMap_4558.method_searchKey (enumerator_5283.current_mFieldName (HERE), var_fieldBitIndex_5366, var_fieldBitCount_5397, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 122)) ;
    GALGAS_objectIR var_expressionResult_6010 ;
    callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5283.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-cst-registre.galgas", 133)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6010, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 128)) ;
    switch (extensionGetter_kind (var_expressionResult_6010, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 145)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_arrayType:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray0  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 147)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_opaque:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray1  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 149)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray2  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 151)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray3  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 155)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 157)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_pointer:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 159)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_function:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 161)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
        GALGAS_bigint var_value_7039 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_7012_1 ; // Joker input parameter
        var_expressionResult_6010.method_literalInteger (joker_7012_1, var_value_7039, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)) ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_value_7039.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 164)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray9  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 165)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsStrictInf, var_value_7039.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)).left_shift_operation (var_fieldBitCount_5397 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            var_accumulatedFieldStaticValues_4815 = var_accumulatedFieldStaticValues_4815.operator_or (var_value_7039.left_shift_operation (var_fieldBitIndex_5366 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167)) ;
          }else if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)).left_shift_operation (var_fieldBitCount_5397 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)), fixItArray11  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)) ;
          }
        }
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_9255 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_kind (var_expressionResult_6010, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 145)).unsafePointer ()) ;
        const GALGAS_bigint extractedValue_min = extractPtr_9255->mAssociatedValue0 ;
        const GALGAS_bigint extractedValue_max = extractPtr_9255->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_unsigned = extractPtr_9255->mAssociatedValue2 ;
        const GALGAS_uint extractedValue_expressionBitCount = extractPtr_9255->mAssociatedValue3 ;
        const enumGalgasBool test_12 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 172)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 173)) ;
        }else if (kBoolFalse == test_12) {
          GALGAS_bool test_14 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5397)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175)).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 175)) ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("operations that can generate panic are not allowed here: the expression should be an $uint").add_operation (var_fieldBitCount_5397.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177)), fixItArray16  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 176)) ;
          }
          GALGAS_bool test_17 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5397)) ;
          if (kBoolTrue == test_17.boolEnum ()) {
            test_17 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 180)) ;
          }
          GALGAS_bool test_18 = test_17 ;
          if (kBoolTrue == test_18.boolEnum ()) {
            test_18 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 180)) ;
          }
          const enumGalgasBool test_19 = test_18.boolEnum () ;
          if (kBoolTrue == test_19) {
            {
            extensionSetter_appendUpperBoundCheck (ioArgument_ioInstructionGenerationList, var_expressionResult_6010, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183)).left_shift_operation (var_fieldBitCount_5397 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183)), GALGAS_uint ((uint32_t) 8U), enumerator_5283.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 181)) ;
            }
          }
          GALGAS_objectIR var_partialResult_8354 = var_expressionResult_6010 ;
          const enumGalgasBool test_20 = GALGAS_bool (kIsStrictInf, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4631)).boolEnum () ;
          if (kBoolTrue == test_20) {
            GALGAS_objectIR var_extendedResult_8527 ;
            {
            routine_getNewTempVariable (var_registerType_4447, enumerator_5283.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_extendedResult_8527, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 191)) ;
            }
            {
            extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_8527, var_partialResult_8354, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 192)) ;
            }
            var_partialResult_8354 = var_extendedResult_8527 ;
          }else if (kBoolFalse == test_20) {
            const enumGalgasBool test_21 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4631)).boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_objectIR var_truncatedResult_8813 ;
              {
              routine_getNewTempVariable (var_registerType_4447, enumerator_5283.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_truncatedResult_8813, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 195)) ;
              }
              {
              extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_truncatedResult_8813, var_partialResult_8354, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 196)) ;
              }
              var_partialResult_8354 = var_truncatedResult_8813 ;
            }
          }
          GALGAS_objectIR var_shiftedResult_9081 ;
          {
          routine_getNewTempVariable (var_registerType_4447, enumerator_5283.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_shiftedResult_9081, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 200)) ;
          }
          {
          extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_9081, var_partialResult_8354, var_fieldBitIndex_5366, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 201)) ;
          }
          var_operandList_5214.addAssign_operation (var_shiftedResult_9081  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 203)) ;
        }
      }
      break ;
    }
    enumerator_5283.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_4447, var_accumulatedFieldStaticValues_4815  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 208)) ;
  cEnumerator_operandList enumerator_9450 (var_operandList_5214, kENUMERATION_UP) ;
  while (enumerator_9450.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_9537 ;
    {
    routine_getNewTempVariable (var_registerType_4447, object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 210)), ioArgument_ioTemporaries, var_newResult_9537, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 210)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_9537, extensionGetter_type (var_newResult_9537, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-cst-registre.galgas", 216)), enumerator_9450.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)) ;
    }
    outArgument_outResult = var_newResult_9537 ;
    enumerator_9450.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                          extensionMethod_registerConstantExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_analyzeExpression (defineExtensionMethod_registerConstantExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@primaryInExpressionAST addDependenceEdgeForStaticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inConstantName,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mObjectName COMMA_SOURCE_FILE ("expression-primary.galgas", 161)) ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_6023 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_6023.hasCurrentObject ()) {
    switch (enumerator_6023.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_6087 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_6023.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6087->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_6232 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_6023.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_6232->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 166)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_6782 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_6023.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_6782->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_6318 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_6318.hasCurrentObject ()) {
          switch (enumerator_6318.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_6572 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_6318.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_6572->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 173)) COMMA_SOURCE_FILE ("expression-primary.galgas", 173)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_6685 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_6318.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_6685->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 175)) ;
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
          enumerator_6318.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_6023.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                             extensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@primaryInExpressionAST noteExpressionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_7311 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_7311.hasCurrentObject ()) {
    switch (enumerator_7311.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_7375 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_7311.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7375->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_7504 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_7311.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_7504->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 193)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_8038 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_7311.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_8038->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_7590 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_7590.hasCurrentObject ()) {
          switch (enumerator_7590.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_7844 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_7590.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_7844->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 200)) COMMA_SOURCE_FILE ("expression-primary.galgas", 200)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_7941 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_7590.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_7941->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 202)) ;
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
          enumerator_7590.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_7311.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                             extensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'handlePropertyAccessInExpressionNew'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpressionNew (GALGAS_internalRepresentation & ioArgument_ioInternalRepresentation,
                                                  const GALGAS_lstring constinArgument_inPropertyName,
                                                  const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                  const GALGAS_semanticContext /* constinArgument_inContext */,
                                                  const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                  GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                  GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                  GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                  GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_15165 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_15165->mAssociatedValue0 ;
      GALGAS_objectIR var_objectIR_12322 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_12254 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_12254, extractedValue_identifier, var_objectIR_12322, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 298)) ;
      }
      switch (var_objectIR_12322.enumValue ()) {
      case GALGAS_objectIR::kNotBuilt:
        break ;
      case GALGAS_objectIR::kEnum_globalVariableReference:
        {
          const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_12759 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (var_objectIR_12322.unsafePointer ()) ;
          const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_12759->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmName = extractPtr_12759->mAssociatedValue1 ;
          const enumGalgasBool test_0 = extractedValue_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 301)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 301)).boolEnum () ;
          if (kBoolTrue == test_0) {
            GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_12529 ;
            GALGAS_lstring joker_12482 ; // Joker input parameter
            GALGAS_propertyMap joker_12497 ; // Joker input parameter
            GALGAS_propertyList joker_12531_2 ; // Joker input parameter
            GALGAS_uint joker_12531_1 ; // Joker input parameter
            extractedValue_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 302)).method_structure (joker_12482, joker_12497, var_structureMap_12529, joker_12531_2, joker_12531_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 302)) ;
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureProperty (constinArgument_inPropertyName, var_structureMap_12529  COMMA_SOURCE_FILE ("expression-primary.galgas", 303)) ;
          }else if (kBoolFalse == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 305)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 305)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_null:
        {
        }
        break ;
      case GALGAS_objectIR::kEnum_selfObject:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 309)), GALGAS_string ("\xC2""\xAB""selfObject\xC2""\xBB"" invalid here"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 309)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_localVariableReference:
        {
          const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_13327 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (var_objectIR_12322.unsafePointer ()) ;
          const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_13327->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmName = extractPtr_13327->mAssociatedValue1 ;
          const enumGalgasBool test_3 = extractedValue_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 311)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 311)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_13097 ;
            GALGAS_lstring joker_13050 ; // Joker input parameter
            GALGAS_propertyMap joker_13065 ; // Joker input parameter
            GALGAS_propertyList joker_13099_2 ; // Joker input parameter
            GALGAS_uint joker_13099_1 ; // Joker input parameter
            extractedValue_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 312)).method_structure (joker_13050, joker_13065, var_structureMap_13097, joker_13099_2, joker_13099_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 312)) ;
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureProperty (constinArgument_inPropertyName, var_structureMap_13097  COMMA_SOURCE_FILE ("expression-primary.galgas", 313)) ;
          }else if (kBoolFalse == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 315)), GALGAS_string ("this should be a structure instance"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 315)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_registerReference:
        {
          const cEnumAssociatedValues_objectIR_registerReference * extractPtr_14205 = (const cEnumAssociatedValues_objectIR_registerReference *) (var_objectIR_12322.unsafePointer ()) ;
          const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_14205->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmName = extractPtr_14205->mAssociatedValue1 ;
          const GALGAS_bool extractedValue_readable = extractPtr_14205->mAssociatedValue2 ;
          const GALGAS_bool extractedValue_writable = extractPtr_14205->mAssociatedValue3 ;
          const GALGAS_bigint extractedValue_address = extractPtr_14205->mAssociatedValue4 ;
          const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_14205->mAssociatedValue5 ;
          const GALGAS_uint extractedValue_arraySize = extractPtr_14205->mAssociatedValue6 ;
          const GALGAS_uint extractedValue_elementSize = extractPtr_14205->mAssociatedValue7 ;
          GALGAS_llvmBinaryOperation var_accessOperator_13872 ;
          GALGAS_bigint var_accessRightOperand_13920 ;
          GALGAS_sliceMap var_subMap_13951 ;
          GALGAS_unifiedTypeMap_2D_proxy var_resultType_14005 ;
          extractedValue_sliceMap.method_searchKey (constinArgument_inPropertyName, var_accessOperator_13872, var_accessRightOperand_13920, var_subMap_13951, var_resultType_14005, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 325)) ;
          ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_registerBitField (constinArgument_inPropertyName, var_subMap_13951, extractedValue_arraySize, extractedValue_elementSize  COMMA_SOURCE_FILE ("expression-primary.galgas", 331)) ;
        }
        break ;
      case GALGAS_objectIR::kEnum_temporaryReference:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 338)), GALGAS_string ("\xC2""\xAB""temporaryReference\xC2""\xBB"" invalid here"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 338)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 340)), GALGAS_string ("\xC2""\xAB""property\xC2""\xBB"" invalid here"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 340)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmTemporaryValue:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 342)), GALGAS_string ("\xC2""\xAB""llvmTemporaryValue\xC2""\xBB"" invalid here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 342)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalInteger:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 344)), GALGAS_string ("\xC2""\xAB""literalInteger\xC2""\xBB"" invalid here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 344)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmStructureConstant:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 346)), GALGAS_string ("\xC2""\xAB""llvmStructureConstant\xC2""\xBB"" invalid here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 346)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 348)), GALGAS_string ("a global string constant is invalid here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 348)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_zero:
        {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 350)), GALGAS_string ("\xC2""\xAB""zero\xC2""\xBB"" invalid here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 350)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_possibleFunction:
        {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 352)), GALGAS_string ("\xC2""\xAB""possibleFunction\xC2""\xBB"" invalid here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 352)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureProperty:
    {
      const cEnumAssociatedValues_internalRepresentation_structureProperty * extractPtr_15737 = (const cEnumAssociatedValues_internalRepresentation_structureProperty *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_15737->mAssociatedValue0 ;
      const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_masterStructureMap = extractPtr_15737->mAssociatedValue1 ;
      GALGAS_universalPropertyAndRoutineMapForContext var_m_15242 = extractedValue_masterStructureMap ;
      var_m_15242.log ("m"  COMMA_SOURCE_FILE ("expression-primary.galgas", 356)) ;
      GALGAS_objectIR var_objectIR_15358 ;
      {
      var_m_15242.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_15282 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_15242.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_15282, extractedValue_masterPropertyName, var_objectIR_15358, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 357)) ;
      }
      const enumGalgasBool test_13 = extensionGetter_kind (var_objectIR_15358, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 358)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 358)).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_15492 ;
        GALGAS_lstring joker_15445 ; // Joker input parameter
        GALGAS_propertyMap joker_15460 ; // Joker input parameter
        GALGAS_propertyList joker_15494_2 ; // Joker input parameter
        GALGAS_uint joker_15494_1 ; // Joker input parameter
        extensionGetter_kind (var_objectIR_15358, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 359)).method_structure (joker_15445, joker_15460, var_structureMap_15492, joker_15494_2, joker_15494_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 359)) ;
        ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureProperty (constinArgument_inPropertyName, var_structureMap_15492  COMMA_SOURCE_FILE ("expression-primary.galgas", 360)) ;
      }else if (kBoolFalse == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extractedValue_masterPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 362)), GALGAS_string ("'").add_operation (extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 362)).add_operation (GALGAS_string ("' should be a structure"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 362)), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 362)) ;
        ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_registerBitField:
    {
      const cEnumAssociatedValues_internalRepresentation_registerBitField * extractPtr_16396 = (const cEnumAssociatedValues_internalRepresentation_registerBitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_bitFieldName = extractPtr_16396->mAssociatedValue0 ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_16396->mAssociatedValue1 ;
      const GALGAS_uint extractedValue_arraySize = extractPtr_16396->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_elementSize = extractPtr_16396->mAssociatedValue3 ;
      const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, extractedValue_arraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (extractedValue_bitFieldName.getter_location (SOURCE_FILE ("expression-primary.galgas", 366)), GALGAS_string ("'").add_operation (extractedValue_bitFieldName.getter_string (SOURCE_FILE ("expression-primary.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 366)).add_operation (GALGAS_string ("' is an array"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 366)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 366)) ;
        ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_15) {
        GALGAS_llvmBinaryOperation var_accessOperator_16073 ;
        GALGAS_bigint var_accessRightOperand_16121 ;
        GALGAS_sliceMap var_subMap_16152 ;
        GALGAS_unifiedTypeMap_2D_proxy var_resultType_16206 ;
        extractedValue_sliceMap.method_searchKey (constinArgument_inPropertyName, var_accessOperator_16073, var_accessRightOperand_16121, var_subMap_16152, var_resultType_16206, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 368)) ;
        ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_registerBitField (constinArgument_inPropertyName, var_subMap_16152, GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("expression-primary.galgas", 374)) ;
      }
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@primaryInExpressionAST analyzeExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                      const GALGAS_bool constinArgument_inGuard,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      GALGAS_objectIR & outArgument_outResult,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  GALGAS_objectIR var_currentPointer_17401 ;
  GALGAS_string var_globalVariableReceiverName_17438 ;
  switch (object->mProperty_mSelf.enumValue ()) {
  case GALGAS_selfInExpressionAST::kNotBuilt:
    break ;
  case GALGAS_selfInExpressionAST::kEnum_noSelf:
    {
      const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 408)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 408)) ;
        var_currentPointer_17401.drop () ; // Release error dropped variable
        var_globalVariableReceiverName_17438.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_2 = ioArgument_ioVariableMap.getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 409)) COMMA_SOURCE_FILE ("expression-primary.galgas", 409)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          GALGAS_unifiedTypeMap_2D_proxy joker_17733_2 ; // Joker input parameter
          GALGAS_bool joker_17733_1 ; // Joker input parameter
          GALGAS_bool joker_17778_2 ; // Joker input parameter
          GALGAS_bool joker_17778_1 ; // Joker input parameter
          ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mObjectName, joker_17733_2, joker_17733_1, var_currentPointer_17401, joker_17778_2, joker_17778_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 410)) ;
          }
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = var_currentPointer_17401.getter_isGlobalVariableReference (SOURCE_FILE ("expression-primary.galgas", 415)).boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = object->mProperty_mObjectName.getter_string (HERE) ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          var_globalVariableReceiverName_17438 = temp_3 ;
        }else if (kBoolFalse == test_2) {
          var_currentPointer_17401 = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_null (SOURCE_FILE ("expression-primary.galgas", 417)), object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 417)) ;
          var_globalVariableReceiverName_17438 = GALGAS_string::makeEmptyString () ;
        }
      }
    }
    break ;
  case GALGAS_selfInExpressionAST::kEnum_selfAt:
    {
      const cEnumAssociatedValues_selfInExpressionAST_selfAt * extractPtr_18989 = (const cEnumAssociatedValues_selfInExpressionAST_selfAt *) (object->mProperty_mSelf.unsafePointer ()) ;
      const GALGAS_location extractedValue_selfLocation = extractPtr_18989->mAssociatedValue0 ;
      var_globalVariableReceiverName_17438 = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 422)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 423)) ;
        var_currentPointer_17401.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_7 = constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 424)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 424)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_propertyMap var_structureObjectMap_18390 ;
          GALGAS_lstring joker_18353 ; // Joker input parameter
          GALGAS_universalPropertyAndRoutineMapForContext joker_18392_3 ; // Joker input parameter
          GALGAS_propertyList joker_18392_2 ; // Joker input parameter
          GALGAS_uint joker_18392_1 ; // Joker input parameter
          constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 425)).method_structure (joker_18353, var_structureObjectMap_18390, joker_18392_3, joker_18392_2, joker_18392_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 425)) ;
          const enumGalgasBool test_8 = var_structureObjectMap_18390.getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 426)) COMMA_SOURCE_FILE ("expression-primary.galgas", 426)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_objectIR var_object_18546 ;
            GALGAS_bool joker_18523 ; // Joker input parameter
            var_structureObjectMap_18390.method_searchKey (object->mProperty_mObjectName, joker_18523, var_object_18546, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 427)) ;
            {
            routine_handleSelfAccessInExpression (constinArgument_inSelfType, var_object_18546, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_currentPointer_17401, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 432)) ;
            }
          }else if (kBoolFalse == test_8) {
            var_currentPointer_17401 = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("expression-primary.galgas", 440)), object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 440)) ;
          }
        }else if (kBoolFalse == test_7) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' should be a structure instance"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 443)) ;
          var_currentPointer_17401.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_19042 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_19042.hasCurrentObject ()) {
    switch (enumerator_19042.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_19636 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_19042.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_19636->mAssociatedValue0 ;
        {
        routine_handlePropertyInExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, extractedValue_propertyName, ioArgument_ioInstructionGenerationList, var_currentPointer_17401, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 450)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_20316 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_19042.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_20316->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_20316->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, ioArgument_ioInstructionGenerationList, var_currentPointer_17401, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 466)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_21252 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_19042.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_21252->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_21252->mAssociatedValue1 ;
        GALGAS_unifiedTypeMap_2D_proxy var_returnedType_21105 ;
        {
        routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_17438, GALGAS_bool (false), constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, var_currentPointer_17401, var_returnedType_21105, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 484)) ;
        }
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_returnedType_21105.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 504)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("the function cannot be called in expression: no return value"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 505)) ;
        }
      }
      break ;
    }
    enumerator_19042.gotoNextObject () ;
  }
  outArgument_outResult = var_currentPointer_17401 ;
  GALGAS_allocaList joker_21719 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 521)) ;
  GALGAS_instructionListIR joker_21745 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 522)) ;
  const GALGAS_primaryInExpressionAST temp_12 = object ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_primaryInExpressionAST *) temp_12.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_21719, joker_21745, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 510)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                          extensionMethod_primaryInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_analyzeExpression (defineExtensionMethod_primaryInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleSelfAccessInExpression'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSelfAccessInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                           const GALGAS_objectIR constinArgument_inObject,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                           GALGAS_objectIR & outArgument_outObjectPtr,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectPtr.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inObject.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 536)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_22208 ;
    GALGAS_lstring var_name_22226 ;
    GALGAS_uint var_index_22243 ;
    constinArgument_inObject.method_property (var_type_22208, var_name_22226, var_index_22243, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 537)) ;
    outArgument_outObjectPtr = GALGAS_objectIR::constructor_temporaryReference (var_type_22208, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 540)), var_name_22226.getter_location (SOURCE_FILE ("expression-primary.galgas", 540))  COMMA_SOURCE_FILE ("expression-primary.galgas", 540)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 541)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 538)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 544)) ;
    {
    extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outObjectPtr, constinArgument_inSelfType, var_name_22226.getter_string (SOURCE_FILE ("expression-primary.galgas", 548)), var_index_22243, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 545)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-primary.galgas", 552)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 552)) ;
    outArgument_outObjectPtr.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpression (GALGAS_objectIR & ioArgument_ioObject,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               const GALGAS_objectIR constinArgument_inProperty,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inProperty.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 565)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_23103 ;
    GALGAS_lstring var_name_23121 ;
    GALGAS_uint var_index_23138 ;
    constinArgument_inProperty.method_property (var_type_23103, var_name_23121, var_index_23138, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 566)) ;
    GALGAS_objectIR var_newObject_23157 = GALGAS_objectIR::constructor_temporaryReference (var_type_23103, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 569)), var_name_23121.getter_location (SOURCE_FILE ("expression-primary.galgas", 569))  COMMA_SOURCE_FILE ("expression-primary.galgas", 569)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 570)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 567)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 573)) ;
    {
    extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_23157, ioArgument_ioObject, var_name_23121.getter_string (SOURCE_FILE ("expression-primary.galgas", 577)), var_index_23138.getter_string (SOURCE_FILE ("expression-primary.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 574)) ;
    }
    ioArgument_ioObject = var_newObject_23157 ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 582)) ;
    ioArgument_ioObject.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'handlePropertyInExpression'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyInExpression (const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                         const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                         const GALGAS_bool /* constinArgument_inGuard */,
                                         const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_mode /* constinArgument_inCurrentMode */,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                         GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                         GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                         const GALGAS_lstring constinArgument_inPropertyName,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_objectIR & ioArgument_ioObjectPtr,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 604)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_24589 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_24627 ;
    GALGAS_lstring joker_24552 ; // Joker input parameter
    GALGAS_propertyList joker_24629_2 ; // Joker input parameter
    GALGAS_uint joker_24629_1 ; // Joker input parameter
    extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 605)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 605)).method_structure (joker_24552, var_structureObjectMap_24589, var_universalMap_24627, joker_24629_2, joker_24629_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 605)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_24589.getter_hasKey (constinArgument_inPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 606)) COMMA_SOURCE_FILE ("expression-primary.galgas", 606)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_property_24763 ;
      GALGAS_bool joker_24742 ; // Joker input parameter
      var_structureObjectMap_24589.method_searchKey (constinArgument_inPropertyName, joker_24742, var_property_24763, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 607)) ;
      {
      routine_handlePropertyAccessInExpression (ioArgument_ioObjectPtr, constinArgument_inPropertyName.getter_location (HERE), var_property_24763, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 608)) ;
      }
    }else if (kBoolFalse == test_1) {
      ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_possibleFunction (ioArgument_ioObjectPtr, constinArgument_inPropertyName  COMMA_SOURCE_FILE ("expression-primary.galgas", 616)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 619)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 619)).getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 619)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_sliceMap var_sliceMap_25161 = extensionGetter_sliceMap (ioArgument_ioObjectPtr, constinArgument_inPropertyName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 620)) ;
      GALGAS_objectIR var_loadedRegisterValue_25380 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioObjectPtr, constinArgument_inPropertyName.getter_location (HERE), var_loadedRegisterValue_25380, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 621)) ;
      }
      GALGAS_llvmBinaryOperation var_accessOperator_25479 ;
      GALGAS_bigint var_accessRightOperand_25517 ;
      GALGAS_sliceMap var_resultSliceMap_25553 ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_25597 ;
      var_sliceMap_25161.method_searchKey (constinArgument_inPropertyName, var_accessOperator_25479, var_accessRightOperand_25517, var_resultSliceMap_25553, var_resultType_25597, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 627)) ;
      GALGAS_objectIR var_resultObject_25624 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_25597, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 636)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 636))  COMMA_SOURCE_FILE ("expression-primary.galgas", 636)), var_resultSliceMap_25553  COMMA_SOURCE_FILE ("expression-primary.galgas", 634)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 639)) ;
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_25624, extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 642)), constinArgument_inPropertyName.getter_location (HERE), var_loadedRegisterValue_25380, var_accessOperator_25479, GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), var_accessRightOperand_25517  COMMA_SOURCE_FILE ("expression-primary.galgas", 646)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 640)) ;
      }
      ioArgument_ioObjectPtr = var_resultObject_25624 ;
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 650)), GALGAS_string ("the current object has no property"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 650)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'handleFunctionCallInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                             const GALGAS_string constinArgument_inGlobalVariableReceiverName,
                                             const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                             const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                             const GALGAS_bool constinArgument_inGuard,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_mode constinArgument_inMode,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                             const GALGAS_location constinArgument_inErrorLocation,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             GALGAS_objectIR & ioArgument_ioObjectPtr,
                                             GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = ioArgument_ioObjectPtr.getter_isPossibleFunction (SOURCE_FILE ("expression-primary.galgas", 676)).operator_not (SOURCE_FILE ("expression-primary.galgas", 676)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 677)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    outArgument_outReturnedType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inGuard.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_functionName_27526 ;
      GALGAS_objectIR joker_27493_1 ; // Joker input parameter
      ioArgument_ioObjectPtr.method_possibleFunction (joker_27493_1, var_functionName_27526, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 679)) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_27526.getter_location (SOURCE_FILE ("expression-primary.galgas", 680)), GALGAS_string ("a function cannot be called in guard expression"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 680)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
      outArgument_outReturnedType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_receiver_27697 ;
      GALGAS_lstring var_functionName_27728 ;
      ioArgument_ioObjectPtr.method_possibleFunction (var_receiver_27697, var_functionName_27728, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 682)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_28435 ;
      GALGAS_calleeKindIR var_routineKind_28484 ;
      GALGAS_lstring var_functionMangledName_28543 ;
      GALGAS_lstring var_functionNameForGeneration_28614 ;
      {
      routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, var_receiver_27697, var_functionName_27728, constinArgument_inArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_28435, var_routineKind_28484, var_functionMangledName_28543, var_functionNameForGeneration_28614, outArgument_outReturnedType, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 683)) ;
      }
      GALGAS_objectIR var_functionResult_28802 ;
      {
      routine_getNewTempVariable (outArgument_outReturnedType, var_functionMangledName_28543.getter_location (SOURCE_FILE ("expression-primary.galgas", 706)), ioArgument_ioTemporaries, var_functionResult_28802, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 706)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (constinArgument_inGlobalVariableReceiverName, var_functionResult_28802, var_functionMangledName_28543, var_functionNameForGeneration_28614, var_routineKind_28484, var_effectiveParameterListIR_28435  COMMA_SOURCE_FILE ("expression-primary.galgas", 708))  COMMA_SOURCE_FILE ("expression-primary.galgas", 708)) ;
      ioArgument_ioObjectPtr = var_functionResult_28802 ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeFunctionCallInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionCallInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                              const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                              const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                              const GALGAS_objectIR constinArgument_inReceiver,
                                              const GALGAS_lstring constinArgument_inRoutineName,
                                              const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              const GALGAS_mode constinArgument_inRequiredMode,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                              GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                              GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                              GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                                              GALGAS_calleeKindIR & outArgument_outRoutineKindIR,
                                              GALGAS_lstring & outArgument_outRoutineMangledName,
                                              GALGAS_lstring & outArgument_outRoutineNameForGeneration,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outRoutineKindIR.drop () ; // Release 'out' argument
  outArgument_outRoutineMangledName.drop () ; // Release 'out' argument
  outArgument_outRoutineNameForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 746)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_30453 = extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 747)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsNotEqual, var_receiverType_30453.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 749)))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = var_receiverType_30453.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 749)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 749)) ;
  }
  GALGAS_bool var_specialCase_30566 = test_0 ;
  const enumGalgasBool test_1 = var_specialCase_30566.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_propertyMap var_propertyMap_30740 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_30778 ;
    GALGAS_lstring joker_30697 ; // Joker input parameter
    GALGAS_propertyList joker_30780_2 ; // Joker input parameter
    GALGAS_uint joker_30780_1 ; // Joker input parameter
    var_receiverType_30453.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 751)).method_structure (joker_30697, var_propertyMap_30740, var_universalMap_30778, joker_30780_2, joker_30780_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 751)) ;
    const enumGalgasBool test_2 = var_propertyMap_30740.getter_hasKey (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("expression-primary.galgas", 752)) COMMA_SOURCE_FILE ("expression-primary.galgas", 752)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_objectIR var_propertyObject_30908 ;
      GALGAS_bool joker_30877 ; // Joker input parameter
      var_propertyMap_30740.method_searchKey (constinArgument_inRoutineName, joker_30877, var_propertyObject_30908, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 753)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_type_30955 ;
      GALGAS_lstring var_plmName_30983 ;
      GALGAS_uint var_index_31007 ;
      var_propertyObject_30908.method_property (var_type_30955, var_plmName_30983, var_index_31007, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 754)) ;
      var_specialCase_30566 = var_type_30955.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 755)).getter_isFunction (SOURCE_FILE ("expression-primary.galgas", 755)) ;
      const enumGalgasBool test_3 = var_specialCase_30566.boolEnum () ;
      if (kBoolTrue == test_3) {
        constinArgument_inRoutineName.log ("inRoutineName"  COMMA_SOURCE_FILE ("expression-primary.galgas", 757)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_receiverType_30453.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 762)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 763)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("expression-primary.galgas", 763)) ;
  }
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_receiverType_30453.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 767)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string ("$").add_operation (var_receiverType_30453.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 767)) ;
  }
  outArgument_outRoutineMangledName = function_routineMangledNameFromCall (temp_5, constinArgument_inRoutineName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 766)) ;
  GALGAS_routineDescriptor var_routineDescriptor_31680 ;
  GALGAS_location var_outRoutineLocation_31718 ;
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), constinArgument_inRoutineName, extensionGetter_routineSignature (constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 773)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 773)), outArgument_outRoutineNameForGeneration, var_routineDescriptor_31680, var_outRoutineLocation_31718, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 771)) ;
  GALGAS_bool var_isPublic_31737 = var_routineDescriptor_31680.getter_mIsPublic (HERE) ;
  GALGAS_routineKind var_routineKind_31785 = var_routineDescriptor_31680.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_31835 = extensionGetter_executionMode (var_routineKind_31785, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 780)) ;
  GALGAS_routineTypedSignature var_formalSignature_31922 = var_routineDescriptor_31680.getter_mSignature (HERE) ;
  outArgument_outReturnedType = var_routineDescriptor_31680.getter_mReturnType (HERE) ;
  const enumGalgasBool test_7 = var_isPublic_31737.operator_not (SOURCE_FILE ("expression-primary.galgas", 784)).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_receiverType_30453.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 785)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_declarationFile_32141 = var_outRoutineLocation_31718.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 786)) ;
      GALGAS_string var_invocationFile_32194 = constinArgument_inRoutineName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 787)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_invocationFile_32194.objectCompare (var_declarationFile_32141)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 789)), GALGAS_string ("this routine is not public"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 789)) ;
      }
    }else if (kBoolFalse == test_8) {
      const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_receiverType_30453.objectCompare (constinArgument_inSelfType)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 792)), GALGAS_string ("this routine is not public"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 792)) ;
      }
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outRoutineMangledName COMMA_SOURCE_FILE ("expression-primary.galgas", 796)) ;
  }
  outArgument_outRoutineKindIR = function_checkMode (constinArgument_inRequiredMode, var_calleeMode_31835, var_routineKind_31785, constinArgument_inRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 798)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature_31922, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 805)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParameters (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                         const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                         const GALGAS_routineTypedSignature constinArgument_inFormalSignature,
                                         const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                         const GALGAS_location constinArgument_inErrorLocation,
                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_mode constinArgument_inRequiredMode,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                         GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList var_parameterList_34647 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 846)) ;
  cEnumerator_routineTypedSignature enumerator_34690 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_34733 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_34690.hasCurrentObject () && enumerator_34733.hasCurrentObject ()) {
    switch (enumerator_34733.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_36211 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_34733.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_36211->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_36211->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_36211->mAssociatedValue2 ;
        GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_34690.current_mType (HERE) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 853)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type_34871 = temp_0 ;
        GALGAS_lstring var_varLLVMName_35039 = GALGAS_lstring::constructor_new (extractedValue_name.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 855)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 855)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 855)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 855))  COMMA_SOURCE_FILE ("expression-primary.galgas", 855)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 856)) ;
        GALGAS_objectIR var_objectIR_35171 = GALGAS_objectIR::constructor_localVariableReference (var_type_34871, var_varLLVMName_35039  COMMA_SOURCE_FILE ("expression-primary.galgas", 857)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_35289 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_35289, extractedValue_name, var_objectIR_35171, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 859)) ;
          }
          {
          ioArgument_ioVariableMap.setter_insertConstant (extractedValue_name, var_type_34871, GALGAS_bool (true), var_objectIR_35171, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 860)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_35585 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_35585, extractedValue_name, var_objectIR_35171, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("expression-primary.galgas", 869)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 869)) ;
          }
          {
          ioArgument_ioVariableMap.setter_insertDefinedVariable (extractedValue_name, var_type_34871, GALGAS_bool (true), var_objectIR_35171, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 870)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_35039.getter_string (SOURCE_FILE ("expression-primary.galgas", 879)), extensionGetter_llvmTypeName (var_type_34871.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 879)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 879))  COMMA_SOURCE_FILE ("expression-primary.galgas", 879)) ;
        var_parameterList_34647.addAssign_operation (enumerator_34733.current_mEffectiveParameterKind (HERE), enumerator_34733.current_mSelector (HERE), var_type_34871  COMMA_SOURCE_FILE ("expression-primary.galgas", 880)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 882)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_34871, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_35039.getter_string (SOURCE_FILE ("expression-primary.galgas", 883)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 883)), var_varLLVMName_35039.getter_location (SOURCE_FILE ("expression-primary.galgas", 883))  COMMA_SOURCE_FILE ("expression-primary.galgas", 883)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 883))  COMMA_SOURCE_FILE ("expression-primary.galgas", 883))  COMMA_SOURCE_FILE ("expression-primary.galgas", 881)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_37270 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_34733.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_37270->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_36321 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_36268 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_36268, extractedValue_name, var_objectIR_36321, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 885)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type_36408 ;
        GALGAS_bool var_accessIsAllowed_36455 ;
        GALGAS_bool var_isCopyable_36522 ;
        GALGAS_bool var_canBeUsedAsInputParameter_36636 ;
        {
        GALGAS_objectIR joker_36474 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (extractedValue_name, var_type_36408, var_accessIsAllowed_36455, joker_36474, var_isCopyable_36522, var_canBeUsedAsInputParameter_36636, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 886)) ;
        }
        const enumGalgasBool test_3 = var_accessIsAllowed_36455.operator_not (SOURCE_FILE ("expression-primary.galgas", 894)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 895)), GALGAS_string ("routine has no access right on the this variable"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 895)) ;
        }
        const enumGalgasBool test_5 = var_canBeUsedAsInputParameter_36636.operator_not (SOURCE_FILE ("expression-primary.galgas", 897)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 898)), GALGAS_string ("this variable cannot be used as input parameter"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 898)) ;
        }
        const enumGalgasBool test_7 = var_isCopyable_36522.operator_not (SOURCE_FILE ("expression-primary.galgas", 900)).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 901)), GALGAS_string ("an $").add_operation (var_type_36408.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 901)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 901)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 901)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 901)) ;
        }
        var_parameterList_34647.addAssign_operation (enumerator_34733.current_mEffectiveParameterKind (HERE), enumerator_34733.current_mSelector (HERE), var_type_36408  COMMA_SOURCE_FILE ("expression-primary.galgas", 903)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 905)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_36408, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_36321, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 906)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 906)), extensionGetter_location (var_objectIR_36321, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 906))  COMMA_SOURCE_FILE ("expression-primary.galgas", 906)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 906))  COMMA_SOURCE_FILE ("expression-primary.galgas", 906))  COMMA_SOURCE_FILE ("expression-primary.galgas", 904)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_38472 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_34733.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_38472->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_38472->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_37952 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_34690.current_mType (HERE), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_37952, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 908)) ;
        GALGAS_objectIR var_expressionValue_38118 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_37952, extractedValue_endOfExp, var_expressionValue_38118, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 924)) ;
        }
        GALGAS_objectIR var_result_38145 = function_checkAssignmentCompatibility (var_expressionValue_38118, enumerator_34690.current_mType (HERE), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 930)) ;
        var_parameterList_34647.addAssign_operation (enumerator_34733.current_mEffectiveParameterKind (HERE), enumerator_34733.current_mSelector (HERE), enumerator_34690.current_mType (HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 936)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 937)), var_result_38145  COMMA_SOURCE_FILE ("expression-primary.galgas", 937)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_39356 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_34733.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_39356->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type_38601 ;
        GALGAS_bool var_accessIsAllowed_38648 ;
        GALGAS_objectIR var_objectIR_38679 ;
        GALGAS_bool var_canBeUsedAsInputParameter_38756 ;
        {
        GALGAS_bool joker_38689_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (extractedValue_name, var_type_38601, var_accessIsAllowed_38648, var_objectIR_38679, joker_38689_1, var_canBeUsedAsInputParameter_38756, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 939)) ;
        }
        const enumGalgasBool test_9 = var_canBeUsedAsInputParameter_38756.operator_not (SOURCE_FILE ("expression-primary.galgas", 947)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 948)), GALGAS_string ("this variable cannot be used as output/input parameter"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 948)) ;
        }
        const enumGalgasBool test_11 = var_accessIsAllowed_38648.operator_not (SOURCE_FILE ("expression-primary.galgas", 950)).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 951)), GALGAS_string ("routine has no access right on the this variable"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 951)) ;
        }
        var_parameterList_34647.addAssign_operation (enumerator_34733.current_mEffectiveParameterKind (HERE), enumerator_34733.current_mSelector (HERE), var_type_38601  COMMA_SOURCE_FILE ("expression-primary.galgas", 953)) ;
        GALGAS_objectIR var_argumentIR_39118 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_38601, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_38679, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 956)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 956)), extensionGetter_location (var_objectIR_38679, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 956))  COMMA_SOURCE_FILE ("expression-primary.galgas", 956)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 957))  COMMA_SOURCE_FILE ("expression-primary.galgas", 954)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 959)), var_argumentIR_39118  COMMA_SOURCE_FILE ("expression-primary.galgas", 959)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_41796 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_34733.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_41796->mAssociatedValue0 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 961)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 962)), GALGAS_string ("'self' is not available in this context"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 962)) ;
          var_parameterList_34647.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          const enumGalgasBool test_15 = constinArgument_inDirectAccessToPropertiesAllowed.operator_not (SOURCE_FILE ("expression-primary.galgas", 963)).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 964)), GALGAS_string ("the current function should be declared @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 964)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 964)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 964)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = constinArgument_inRoutineCanMutateProperties.operator_not (SOURCE_FILE ("expression-primary.galgas", 965)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 966)), GALGAS_string ("the current routine should be declared @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 966)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 966)), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 966)) ;
            }else if (kBoolFalse == test_17) {
              switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 968)).enumValue ()) {
              case GALGAS_typeKind::kNotBuilt:
                break ;
              case GALGAS_typeKind::kEnum_opaque:
                {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 970)), GALGAS_string ("a structure type is required here"), fixItArray19  COMMA_SOURCE_FILE ("expression-primary.galgas", 970)) ;
                  var_parameterList_34647.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_arrayType:
                {
                  TC_Array <C_FixItDescription> fixItArray20 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 972)), GALGAS_string ("a structure type is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-primary.galgas", 972)) ;
                  var_parameterList_34647.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_boolean:
                {
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 974)), GALGAS_string ("a structure type is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-primary.galgas", 974)) ;
                  var_parameterList_34647.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_staticInteger:
                {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 976)), GALGAS_string ("a structure type is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-primary.galgas", 976)) ;
                  var_parameterList_34647.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_literalString:
                {
                  TC_Array <C_FixItDescription> fixItArray23 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 978)), GALGAS_string ("a structure type is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-primary.galgas", 978)) ;
                  var_parameterList_34647.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_enumeration:
                {
                  TC_Array <C_FixItDescription> fixItArray24 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 980)), GALGAS_string ("a structure type is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-primary.galgas", 980)) ;
                  var_parameterList_34647.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_function:
                {
                  TC_Array <C_FixItDescription> fixItArray25 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 982)), GALGAS_string ("a structure type is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-primary.galgas", 982)) ;
                  var_parameterList_34647.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_pointer:
                {
                  TC_Array <C_FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 984)), GALGAS_string ("a structure type is required here"), fixItArray26  COMMA_SOURCE_FILE ("expression-primary.galgas", 984)) ;
                  var_parameterList_34647.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_integer:
                {
                  TC_Array <C_FixItDescription> fixItArray27 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 986)), GALGAS_string ("a structure type is required here"), fixItArray27  COMMA_SOURCE_FILE ("expression-primary.galgas", 986)) ;
                  var_parameterList_34647.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_structure:
                {
                  const cEnumAssociatedValues_typeKind_structure * extractPtr_41770 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 968)).unsafePointer ()) ;
                  const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_41770->mAssociatedValue2 ;
                  GALGAS_universalPropertyAndRoutineMapForContext var_m_41132 = extractedValue_universalMap ;
                  GALGAS_objectIR var_propertyObject_41220 ;
                  {
                  var_m_41132.insulate (HERE) ;
                  cPtr_universalPropertyAndRoutineMapForContext * ptr_41162 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_41132.ptr () ;
                  callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_41162, extractedValue_name, var_propertyObject_41220, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 989)) ;
                  }
                  GALGAS_uint var_idx_41275 ;
                  GALGAS_unifiedTypeMap_2D_proxy joker_41258_2 ; // Joker input parameter
                  GALGAS_lstring joker_41258_1 ; // Joker input parameter
                  var_propertyObject_41220.method_property (joker_41258_2, joker_41258_1, var_idx_41275, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 990)) ;
                  GALGAS_objectIR var_fieldObjectReference_41377 ;
                  {
                  routine_getNewTempVariable (extensionGetter_type (var_propertyObject_41220, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 991)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 991)), ioArgument_ioTemporaries, var_fieldObjectReference_41377, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 991)) ;
                  }
                  {
                  extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_41377, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 995)), var_idx_41275, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 992)) ;
                  }
                  var_parameterList_34647.addAssign_operation (enumerator_34733.current_mEffectiveParameterKind (HERE), enumerator_34733.current_mSelector (HERE), extensionGetter_type (var_propertyObject_41220, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 998))  COMMA_SOURCE_FILE ("expression-primary.galgas", 998)) ;
                  ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1000)), var_fieldObjectReference_41377  COMMA_SOURCE_FILE ("expression-primary.galgas", 999)) ;
                }
                break ;
              }
            }
          }
        }
      }
      break ;
    }
    enumerator_34690.gotoNextObject () ;
    enumerator_34733.gotoNextObject () ;
  }
  const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1007)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1007)))).boolEnum () ;
  if (kBoolTrue == test_28) {
    TC_Array <C_FixItDescription> fixItArray29 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1008)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1008)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1008)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1008)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1009)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1008)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1008)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1009)), fixItArray29  COMMA_SOURCE_FILE ("expression-primary.galgas", 1008)) ;
  }else if (kBoolFalse == test_28) {
    cEnumerator_routineTypedSignature enumerator_42128 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_42157 (var_parameterList_34647, kENUMERATION_UP) ;
    while (enumerator_42128.hasCurrentObject () && enumerator_42157.hasCurrentObject ()) {
      const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_42128.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1012)).objectCompare (enumerator_42157.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1012)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_42157.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1013)), GALGAS_string ("the actual parameter type is '").add_operation (enumerator_42157.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1013)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1013)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1013)).add_operation (enumerator_42128.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1014)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1014)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1014)), fixItArray31  COMMA_SOURCE_FILE ("expression-primary.galgas", 1013)) ;
      }
      GALGAS_string var_requiredPassingMode_42448 = extensionGetter_requiredActualPassingModeForSelector (enumerator_42128.current_mFormalArgumentPassingMode (HERE), enumerator_42128.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1016)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1016)) ;
      GALGAS_string var_testedPassingMode_42569 = extensionGetter_passingModeForActualSelector (enumerator_42157.current_mEffectiveParameterPassingMode (HERE), enumerator_42157.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1017)) ;
      const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_42448.objectCompare (var_testedPassingMode_42569)).boolEnum () ;
      if (kBoolTrue == test_32) {
        TC_Array <C_FixItDescription> fixItArray33 ;
        inCompiler->emitSemanticError (enumerator_42157.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1019)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_42448, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1019)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1019)), fixItArray33  COMMA_SOURCE_FILE ("expression-primary.galgas", 1019)) ;
      }
      enumerator_42128.gotoNextObject () ;
      enumerator_42157.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@checkInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                                              extensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@checkInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_checkInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                         const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList_3094 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 59)) ;
  GALGAS_objectIR var_expressionResult_3643 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("directive-check.galgas", 65)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3094, var_expressionResult_3643, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 60)) ;
  const enumGalgasBool test_0 = extensionGetter_kind (var_expressionResult_3643, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 77)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 77)).operator_not (SOURCE_FILE ("directive-check.galgas", 77)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("directive-check.galgas", 78)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_3643, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 81)).operator_not (SOURCE_FILE ("directive-check.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 82)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_bigint var_value_4036 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_4013_1 ; // Joker input parameter
    var_expressionResult_3643.method_literalInteger (joker_4013_1, var_value_4036, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 84)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_4036.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 85)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("check expression value is false"), fixItArray5  COMMA_SOURCE_FILE ("directive-check.galgas", 86)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_checkInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                extensionMethod_checkInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_checkInstructionAST_analyze (defineExtensionMethod_checkInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@varAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentInstructionAST * object = (const cPtr_varAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varAssignmentInstructionAST.mSlotID,
                                                              extensionMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@varAssignmentInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                 const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                 const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_mode constinArgument_inCurrentMode,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                 GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                 GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentInstructionAST * object = (const cPtr_varAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentInstructionAST) ;
  GALGAS_objectIR var_currentObject_4317 ;
  GALGAS_string var_globalVariableReceiverName_4387 ;
  callExtensionMethod_analyzeAssignmentTarget ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_write (SOURCE_FILE ("instruction-assignment.galgas", 75)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_4317, var_globalVariableReceiverName_4387, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 73)) ;
  const enumGalgasBool test_0 = var_currentObject_4317.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment.galgas", 90)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 91)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 91)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 91)) ;
    var_currentObject_4317.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourceOperandPossibleReference_5145 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_currentObject_4317, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 99)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_5145, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 94)) ;
  GALGAS_objectIR var_sourceOperand_5325 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperandPossibleReference_5145, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 113)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 113)), var_sourceOperand_5325, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 110)) ;
  }
  GALGAS_objectIR var_result_5344 = function_checkAssignmentCompatibility (var_sourceOperand_5325, extensionGetter_type (var_currentObject_4317, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 118)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 119)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 119)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 116)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_currentObject_4317, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 122)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 122)), var_result_5344, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 122)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAssignmentInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varAssignmentInstructionAST.mSlotID,
                                extensionMethod_varAssignmentInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAssignmentInstructionAST_analyze (defineExtensionMethod_varAssignmentInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@varOperatorAssignInstructionAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignInstructionAST * object = (const cPtr_varOperatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 108)) ;
  callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 109)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varOperatorAssignInstructionAST.mSlotID,
                                                              extensionMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@varOperatorAssignInstructionAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignInstructionAST * object = (const cPtr_varOperatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignInstructionAST) ;
  GALGAS_objectIR var_targetObject_5651 ;
  GALGAS_string var_globalVariableReceiverName_5721 ;
  callExtensionMethod_analyzeAssignmentTarget ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("instruction-assignment-operator.galgas", 133)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_targetObject_5651, var_globalVariableReceiverName_5721, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 131)) ;
  const enumGalgasBool test_0 = var_targetObject_5651.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment-operator.galgas", 148)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 149)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 149)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 149)) ;
    var_targetObject_5651.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourcePossibleReference_6469 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_targetObject_5651, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 157)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_6469, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 152)) ;
  GALGAS_objectIR var_sourceValue_6628 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_6469, object->mProperty_mEndOfSourceExpression, var_sourceValue_6628, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 168)) ;
  }
  GALGAS_bool var_noPanicGeneration_7102 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode_7165 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assignment-operator.galgas", 188)))) ;
  GALGAS_infixOperatorMap var_operatorMap_7227 ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_operatorAssignmentKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap_7227 = constinArgument_inContext.getter_mAndOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap_7227 = constinArgument_inContext.getter_mOrOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap_7227 = constinArgument_inContext.getter_mXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addAssign:
    {
      const enumGalgasBool test_2 = var_panicMode_7165.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 199)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 199)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 200)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 200)), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 199)) ;
      }
      GALGAS_infixOperatorMap temp_4 ;
      const enumGalgasBool test_5 = var_noPanicGeneration_7102.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddOperatorMap (HERE) ;
      }
      var_operatorMap_7227 = temp_4 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addModuloAssign:
    {
      var_operatorMap_7227 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subAssign:
    {
      const enumGalgasBool test_6 = var_panicMode_7165.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 207)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 207)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 208)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 208)), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 207)) ;
      }
      GALGAS_infixOperatorMap temp_8 ;
      const enumGalgasBool test_9 = var_noPanicGeneration_7102.boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubOperatorMap (HERE) ;
      }
      var_operatorMap_7227 = temp_8 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subModuloAssign:
    {
      var_operatorMap_7227 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_10 = var_panicMode_7165.boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 215)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 215)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 216)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 216)), fixItArray11  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 215)) ;
      }
      GALGAS_infixOperatorMap temp_12 ;
      const enumGalgasBool test_13 = var_noPanicGeneration_7102.boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulOperatorMap (HERE) ;
      }
      var_operatorMap_7227 = temp_12 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulModuloAssign:
    {
      var_operatorMap_7227 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divAssign:
    {
      const enumGalgasBool test_14 = var_panicMode_7165.boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 223)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 223)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 224)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 224)), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 223)) ;
      }
      GALGAS_infixOperatorMap temp_16 ;
      const enumGalgasBool test_17 = var_noPanicGeneration_7102.boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivOperatorMap (HERE) ;
      }
      var_operatorMap_7227 = temp_16 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divZeroAssign:
    {
      var_operatorMap_7227 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modAssign:
    {
      const enumGalgasBool test_18 = var_panicMode_7165.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 231)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 231)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 232)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 232)), fixItArray19  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 231)) ;
      }
      GALGAS_infixOperatorMap temp_20 ;
      const enumGalgasBool test_21 = var_noPanicGeneration_7102.boolEnum () ;
      if (kBoolTrue == test_21) {
        temp_20 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_21) {
        temp_20 = constinArgument_inContext.getter_mModOperatorMap (HERE) ;
      }
      var_operatorMap_7227 = temp_20 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modZeroAssign:
    {
      var_operatorMap_7227 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator_9572 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_9518 ; // Joker input parameter
  extensionMethod_checkBinaryOperationWith (var_operatorMap_7227, extensionGetter_type (var_targetObject_5651, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 239)), extensionGetter_type (var_sourceValue_6628, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 240)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 241)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 241)), joker_9518, var_binaryOperator_9572, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 238)) ;
  GALGAS_objectIR var_variableValue_9755 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_targetObject_5651, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 249)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 249)), var_variableValue_9755, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 246)) ;
  }
  GALGAS_objectIR var_newResultingValue_9985 ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_9572.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue_9755, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 256)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 256)), var_sourceValue_6628, extensionGetter_type (var_targetObject_5651, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 258)), var_newResultingValue_9985, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 252)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_targetObject_5651, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 263)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 263)), var_newResultingValue_9985, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 261)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varOperatorAssignInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varOperatorAssignInstructionAST.mSlotID,
                                extensionMethod_varOperatorAssignInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varOperatorAssignInstructionAST_analyze (defineExtensionMethod_varOperatorAssignInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@varInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2711 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2711 COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                                              extensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@varInstructionAST noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_lstring var_typeName_3133 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 75)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3133 COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInstructionAST.mSlotID,
                                                              extensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@varInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 98)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_4365 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_5078 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_4365, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_5078, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 102)) ;
  GALGAS_objectIR var_expressionResult_5228 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_5078, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 121)), var_expressionResult_5228, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 118)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType_4365.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 125)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType_4365 = extensionGetter_type (var_expressionResult_5228, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 126)) ;
  }
  GALGAS_objectIR var_result_5354 = function_checkAssignmentCompatibility (var_expressionResult_5228, var_targetType_4365, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  GALGAS_lstring var_varName_5601 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 136)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 136)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 136))  COMMA_SOURCE_FILE ("instruction-var.galgas", 136)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 137)) ;
  GALGAS_objectIR var_objectIR_5733 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_5354, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 138)), var_varName_5601  COMMA_SOURCE_FILE ("instruction-var.galgas", 138)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5827 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5827, object->mProperty_mVarName, var_objectIR_5733, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 139)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 139)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertDefinedVariable (object->mProperty_mVarName, extensionGetter_type (var_result_5354, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 142)), GALGAS_bool (true), var_objectIR_5733, extensionGetter_copyable (extensionGetter_type (var_result_5354, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 145)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 140)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varName_5601.getter_string (SOURCE_FILE ("instruction-var.galgas", 149)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_5354, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149))  COMMA_SOURCE_FILE ("instruction-var.galgas", 149)) ;
  {
  extensionSetter_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, var_varName_5601.getter_string (SOURCE_FILE ("instruction-var.galgas", 151)), extensionGetter_type (var_result_5354, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 152)), var_result_5354, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 150)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInstructionWithAssignmentAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                extensionMethod_varInstructionWithAssignmentAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_analyze (defineExtensionMethod_varInstructionWithAssignmentAST_analyze, NULL) ;

