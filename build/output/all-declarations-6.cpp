#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR::GALGAS_operandIR (void) :
mAttribute_mType (),
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR::~ GALGAS_operandIR (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR::GALGAS_operandIR (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                    const GALGAS_valueIR & inOperand1) :
mAttribute_mType (inOperand0),
mAttribute_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_operandIR::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                    const GALGAS_valueIR & inOperand1 
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_operandIR (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operandIR::objectCompare (const GALGAS_operandIR & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_operandIR::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIR::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIR::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<struct @operandIR:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_operandIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_operandIR::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @operandIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandIR ("operandIR",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operandIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operandIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_operandIR::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_operandIR result ;
  const GALGAS_operandIR * p = (const GALGAS_operandIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::GALGAS_procCallEffectiveParameterListIR_2D_element (void) :
mAttribute_mEffectiveParameterPassingMode (),
mAttribute_mSelector (),
mAttribute_mParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::~ GALGAS_procCallEffectiveParameterListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::GALGAS_procCallEffectiveParameterListIR_2D_element (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_operandIR & inOperand2) :
mAttribute_mEffectiveParameterPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mParameter (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element GALGAS_procCallEffectiveParameterListIR_2D_element::constructor_new (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                                        const GALGAS_operandIR & inOperand2 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procCallEffectiveParameterListIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procCallEffectiveParameterListIR_2D_element::objectCompare (const GALGAS_procCallEffectiveParameterListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEffectiveParameterPassingMode.objectCompare (inOperand.mAttribute_mEffectiveParameterPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParameter.objectCompare (inOperand.mAttribute_mParameter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procCallEffectiveParameterListIR_2D_element::isValid (void) const {
  return mAttribute_mEffectiveParameterPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR_2D_element::drop (void) {
  mAttribute_mEffectiveParameterPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mParameter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @procCallEffectiveParameterListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEffectiveParameterPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procCallEffectiveParameterListIR_2D_element::getter_mEffectiveParameterPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procCallEffectiveParameterListIR_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_procCallEffectiveParameterListIR_2D_element::getter_mParameter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @procCallEffectiveParameterListIR-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2D_element ("procCallEffectiveParameterListIR-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procCallEffectiveParameterListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procCallEffectiveParameterListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallEffectiveParameterListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element GALGAS_procCallEffectiveParameterListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR_2D_element result ;
  const GALGAS_procCallEffectiveParameterListIR_2D_element * p = (const GALGAS_procCallEffectiveParameterListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallEffectiveParameterListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallEffectiveParameterListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (void) :
mAttribute_mOperand () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::~ GALGAS_operandIRList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (const GALGAS_operandIR & inOperand0) :
mAttribute_mOperand (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::constructor_new (const GALGAS_operandIR & inOperand0 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIRList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_operandIRList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operandIRList_2D_element::objectCompare (const GALGAS_operandIRList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOperand.objectCompare (inOperand.mAttribute_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_operandIRList_2D_element::isValid (void) const {
  return mAttribute_mOperand.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList_2D_element::drop (void) {
  mAttribute_mOperand.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @operandIRList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_operandIRList_2D_element::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @operandIRList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandIRList_2D_element ("operandIRList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operandIRList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operandIRList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIRList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList_2D_element result ;
  const GALGAS_operandIRList_2D_element * p = (const GALGAS_operandIRList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandIRList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Getter '@procedureDeclarationListAST-element getMangledName'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_getMangledName (const GALGAS_procedureDeclarationListAST_2D_element & inObject,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outMangledName ; // Returned variable
  result_outMangledName = inObject.mAttribute_mProcedureName.mAttribute_string ;
  cEnumerator_procFormalArgumentList enumerator_4091 (inObject.mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
  while (enumerator_4091.hasCurrentObject ()) {
    result_outMangledName.dotAssign_operation (GALGAS_string (" ")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 104)) ;
    switch (enumerator_4091.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_outMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 106)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_outMangledName.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 107)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_outMangledName.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 108)) ;
      }
      break ;
    }
    result_outMangledName.dotAssign_operation (enumerator_4091.current_mSelector (HERE).mAttribute_string  COMMA_SOURCE_FILE ("structure-declaration.galgas", 110)) ;
    enumerator_4091.gotoNextObject () ;
  }
//---
  return result_outMangledName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@globalVariableMapIR-element generateLLVM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateLLVM (const GALGAS_globalVariableMapIR_2D_element inObject,
                                  GALGAS_string & ioArgument_ioLLVMcode,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("@").add_operation (function_mangledNameForGlobalVariable (inObject.mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 251)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 251))  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 251)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (extensionGetter_llvmTypeName (inObject.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 252)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 252))  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 252)) ;
  GALGAS_string var_initialString = extensionGetter_string (inObject.mAttribute_mInitialValue, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 253)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_initialString.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("zeroinitializer")  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 255)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.dotAssign_operation (var_initialString  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 257)) ;
  }
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 259)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@globalConstantMapIR-element generateLLVM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateLLVM (const GALGAS_globalConstantMapIR_2D_element inObject,
                                  GALGAS_string & ioArgument_ioLLVMcode,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("@").add_operation (function_mangledNameForGlobalVariable (inObject.mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 155)).add_operation (GALGAS_string (" = internal constant "), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 155))  COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 155)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (extensionGetter_llvmTypeName (inObject.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 156)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 156)).add_operation (extensionGetter_string (inObject.mAttribute_mSourceExpression, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 156)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 156))  COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 156)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category getter '@booleanDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_booleanDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  result_outLocation = object->mAttribute_mBooleanTypeName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_booleanDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                extensionGetter_booleanDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclaration_location (defineCategoryGetter_booleanDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@booleanDeclaration enterInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  {
  const GALGAS_booleanDeclaration temp_0 = object ;
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mBooleanTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 23)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                              categoryMethod_booleanDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_enterInPrecedenceGraph (defineCategoryMethod_booleanDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@booleanDeclaration keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_booleanDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  result_outRepresentation = GALGAS_string ("bool ").add_operation (object->mAttribute_mBooleanTypeName.getter_string (SOURCE_FILE ("bool-type.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_booleanDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                         extensionGetter_booleanDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanDeclaration_keyRepresentation (defineCategoryGetter_booleanDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@booleanDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                              const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                              GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  GALGAS_bool var_copiable = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_2155 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2155.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2155.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_copiable.operator_not (SOURCE_FILE ("bool-type.galgas", 45)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_2155.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("bool-type.galgas", 46)) ;
      }
      var_copiable = GALGAS_bool (false) ;
    }
    enumerator_2155.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mBooleanTypeName, GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("bool-type.galgas", 54)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("bool-type.galgas", 55)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("bool-type.galgas", 56)), var_copiable, GALGAS_bool (true), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("bool-type.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 52)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.mAttribute_mBooleanType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("bool-type.galgas", 63)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mBooleanTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("Boolean type already defined")  COMMA_SOURCE_FILE ("bool-type.galgas", 64)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mBooleanTypeName, var_boolType COMMA_SOURCE_FILE ("bool-type.galgas", 66)) ;
  }
  ioArgument_ioContext.mAttribute_mBooleanType = var_boolType ;
  {
  routine_enterBooleanOperators (object->mAttribute_mBooleanTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("bool-type.galgas", 69)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                      categoryMethod_booleanDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_enterInContext (defineCategoryMethod_booleanDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@booleanDeclaration initAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                            GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                    categoryMethod_booleanDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_initAnalysis (defineCategoryMethod_booleanDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@booleanDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                        categoryMethod_booleanDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanDeclaration_semanticAnalysis (defineCategoryMethod_booleanDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category getter '@pointerSizeDeclaration location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_pointerSizeDeclaration_location (const cPtr_abstractDeclaration * /* inObject */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("pointer-size.galgas", 12)) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_pointerSizeDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                extensionGetter_pointerSizeDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_pointerSizeDeclaration_location (defineCategoryGetter_pointerSizeDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@pointerSizeDeclaration enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pointerSizeDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pointerSizeDeclaration * object = (const cPtr_pointerSizeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_pointerSizeDeclaration) ;
  GALGAS_lstring var_name = GALGAS_string ("pointer size ").add_operation (object->mAttribute_mSize.mAttribute_bigint.getter_string (SOURCE_FILE ("pointer-size.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("pointer-size.galgas", 40)).getter_nowhere (SOURCE_FILE ("pointer-size.galgas", 40)) ;
  {
  const GALGAS_pointerSizeDeclaration temp_0 = object ;
  ioArgument_ioGraph.modifier_addNode (var_name, temp_0, inCompiler COMMA_SOURCE_FILE ("pointer-size.galgas", 41)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pointerSizeDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                              categoryMethod_pointerSizeDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pointerSizeDeclaration_enterInPrecedenceGraph (defineCategoryMethod_pointerSizeDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category getter '@pointerSizeDeclaration keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_pointerSizeDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_pointerSizeDeclaration * object = (const cPtr_pointerSizeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_pointerSizeDeclaration) ;
  result_outRepresentation = GALGAS_string ("pointer size ").add_operation (object->mAttribute_mSize.mAttribute_bigint.getter_string (SOURCE_FILE ("pointer-size.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("pointer-size.galgas", 47)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_pointerSizeDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                         extensionGetter_pointerSizeDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_pointerSizeDeclaration_keyRepresentation (defineCategoryGetter_pointerSizeDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@pointerSizeDeclaration enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pointerSizeDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                  const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pointerSizeDeclaration * object = (const cPtr_pointerSizeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_pointerSizeDeclaration) ;
  ioArgument_ioContext.mAttribute_mPointerSize = object->mAttribute_mSize.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("pointer-size.galgas", 59)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pointerSizeDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                      categoryMethod_pointerSizeDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pointerSizeDeclaration_enterInContext (defineCategoryMethod_pointerSizeDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@pointerSizeDeclaration initAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pointerSizeDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pointerSizeDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                    categoryMethod_pointerSizeDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pointerSizeDeclaration_initAnalysis (defineCategoryMethod_pointerSizeDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@pointerSizeDeclaration semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pointerSizeDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pointerSizeDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_pointerSizeDeclaration.mSlotID,
                                        categoryMethod_pointerSizeDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pointerSizeDeclaration_semanticAnalysis (defineCategoryMethod_pointerSizeDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category getter '@modeDeclaration location'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_modeDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  result_outLocation = object->mAttribute_mModeName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_modeDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                extensionGetter_modeDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_modeDeclaration_location (defineCategoryGetter_modeDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@modeDeclaration enterInPrecedenceGraph'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_modeDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  {
  const GALGAS_modeDeclaration temp_0 = object ;
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mModeName, temp_0, inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 49)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_modeDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                              categoryMethod_modeDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_modeDeclaration_enterInPrecedenceGraph (defineCategoryMethod_modeDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category getter '@modeDeclaration keyRepresentation'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_modeDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  result_outRepresentation = GALGAS_string ("mode ").add_operation (object->mAttribute_mModeName.getter_string (SOURCE_FILE ("mode-declaration.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 55)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_modeDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                         extensionGetter_modeDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_modeDeclaration_keyRepresentation (defineCategoryGetter_modeDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@modeDeclaration enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_modeDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                           const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                           GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  {
  ioArgument_ioContext.mAttribute_mModeMap.modifier_insertKey (object->mAttribute_mModeName, inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 67)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_modeDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                      categoryMethod_modeDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_modeDeclaration_enterInContext (defineCategoryMethod_modeDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@modeDeclaration initAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_modeDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                         GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_modeDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                    categoryMethod_modeDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_modeDeclaration_initAnalysis (defineCategoryMethod_modeDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@modeDeclaration semanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_modeDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                             const GALGAS_semanticContext /* constinArgument_inContext */,
                                                             GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_modeDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                        categoryMethod_modeDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_modeDeclaration_semanticAnalysis (defineCategoryMethod_modeDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category getter '@enumerationDeclaration location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_enumerationDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outLocation = object->mAttribute_mEnumerationName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_enumerationDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                extensionGetter_enumerationDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclaration_location (defineCategoryGetter_enumerationDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@enumerationDeclaration enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumerationDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  {
  const GALGAS_enumerationDeclaration temp_0 = object ;
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mEnumerationName, temp_0, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 61)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumerationDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                              categoryMethod_enumerationDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_enterInPrecedenceGraph (defineCategoryMethod_enumerationDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category getter '@enumerationDeclaration keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_enumerationDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outRepresentation = GALGAS_string ("enum ").add_operation (object->mAttribute_mEnumerationName.getter_string (SOURCE_FILE ("enumeration-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 67)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_enumerationDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                         extensionGetter_enumerationDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_enumerationDeclaration_keyRepresentation (defineCategoryGetter_enumerationDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@enumerationDeclaration enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumerationDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                  const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_bool var_copiable = GALGAS_bool (true) ;
  GALGAS_enumConstantMap var_enumConstantMap = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration-declaration.galgas", 97)) ;
  GALGAS_typedConstantMap var_constructorMap = GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration-declaration.galgas", 98)) ;
  cEnumerator_lstringlist enumerator_3926 (object->mAttribute_mCaseNameList, kEnumeration_up) ;
  while (enumerator_3926.hasCurrentObject ()) {
    GALGAS_uint var_idx = var_enumConstantMap.getter_count (SOURCE_FILE ("enumeration-declaration.galgas", 100)) ;
    {
    var_enumConstantMap.modifier_insertKey (enumerator_3926.current_mValue (HERE), var_idx, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 101)) ;
    }
    {
    var_constructorMap.modifier_insertKey (enumerator_3926.current_mValue (HERE), GALGAS_valueIR::constructor_literalInteger (var_idx.getter_bigint (SOURCE_FILE ("enumeration-declaration.galgas", 102))  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)) ;
    }
    enumerator_3926.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mEnumerationName, GALGAS_typeKind::constructor_enumeration (var_enumConstantMap  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 106)), var_constructorMap, GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("enumeration-declaration.galgas", 108)), var_copiable, GALGAS_bool (true), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("enumeration-declaration.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 104)) ;
  }
  {
  routine_enterEnumerationOperators (object->mAttribute_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 115)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumerationDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                      categoryMethod_enumerationDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_enterInContext (defineCategoryMethod_enumerationDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@enumerationDeclaration initAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumerationDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumerationDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                    categoryMethod_enumerationDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_initAnalysis (defineCategoryMethod_enumerationDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@enumerationDeclaration semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumerationDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumerationDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                        categoryMethod_enumerationDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumerationDeclaration_semanticAnalysis (defineCategoryMethod_enumerationDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category getter '@structureDeclaration location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_structureDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  result_outLocation = object->mAttribute_mStructureName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_structureDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                extensionGetter_structureDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclaration_location (defineCategoryGetter_structureDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@structureDeclaration enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structureDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  {
  const GALGAS_structureDeclaration temp_0 = object ;
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mStructureName, temp_0, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 83)) ;
  }
  cEnumerator_structureFieldListAST enumerator_3158 (object->mAttribute_mStructureFieldListAST, kEnumeration_up) ;
  while (enumerator_3158.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_3158.current_mFieldTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.modifier_addEdge (object->mAttribute_mStructureName, enumerator_3158.current_mFieldTypeName (HERE) COMMA_SOURCE_FILE ("structure-declaration.galgas", 86)) ;
      }
    }
    enumerator_3158.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structureDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                              categoryMethod_structureDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_enterInPrecedenceGraph (defineCategoryMethod_structureDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category getter '@structureDeclaration keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_structureDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  result_outRepresentation = GALGAS_string ("struct ").add_operation (object->mAttribute_mStructureName.getter_string (SOURCE_FILE ("structure-declaration.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 94)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_structureDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                         extensionGetter_structureDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_structureDeclaration_keyRepresentation (defineCategoryGetter_structureDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@structureDeclaration enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structureDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                const GALGAS_procedureDeclarationListAST constinArgument_inProcedureListAST,
                                                                GALGAS_semanticContext & ioArgument_ioContext,
                                                                GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  GALGAS_bool var_copiable = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_5293 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_5293.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_5293.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_copiable.operator_not (SOURCE_FILE ("structure-declaration.galgas", 141)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_5293.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 142)) ;
      }
      var_copiable = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_location location_3 (enumerator_5293.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 146)) ;
    }
    enumerator_5293.gotoNextObject () ;
  }
  GALGAS_propertyList var_propertyList = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("structure-declaration.galgas", 150)) ;
  GALGAS_propertyMap var_propertyMap = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 151)) ;
  cEnumerator_structureFieldListAST enumerator_5606 (object->mAttribute_mStructureFieldListAST, kEnumeration_up) ;
  while (enumerator_5606.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_fieldTypeNameProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_5606.current_mFieldTypeName (HERE), var_fieldTypeNameProxy COMMA_SOURCE_FILE ("structure-declaration.galgas", 153)) ;
    }
    var_propertyList.addAssign_operation (enumerator_5606.current_mFieldName (HERE).mAttribute_string, var_fieldTypeNameProxy  COMMA_SOURCE_FILE ("structure-declaration.galgas", 154)) ;
    {
    var_propertyMap.modifier_insertKey (enumerator_5606.current_mFieldName (HERE), var_fieldTypeNameProxy, var_propertyMap.getter_count (SOURCE_FILE ("structure-declaration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 155)) ;
    }
    enumerator_5606.gotoNextObject () ;
  }
  GALGAS_procedureMap var_procedureMap = GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 158)) ;
  cEnumerator_procedureDeclarationListAST enumerator_5944 (constinArgument_inProcedureListAST, kEnumeration_up) ;
  while (enumerator_5944.hasCurrentObject ()) {
    switch (enumerator_5944.current (HERE).mAttribute_mProcedureKind.enumValue ()) {
    case GALGAS_procedureKindAST::kNotBuilt:
      break ;
    case GALGAS_procedureKindAST::kEnum_standAloneProc:
      {
      }
      break ;
    case GALGAS_procedureKindAST::kEnum_structureProc:
      {
        const cEnumAssociatedValues_procedureKindAST_structureProc * extractPtr_6696 = (const cEnumAssociatedValues_procedureKindAST_structureProc *) (enumerator_5944.current (HERE).mAttribute_mProcedureKind.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_structureTypeName = extractPtr_6696->mAssociatedValue0 ;
        const GALGAS_bool extractedValue_mutating = extractPtr_6696->mAssociatedValue1 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, object->mAttribute_mStructureName.mAttribute_string.objectCompare (extractedValue_structureTypeName.mAttribute_string)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_procedureSignature var_signature = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("structure-declaration.galgas", 164)) ;
          cEnumerator_procFormalArgumentList enumerator_6281 (enumerator_5944.current (HERE).mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
          while (enumerator_6281.hasCurrentObject ()) {
            GALGAS_unifiedTypeMap_2D_proxy var_typeProxy ;
            {
            GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_6281.current_mFormalArgumentTypeName (HERE), var_typeProxy COMMA_SOURCE_FILE ("structure-declaration.galgas", 166)) ;
            }
            var_signature.addAssign_operation (enumerator_6281.current_mFormalArgumentPassingMode (HERE), enumerator_6281.current_mSelector (HERE).mAttribute_string, var_typeProxy  COMMA_SOURCE_FILE ("structure-declaration.galgas", 167)) ;
            enumerator_6281.gotoNextObject () ;
          }
          {
          var_procedureMap.modifier_insertKey (GALGAS_lstring::constructor_new (extensionGetter_getMangledName (enumerator_5944.current (HERE), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 170)), enumerator_5944.current (HERE).mAttribute_mProcedureName.mAttribute_location  COMMA_SOURCE_FILE ("structure-declaration.galgas", 170)), extractedValue_mutating, GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 172)), var_signature, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 169)) ;
          }
        }
      }
      break ;
    }
    enumerator_5944.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mStructureName, GALGAS_typeKind::constructor_structure (object->mAttribute_mStructureName.mAttribute_string, var_propertyMap, var_propertyList  COMMA_SOURCE_FILE ("structure-declaration.galgas", 182)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 183)), var_procedureMap, var_copiable, GALGAS_bool (false), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("structure-declaration.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 180)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structureDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                      categoryMethod_structureDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_enterInContext (defineCategoryMethod_structureDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@structureDeclaration initAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structureDeclaration_initAnalysis (const cPtr_abstractDeclaration * inObject,
                                                              GALGAS_semanticContext & ioArgument_ioContext,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclaration * object = (const cPtr_structureDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclaration) ;
  GALGAS_staticStringMap var_globalLiteralStringMap = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 199)) ;
  GALGAS_operandIRList var_operandIRList = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("structure-declaration.galgas", 200)) ;
  cEnumerator_structureFieldListAST enumerator_7656 (object->mAttribute_mStructureFieldListAST, kEnumeration_up) ;
  while (enumerator_7656.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_7656.current_mFieldTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("structure-declaration.galgas", 204)) ;
    }else if (kBoolFalse == test_1) {
      temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_7656.current_mFieldTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("structure-declaration.galgas", 205)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_fieldType = temp_0 ;
    GALGAS_instructionListIR var_initInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("structure-declaration.galgas", 208)) ;
    GALGAS_semanticTemporariesStruct var_temporaries = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("structure-declaration.galgas", 209)) ;
    GALGAS_variableMap joker_8354 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("structure-declaration.galgas", 219)) ;
    GALGAS_operandIR var_expressionIR ;
    callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_7656.current_mInitExpression (HERE).ptr (), GALGAS_lstring::constructor_new (object->mAttribute_mStructureName.mAttribute_string.add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 211)), object->mAttribute_mStructureName.mAttribute_location  COMMA_SOURCE_FILE ("structure-declaration.galgas", 211)), GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("structure-declaration.galgas", 212)), var_fieldType, ioArgument_ioContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("structure-declaration.galgas", 215)), GALGAS_bool (false), var_temporaries, var_globalLiteralStringMap, joker_8354, var_initInstructionGenerationList, var_expressionIR, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 210)) ;
    const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionIR.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 223)).operator_not (SOURCE_FILE ("structure-declaration.galgas", 223)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_7656.current_mFieldName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("initialization expression cannot be computed statically")  COMMA_SOURCE_FILE ("structure-declaration.galgas", 224)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_type ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_fieldType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("structure-declaration.galgas", 227)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_type = var_fieldType ;
    }else if (kBoolFalse == test_4) {
      var_type = var_expressionIR.mAttribute_mType ;
    }
    var_operandIRList.addAssign_operation (GALGAS_operandIR::constructor_new (var_type, var_expressionIR.mAttribute_mValue  COMMA_SOURCE_FILE ("structure-declaration.galgas", 232))  COMMA_SOURCE_FILE ("structure-declaration.galgas", 232)) ;
    enumerator_7656.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mConstructorMap.modifier_insertKey (object->mAttribute_mStructureName, var_operandIRList, inCompiler COMMA_SOURCE_FILE ("structure-declaration.galgas", 234)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structureDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_structureDeclaration.mSlotID,
                                    categoryMethod_structureDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclaration_initAnalysis (defineCategoryMethod_structureDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@structureDeclaration semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structureDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                  const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                  GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
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
//                          Overriding category getter '@globalConstantDeclaration location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_globalConstantDeclaration_location (const cPtr_abstractDeclaration * inObject,
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

static void defineCategoryGetter_globalConstantDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                extensionGetter_globalConstantDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclaration_location (defineCategoryGetter_globalConstantDeclaration_location, NULL) ;

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
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 54)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioGraph.modifier_addEdge (object->mAttribute_mConstantName, object->mAttribute_mTypeName COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 56)) ;
    }
  }
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), object->mAttribute_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 58)) ;
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
//                      Overriding category getter '@globalConstantDeclaration keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_globalConstantDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mAttribute_mConstantName.getter_string (SOURCE_FILE ("global-constant-declaration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 64)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_globalConstantDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                         extensionGetter_globalConstantDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclaration_keyRepresentation (defineCategoryGetter_globalConstantDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@globalConstantDeclaration enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalConstantDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                     const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_constantType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_constantType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("global-constant-declaration.galgas", 87)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, var_constantType COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 89)) ;
    }
  }
  GALGAS_semanticTemporariesStruct var_temporaries = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("global-constant-declaration.galgas", 92)) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("global-constant-declaration.galgas", 93)) ;
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("global-constant-declaration.galgas", 94)) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("global-constant-declaration.galgas", 96)), GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("global-constant-declaration.galgas", 97)), var_constantType, ioArgument_ioContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("global-constant-declaration.galgas", 100)), GALGAS_bool (true), var_temporaries, ioArgument_ioGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 95)) ;
  {
  routine_checkAssignmentCompatibility (var_expressionResult, var_constantType, object->mAttribute_mConstantName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 109)) ;
  }
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList.getter_length (SOURCE_FILE ("global-constant-declaration.galgas", 115)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = extensionGetter_isStatic (var_expressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 115)).operator_not (SOURCE_FILE ("global-constant-declaration.galgas", 115)) ;
  }
  const enumGalgasBool test_2 = test_1.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mConstantName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("source expression cannot be statically computed")  COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 116)) ;
  }
  {
  GALGAS_unifiedTypeMap_2D_proxy temp_4 ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_constantType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("global-constant-declaration.galgas", 121)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = var_expressionResult.mAttribute_mType ;
  }else if (kBoolFalse == test_5) {
    temp_4 = var_constantType ;
  }
  ioArgument_ioContext.mAttribute_mGlobalConstantMap.modifier_insertKey (object->mAttribute_mConstantName, temp_4, var_expressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 119)) ;
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
//                        Overriding category method '@globalConstantDeclaration initAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalConstantDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                   GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_globalConstantDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                    categoryMethod_globalConstantDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_initAnalysis (defineCategoryMethod_globalConstantDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@globalConstantDeclaration semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_globalConstantDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_valueIR var_expressionGeneratedCode ;
  constinArgument_inContext.mAttribute_mGlobalConstantMap.method_searchKey (object->mAttribute_mConstantName, var_type, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 138)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalConstantMap.modifier_insertKey (object->mAttribute_mConstantName, var_type, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 143)) ;
  }
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
//                              Overriding category getter '@integerDeclaration location'                              *
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

static void defineCategoryGetter_integerDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                extensionGetter_integerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclaration_location (defineCategoryGetter_integerDeclaration_location, NULL) ;

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
  const GALGAS_integerDeclaration temp_0 = object ;
  GALGAS_lstring var_integerTypeName = callCategoryGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 75)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 75)) ;
  {
  const GALGAS_integerDeclaration temp_1 = object ;
  ioArgument_ioGraph.modifier_addNode (var_integerTypeName, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 76)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (var_integerTypeName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 77)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 77)) COMMA_SOURCE_FILE ("type-integer.galgas", 77)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (var_integerTypeName, function_literalIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 78)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 78)) COMMA_SOURCE_FILE ("type-integer.galgas", 78)) ;
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
//                         Overriding category getter '@integerDeclaration keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_integerDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (callCategoryGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 84)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_integerDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                         extensionGetter_integerDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclaration_keyRepresentation (defineCategoryGetter_integerDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@integerDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                              const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                              GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  const GALGAS_integerDeclaration temp_0 = object ;
  GALGAS_lstring var_integerTypeName = callCategoryGetter_typeName ((const cPtr_integerDeclaration *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 96)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 96)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  const enumGalgasBool test_1 = object->mAttribute_mIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    var_min = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 101)).left_shift_operation (object->mAttribute_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 101)) COMMA_SOURCE_FILE ("type-integer.galgas", 101)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 101)) ;
    var_max = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 102)).left_shift_operation (object->mAttribute_mSize.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 102)) COMMA_SOURCE_FILE ("type-integer.galgas", 102)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 102)) ;
  }else if (kBoolFalse == test_1) {
    var_min = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 104)) ;
    var_max = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 105)).left_shift_operation (object->mAttribute_mSize COMMA_SOURCE_FILE ("type-integer.galgas", 105)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 105)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (var_integerTypeName, GALGAS_typeKind::constructor_integer (var_min, var_max, object->mAttribute_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 110)), object->mAttribute_mSize  COMMA_SOURCE_FILE ("type-integer.galgas", 110)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 111)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 112)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-integer.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 108)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName, object->mAttribute_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 119)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName, object->mAttribute_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 125)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName, object->mAttribute_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 131)) ;
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
//                            Overriding category method '@integerDeclaration initAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                            GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_integerDeclaration.mSlotID,
                                    categoryMethod_integerDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDeclaration_initAnalysis (defineCategoryMethod_integerDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@integerDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
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
//            Overriding category method '@infixObjectObjectOperatorDescription generateInfixOperatorCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                           const GALGAS_operandIR constinArgument_inLeftOperand,
                                                                                           const GALGAS_location constinArgument_inOperatorLocation,
                                                                                           const GALGAS_operandIR constinArgument_inRightOperand,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                           GALGAS_operandIR & outArgument_outResult,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixObjectObjectOperatorDescription * object = (const cPtr_infixObjectObjectOperatorDescription *) inObject ;
  macroValidSharedObject (object, cPtr_infixObjectObjectOperatorDescription) ;
  {
  routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 311)) ;
  }
  {
  categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inLeftOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 313)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (void) {
  enterCategoryMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription.mSlotID,
                                                 categoryMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (defineCategoryMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@integerObject_literal_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                const GALGAS_operandIR constinArgument_inLeftOperand,
                                                                                                const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                const GALGAS_operandIR constinArgument_inRightOperand,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                GALGAS_operandIR & outArgument_outResult,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_infixOperator * object = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  GALGAS_bigint var_literalValue ;
  constinArgument_inRightOperand.mAttribute_mValue.method_literalInteger (var_literalValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 468)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  GALGAS_bool joker_17810 ; // Joker input parameter
  GALGAS_uint joker_17822 ; // Joker input parameter
  constinArgument_inLeftOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 469)).method_integer (var_min, var_max, joker_17810, joker_17822, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 469)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue.objectCompare (var_min)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min.getter_string (SOURCE_FILE ("type-integer.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 471)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 471))  COMMA_SOURCE_FILE ("type-integer.galgas", 471)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_literalValue.objectCompare (var_max)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max.getter_string (SOURCE_FILE ("type-integer.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 473)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 473))  COMMA_SOURCE_FILE ("type-integer.galgas", 473)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 475)) ;
      }
      {
      categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inLeftOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 476)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (void) {
  enterCategoryMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator.mSlotID,
                                                 categoryMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (defineCategoryMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@integerObject_literal_divisionOperator generateInfixOperatorCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                   const GALGAS_operandIR constinArgument_inLeftOperand,
                                                                                                   const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                   const GALGAS_operandIR constinArgument_inRightOperand,
                                                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                   GALGAS_operandIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_divisionOperator * object = (const cPtr_integerObject_5F_literal_5F_divisionOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_divisionOperator) ;
  GALGAS_bigint var_literalValue ;
  constinArgument_inRightOperand.mAttribute_mValue.method_literalInteger (var_literalValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 505)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  GALGAS_bool joker_19348 ; // Joker input parameter
  GALGAS_uint joker_19360 ; // Joker input parameter
  constinArgument_inLeftOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 506)).method_integer (var_min, var_max, joker_19348, joker_19360, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 506)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue.objectCompare (var_min)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min.getter_string (SOURCE_FILE ("type-integer.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 508)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 508))  COMMA_SOURCE_FILE ("type-integer.galgas", 508)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_literalValue.objectCompare (var_max)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max.getter_string (SOURCE_FILE ("type-integer.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 510)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 510))  COMMA_SOURCE_FILE ("type-integer.galgas", 510)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_literalValue.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 511)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("division by zero")  COMMA_SOURCE_FILE ("type-integer.galgas", 512)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        {
        routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 514)) ;
        }
        {
        categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inLeftOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 515)) ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode (void) {
  enterCategoryMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_divisionOperator.mSlotID,
                                                 categoryMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode (defineCategoryMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@literal_integerObject_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                const GALGAS_operandIR constinArgument_inLeftOperand,
                                                                                                const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                const GALGAS_operandIR constinArgument_inRightOperand,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                GALGAS_operandIR & outArgument_outResult,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_integerObject_5F_infixOperator * object = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  GALGAS_bigint var_literalValue ;
  constinArgument_inLeftOperand.mAttribute_mValue.method_literalInteger (var_literalValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 671)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  GALGAS_bool joker_25572 ; // Joker input parameter
  GALGAS_uint joker_25584 ; // Joker input parameter
  constinArgument_inRightOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 672)).method_integer (var_min, var_max, joker_25572, joker_25584, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 672)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue.objectCompare (var_min)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min.getter_string (SOURCE_FILE ("type-integer.galgas", 674)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 674)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 674))  COMMA_SOURCE_FILE ("type-integer.galgas", 674)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_literalValue.objectCompare (var_max)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max.getter_string (SOURCE_FILE ("type-integer.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 676)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 676))  COMMA_SOURCE_FILE ("type-integer.galgas", 676)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 678)) ;
      }
      {
      categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inRightOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 679)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (void) {
  enterCategoryMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator.mSlotID,
                                                 categoryMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (defineCategoryMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category getter '@literalIntegerDeclaration location'                           *
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

static void defineCategoryGetter_literalIntegerDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                extensionGetter_literalIntegerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclaration_location (defineCategoryGetter_literalIntegerDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@literalIntegerDeclaration enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerDeclaration * object = (const cPtr_literalIntegerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerDeclaration) ;
  GALGAS_lstring var_literalIntegerTypeName = function_literalIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 21)) ;
  {
  const GALGAS_literalIntegerDeclaration temp_0 = object ;
  ioArgument_ioGraph.modifier_addNode (var_literalIntegerTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (var_literalIntegerTypeName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 23)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 23)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 23)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                              categoryMethod_literalIntegerDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_enterInPrecedenceGraph (defineCategoryMethod_literalIntegerDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category getter '@literalIntegerDeclaration keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalIntegerDeclaration_keyRepresentation (const cPtr_abstractDeclaration * /* inObject */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_literalIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_literalIntegerDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                         extensionGetter_literalIntegerDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalIntegerDeclaration_keyRepresentation (defineCategoryGetter_literalIntegerDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@literalIntegerDeclaration enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerDeclaration_enterInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                     const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName = function_literalIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 41)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 41)) ;
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (var_integerTypeName, GALGAS_typeKind::constructor_literalInteger (SOURCE_FILE ("type-literal-integer.galgas", 45)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-literal-integer.galgas", 46)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-literal-integer.galgas", 47)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-literal-integer.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 43)) ;
  }
  {
  routine_enterLiteralIntegerOperators (var_integerTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 54)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                      categoryMethod_literalIntegerDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_enterInContext (defineCategoryMethod_literalIntegerDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@literalIntegerDeclaration initAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                   GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                    categoryMethod_literalIntegerDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_initAnalysis (defineCategoryMethod_literalIntegerDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@literalIntegerDeclaration semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                       GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_literalIntegerDeclaration.mSlotID,
                                        categoryMethod_literalIntegerDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerDeclaration_semanticAnalysis (defineCategoryMethod_literalIntegerDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@literal_literal_integerInfixOperation generateInfixOperatorCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                  GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                                  GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                                  const GALGAS_operandIR constinArgument_inLeftOperand,
                                                                                                  const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                                                  const GALGAS_operandIR constinArgument_inRightOperand,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                  GALGAS_operandIR & outArgument_outResult,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue ;
  constinArgument_inLeftOperand.mAttribute_mValue.method_literalInteger (var_leftValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 243)) ;
  GALGAS_bigint var_rightValue ;
  constinArgument_inRightOperand.mAttribute_mValue.method_literalInteger (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 244)) ;
  GALGAS_bigint var_result ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_literalIntegerInfixOperator::kNotBuilt:
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_equal:
    {
      var_result = GALGAS_bool (kIsEqual, var_leftValue.objectCompare (var_rightValue)).getter_bigint (SOURCE_FILE ("type-literal-integer.galgas", 247)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_nonEqual:
    {
      var_result = GALGAS_bool (kIsNotEqual, var_leftValue.objectCompare (var_rightValue)).getter_bigint (SOURCE_FILE ("type-literal-integer.galgas", 248)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_strictInf:
    {
      var_result = GALGAS_bool (kIsStrictInf, var_leftValue.objectCompare (var_rightValue)).getter_bigint (SOURCE_FILE ("type-literal-integer.galgas", 249)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_infEqual:
    {
      var_result = GALGAS_bool (kIsInfOrEqual, var_leftValue.objectCompare (var_rightValue)).getter_bigint (SOURCE_FILE ("type-literal-integer.galgas", 250)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_strictSup:
    {
      var_result = GALGAS_bool (kIsStrictSup, var_leftValue.objectCompare (var_rightValue)).getter_bigint (SOURCE_FILE ("type-literal-integer.galgas", 251)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_supEqual:
    {
      var_result = GALGAS_bool (kIsSupOrEqual, var_leftValue.objectCompare (var_rightValue)).getter_bigint (SOURCE_FILE ("type-literal-integer.galgas", 252)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_and:
    {
      var_result = var_leftValue.operator_and (var_rightValue COMMA_SOURCE_FILE ("type-literal-integer.galgas", 253)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_ior:
    {
      var_result = var_leftValue.operator_or (var_rightValue COMMA_SOURCE_FILE ("type-literal-integer.galgas", 254)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_xor:
    {
      var_result = var_leftValue.operator_xor (var_rightValue COMMA_SOURCE_FILE ("type-literal-integer.galgas", 255)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_add:
    {
      var_result = var_leftValue.add_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 256)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_sub:
    {
      var_result = var_leftValue.substract_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 257)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_mul:
    {
      var_result = var_leftValue.multiply_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 258)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_div:
    {
      var_result = var_leftValue.divide_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 259)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_rem:
    {
      var_result = var_leftValue.modulo_operation (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 260)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_leftShift:
    {
      var_result = var_leftValue.left_shift_operation (var_rightValue.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 261)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 261)) ;
    }
    break ;
  case GALGAS_literalIntegerInfixOperator::kEnum_rightShift:
    {
      var_result = var_leftValue.right_shift_operation (var_rightValue.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 262)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 262)) ;
    }
    break ;
  }
  outArgument_outResult = GALGAS_operandIR::constructor_new (constinArgument_inResultType, GALGAS_valueIR::constructor_literalInteger (var_result  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 264))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 264)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (void) {
  enterCategoryMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation.mSlotID,
                                                 categoryMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (defineCategoryMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category getter '@literalStringDeclaration location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_literalStringDeclaration_location (const cPtr_abstractDeclaration * inObject,
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

static void defineCategoryGetter_literalStringDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                extensionGetter_literalStringDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalStringDeclaration_location (defineCategoryGetter_literalStringDeclaration_location, NULL) ;

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
  {
  ioArgument_ioGraph.modifier_addEdge (object->mAttribute_mLiteralStringTypeName, GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 23)) COMMA_SOURCE_FILE ("type-static-string.galgas", 23)) ;
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
//                      Overriding category getter '@literalStringDeclaration keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_literalStringDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (object->mAttribute_mLiteralStringTypeName.getter_string (SOURCE_FILE ("type-static-string.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_literalStringDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                         extensionGetter_literalStringDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_literalStringDeclaration_keyRepresentation (defineCategoryGetter_literalStringDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@literalStringDeclaration enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                    const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_uint_38_Type ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 41)), var_uint_38_Type COMMA_SOURCE_FILE ("type-static-string.galgas", 41)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mLiteralStringTypeName, GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("type-static-string.galgas", 45)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-static-string.galgas", 46)), GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("type-static-string.galgas", 47)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), var_uint_38_Type, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 43)) ;
  }
  {
  routine_enterStaticStringOperators (object->mAttribute_mLiteralStringTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 54)) ;
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
//                         Overriding category method '@literalStringDeclaration initAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                  GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_literalStringDeclaration.mSlotID,
                                    categoryMethod_literalStringDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringDeclaration_initAnalysis (defineCategoryMethod_literalStringDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@literalStringDeclaration semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                      const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                      GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
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
//                             Overriding category getter '@registerDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_registerDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  result_outLocation = object->mAttribute_mRegisterTypeName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_registerDeclaration_location (void) {
  enterCategoryGetter_location (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                extensionGetter_registerDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_registerDeclaration_location (defineCategoryGetter_registerDeclaration_location, NULL) ;

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
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mRegisterDeclarationList.getter_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 107)), temp_0, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 107)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (object->mAttribute_mRegisterDeclarationList.getter_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 108)), object->mAttribute_mRegisterTypeName COMMA_SOURCE_FILE ("register-declaration.galgas", 108)) ;
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
//                         Overriding category getter '@registerDeclaration keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_registerDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  result_outRepresentation = GALGAS_string ("register ").add_operation (object->mAttribute_mRegisterDeclarationList.getter_mRegisterNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 114)).getter_string (SOURCE_FILE ("register-declaration.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 114)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_registerDeclaration_keyRepresentation (void) {
  enterCategoryGetter_keyRepresentation (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                         extensionGetter_registerDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_registerDeclaration_keyRepresentation (defineCategoryGetter_registerDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@registerDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                               const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_registerType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mRegisterTypeName, var_registerType COMMA_SOURCE_FILE ("register-declaration.galgas", 159)) ;
  }
  GALGAS_registerFieldMap var_registerFieldMap = GALGAS_registerFieldMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 161)) ;
  GALGAS_registerBitSliceAccessMap var_registerBitSliceMap = GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 162)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mRegisterBitSliceList.getter_length (SOURCE_FILE ("register-declaration.galgas", 163)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_shiftCount = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_registerBitSliceList enumerator_6572 (object->mAttribute_mRegisterBitSliceList, kEnumeration_down) ;
    while (enumerator_6572.hasCurrentObject ()) {
      switch (enumerator_6572.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_registerBitSlice::kNotBuilt:
        break ;
      case GALGAS_registerBitSlice::kEnum_unusedBits:
        {
          const cEnumAssociatedValues_registerBitSlice_unusedBits * extractPtr_6701 = (const cEnumAssociatedValues_registerBitSlice_unusedBits *) (enumerator_6572.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_6701->mAssociatedValue0 ;
          var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 168)) ;
        }
        break ;
      case GALGAS_registerBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_registerBitSlice_namedBit * extractPtr_7548 = (const cEnumAssociatedValues_registerBitSlice_namedBit *) (enumerator_6572.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_name = extractPtr_7548->mAssociatedValue0 ;
          const GALGAS_lbigint extractedValue_count = extractPtr_7548->mAssociatedValue1 ;
          GALGAS_uint var_bitCount = extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 170)) ;
          {
          var_registerFieldMap.modifier_insertKey (extractedValue_name, var_shiftCount, var_bitCount, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 171)) ;
          }
          GALGAS_registerBitSliceAccessMap var_registerSubMap = GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 176)) ;
          {
          var_registerSubMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("shift"), extractedValue_name.mAttribute_location  COMMA_SOURCE_FILE ("register-declaration.galgas", 178)), GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("register-declaration.galgas", 179)), var_shiftCount.getter_bigint (SOURCE_FILE ("register-declaration.galgas", 180)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 181)), var_registerType, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 177)) ;
          }
          {
          var_registerSubMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("bool"), extractedValue_name.mAttribute_location  COMMA_SOURCE_FILE ("register-declaration.galgas", 185)), GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("register-declaration.galgas", 186)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 187)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("register-declaration.galgas", 188)), ioArgument_ioContext.mAttribute_mBooleanType, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 184)) ;
          }
          GALGAS_bigint var_mask = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 191)).left_shift_operation (var_bitCount COMMA_SOURCE_FILE ("register-declaration.galgas", 191)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 191)).left_shift_operation (var_shiftCount COMMA_SOURCE_FILE ("register-declaration.galgas", 191)) ;
          {
          var_registerBitSliceMap.modifier_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("register-declaration.galgas", 194)), var_mask, var_registerSubMap, var_registerType, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 192)) ;
          }
          var_shiftCount = var_shiftCount.add_operation (var_bitCount, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 199)) ;
        }
        break ;
      }
      enumerator_6572.gotoNextObject () ;
    }
  }
  cEnumerator_registerDeclarationList enumerator_7616 (object->mAttribute_mRegisterDeclarationList, kEnumeration_up) ;
  while (enumerator_7616.hasCurrentObject ()) {
    GALGAS_bool var_isReadOnly = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7704 (enumerator_7616.current_mAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_7704.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_7704.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("ro"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_7704.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("only @ro attribute (read only) is accepted here")  COMMA_SOURCE_FILE ("register-declaration.galgas", 209)) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_3 = var_isReadOnly.boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (enumerator_7704.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("register-declaration.galgas", 211)) ;
        }else if (kBoolFalse == test_3) {
          var_isReadOnly = GALGAS_bool (true) ;
        }
      }
      enumerator_7704.gotoNextObject () ;
    }
    {
    ioArgument_ioContext.mAttribute_mRegisterMap.modifier_insertKey (enumerator_7616.current_mRegisterName (HERE), var_registerType, var_isReadOnly, var_registerBitSliceMap, var_registerFieldMap, enumerator_7616.current_mRegisterAddress (HERE).mAttribute_bigint, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 216)) ;
    }
    enumerator_7616.gotoNextObject () ;
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
//                           Overriding category method '@registerDeclaration initAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerDeclaration_initAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                             GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerDeclaration_initAnalysis (void) {
  enterCategoryMethod_initAnalysis (kTypeDescriptor_GALGAS_registerDeclaration.mSlotID,
                                    categoryMethod_registerDeclaration_initAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerDeclaration_initAnalysis (defineCategoryMethod_registerDeclaration_initAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@registerDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_registerType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mRegisterTypeName, inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 240)) ;
  switch (var_registerType.getter_kind (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 241)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      GALGAS_location location_0 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_0, GALGAS_string ("a boolean type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 242)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
    {
      GALGAS_location location_1 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("a boolset type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 243)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_9913 = (const cEnumAssociatedValues_typeKind_integer *) (var_registerType.getter_kind (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 241)).unsafePointer ()) ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_9913->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_size = extractPtr_9913->mAssociatedValue3 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mAttribute_mRegisterBitSliceList.getter_length (SOURCE_FILE ("register-declaration.galgas", 245)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = extractedValue_unsigned.operator_not (SOURCE_FILE ("register-declaration.galgas", 246)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("the register type should be unsigned in order to define bit slices")  COMMA_SOURCE_FILE ("register-declaration.galgas", 247)) ;
        }
        GALGAS_uint var_shiftCount = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_registerBitSliceList enumerator_9501 (object->mAttribute_mRegisterBitSliceList, kEnumeration_down) ;
        while (enumerator_9501.hasCurrentObject ()) {
          switch (enumerator_9501.current_mRegisterBitSlice (HERE).enumValue ()) {
          case GALGAS_registerBitSlice::kNotBuilt:
            break ;
          case GALGAS_registerBitSlice::kEnum_unusedBits:
            {
              const cEnumAssociatedValues_registerBitSlice_unusedBits * extractPtr_9636 = (const cEnumAssociatedValues_registerBitSlice_unusedBits *) (enumerator_9501.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
              const GALGAS_lbigint extractedValue_count = extractPtr_9636->mAssociatedValue0 ;
              var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 253)) ;
            }
            break ;
          case GALGAS_registerBitSlice::kEnum_namedBit:
            {
              const cEnumAssociatedValues_registerBitSlice_namedBit * extractPtr_9735 = (const cEnumAssociatedValues_registerBitSlice_namedBit *) (enumerator_9501.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
              const GALGAS_lbigint extractedValue_count = extractPtr_9735->mAssociatedValue1 ;
              var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 255)) ;
            }
            break ;
          }
          enumerator_9501.gotoNextObject () ;
        }
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, extractedValue_size.objectCompare (var_shiftCount)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount.getter_string (SOURCE_FILE ("register-declaration.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 259)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 259)).add_operation (extractedValue_size.getter_string (SOURCE_FILE ("register-declaration.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 259)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 259))  COMMA_SOURCE_FILE ("register-declaration.galgas", 259)) ;
        }
      }
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      GALGAS_location location_7 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_7, GALGAS_string ("a literal string type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 262)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      GALGAS_location location_8 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_8, GALGAS_string ("a structure type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 263)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      GALGAS_location location_9 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_9, GALGAS_string ("an enumeration type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 264)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalInteger:
    {
      GALGAS_location location_10 (object->mAttribute_mRegisterTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_10, GALGAS_string ("a literal integer type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 265)) ;
    }
    break ;
  }
  GALGAS_bigint var_maxAddress = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 268)).left_shift_operation (constinArgument_inContext.mAttribute_mPointerSize COMMA_SOURCE_FILE ("register-declaration.galgas", 268)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 268)) ;
  cEnumerator_registerDeclarationList enumerator_10449 (object->mAttribute_mRegisterDeclarationList, kEnumeration_up) ;
  while (enumerator_10449.hasCurrentObject ()) {
    const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, enumerator_10449.current_mRegisterAddress (HERE).mAttribute_bigint.objectCompare (var_maxAddress)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_location location_12 (enumerator_10449.current_mRegisterAddress (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_12, GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxAddress.getter_hexString (SOURCE_FILE ("register-declaration.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 271))  COMMA_SOURCE_FILE ("register-declaration.galgas", 271)) ;
    }
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mRegisterMap.modifier_insertKey (enumerator_10449.current_mRegisterName (HERE), object->mAttribute_mRegisterTypeName.mAttribute_string, enumerator_10449.current_mRegisterAddress (HERE).mAttribute_bigint, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 274)) ;
    }
    enumerator_10449.gotoNextObject () ;
  }
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
//               Overriding category method '@convertExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inConstantName,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 44)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                            categoryMethod_convertExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_convertExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@convertExpressionAST analyzeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_convertExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                   const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                   const GALGAS_receiverType constinArgument_inReceiverType,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_stringset constinArgument_inModeSet,
                                                                   const GALGAS_bool constinArgument_inAllowExceptions,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GALGAS_operandIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 67)) ;
  const enumGalgasBool test_0 = constinArgument_inAllowExceptions.operator_not (SOURCE_FILE ("expression-convert.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 82)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 82))  COMMA_SOURCE_FILE ("expression-convert.galgas", 82)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 85)) ;
  const enumGalgasBool test_2 = var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 87)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 87)).operator_not (SOURCE_FILE ("expression-convert.galgas", 87)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this type is not an integer type")  COMMA_SOURCE_FILE ("expression-convert.galgas", 88)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 89)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 89)).operator_not (SOURCE_FILE ("expression-convert.galgas", 89)).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("expression type is not an integer type")  COMMA_SOURCE_FILE ("expression-convert.galgas", 90)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bigint var_minSource ;
      GALGAS_bigint var_maxSource ;
      GALGAS_bool joker_4316 ; // Joker input parameter
      GALGAS_uint joker_4328 ; // Joker input parameter
      var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 92)).method_integer (var_minSource, var_maxSource, joker_4316, joker_4328, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 92)) ;
      GALGAS_bigint var_minTarget ;
      GALGAS_bigint var_maxTarget ;
      GALGAS_bool joker_4410 ; // Joker input parameter
      GALGAS_uint joker_4422 ; // Joker input parameter
      var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 93)).method_integer (var_minTarget, var_maxTarget, joker_4410, joker_4422, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 93)) ;
      GALGAS_bool test_5 = GALGAS_bool (kIsInfOrEqual, var_minTarget.objectCompare (var_minSource)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = GALGAS_bool (kIsSupOrEqual, var_maxTarget.objectCompare (var_maxSource)) ;
      }
      GALGAS_bool var_alwaysPossible = test_5 ;
      const enumGalgasBool test_6 = var_alwaysPossible.boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("useless explicit conversion")  COMMA_SOURCE_FILE ("expression-convert.galgas", 96)) ;
      }
      {
      routine_getNewTempVariable (var_resultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 98)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_8) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult  COMMA_SOURCE_FILE ("expression-convert.galgas", 100))  COMMA_SOURCE_FILE ("expression-convert.galgas", 100)) ;
      }else if (kBoolFalse == test_8) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-convert.galgas", 105))  COMMA_SOURCE_FILE ("expression-convert.galgas", 105)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_convertExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                         categoryMethod_convertExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_analyzeExpression (defineCategoryMethod_convertExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@convertInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_convertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_convertInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                               categoryMethod_convertInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertInstructionIR_enterAccessibleEntities (defineCategoryMethod_convertInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@convertInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_convertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertInstructionIR * object = (const cPtr_convertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_convertInstructionIR) ;
  GALGAS_uint var_staticStringIndex ;
  {
  categoryModifier_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 139)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 139)).getter_stringByDeletingPathExtension (SOURCE_FILE ("expression-convert.galgas", 139)), var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 138)) ;
  }
  GALGAS_string var_lbl = object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 142)).getter_string (SOURCE_FILE ("expression-convert.galgas", 142)) ;
  GALGAS_string var_convertMinOkLabel = GALGAS_string ("min.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 143)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 143)) ;
  GALGAS_string var_convertMaxOkLabel = GALGAS_string ("max.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 144)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 144)) ;
  GALGAS_string var_convertFailLabel = GALGAS_string ("fail.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 145)) ;
  GALGAS_string var_compareMinVar = GALGAS_string ("cmp.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 146)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 146)) ;
  GALGAS_string var_compareMaxVar = GALGAS_string ("cmp.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 147)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 147)) ;
  GALGAS_bigint var_minTarget ;
  GALGAS_bigint var_maxTarget ;
  GALGAS_bool joker_6687 ; // Joker input parameter
  GALGAS_uint joker_6699 ; // Joker input parameter
  object->mAttribute_mTarget.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 148)).method_integer (var_minTarget, var_maxTarget, joker_6687, joker_6699, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 148)) ;
  GALGAS_bigint var_minSource ;
  GALGAS_bool var_operandIsUnsigned ;
  GALGAS_bigint joker_6759 ; // Joker input parameter
  GALGAS_uint joker_6803 ; // Joker input parameter
  object->mAttribute_mOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 149)).method_integer (var_minSource, joker_6759, var_operandIsUnsigned, joker_6803, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 149)) ;
  GALGAS_string var_operandType = extensionGetter_llvmTypeName (object->mAttribute_mOperand.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 150)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_minTarget.objectCompare (var_minSource)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  %").add_operation (var_compareMinVar, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 152)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 152))  COMMA_SOURCE_FILE ("expression-convert.galgas", 152)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_operandIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("uge") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("sge") ;
    }
    ioArgument_ioLLVMcode.dotAssign_operation (temp_1  COMMA_SOURCE_FILE ("expression-convert.galgas", 153)) ;
    ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string (" ").add_operation (var_operandType, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 154)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 154)).add_operation (extensionGetter_string (object->mAttribute_mOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 154)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 154)).add_operation (var_minTarget.getter_string (SOURCE_FILE ("expression-convert.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 154)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 154))  COMMA_SOURCE_FILE ("expression-convert.galgas", 154)) ;
    ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br i1 %").add_operation (var_compareMinVar, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 155)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 155)).add_operation (var_convertMinOkLabel, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 155)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 155)).add_operation (var_convertFailLabel, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 155)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 155))  COMMA_SOURCE_FILE ("expression-convert.galgas", 155)) ;
    ioArgument_ioLLVMcode.dotAssign_operation (var_convertMinOkLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 156))  COMMA_SOURCE_FILE ("expression-convert.galgas", 156)) ;
  }
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  %").add_operation (var_compareMaxVar, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 158)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 158))  COMMA_SOURCE_FILE ("expression-convert.galgas", 158)) ;
  GALGAS_string temp_3 ;
  const enumGalgasBool test_4 = var_operandIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.dotAssign_operation (temp_3  COMMA_SOURCE_FILE ("expression-convert.galgas", 159)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string (" ").add_operation (var_operandType, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 160)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 160)).add_operation (extensionGetter_string (object->mAttribute_mOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 160)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 160)).add_operation (var_maxTarget.getter_string (SOURCE_FILE ("expression-convert.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 160)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 160))  COMMA_SOURCE_FILE ("expression-convert.galgas", 160)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 161)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 161)).add_operation (var_convertMaxOkLabel, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 161)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 161)).add_operation (var_convertFailLabel, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 161)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 161))  COMMA_SOURCE_FILE ("expression-convert.galgas", 161)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_convertFailLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 162))  COMMA_SOURCE_FILE ("expression-convert.galgas", 162)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  call void @raise_exception.").add_operation (var_staticStringIndex.getter_string (SOURCE_FILE ("expression-convert.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 163)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 163))  COMMA_SOURCE_FILE ("expression-convert.galgas", 163)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (constinArgument_inGenerationContext.mAttribute_mExceptionLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 164)).add_operation (object->mAttribute_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 164)).getter_string (SOURCE_FILE ("expression-convert.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 164)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 164))  COMMA_SOURCE_FILE ("expression-convert.galgas", 164)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (constinArgument_inGenerationContext.mAttribute_mExceptionCodeLLVMType.add_operation (GALGAS_string (" 5) ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)).add_operation (object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165))  COMMA_SOURCE_FILE ("expression-convert.galgas", 165)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  unreachable\n"
    "\n")  COMMA_SOURCE_FILE ("expression-convert.galgas", 166)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_convertMaxOkLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 167))  COMMA_SOURCE_FILE ("expression-convert.galgas", 167)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)).add_operation (var_operandType, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)).add_operation (extensionGetter_string (object->mAttribute_mOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)).add_operation (extensionGetter_llvmTypeName (object->mAttribute_mTarget.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168))  COMMA_SOURCE_FILE ("expression-convert.galgas", 168)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_convertInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                           categoryMethod_convertInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertInstructionIR_llvmInstructionCode (defineCategoryMethod_convertInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@extendExpressionAST addDependenceEdgeForStaticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inConstantName,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 44)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                            categoryMethod_extendExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_extendExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@extendExpressionAST analyzeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extendExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                  const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                  const GALGAS_receiverType constinArgument_inReceiverType,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                                  const GALGAS_stringset constinArgument_inModeSet,
                                                                  const GALGAS_bool constinArgument_inAllowExceptions,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                  GALGAS_operandIR & outArgument_outResult,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 67)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 81)) ;
  const enumGalgasBool test_0 = var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 83)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 83)).operator_not (SOURCE_FILE ("expression-extend.galgas", 83)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this type is not an integer type")  COMMA_SOURCE_FILE ("expression-extend.galgas", 84)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 85)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 85)).operator_not (SOURCE_FILE ("expression-extend.galgas", 85)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("expression type is not an integer type")  COMMA_SOURCE_FILE ("expression-extend.galgas", 86)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bool var_sourceIsUnsigned ;
      GALGAS_uint var_sourceSize ;
      GALGAS_bigint joker_4109 ; // Joker input parameter
      GALGAS_bigint joker_4116 ; // Joker input parameter
      var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 88)).method_integer (joker_4109, joker_4116, var_sourceIsUnsigned, var_sourceSize, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 88)) ;
      GALGAS_bool var_targetIsUnsigned ;
      GALGAS_uint var_targetSize ;
      GALGAS_bigint joker_4211 ; // Joker input parameter
      GALGAS_bigint joker_4218 ; // Joker input parameter
      var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 89)).method_integer (joker_4211, joker_4218, var_targetIsUnsigned, var_targetSize, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 89)) ;
      GALGAS_bool test_3 = var_sourceIsUnsigned ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = var_targetIsUnsigned ;
      }
      const enumGalgasBool test_4 = test_3.boolEnum () ;
      if (kBoolTrue == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("cannot extend, use convert or trunc")  COMMA_SOURCE_FILE ("expression-extend.galgas", 92)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_location location_8 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_8, GALGAS_string ("same size: useless extend operation")  COMMA_SOURCE_FILE ("expression-extend.galgas", 94)) ;
          }
        }
      }else if (kBoolFalse == test_4) {
        GALGAS_bool test_9 = var_sourceIsUnsigned ;
        if (kBoolTrue == test_9.boolEnum ()) {
          test_9 = var_targetIsUnsigned.operator_not (SOURCE_FILE ("expression-extend.galgas", 96)) ;
        }
        const enumGalgasBool test_10 = test_9.boolEnum () ;
        if (kBoolTrue == test_10) {
          const enumGalgasBool test_11 = GALGAS_bool (kIsSupOrEqual, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
          if (kBoolTrue == test_11) {
            GALGAS_location location_12 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_12, GALGAS_string ("cannot extend, use convert or trunc")  COMMA_SOURCE_FILE ("expression-extend.galgas", 98)) ;
          }
        }else if (kBoolFalse == test_10) {
          GALGAS_bool test_13 = var_sourceIsUnsigned.operator_not (SOURCE_FILE ("expression-extend.galgas", 100)) ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = var_targetIsUnsigned ;
          }
          const enumGalgasBool test_14 = test_13.boolEnum () ;
          if (kBoolTrue == test_14) {
            GALGAS_location location_15 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_15, GALGAS_string ("cannot extend, use convert or trunc")  COMMA_SOURCE_FILE ("expression-extend.galgas", 101)) ;
          }else if (kBoolFalse == test_14) {
            const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
            if (kBoolTrue == test_16) {
              GALGAS_location location_17 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_17, GALGAS_string ("cannot extend, use convert or trunc")  COMMA_SOURCE_FILE ("expression-extend.galgas", 104)) ;
            }else if (kBoolFalse == test_16) {
              const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
              if (kBoolTrue == test_18) {
                GALGAS_location location_19 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
                inCompiler->emitSemanticError (location_19, GALGAS_string ("same size: useless extend operation")  COMMA_SOURCE_FILE ("expression-extend.galgas", 106)) ;
              }
            }
          }
        }
      }
      {
      routine_getNewTempVariable (var_resultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 109)) ;
      }
      {
      categoryModifier_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 110)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extendExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                         categoryMethod_extendExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_analyzeExpression (defineCategoryMethod_extendExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@truncateExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inConstantName,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 44)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                            categoryMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@truncateExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_truncateExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                    const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                    const GALGAS_receiverType constinArgument_inReceiverType,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_stringset constinArgument_inModeSet,
                                                                    const GALGAS_bool constinArgument_inAllowExceptions,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_operandIR & outArgument_outResult,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 67)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 81)) ;
  const enumGalgasBool test_0 = var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 83)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 83)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 83)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this type is not an integer type")  COMMA_SOURCE_FILE ("expression-truncate.galgas", 84)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 85)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 85)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 85)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("expression type is not an integer type")  COMMA_SOURCE_FILE ("expression-truncate.galgas", 86)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bigint var_minSource ;
      GALGAS_bigint var_maxSource ;
      GALGAS_uint var_expSize ;
      GALGAS_bool joker_4164 ; // Joker input parameter
      var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 88)).method_integer (var_minSource, var_maxSource, joker_4164, var_expSize, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 88)) ;
      GALGAS_bigint var_minTarget ;
      GALGAS_bigint var_maxTarget ;
      GALGAS_uint var_resultSize ;
      GALGAS_bool joker_4268 ; // Joker input parameter
      var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 89)).method_integer (var_minTarget, var_maxTarget, joker_4268, var_resultSize, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 89)) ;
      GALGAS_bool test_3 = GALGAS_bool (kIsInfOrEqual, var_minTarget.objectCompare (var_minSource)) ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = GALGAS_bool (kIsSupOrEqual, var_maxTarget.objectCompare (var_maxSource)) ;
      }
      GALGAS_bool var_alwaysPossible = test_3 ;
      const enumGalgasBool test_4 = var_alwaysPossible.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("useless explicit conversion")  COMMA_SOURCE_FILE ("expression-truncate.galgas", 92)) ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictInf, var_resultSize.objectCompare (var_expSize)).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        routine_getNewTempVariable (var_resultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 95)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult  COMMA_SOURCE_FILE ("expression-truncate.galgas", 96))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 96)) ;
      }else if (kBoolFalse == test_6) {
        outArgument_outResult = GALGAS_operandIR::constructor_new (var_resultType, var_expressionResult.mAttribute_mValue  COMMA_SOURCE_FILE ("expression-truncate.galgas", 101)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_truncateExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                         categoryMethod_truncateExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_analyzeExpression (defineCategoryMethod_truncateExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@truncateInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_truncateInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                          GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_truncateInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                               categoryMethod_truncateInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateInstructionIR_enterAccessibleEntities (defineCategoryMethod_truncateInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@truncateInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_truncateInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateInstructionIR * object = (const cPtr_truncateInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_truncateInstructionIR) ;
  GALGAS_string var_operandType = extensionGetter_llvmTypeName (object->mAttribute_mOperand.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 129)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 130)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 130)).add_operation (var_operandType, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 130)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 130)).add_operation (extensionGetter_string (object->mAttribute_mOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 130)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 130)).add_operation (extensionGetter_llvmTypeName (object->mAttribute_mTarget.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 130)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 130))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 130)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_truncateInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                           categoryMethod_truncateInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateInstructionIR_llvmInstructionCode (defineCategoryMethod_truncateInstructionIR_llvmInstructionCode, NULL) ;

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
    ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mOptionalTypeName COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 40)) ;
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
//                           Overriding category method '@constructorCall analyzeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                              const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                              const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                              const GALGAS_stringset /* constinArgument_inModeSet */,
                                                              const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                              GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                              GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                              GALGAS_operandIR & outArgument_outResult,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_resultType = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 66)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-constructor-call.galgas", 68)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mErrorLocation, GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 69)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_operandIRList var_initValue ;
    constinArgument_inContext.mAttribute_mConstructorMap.method_searchKey (var_resultType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 71)).getter_nowhere (SOURCE_FILE ("expression-constructor-call.galgas", 71)), var_initValue, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 71)) ;
    outArgument_outResult = GALGAS_operandIR::constructor_new (var_resultType, GALGAS_valueIR::constructor_llvmStructureConstant (var_initValue  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 72))  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 72)) ;
  }
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
//                Overriding category method '@typedConstantCall addDependenceEdgeForStaticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typedConstantCall_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                   const GALGAS_lstring constinArgument_inConstantName,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mOptionalTypeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 39)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typedConstantCall_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                                            categoryMethod_typedConstantCall_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_addDependenceEdgeForStaticExpression (defineCategoryMethod_typedConstantCall_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@typedConstantCall analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typedConstantCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                GALGAS_operandIR & outArgument_outResult,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_resultType = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 65)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-typed-constant.galgas", 67)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mConstructorName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 68)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_typedConstantMap var_constructorMap = var_resultType.getter_typedConstantMap (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 70)) ;
    GALGAS_valueIR var_resultValue ;
    var_constructorMap.method_searchKey (object->mAttribute_mConstructorName, var_resultValue, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 71)) ;
    outArgument_outResult = GALGAS_operandIR::constructor_new (var_resultType, var_resultValue  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 72)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typedConstantCall_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                         categoryMethod_typedConstantCall_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_analyzeExpression (defineCategoryMethod_typedConstantCall_analyzeExpression, NULL) ;

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
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 55)) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 56)) ;
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
//   Overriding category method '@booleanShortCircuitAndOperatorExpressionAST addDependenceEdgeForStaticExpression'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                             const GALGAS_lstring constinArgument_inConstantName,
                                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 65)) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 66)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                                            categoryMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@infixOperatorExpressionAST analyzeExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_infixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                         const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                         const GALGAS_receiverType constinArgument_inReceiverType,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                                         const GALGAS_bool constinArgument_inAllowExceptions,
                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                         GALGAS_operandIR & outArgument_outResult,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_operandIR var_leftOperand ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_leftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 106)) ;
  GALGAS_operandIR var_rightOperand ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_leftOperand.mAttribute_mType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_rightOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 120)) ;
  GALGAS_infixOperatorMap var_operatorMap = function_getInfixOperatorMap (object->mAttribute_mOp, constinArgument_inContext, constinArgument_inModeSet, object->mAttribute_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 134)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  GALGAS_infixOperatorDescription var_binaryOperator ;
  categoryMethod_checkBinaryOperationWith (var_operatorMap, var_leftOperand.mAttribute_mType, var_rightOperand.mAttribute_mType, object->mAttribute_mOperatorLocation, var_resultType, var_binaryOperator, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 136)) ;
  callCategoryMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_leftOperand, object->mAttribute_mOperatorLocation, var_rightOperand, var_resultType, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 144)) ;
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
//             Overriding category method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                                          const GALGAS_receiverType constinArgument_inReceiverType,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GALGAS_operandIR & outArgument_outResult,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  GALGAS_instructionListIR var_leftInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 264)) ;
  GALGAS_operandIR var_leftOperand ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_leftInstructionGenerationList, var_leftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 265)) ;
  GALGAS_instructionListIR var_rightInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 279)) ;
  GALGAS_operandIR var_rightOperand ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_leftOperand.mAttribute_mType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_rightInstructionGenerationList, var_rightOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 280)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 294)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 294)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand should be boolean")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 295)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 298)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 298)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand should be boolean")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 299)) ;
  }
  {
  routine_getNewTempVariable (constinArgument_inContext.mAttribute_mBooleanType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 302)) ;
  }
  {
  categoryModifier_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand, var_leftInstructionGenerationList, var_rightOperand, var_rightInstructionGenerationList, object->mAttribute_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 304)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                         categoryMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (defineCategoryMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@prefixOperatorExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inConstantName,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 28)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                            categoryMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@prefixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                          const GALGAS_receiverType constinArgument_inReceiverType,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_operandIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 66)) ;
  GALGAS_prefixOperatorMap var_operatorMap ;
  GALGAS_llvmBinaryOperation var_binaryOperator ;
  GALGAS_string var_commentOperator ;
  GALGAS_operandIR var_leftOperand ;
  switch (object->mAttribute_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mUnsignedComplementOperatorMap ;
      var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 87)) ;
      var_commentOperator = GALGAS_string ("~") ;
      switch (var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 89)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 90)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 90)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolset:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 91)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 91)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 92)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 92)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 93)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 93)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 94)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 94)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_literalInteger:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 95)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 95)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_4379 = (const cEnumAssociatedValues_typeKind_integer *) (var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 89)).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_4379->mAssociatedValue3 ;
          var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 97)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 97)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 97))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 97))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 97)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mNotOperatorMap ;
      var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 101)) ;
      var_commentOperator = GALGAS_string ("!") ;
      var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 103))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 103))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 103)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mUnaryMinusOperatorMap ;
      var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 106)) ;
      var_commentOperator = GALGAS_string ("-") ;
      var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 108))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 108))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 108)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mUnaryMinusOperatorMap ;
      const enumGalgasBool test_0 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 111)) COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 111)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 113)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 113))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 112)) ;
      }
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 116)) ;
        var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)) ;
        var_commentOperator = GALGAS_string ("-") ;
      }else if (kBoolFalse == test_1) {
        var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 120)) ;
        var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)) ;
        var_commentOperator = GALGAS_string ("-OVF ") ;
      }
    }
    break ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  categoryMethod_checkWith (var_operatorMap, var_expressionResult.mAttribute_mType, object->mAttribute_mOperatorLocation, var_resultType, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 125)) ;
  const enumGalgasBool test_2 = var_expressionResult.mAttribute_mValue.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 131)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value ;
    var_expressionResult.mAttribute_mValue.method_literalInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 132)) ;
    GALGAS_bigint var_result ;
    switch (object->mAttribute_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result = var_value.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 136)) ;
        var_result.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result = var_value.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 137)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 138)).operator_xor (var_value COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 138)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_operandIR::constructor_new (var_resultType, GALGAS_valueIR::constructor_literalInteger (var_result  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 140))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 140)) ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempVariable (var_resultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 143)) ;
    }
    GALGAS_string var_comment = extensionGetter_string (outArgument_outResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 145)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 145)).add_operation (var_commentOperator, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 145)).add_operation (extensionGetter_string (var_expressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 145)) ;
    {
    categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, var_comment, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 146)) ;
    }
    {
    categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, outArgument_outResult.mAttribute_mType, object->mAttribute_mOperatorLocation, var_leftOperand.mAttribute_mValue, var_binaryOperator, var_expressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 148)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefixOperatorExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                         categoryMethod_prefixOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_analyzeExpression (defineCategoryMethod_prefixOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@prefixOperatorExpressionIR llvmInstructionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefixOperatorExpressionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                                           const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                           GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionIR * object = (const cPtr_prefixOperatorExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionIR) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_prefixOperatorIR::kNotBuilt:
    break ;
  case GALGAS_prefixOperatorIR::kEnum_prefix:
    {
      const cEnumAssociatedValues_prefixOperatorIR_prefix * extractPtr_7978 = (const cEnumAssociatedValues_prefixOperatorIR_prefix *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_string extractedValue_prefixOperator = extractPtr_7978->mAssociatedValue0 ;
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 189)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 189)).add_operation (extensionGetter_string (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 189))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 189)) ;
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string (" = ").add_operation (extractedValue_prefixOperator, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 190)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 190)).add_operation (extensionGetter_string (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 190)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 190))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 190)) ;
    }
    break ;
  case GALGAS_prefixOperatorIR::kEnum_prefixMinusOvf:
    {
      const cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf * extractPtr_8976 = (const cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_uint extractedValue_code = extractPtr_8976->mAssociatedValue0 ;
      GALGAS_bigint var_minValue ;
      switch (object->mAttribute_mTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 193)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolean:
      case GALGAS_typeKind::kEnum_boolset:
      case GALGAS_typeKind::kEnum_literalString:
        {
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("Internal Error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 195)) ;
          var_minValue.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("Internal Error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 197)) ;
          var_minValue.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("Internal Error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 199)) ;
          var_minValue.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_8402 = (const cEnumAssociatedValues_typeKind_integer *) (object->mAttribute_mTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 193)).unsafePointer ()) ;
          const GALGAS_bigint extractedValue_min = extractPtr_8402->mAssociatedValue0 ;
          var_minValue = extractedValue_min ;
        }
        break ;
      case GALGAS_typeKind::kEnum_literalInteger:
        {
          var_minValue = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 203)) ;
        }
        break ;
      }
      GALGAS_string var_ovfVar = GALGAS_string ("ovf").add_operation (object->mAttribute_mOperatorLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 205)).getter_string (SOURCE_FILE ("expression-prefix-operators.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 205)) ;
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("const bool ").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 206)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 206)).add_operation (extensionGetter_string (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 206)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 206)).add_operation (var_minValue.getter_string (SOURCE_FILE ("expression-prefix-operators.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 206)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 206))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 206)) ;
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 207)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 207))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 207)) ;
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  raise_exception (").add_operation (extractedValue_code.getter_string (SOURCE_FILE ("expression-prefix-operators.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 208)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 208)).add_operation (object->mAttribute_mOperatorLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 209)).getter_lastPathComponent (SOURCE_FILE ("expression-prefix-operators.galgas", 209)).getter_utf_38_Representation (SOURCE_FILE ("expression-prefix-operators.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 209)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 209)).add_operation (object->mAttribute_mOperatorLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 210)).getter_string (SOURCE_FILE ("expression-prefix-operators.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 210)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 210))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 208)) ;
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 211)) ;
      ioArgument_ioLLVMcode.dotAssign_operation (function_mangledNameForType (object->mAttribute_mTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 212)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 212)).add_operation (extensionGetter_string (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 212)).add_operation (GALGAS_string (" = - "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 212)).add_operation (extensionGetter_string (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 213)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 213))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 212)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefixOperatorExpressionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_prefixOperatorExpressionIR.mSlotID,
                                           categoryMethod_prefixOperatorExpressionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionIR_llvmInstructionCode (defineCategoryMethod_prefixOperatorExpressionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@prefixOperatorExpressionIR enterAccessibleEntities'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefixOperatorExpressionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                               GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefixOperatorExpressionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_prefixOperatorExpressionIR.mSlotID,
                                               categoryMethod_prefixOperatorExpressionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionIR_enterAccessibleEntities (defineCategoryMethod_prefixOperatorExpressionIR_enterAccessibleEntities, NULL) ;

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
//                    Overriding category method '@literalIntegerInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                            const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                            const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                            GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                            GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_operandIR & outArgument_outResult,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  outArgument_outResult = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (object->mAttribute_mLiteralInteger.mAttribute_bigint  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 49))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 49)) ;
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
//                    Overriding category method '@literalStringInExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                           const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                           const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                           const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                           GALGAS_operandIR & outArgument_outResult,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 49)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 49)) ;
  GALGAS_uint var_staticStringIndex ;
  {
  categoryModifier_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mAttribute_mLiteralString.mAttribute_string, var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 50)) ;
  }
  outArgument_outResult = GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_literalString (object->mAttribute_mLiteralString.mAttribute_string.getter_length (SOURCE_FILE ("expression-literal-string.galgas", 51)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 51)), var_staticStringIndex  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 51))  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 51)) ;
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
//          Overriding category method '@literalBooleanInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                               const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                               GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                            categoryMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@literalBooleanInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBooleanInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                            const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                            const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                            GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_operandIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBooleanInExpressionAST * object = (const cPtr_literalBooleanInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBooleanInExpressionAST) ;
  GALGAS_bigint temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mValue.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 54)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 54)) ;
  }
  outArgument_outResult = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mBooleanType, GALGAS_valueIR::constructor_literalInteger (temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 54))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 54)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBooleanInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                         categoryMethod_literalBooleanInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_analyzeExpression (defineCategoryMethod_literalBooleanInExpressionAST_analyzeExpression, NULL) ;

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
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mSourceVarName COMMA_SOURCE_FILE ("expression-var.galgas", 38)) ;
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
//                         Overriding category method '@varInExpressionAST analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                 const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                 const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                 const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                 const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 GALGAS_operandIR & outArgument_outResult,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_variableType ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_objectInMemoryIR var_variableKind ;
  GALGAS_registerBitSliceAccessMap var_registerBitSliceMap ;
  {
  GALGAS_bool joker_2984 ; // Joker input parameter
  GALGAS_bool joker_3043_2 ; // Joker input parameter
  GALGAS_bool joker_3043_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadAccess (object->mAttribute_mSourceVarName, var_variableType, var_accessIsAllowed, var_variableKind, joker_2984, var_registerBitSliceMap, joker_3043_2, joker_3043_1, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 59)) ;
  }
  const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("expression-var.galgas", 68)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("expression-var.galgas", 69)) ;
  }
  categoryMethod_loadFromMemory (var_variableKind, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_variableType, object->mAttribute_mSourceVarName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 78)) ;
  cEnumerator_lstringlist enumerator_3555 (object->mAttribute_mFieldNameList, kEnumeration_up) ;
  while (enumerator_3555.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_registerBitSliceMap.getter_count (SOURCE_FILE ("expression-var.galgas", 85)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_llvmBinaryOperation var_accessOperator ;
      GALGAS_bigint var_accessRightOperand ;
      GALGAS_registerBitSliceAccessMap var_submap ;
      GALGAS_unifiedTypeMap_2D_proxy var_newResultType ;
      var_registerBitSliceMap.method_searchKey (enumerator_3555.current_mValue (HERE), var_accessOperator, var_accessRightOperand, var_submap, var_newResultType, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 86)) ;
      GALGAS_operandIR var_newResultingVariable ;
      {
      routine_getNewTempVariable (var_newResultType, ioArgument_ioTemporaries, var_newResultingVariable, inCompiler  COMMA_SOURCE_FILE ("expression-var.galgas", 94)) ;
      }
      {
      categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResultingVariable.mAttribute_mValue, outArgument_outResult.mAttribute_mType, object->mAttribute_mSourceVarName.mAttribute_location, outArgument_outResult.mAttribute_mValue, var_accessOperator, GALGAS_valueIR::constructor_literalInteger (var_accessRightOperand  COMMA_SOURCE_FILE ("expression-var.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 95)) ;
      }
      outArgument_outResult = var_newResultingVariable ;
      var_registerBitSliceMap = var_submap ;
    }else if (kBoolFalse == test_2) {
      switch (outArgument_outResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 106)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          GALGAS_location location_3 (enumerator_3555.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("a boolean does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 108)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_literalInteger:
        {
          GALGAS_location location_4 (enumerator_3555.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 110)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolset:
        {
          GALGAS_location location_5 (enumerator_3555.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("a boolset does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 112)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          GALGAS_location location_6 (enumerator_3555.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("a literal string does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 114)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          GALGAS_location location_7 (enumerator_3555.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_7, GALGAS_string ("an enumeration does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 116)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          const cEnumAssociatedValues_typeKind_structure * extractPtr_5165 = (const cEnumAssociatedValues_typeKind_structure *) (outArgument_outResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 106)).unsafePointer ()) ;
          const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_5165->mAssociatedValue1 ;
          GALGAS_unifiedTypeMap_2D_proxy var_type ;
          GALGAS_uint var_idx ;
          extractedValue_propertyMap.method_searchKey (enumerator_3555.current_mValue (HERE), var_type, var_idx, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 118)) ;
          GALGAS_operandIR var_newResultingVariable ;
          {
          routine_getNewTempVariable (var_type, ioArgument_ioTemporaries, var_newResultingVariable, inCompiler  COMMA_SOURCE_FILE ("expression-var.galgas", 119)) ;
          }
          {
          categoryModifier_appendExtractValue (ioArgument_ioInstructionGenerationList, var_newResultingVariable, outArgument_outResult, var_idx, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 120)) ;
          }
          outArgument_outResult = var_newResultingVariable ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          GALGAS_location location_8 (enumerator_3555.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_8, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 127)) ;
        }
        break ;
      }
    }
    enumerator_3555.gotoNextObject () ;
  }
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
//         Overriding category method '@registerConstantInExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                 const GALGAS_lstring constinArgument_inConstantName,
                                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantInExpressionAST * object = (const cPtr_registerConstantInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantInExpressionAST) ;
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mRegisterName COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 53)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerConstantInExpressionAST.mSlotID,
                                                            categoryMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@registerIntegerExpInExpressionAST addDependenceEdgeForStaticExpression'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                   const GALGAS_lstring constinArgument_inConstantName,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerExpInExpressionAST * object = (const cPtr_registerIntegerExpInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerExpInExpressionAST) ;
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mRegisterName COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 62)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST.mSlotID,
                                                            categoryMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@registerConstantInExpressionAST analyzeExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerConstantInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                              const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                              const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                                              const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                              const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                              GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                              GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                              GALGAS_operandIR & outArgument_outResult,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantInExpressionAST * object = (const cPtr_registerConstantInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_bool var_readOnly ;
  GALGAS_registerBitSliceAccessMap var_registerBitSliceMap ;
  GALGAS_registerFieldMap var_registerFieldMap ;
  GALGAS_bigint var_registerAddress ;
  constinArgument_inContext.mAttribute_mRegisterMap.method_searchKey (object->mAttribute_mRegisterName, var_type, var_readOnly, var_registerBitSliceMap, var_registerFieldMap, var_registerAddress, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 83)) ;
  GALGAS_uint var_bitIndex ;
  GALGAS_uint var_bitCount ;
  var_registerFieldMap.method_searchKey (object->mAttribute_mFieldName, var_bitIndex, var_bitCount, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 92)) ;
  outArgument_outResult = GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98)).left_shift_operation (var_bitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98)).left_shift_operation (var_bitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerConstantInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerConstantInExpressionAST.mSlotID,
                                         categoryMethod_registerConstantInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantInExpressionAST_analyzeExpression (defineCategoryMethod_registerConstantInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@registerIntegerExpInExpressionAST analyzeExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerExpInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                                const GALGAS_receiverType constinArgument_inReceiverType,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                                const GALGAS_stringset constinArgument_inModeSet,
                                                                                const GALGAS_bool constinArgument_inAllowExceptions,
                                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                GALGAS_operandIR & outArgument_outResult,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerExpInExpressionAST * object = (const cPtr_registerIntegerExpInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerExpInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_bool var_readOnly ;
  GALGAS_registerBitSliceAccessMap var_registerBitSliceMap ;
  GALGAS_registerFieldMap var_registerFieldMap ;
  GALGAS_bigint var_registerAddress ;
  constinArgument_inContext.mAttribute_mRegisterMap.method_searchKey (object->mAttribute_mRegisterName, var_type, var_readOnly, var_registerBitSliceMap, var_registerFieldMap, var_registerAddress, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 117)) ;
  GALGAS_uint var_fieldBitIndex ;
  GALGAS_uint var_fieldBitCount ;
  var_registerFieldMap.method_searchKey (object->mAttribute_mFieldName, var_fieldBitIndex, var_fieldBitCount, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 126)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_fieldBitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFieldName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this field is not an integer field")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 133)) ;
  }
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 136)) ;
  switch (var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 150)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 152)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 154)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
  case GALGAS_typeKind::kEnum_boolean:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 156)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 158)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalInteger:
    {
      GALGAS_bigint var_value ;
      var_expressionResult.mAttribute_mValue.method_literalInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 160)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_value.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 161)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("this integer expression should be positive")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 162)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_value.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outResult = GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_literalInteger (var_value.left_shift_operation (var_fieldBitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 164))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 164))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 164)) ;
        }else if (kBoolFalse == test_3) {
          inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_7809 = (const cEnumAssociatedValues_typeKind_integer *) (var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 150)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_7809->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_7809->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_7809->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_expressionBitCount = extractPtr_7809->mAssociatedValue3 ;
      const enumGalgasBool test_4 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 169)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 170)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_4) {
        GALGAS_bool var_assertGenerated = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount)) ;
        GALGAS_bool test_5 = var_assertGenerated ;
        if (kBoolTrue == test_5.boolEnum ()) {
          test_5 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 173)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 173)) ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 174)) ;
        }
        {
        routine_getNewTempVariable (var_type, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_registerIntegerConstantInExpressionIR::constructor_new (object->mAttribute_mExpressionLocation, var_expressionResult, GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 181)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 181)), var_fieldBitIndex, outArgument_outResult, var_assertGenerated.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 184))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178)) ;
      }
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerIntegerExpInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST.mSlotID,
                                         categoryMethod_registerIntegerExpInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerExpInExpressionAST_analyzeExpression (defineCategoryMethod_registerIntegerExpInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@registerIntegerConstantInExpressionIR llvmInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerConstantInExpressionIR * object = (const cPtr_registerIntegerConstantInExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerConstantInExpressionIR) ;
  const enumGalgasBool test_0 = object->mAttribute_mNoCheck.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)).add_operation (extensionGetter_string (object->mAttribute_mResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)).add_operation (GALGAS_string (" = (("), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)).add_operation (function_mangledNameForType (object->mAttribute_mResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)).add_operation (extensionGetter_string (object->mAttribute_mExpressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)).add_operation (GALGAS_string (") << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213)).add_operation (object->mAttribute_mBitShift.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (extensionGetter_string (object->mAttribute_mResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (extensionGetter_string (object->mAttribute_mExpressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (object->mAttribute_mMaxBound.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (GALGAS_string (") << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (object->mAttribute_mBitShift.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)) ;
    }else if (kBoolFalse == test_1) {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("if (").add_operation (extensionGetter_string (object->mAttribute_mExpressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (GALGAS_string (" > "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (object->mAttribute_mMaxBound.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)) ;
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  raise_exception (4, ").add_operation (object->mAttribute_mInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 220)).getter_lastPathComponent (SOURCE_FILE ("expression-cst-registre.galgas", 220)).getter_utf_38_Representation (SOURCE_FILE ("expression-cst-registre.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 220)).add_operation (object->mAttribute_mInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)) ;
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 222)) ;
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (extensionGetter_string (object->mAttribute_mResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (extensionGetter_string (object->mAttribute_mExpressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).add_operation (object->mAttribute_mBitShift.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR.mSlotID,
                                           categoryMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode (defineCategoryMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@registerIntegerConstantInExpressionIR enterAccessibleEntities'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                          GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR.mSlotID,
                                               categoryMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities (defineCategoryMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@checkInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_checkInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                        const GALGAS_receiverType constinArgument_inReceiverType,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 48)) ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("directive-check.galgas", 52)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 49)) ;
  const enumGalgasBool test_0 = var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 63)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 63)).operator_not (SOURCE_FILE ("directive-check.galgas", 63)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not boolean")  COMMA_SOURCE_FILE ("directive-check.galgas", 64)) ;
  }
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_expressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 67)).operator_not (SOURCE_FILE ("directive-check.galgas", 67)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not static: use assert instruction")  COMMA_SOURCE_FILE ("directive-check.galgas", 68)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_bigint var_value ;
    var_expressionResult.mAttribute_mValue.method_literalInteger (var_value, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 70)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_value.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 71)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("check expression value is false")  COMMA_SOURCE_FILE ("directive-check.galgas", 72)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_checkInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                               categoryMethod_checkInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_checkInstructionAST_analyze (defineCategoryMethod_checkInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@incDecInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                         const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                         const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionAST * object = (const cPtr_incDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_objectInMemoryIR var_variable ;
  GALGAS_bool var_isConstant ;
  {
  GALGAS_bool joker_3761_3 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_3761_2 ; // Joker input parameter
  GALGAS_bool joker_3761_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mVarName, var_type, var_accessIsAllowed, var_variable, joker_3761_3, joker_3761_2, joker_3761_1, var_isConstant, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 89)) ;
  }
  const enumGalgasBool test_0 = var_isConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a constant cannot be modified")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 98)) ;
  }
  const enumGalgasBool test_2 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 100)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)) ;
  }
  GALGAS_string var_comment = extensionGetter_mangledName (var_variable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 104)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 104)) ;
  GALGAS_llvmBinaryOperation var_llvmOperator ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_incNoOverflowCheck:
    {
      var_comment.dotAssign_operation (GALGAS_string ("&++")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 108)) ;
      const enumGalgasBool test_4 = constinArgument_inContext.mAttribute_mIncOperatorMap.getter_hasKey (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 109)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 109)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_llvmBinaryOperation joker_4302 ; // Joker input parameter
        constinArgument_inContext.mAttribute_mIncOperatorMap.method_searchKey (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 110)).getter_nowhere (SOURCE_FILE ("instruction-inc-dec.galgas", 110)), joker_4302, var_llvmOperator, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 110)) ;
      }else if (kBoolFalse == test_4) {
        GALGAS_location location_5 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("type $").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 112)).add_operation (GALGAS_string (" does not support the &++ operator"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 112))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 112)) ;
        var_llvmOperator.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_incWithOverflowCheck:
    {
      var_comment.dotAssign_operation (GALGAS_string ("++")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 115)) ;
      const enumGalgasBool test_6 = constinArgument_inContext.mAttribute_mIncOperatorMap.getter_hasKey (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 116)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 116)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_llvmBinaryOperation var_ovfOp ;
        GALGAS_llvmBinaryOperation var_noOvfOp ;
        constinArgument_inContext.mAttribute_mIncOperatorMap.method_searchKey (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)).getter_nowhere (SOURCE_FILE ("instruction-inc-dec.galgas", 117)), var_ovfOp, var_noOvfOp, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)) ;
        const enumGalgasBool test_7 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_llvmOperator = var_noOvfOp ;
        }else if (kBoolFalse == test_7) {
          var_llvmOperator = var_ovfOp ;
        }
      }else if (kBoolFalse == test_6) {
        GALGAS_location location_8 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("type $").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 124)).add_operation (GALGAS_string (" does not support the ++ operator"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 124))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 124)) ;
        var_llvmOperator.drop () ; // Release error dropped variable
      }
      const enumGalgasBool test_9 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 126)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 126)).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_location location_10 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_10, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 127)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 127))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 127)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decNoOverflowCheck:
    {
      var_comment.dotAssign_operation (GALGAS_string ("&--")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 130)) ;
      const enumGalgasBool test_11 = constinArgument_inContext.mAttribute_mDecOperatorMap.getter_hasKey (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 131)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 131)).boolEnum () ;
      if (kBoolTrue == test_11) {
        GALGAS_llvmBinaryOperation joker_5234 ; // Joker input parameter
        constinArgument_inContext.mAttribute_mDecOperatorMap.method_searchKey (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 132)).getter_nowhere (SOURCE_FILE ("instruction-inc-dec.galgas", 132)), joker_5234, var_llvmOperator, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 132)) ;
      }else if (kBoolFalse == test_11) {
        GALGAS_location location_12 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_12, GALGAS_string ("type $").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 134)).add_operation (GALGAS_string (" does not support the &-- operator"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 134))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 134)) ;
        var_llvmOperator.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decWithOverflowCheck:
    {
      var_comment.dotAssign_operation (GALGAS_string ("--")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 137)) ;
      const enumGalgasBool test_13 = constinArgument_inContext.mAttribute_mDecOperatorMap.getter_hasKey (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 138)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 138)).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_llvmBinaryOperation var_ovfOp ;
        GALGAS_llvmBinaryOperation var_noOvfOp ;
        constinArgument_inContext.mAttribute_mDecOperatorMap.method_searchKey (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 139)).getter_nowhere (SOURCE_FILE ("instruction-inc-dec.galgas", 139)), var_ovfOp, var_noOvfOp, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 139)) ;
        const enumGalgasBool test_14 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
        if (kBoolTrue == test_14) {
          var_llvmOperator = var_noOvfOp ;
        }else if (kBoolFalse == test_14) {
          var_llvmOperator = var_ovfOp ;
        }
      }else if (kBoolFalse == test_13) {
        GALGAS_location location_15 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_15, GALGAS_string ("type $").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 146)).add_operation (GALGAS_string (" does not support the -- operator"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 146))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 146)) ;
        var_llvmOperator.drop () ; // Release error dropped variable
      }
      const enumGalgasBool test_16 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 148)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 148)).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_location location_17 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_17, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 149)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 149))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 149)) ;
      }
    }
    break ;
  }
  {
  categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, var_comment, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 153)) ;
  }
  GALGAS_operandIR var_variableValue ;
  categoryMethod_loadFromMemory (var_variable, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 155)) ;
  GALGAS_operandIR var_resultValue ;
  {
  routine_getNewTempVariable (var_type, ioArgument_ioTemporaries, var_resultValue, inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 161)) ;
  }
  {
  categoryModifier_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultValue.mAttribute_mValue, var_resultValue.mAttribute_mType, object->mAttribute_mVarName.mAttribute_location, var_variableValue.mAttribute_mValue, var_llvmOperator, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 168))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 162)) ;
  }
  categoryMethod_storeInMemory (var_variable, var_resultValue, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 171)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                               categoryMethod_incDecInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionAST_analyze (defineCategoryMethod_incDecInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@varInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                    const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                    const GALGAS_receiverType constinArgument_inReceiverType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_stringset constinArgument_inModes,
                                                                    const GALGAS_bool constinArgument_inAllowExceptions,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 76)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 77)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModes, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 80)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 94)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType = var_expressionResult.mAttribute_mType ;
  }
  {
  routine_checkAssignmentCompatibility (var_expressionResult, var_targetType, object->mAttribute_mVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 97)) ;
  }
  GALGAS_objectInMemoryIR var_targetVar = GALGAS_objectInMemoryIR::constructor_localValue (var_targetType, object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-var.galgas", 103)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVarName, var_targetType, GALGAS_bool (true), var_targetVar, var_targetType.getter_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 109)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 110)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 104)) ;
  }
  {
  categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, GALGAS_string ("var ").add_operation (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 115)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 115)).add_operation (extensionGetter_string (var_expressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 115)) ;
  }
  {
  categoryModifier_appendAlloca (ioArgument_ioInstructionGenerationList, object->mAttribute_mVarName.mAttribute_string, var_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 116)) ;
  }
  {
  categoryModifier_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, object->mAttribute_mVarName.mAttribute_string, var_targetType, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 120)) ;
  }
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
                                                      const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                      const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_stringset /* constinArgument_inModes */,
                                                      const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                      GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 140)) ;
  GALGAS_objectInMemoryIR var_targetVar = GALGAS_objectInMemoryIR::constructor_localValue (var_targetType, object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-var.galgas", 142)) ;
  {
  ioArgument_ioVariableMap.modifier_insertUndefinedLocalVariable (object->mAttribute_mVarName, var_targetType, GALGAS_bool (true), var_targetVar, var_targetType.getter_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 148)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 149)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 143)) ;
  }
  {
  categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, GALGAS_string ("var ").add_operation (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 154)) ;
  }
  {
  categoryModifier_appendAlloca (ioArgument_ioInstructionGenerationList, object->mAttribute_mVarName.mAttribute_string, var_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 155)) ;
  }
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
//                        Overriding category method '@letInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_letInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                    const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                    const GALGAS_receiverType constinArgument_inReceiverType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_stringset constinArgument_inModeSet,
                                                                    const GALGAS_bool constinArgument_inAllowExceptions,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 77)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 78)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_operandIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 81)) ;
  {
  routine_checkAssignmentCompatibility (var_expressionResult, var_targetType, object->mAttribute_mVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 95)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 101)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = var_expressionResult.mAttribute_mType ;
  }else if (kBoolFalse == test_3) {
    temp_2 = var_targetType ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_constantType = temp_2 ;
  GALGAS_objectInMemoryIR var_localConstant = GALGAS_objectInMemoryIR::constructor_localValue (var_constantType, object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-let.galgas", 102)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVarName, var_constantType, GALGAS_bool (true), var_localConstant, var_constantType.getter_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-let.galgas", 109)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)) ;
  }
  {
  categoryModifier_appendAlloca (ioArgument_ioInstructionGenerationList, object->mAttribute_mVarName.mAttribute_string, var_constantType, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114)) ;
  }
  categoryMethod_storeInMemory (var_localConstant, var_expressionResult, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 118)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_letInstructionWithAssignmentAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                               categoryMethod_letInstructionWithAssignmentAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_analyze (defineCategoryMethod_letInstructionWithAssignmentAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@assignmentInstructionAST analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                             const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                             const GALGAS_receiverType constinArgument_inReceiverType,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             const GALGAS_stringset constinArgument_inModeSet,
                                                             const GALGAS_bool constinArgument_inAllowExceptions,
                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_objectInMemoryIR var_target ;
  GALGAS_bool var_isConstant ;
  {
  GALGAS_bool joker_2602 ; // Joker input parameter
  GALGAS_bool joker_2639_3 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_2639_2 ; // Joker input parameter
  GALGAS_bool joker_2639_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2602, var_target, joker_2639_3, joker_2639_2, joker_2639_1, var_isConstant, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
  }
  const enumGalgasBool test_0 = var_isConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a constant cannot be modified")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 66)) ;
  }
  GALGAS_string var_comment = object->mAttribute_mTargetVarName.mAttribute_string ;
  cEnumerator_lstringlist enumerator_2845 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_2845.hasCurrentObject ()) {
    var_comment.dotAssign_operation (GALGAS_string (".").add_operation (function_mangledNameForProperty (enumerator_2845.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 71))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 71)) ;
    switch (var_targetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 72)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_2 (enumerator_2845.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("a boolean does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 74)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_3 (enumerator_2845.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("a boolset does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 76)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_4 (enumerator_2845.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("a static string does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 78)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_5 (enumerator_2845.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("an enumeration does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 80)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        const cEnumAssociatedValues_typeKind_structure * extractPtr_3627 = (const cEnumAssociatedValues_typeKind_structure *) (var_targetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 72)).unsafePointer ()) ;
        const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_3627->mAssociatedValue1 ;
        var_comment.dotAssign_operation (GALGAS_string (".").add_operation (enumerator_2845.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-assignment.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82)) ;
        GALGAS_uint var_idx ;
        extractedValue_propertyMap.method_searchKey (enumerator_2845.current_mValue (HERE), var_targetType, var_idx, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 83)) ;
        GALGAS_objectInMemoryIR var_result ;
        {
        routine_getNewTempObjectInMemory (var_targetType, ioArgument_ioTemporaries, var_result, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 84)) ;
        }
        {
        categoryModifier_appendGetElementPtr (ioArgument_ioInstructionGenerationList, var_result, var_target, var_idx, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 85)) ;
        }
        var_target = var_result ;
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        GALGAS_location location_6 (enumerator_2845.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("an integer does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 92)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalInteger:
      {
        GALGAS_location location_7 (enumerator_2845.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("an integer does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 94)) ;
      }
      break ;
    }
    enumerator_2845.gotoNextObject () ;
  }
  GALGAS_operandIR var_sourceOperand ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_sourceOperand, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 98)) ;
  var_comment.dotAssign_operation (GALGAS_string (" = ").add_operation (extensionGetter_string (var_sourceOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 111))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 111)) ;
  {
  routine_checkAssignmentCompatibility (var_sourceOperand, var_targetType, object->mAttribute_mTargetVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 112)) ;
  }
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_4581 ; // Joker input parameter
  GALGAS_objectInMemoryIR joker_4613 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_4640_3 ; // Joker input parameter
  GALGAS_bool joker_4640_2 ; // Joker input parameter
  GALGAS_bool joker_4640_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mTargetVarName, joker_4581, var_accessIsAllowed, joker_4613, var_isCopiable, joker_4640_3, joker_4640_2, joker_4640_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 118)) ;
  }
  const enumGalgasBool test_8 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 126)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_9, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 127)) ;
  }
  const enumGalgasBool test_10 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 129)).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_11, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.getter_string (SOURCE_FILE ("instruction-assignment.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 130)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 130))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 130)) ;
  }
  {
  categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, var_comment, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 133)) ;
  }
  categoryMethod_storeInMemory (var_target, var_sourceOperand, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 134)) ;
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
//                             Overriding category method '@assertInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                         const GALGAS_receiverType constinArgument_inReceiverType,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                         const GALGAS_bool constinArgument_inAllowExceptions,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 47)) COMMA_SOURCE_FILE ("instruction-assert.galgas", 47)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 51)) ;
  GALGAS_operandIR var_expressionValue ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-assert.galgas", 55)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, var_expressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 52)) ;
  const enumGalgasBool test_1 = var_expressionValue.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 66)).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 66)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 66)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is not boolean")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 67)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 70)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is static: use check directive")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 71)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mAttribute_mAssertInstructionLocation, var_instructionGenerationList, var_expressionValue  COMMA_SOURCE_FILE ("instruction-assert.galgas", 75))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 75)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assertInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                               categoryMethod_assertInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionAST_analyze (defineCategoryMethod_assertInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@assertInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 100)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("if (!").add_operation (extensionGetter_string (object->mAttribute_mExpressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 101)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 101))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 101)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  raise_exception (20").add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 102)).add_operation (object->mAttribute_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 103)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 103)).getter_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 103)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 103)).add_operation (object->mAttribute_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 104)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 104)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 104))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 102)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 105)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assertInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                           categoryMethod_assertInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionIR_llvmInstructionCode (defineCategoryMethod_assertInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@assertInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assertInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                               categoryMethod_assertInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionIR_enterAccessibleEntities (defineCategoryMethod_assertInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@throwInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                        const GALGAS_receiverType constinArgument_inReceiverType,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionAST * object = (const cPtr_throwInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 45)) COMMA_SOURCE_FILE ("instruction-panic.galgas", 45)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 46)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 46))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 46)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 49)) ;
  GALGAS_operandIR var_result ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mCodeExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inContext.mAttribute_mExceptionCodeType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_unusedInstructionListIR, var_result, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 50)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR.getter_length (SOURCE_FILE ("instruction-panic.galgas", 65)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = var_result.mAttribute_mValue.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 66)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 66)) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = GALGAS_bool (kIsNotEqual, var_result.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 67)).objectCompare (function_literalIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 67)))) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("throw expression should be a literal integer")  COMMA_SOURCE_FILE ("instruction-panic.galgas", 68)) ;
  }else if (kBoolFalse == test_3) {
    GALGAS_bigint var_min ;
    GALGAS_bigint var_max ;
    GALGAS_bool joker_3395 ; // Joker input parameter
    GALGAS_uint joker_3407 ; // Joker input parameter
    constinArgument_inContext.mAttribute_mExceptionCodeType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 70)).method_integer (var_min, var_max, joker_3395, joker_3407, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 70)) ;
    GALGAS_bigint var_throwValue ;
    var_result.mAttribute_mValue.method_literalInteger (var_throwValue, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 71)) ;
    GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_throwValue.objectCompare (var_min)) ;
    if (kBoolTrue != test_4.boolEnum ()) {
      test_4 = GALGAS_bool (kIsStrictSup, var_throwValue.objectCompare (var_max)) ;
    }
    const enumGalgasBool test_5 = test_4.boolEnum () ;
    if (kBoolTrue == test_5) {
      inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.mAttribute_mExceptionCodeType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 73))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 73)) ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 74)).boolEnum () ;
      if (kBoolTrue == test_6) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_throwInstructionIR::constructor_new (object->mAttribute_mThrowLocation, var_throwValue  COMMA_SOURCE_FILE ("instruction-panic.galgas", 75))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 75)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_throwInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_throwInstructionAST.mSlotID,
                               categoryMethod_throwInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionAST_analyze (defineCategoryMethod_throwInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@throwInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionIR * object = (const cPtr_throwInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionIR) ;
  GALGAS_uint var_staticStringIndex ;
  {
  categoryModifier_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 100)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 100)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 100)), var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 99)) ;
  }
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  call void @raise_exception.").add_operation (var_staticStringIndex.getter_string (SOURCE_FILE ("instruction-panic.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 103)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 103))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 103)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (constinArgument_inGenerationContext.mAttribute_mExceptionLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 104)).add_operation (object->mAttribute_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 104)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 104)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 104))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 104)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (constinArgument_inGenerationContext.mAttribute_mExceptionCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 105)).add_operation (object->mAttribute_mCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 105)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 105))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 105)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_throwInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_throwInstructionIR.mSlotID,
                                           categoryMethod_throwInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionIR_llvmInstructionCode (defineCategoryMethod_throwInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@throwInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                       GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_throwInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_throwInstructionIR.mSlotID,
                                               categoryMethod_throwInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionIR_enterAccessibleEntities (defineCategoryMethod_throwInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@operatorAssignInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorAssignInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                 const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                                 const GALGAS_receiverType constinArgument_inReceiverType,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_stringset constinArgument_inModeSet,
                                                                 const GALGAS_bool constinArgument_inAllowExceptions,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorAssignInstructionAST * object = (const cPtr_operatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_bool var_isConstant ;
  {
  GALGAS_bool joker_2914_5 ; // Joker input parameter
  GALGAS_objectInMemoryIR joker_2914_4 ; // Joker input parameter
  GALGAS_bool joker_2914_3 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_2914_2 ; // Joker input parameter
  GALGAS_bool joker_2914_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2914_5, joker_2914_4, joker_2914_3, joker_2914_2, joker_2914_1, var_isConstant, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 68)) ;
  }
  const enumGalgasBool test_0 = var_isConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a constant cannot be modified")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 75)) ;
  }
  GALGAS_operandIR var_sourceValue ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_sourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 78)) ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_objectInMemoryIR var_targetVariableKind ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3617 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_3697_3 ; // Joker input parameter
  GALGAS_bool joker_3697_2 ; // Joker input parameter
  GALGAS_bool joker_3697_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mTargetVarName, joker_3617, var_accessIsAllowed, var_targetVariableKind, var_isCopiable, joker_3697_3, joker_3697_2, joker_3697_1, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 92)) ;
  }
  const enumGalgasBool test_2 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 100)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 101)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap ;
  GALGAS_string var_commentOperator ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
      var_commentOperator = GALGAS_string ("&=") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
      var_commentOperator = GALGAS_string ("|=") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
      var_commentOperator = GALGAS_string ("^=") ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator ;
  GALGAS_unifiedTypeMap_2D_proxy joker_4392 ; // Joker input parameter
  categoryMethod_checkBinaryOperationWith (var_operatorMap, var_targetType, var_sourceValue.mAttribute_mType, object->mAttribute_mTargetVarName.mAttribute_location, joker_4392, var_binaryOperator, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 117)) ;
  const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 124)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.getter_string (SOURCE_FILE ("instruction-operator-assign.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 125)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 125))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 125)) ;
  }
  {
  categoryModifier_appendComment (ioArgument_ioInstructionGenerationList, extensionGetter_mangledName (var_targetVariableKind, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 129)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 129)).add_operation (var_commentOperator, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 129)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 129)).add_operation (extensionGetter_string (var_sourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 128)) ;
  }
  GALGAS_operandIR var_variableValue ;
  categoryMethod_loadFromMemory (var_targetVariableKind, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 131)) ;
  GALGAS_operandIR var_newResultingValue ;
  callCategoryMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue, object->mAttribute_mTargetVarName.mAttribute_location, var_sourceValue, var_targetType, var_newResultingValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 136)) ;
  categoryMethod_storeInMemory (var_targetVariableKind, var_newResultingValue, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 145)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_operatorAssignInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_operatorAssignInstructionAST.mSlotID,
                               categoryMethod_operatorAssignInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_operatorAssignInstructionAST_analyze (defineCategoryMethod_operatorAssignInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@ifInstructionAST analyze'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                     const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                     const GALGAS_receiverType constinArgument_inReceiverType,
                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                     const GALGAS_stringset constinArgument_inModeSet,
                                                     const GALGAS_bool constinArgument_inAllowExceptions,
                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_operandIR var_testResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 121)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 118)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 132)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 132)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (var_testResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 133)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 133))  COMMA_SOURCE_FILE ("instruction-if.galgas", 133)) ;
  }
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_testResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 135)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 140)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOfThenInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_thenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 154)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOfElseInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_elseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 155)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 167)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult, object->mAttribute_mTestExpressionEndLocation, var_thenInstructionGenerationList, var_elseInstructionGenerationList  COMMA_SOURCE_FILE ("instruction-if.galgas", 169))  COMMA_SOURCE_FILE ("instruction-if.galgas", 169)) ;
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
//                          Overriding category method '@ifInstructionIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string (";--- if (").add_operation (extensionGetter_string (object->mAttribute_mTestVariable.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 195)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 195))  COMMA_SOURCE_FILE ("instruction-if.galgas", 195)) ;
  GALGAS_string var_labelTrue = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)).getter_string (SOURCE_FILE ("instruction-if.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)) ;
  GALGAS_string var_labelFalse = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)).getter_string (SOURCE_FILE ("instruction-if.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)) ;
  GALGAS_string var_labelEnd = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)).getter_string (SOURCE_FILE ("instruction-if.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br i1 ").add_operation (extensionGetter_string (object->mAttribute_mTestVariable.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).add_operation (var_labelTrue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).add_operation (var_labelFalse, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199))  COMMA_SOURCE_FILE ("instruction-if.galgas", 199)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_labelTrue.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 201))  COMMA_SOURCE_FILE ("instruction-if.galgas", 201)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203))  COMMA_SOURCE_FILE ("instruction-if.galgas", 203)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_labelFalse.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205))  COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207))  COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_labelEnd.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209))  COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                           categoryMethod_ifInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionIR_llvmInstructionCode (defineCategoryMethod_ifInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@ifInstructionIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                               categoryMethod_ifInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionIR_enterAccessibleEntities (defineCategoryMethod_ifInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@methodCallInstructionAST analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_methodCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                             const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                             const GALGAS_receiverType constinArgument_inReceiverType,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             const GALGAS_stringset /* constinArgument_inModeSet */,
                                                             const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  GALGAS_operandIR var_receiverExpression ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mReceiverExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 69)), constinArgument_inContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-method-call.galgas", 71)), GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 66)) ;
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 80)) ;
  GALGAS_string var_procMangledName = object->mAttribute_mMethodName.mAttribute_string ;
  cEnumerator_procEffectiveParameterListAST enumerator_3649 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_3649.hasCurrentObject ()) {
    var_procMangledName.dotAssign_operation (GALGAS_string (" ")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 83)) ;
    switch (enumerator_3649.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input * extractPtr_4555 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input *) (enumerator_3649.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_4555->mAssociatedValue0 ;
        var_procMangledName.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_readAccessAllowed ;
        GALGAS_objectInMemoryIR var_variableKind ;
        GALGAS_bool var_isCopiable ;
        GALGAS_registerBitSliceAccessMap var_fieldMap ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        GALGAS_bool var_isConstant ;
        {
        ioArgument_ioVariableMap.modifier_searchForWriteAccess (extractedValue_name, var_type, var_readAccessAllowed, var_variableKind, var_isCopiable, var_fieldMap, var_canBeUsedAsInputParameter, var_isConstant, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 87)) ;
        }
        const enumGalgasBool test_0 = var_isConstant.boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_location location_1 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_1, GALGAS_string ("a constant cannot be modified")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 99)) ;
        }
        const enumGalgasBool test_2 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-method-call.galgas", 101)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("this variable cannot be used as input effective parameter")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 102)) ;
        }
        const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-method-call.galgas", 104)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (extractedValue_name.getter_string (SOURCE_FILE ("instruction-method-call.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 105)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 105))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 105)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3649.current_mEffectiveParameterKind (HERE), enumerator_3649.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 107)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * extractPtr_5262 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *) (enumerator_3649.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_5262->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_5262->mAssociatedValue1 ;
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 109)) ;
        GALGAS_operandIR var_expressionResult ;
        callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 113)), constinArgument_inContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-method-call.galgas", 115)), GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 110)) ;
        var_parameterList.addAssign_operation (enumerator_3649.current_mEffectiveParameterKind (HERE), enumerator_3649.current_mSelector (HERE), var_expressionResult.getter_mType (SOURCE_FILE ("instruction-method-call.galgas", 123))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 123)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput * extractPtr_5901 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput *) (enumerator_3649.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_5901->mAssociatedValue0 ;
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 125)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_readAccessAllowed ;
        GALGAS_objectInMemoryIR var_variableKind ;
        GALGAS_bool var_isCopiable ;
        GALGAS_registerBitSliceAccessMap var_fieldMap ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        GALGAS_bool var_isConstant ;
        {
        ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (extractedValue_name, var_type, var_readAccessAllowed, var_variableKind, var_isCopiable, var_fieldMap, var_canBeUsedAsInputParameter, var_isConstant, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 126)) ;
        }
        const enumGalgasBool test_6 = var_isConstant.boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_location location_7 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_7, GALGAS_string ("a constant cannot be modified")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 138)) ;
        }
        var_parameterList.addAssign_operation (enumerator_3649.current_mEffectiveParameterKind (HERE), enumerator_3649.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 140)) ;
      }
      break ;
    }
    var_procMangledName.dotAssign_operation (enumerator_3649.current_mSelector (HERE).mAttribute_string  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 142)) ;
    enumerator_3649.gotoNextObject () ;
  }
  GALGAS_procedureMap var_receiverTypeProcedureMap = var_receiverExpression.getter_mType (SOURCE_FILE ("instruction-method-call.galgas", 145)).getter_procedureMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 145)) ;
  GALGAS_bool var_calledProcIsMutating ;
  GALGAS_modeMap var_procedureModeMap ;
  GALGAS_procedureSignature var_calledProcSignature ;
  GALGAS_bool joker_6295 ; // Joker input parameter
  var_receiverTypeProcedureMap.method_searchKey (GALGAS_lstring::constructor_new (var_procMangledName, object->mAttribute_mMethodName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 147)), var_calledProcIsMutating, var_procedureModeMap, var_calledProcSignature, joker_6295, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 146)) ;
  const enumGalgasBool test_8 = var_calledProcIsMutating.boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_9, GALGAS_string ("called proc is mutating: use \"[!\?receiver procName ...]\" instruction")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)) ;
  }
  switch (constinArgument_inReceiverType.enumValue ()) {
  case GALGAS_receiverType::kNotBuilt:
    break ;
  case GALGAS_receiverType::kEnum_noReceiver:
    {
      const enumGalgasBool test_10 = var_calledProcIsMutating.boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_location location_11 (object->mAttribute_mMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_11, GALGAS_string ("a mutating method cannot be called from a non mutating procedure")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 164)) ;
      }
    }
    break ;
  case GALGAS_receiverType::kEnum_receiver:
    {
      const enumGalgasBool test_12 = var_calledProcIsMutating.boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (object->mAttribute_mMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_13, GALGAS_string ("a mutating method cannot be called from a non mutating method")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)) ;
      }
    }
    break ;
  case GALGAS_receiverType::kEnum_mutatingReceiver:
    {
    }
    break ;
  }
  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, var_calledProcSignature.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 173)).objectCompare (var_parameterList.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 173)))).boolEnum () ;
  if (kBoolTrue == test_14) {
    GALGAS_location location_15 (object->mAttribute_mMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_15, GALGAS_string ("this proc requires ").add_operation (var_calledProcSignature.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 174)).getter_string (SOURCE_FILE ("instruction-method-call.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 174)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 174)).add_operation (var_parameterList.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 175)).getter_string (SOURCE_FILE ("instruction-method-call.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 174)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 175))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 174)) ;
  }else if (kBoolFalse == test_14) {
    cEnumerator_procedureSignature enumerator_7314 (var_calledProcSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_7343 (var_parameterList, kEnumeration_up) ;
    while (enumerator_7314.hasCurrentObject () && enumerator_7343.hasCurrentObject ()) {
      const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, enumerator_7314.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 178)).objectCompare (enumerator_7343.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 178)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_location location_17 (enumerator_7343.current_mSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_17, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_7343.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 179)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 179)).add_operation (enumerator_7314.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 180)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 180))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 179)) ;
      }
      GALGAS_string var_requiredPassingMode = extensionGetter_requiredActualPassingModeForSelector (enumerator_7314.current_mFormalArgumentPassingMode (HERE), enumerator_7314.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)) ;
      GALGAS_string var_testedPassingMode = extensionGetter_passingModeForActualSelector (enumerator_7343.current_mEffectiveParameterPassingMode (HERE), enumerator_7343.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 183)) ;
      const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_location location_19 (enumerator_7343.current_mSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_19, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 185)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 185))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 185)) ;
      }
      enumerator_7314.gotoNextObject () ;
      enumerator_7343.gotoNextObject () ;
    }
  }
  GALGAS_location location_20 (object->mAttribute_mMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
  inCompiler->emitSemanticError (location_20, GALGAS_string ("Internal error : no code generation")  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 207)) ;
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
//                            Overriding category method '@procCallInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                           const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                           const GALGAS_receiverType constinArgument_inReceiverType,
                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                           const GALGAS_stringset constinArgument_inModeSet,
                                                           const GALGAS_bool constinArgument_inAllowExceptions,
                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  GALGAS_modeMap var_procedureModeMap ;
  GALGAS_procedureSignature var_procSignature ;
  GALGAS_bool joker_4012 ; // Joker input parameter
  GALGAS_bool joker_4088 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mProcedureMap.method_searchKey (object->mAttribute_mProcRoutineName, joker_4012, var_procedureModeMap, var_procSignature, joker_4088, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 95)) ;
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.modifier_addEdge (constinArgument_inRoutineNameForInvocationGraph, GALGAS_lstring::constructor_new (GALGAS_string ("proc ").add_operation (object->mAttribute_mProcRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 105)), object->mAttribute_mProcRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 105)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 103)) ;
  }
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 108)) ;
  GALGAS_procCallEffectiveParameterListIR var_procCallEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 109)) ;
  cEnumerator_procedureSignature enumerator_4465 (var_procSignature, kEnumeration_up) ;
  cEnumerator_procEffectiveParameterListAST enumerator_4496 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_4465.hasCurrentObject () && enumerator_4496.hasCurrentObject ()) {
    switch (enumerator_4496.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input * extractPtr_5381 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input *) (enumerator_4496.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_5381->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_objectInMemoryIR var_parameterAccess ;
        GALGAS_bool var_isCopiable ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_registerBitSliceAccessMap joker_4743 ; // Joker input parameter
        GALGAS_bool joker_4793 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_parameterAccess, var_isCopiable, joker_4743, var_canBeUsedAsInputParameter, joker_4793, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 113)) ;
        }
        const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 123)).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_location location_1 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 124)) ;
        }
        const enumGalgasBool test_2 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 126)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("this variable cannot be used as input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127)) ;
        }
        const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 129)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (extractedValue_name.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4496.current_mEffectiveParameterKind (HERE), enumerator_4496.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 132)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("instruction-proc-call.galgas", 134)), enumerator_4496.current_mSelector (HERE), GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_llvmLocalObject (function_mangledNameForLocalVariable (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 136))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 136))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 136))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 133)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * extractPtr_6316 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *) (enumerator_4496.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_6316->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_6316->mAssociatedValue1 ;
        GALGAS_operandIR var_expressionResult ;
        callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, enumerator_4465.current_mType (HERE), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 138)) ;
        {
        routine_checkAssignmentCompatibility (var_expressionResult, enumerator_4465.current_mType (HERE), extractedValue_endOfExp, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4496.current_mEffectiveParameterKind (HERE), enumerator_4496.current_mSelector (HERE), enumerator_4465.current_mType (HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 156)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("instruction-proc-call.galgas", 158)), enumerator_4496.current_mSelector (HERE), GALGAS_operandIR::constructor_new (enumerator_4465.current_mType (HERE), var_expressionResult.mAttribute_mValue  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 160))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 157)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput * extractPtr_7057 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput *) (enumerator_4496.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7057->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_objectInMemoryIR var_parameterAccess ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_bool joker_6510_2 ; // Joker input parameter
        GALGAS_registerBitSliceAccessMap joker_6510_1 ; // Joker input parameter
        GALGAS_bool joker_6561 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_parameterAccess, joker_6510_2, joker_6510_1, var_canBeUsedAsInputParameter, joker_6561, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 162)) ;
        }
        const enumGalgasBool test_6 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 171)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_location location_7 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_7, GALGAS_string ("this variable cannot be used as output/input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 172)) ;
        }
        const enumGalgasBool test_8 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 174)).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_location location_9 (extractedValue_name.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_9, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 175)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4496.current_mEffectiveParameterKind (HERE), enumerator_4496.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 177)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 179)), enumerator_4496.current_mSelector (HERE), GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_llvmLocalObject (function_mangledNameForLocalVariable (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 181))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 181))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 181))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 178)) ;
      }
      break ;
    }
    enumerator_4465.gotoNextObject () ;
    enumerator_4496.gotoNextObject () ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_procedureModeMap.getter_keySet (SOURCE_FILE ("instruction-proc-call.galgas", 187)), object->mAttribute_mProcRoutineName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 185)) ;
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_procSignature.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 190)).objectCompare (var_parameterList.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 190)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mProcRoutineName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_11, GALGAS_string ("this proc requires ").add_operation (var_procSignature.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 191)).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 191)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 191)).add_operation (var_procSignature.getter_length (SOURCE_FILE ("instruction-proc-call.galgas", 192)).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 191)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 192))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 191)) ;
  }else if (kBoolFalse == test_10) {
    cEnumerator_procedureSignature enumerator_7476 (var_procSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_7505 (var_parameterList, kEnumeration_up) ;
    while (enumerator_7476.hasCurrentObject () && enumerator_7505.hasCurrentObject ()) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_7476.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 195)).objectCompare (enumerator_7505.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 195)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (enumerator_7505.current_mSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_13, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_7505.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)).add_operation (enumerator_7476.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 197)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 197))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)) ;
      }
      GALGAS_string var_requiredPassingMode = extensionGetter_requiredActualPassingModeForSelector (enumerator_7476.current_mFormalArgumentPassingMode (HERE), enumerator_7476.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 199)) ;
      GALGAS_string var_testedPassingMode = extensionGetter_passingModeForActualSelector (enumerator_7505.current_mEffectiveParameterPassingMode (HERE), enumerator_7505.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 200)) ;
      const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_location location_15 (enumerator_7505.current_mSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_15, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202)) ;
      }
      enumerator_7476.gotoNextObject () ;
      enumerator_7505.gotoNextObject () ;
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (object->mAttribute_mProcRoutineName.mAttribute_string, var_procCallEffectiveParameterListIR  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 207))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 207)) ;
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
//                       Overriding category method '@procCallInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string (";--- call ").add_operation (function_mangledNameForProcedure (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 245)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 245))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 245)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  call void @").add_operation (function_mangledNameForProcedure (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 246)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 246))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 246)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_9805 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_9805.hasCurrentObject ()) {
    switch (enumerator_9805.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.dotAssign_operation (extensionGetter_llvmTypeName (enumerator_9805.current_mParameter (HERE).mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 250)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 250)).add_operation (extensionGetter_string (enumerator_9805.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 250))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 250)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.dotAssign_operation (extensionGetter_llvmTypeName (enumerator_9805.current_mParameter (HERE).mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 252)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 252)).add_operation (extensionGetter_string (enumerator_9805.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 252))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 252)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.dotAssign_operation (extensionGetter_llvmTypeName (enumerator_9805.current_mParameter (HERE).mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254)).add_operation (extensionGetter_string (enumerator_9805.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254)) ;
      }
      break ;
    }
    if (enumerator_9805.hasNextObject ()) {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 257)) ;
    }
    enumerator_9805.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string (")\n")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 259)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_procCallInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                           categoryMethod_procCallInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionIR_llvmInstructionCode (defineCategoryMethod_procCallInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@procCallInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mProcedureSet.addAssign_operation (object->mAttribute_mProcName  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 265)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_procCallInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                               categoryMethod_procCallInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionIR_enterAccessibleEntities (defineCategoryMethod_procCallInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@whileInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                        const GALGAS_receiverType constinArgument_inReceiverType,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 73)) ;
  GALGAS_operandIR var_testValue ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 77)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_testInstructionGenerationList, var_testValue, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 74)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testValue.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 88)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 88)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (var_testValue.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 89)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 89))  COMMA_SOURCE_FILE ("instruction-while.galgas", 89)) ;
  }
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_testValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 91)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-while.galgas", 92)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 95)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 96)) ;
  }
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 97)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mAttribute_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 112)), var_testInstructionGenerationList, var_testValue, var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-while.galgas", 111))  COMMA_SOURCE_FILE ("instruction-while.galgas", 111)) ;
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
//                        Overriding category method '@whileInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string (";--- while (").add_operation (extensionGetter_string (object->mAttribute_mTestExpression.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 137)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 137))  COMMA_SOURCE_FILE ("instruction-while.galgas", 137)) ;
  GALGAS_string var_labelTest = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138)) ;
  GALGAS_string var_labelLoop = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 139)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 139)) ;
  GALGAS_string var_labelEnd = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_labelTest, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141))  COMMA_SOURCE_FILE ("instruction-while.galgas", 141)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_labelTest.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 142))  COMMA_SOURCE_FILE ("instruction-while.galgas", 142)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br i1 ").add_operation (extensionGetter_string (object->mAttribute_mTestExpression.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)).add_operation (var_labelLoop, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)).add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144))  COMMA_SOURCE_FILE ("instruction-while.galgas", 144)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_labelLoop.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145))  COMMA_SOURCE_FILE ("instruction-while.galgas", 145)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_labelTest, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147))  COMMA_SOURCE_FILE ("instruction-while.galgas", 147)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_labelEnd.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148))  COMMA_SOURCE_FILE ("instruction-while.galgas", 148)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_whileInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                           categoryMethod_whileInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionIR_llvmInstructionCode (defineCategoryMethod_whileInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@whileInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_whileInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                               categoryMethod_whileInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionIR_enterAccessibleEntities (defineCategoryMethod_whileInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@forInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_forInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                      const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                      const GALGAS_receiverType constinArgument_inReceiverType,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_stringset constinArgument_inModeSet,
                                                      const GALGAS_bool constinArgument_inAllowExceptions,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_operandIR var_iteratedExpressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mIteratedExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 63)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_iteratedExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 60)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_iteratedElementType = var_iteratedExpressionResult.mAttribute_mType.getter_enumerationType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 74)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedElementType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 75)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction, GALGAS_string ("this object is not enumerable")  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 76)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 79)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (object->mAttribute_mVarName, var_iteratedElementType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_iteratedElementType, object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 84)), GALGAS_bool (true), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-for-in-do.galgas", 86)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 80)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 90)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mDoInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOf_5F_do_5F_instruction, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 91)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 103)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionIR::constructor_new (object->mAttribute_mVarName.mAttribute_string, var_iteratedElementType, object->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction, var_iteratedExpressionResult, var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 105))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 105)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_forInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                               categoryMethod_forInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_analyze (defineCategoryMethod_forInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@forInstructionIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_forInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionIR * object = (const cPtr_forInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionIR) ;
  GALGAS_string var_startLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 133)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 133)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 133)) ;
  GALGAS_string var_testLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)) ;
  GALGAS_string var_loopLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135)) ;
  GALGAS_string var_endLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 136)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 136)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 136)) ;
  GALGAS_string var_ptrVar = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 137)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 137)).add_operation (GALGAS_string (".ptr"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 137)) ;
  GALGAS_string var_currentVar = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 138)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 138)).add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 138)) ;
  GALGAS_string var_elementTypeName = extensionGetter_llvmTypeName (object->mAttribute_mElementType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_startLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 142)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 142))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 142)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_startLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 143))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 143)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  %").add_operation (function_mangledNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 144)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 144)).add_operation (var_elementTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 144)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 144))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 144)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_testLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 145)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 145))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 145)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_testLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 148))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 148)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  %").add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 149)).add_operation (GALGAS_string (" = phi i8* ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 149)).add_operation (extensionGetter_string (object->mAttribute_mExpressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 149)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 149))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 149)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_startLabel.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)).add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)).add_operation (var_loopLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  %").add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151)).add_operation (GALGAS_string (" = load i8, i8* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151)).add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  %").add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 152)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 152)).add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 152)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 152))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 152)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br i1 %").add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)).add_operation (var_endLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)).add_operation (var_loopLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_loopLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  store ").add_operation (var_elementTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)).add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_elementTypeName.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)).add_operation (function_mangledNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 159)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  %").add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 160)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 160)).add_operation (var_elementTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 160)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 160))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 160)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_elementTypeName.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 161)).add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 161)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 161))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 161)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_testLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 162)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 162))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 162)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_endLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_forInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionIR.mSlotID,
                                           categoryMethod_forInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionIR_llvmInstructionCode (defineCategoryMethod_forInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@forInstructionIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_forInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionIR * object = (const cPtr_forInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_forInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionIR.mSlotID,
                                               categoryMethod_forInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionIR_enterAccessibleEntities (defineCategoryMethod_forInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@commentIR enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_commentIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                              GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_commentIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_commentIR.mSlotID,
                                               categoryMethod_commentIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_commentIR_enterAccessibleEntities (defineCategoryMethod_commentIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@commentIR llvmInstructionCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_commentIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                          GALGAS_string & ioArgument_ioLLVMcode,
                                                          const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_commentIR * object = (const cPtr_commentIR *) inObject ;
  macroValidSharedObject (object, cPtr_commentIR) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string (";--- ").add_operation (object->mAttribute_mComment, inCompiler COMMA_SOURCE_FILE ("intermediate-comment.galgas", 24)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment.galgas", 24))  COMMA_SOURCE_FILE ("intermediate-comment.galgas", 24)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_commentIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_commentIR.mSlotID,
                                           categoryMethod_commentIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_commentIR_llvmInstructionCode (defineCategoryMethod_commentIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@allocaConstantIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_allocaConstantIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                 GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_allocaConstantIR * object = (const cPtr_allocaConstantIR *) inObject ;
  macroValidSharedObject (object, cPtr_allocaConstantIR) ;
  GALGAS_string var_llvmType = extensionGetter_llvmTypeName (object->mAttribute_mVariableType, inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 23)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  %").add_operation (function_mangledNameForLocalVariable (object->mAttribute_mLocalVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24))  COMMA_SOURCE_FILE ("intermediate-alloca.galgas", 24)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_allocaConstantIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_allocaConstantIR.mSlotID,
                                           categoryMethod_allocaConstantIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_allocaConstantIR_llvmInstructionCode (defineCategoryMethod_allocaConstantIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@allocaConstantIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_allocaConstantIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                     GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_allocaConstantIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_allocaConstantIR.mSlotID,
                                               categoryMethod_allocaConstantIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_allocaConstantIR_enterAccessibleEntities (defineCategoryMethod_allocaConstantIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@extractValueIR llvmInstructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extractValueIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                               GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extractValueIR * object = (const cPtr_extractValueIR *) inObject ;
  macroValidSharedObject (object, cPtr_extractValueIR) ;
  GALGAS_string var_llvmType = extensionGetter_llvmTypeName (object->mAttribute_mSource.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 25)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (GALGAS_string (" = extractvalue "), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (extensionGetter_string (object->mAttribute_mSource.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (object->mAttribute_mIndex.getter_string (SOURCE_FILE ("intermediate-extract-value.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26))  COMMA_SOURCE_FILE ("intermediate-extract-value.galgas", 26)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extractValueIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_extractValueIR.mSlotID,
                                           categoryMethod_extractValueIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extractValueIR_llvmInstructionCode (defineCategoryMethod_extractValueIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@extractValueIR enterAccessibleEntities'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extractValueIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                   GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extractValueIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_extractValueIR.mSlotID,
                                               categoryMethod_extractValueIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extractValueIR_enterAccessibleEntities (defineCategoryMethod_extractValueIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@extendIR llvmInstructionCode'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extendIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendIR * object = (const cPtr_extendIR *) inObject ;
  macroValidSharedObject (object, cPtr_extendIR) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23))  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)) ;
  GALGAS_bool var_sourceIsUnsigned ;
  GALGAS_bigint joker_728 ; // Joker input parameter
  GALGAS_bigint joker_735 ; // Joker input parameter
  GALGAS_uint joker_778 ; // Joker input parameter
  object->mAttribute_mSource.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)).method_integer (joker_728, joker_735, var_sourceIsUnsigned, joker_778, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = var_sourceIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("zext") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("sext") ;
  }
  ioArgument_ioLLVMcode.dotAssign_operation (temp_0  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 25)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (object->mAttribute_mSource.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (extensionGetter_string (object->mAttribute_mSource.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (extensionGetter_llvmTypeName (object->mAttribute_mResult.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26))  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extendIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_extendIR.mSlotID,
                                           categoryMethod_extendIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendIR_llvmInstructionCode (defineCategoryMethod_extendIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@extendIR enterAccessibleEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extendIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                             GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extendIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_extendIR.mSlotID,
                                               categoryMethod_extendIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendIR_enterAccessibleEntities (defineCategoryMethod_extendIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@binaryOperationIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binaryOperationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                      GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binaryOperationIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                               categoryMethod_binaryOperationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_enterAccessibleEntities (defineCategoryMethod_binaryOperationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@binaryOperationIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binaryOperationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                  GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = (const cPtr_binaryOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_string var_llvmType = extensionGetter_llvmTypeName (object->mAttribute_mOperandType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 133)) ;
  switch (object->mAttribute_mOperation.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GALGAS_string (" = sub "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GALGAS_string (" = mul "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GALGAS_string (" = udiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GALGAS_string (" = sdiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GALGAS_string (" = urem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GALGAS_string (" = srem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      const GALGAS_binaryOperationIR temp_0 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_0.ptr (), GALGAS_string ("uadd"), GALGAS_uint ((uint32_t) 10U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 150)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      const GALGAS_binaryOperationIR temp_1 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_1.ptr (), GALGAS_string ("sadd"), GALGAS_uint ((uint32_t) 10U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 158)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      const GALGAS_binaryOperationIR temp_2 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_2.ptr (), GALGAS_string ("usub"), GALGAS_uint ((uint32_t) 11U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 166)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      const GALGAS_binaryOperationIR temp_3 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_3.ptr (), GALGAS_string ("ssub"), GALGAS_uint ((uint32_t) 11U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 174)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      const GALGAS_binaryOperationIR temp_4 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_4.ptr (), GALGAS_string ("umul"), GALGAS_uint ((uint32_t) 12U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 182)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      const GALGAS_binaryOperationIR temp_5 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_5.ptr (), GALGAS_string ("smul"), GALGAS_uint ((uint32_t) 12U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 190)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      const GALGAS_binaryOperationIR temp_6 = object ;
      callCategoryMethod_enterCodeForDivisionWithZeroDivisorException ((const cPtr_binaryOperationIR *) temp_6.ptr (), GALGAS_string ("udiv"), GALGAS_uint ((uint32_t) 13U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 198)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      const GALGAS_binaryOperationIR temp_7 = object ;
      callCategoryMethod_enterCodeForDivisionWithZeroDivisorException ((const cPtr_binaryOperationIR *) temp_7.ptr (), GALGAS_string ("sdiv"), GALGAS_uint ((uint32_t) 13U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      const GALGAS_binaryOperationIR temp_8 = object ;
      callCategoryMethod_enterCodeForDivisionWithZeroDivisorException ((const cPtr_binaryOperationIR *) temp_8.ptr (), GALGAS_string ("urem"), GALGAS_uint ((uint32_t) 14U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      const GALGAS_binaryOperationIR temp_9 = object ;
      callCategoryMethod_enterCodeForDivisionWithZeroDivisorException ((const cPtr_binaryOperationIR *) temp_9.ptr (), GALGAS_string ("srem"), GALGAS_uint ((uint32_t) 14U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (" = and "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GALGAS_string (" = or "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GALGAS_string (" = xor "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GALGAS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GALGAS_string (" = ashr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GALGAS_string (" = lshr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GALGAS_string (" = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (GALGAS_string (" = icmp ne "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GALGAS_string (" = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GALGAS_string (" = icmp ule "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (GALGAS_string (" = icmp ugt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (GALGAS_string (" = icmp uge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 252)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (GALGAS_string (" = icmp slt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (GALGAS_string (" = icmp sle "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (GALGAS_string (" = icmp sgt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 258)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (extensionGetter_string (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (extensionGetter_string (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 260)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binaryOperationIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                           categoryMethod_binaryOperationIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_llvmInstructionCode (defineCategoryMethod_binaryOperationIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@shortCircuitAndOperationIR enterAccessibleEntities'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_shortCircuitAndOperationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                               GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_shortCircuitAndOperationIR * object = (const cPtr_shortCircuitAndOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_shortCircuitAndOperationIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mLeftInstructionList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 35)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mRightInstructionList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 36)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_shortCircuitAndOperationIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_shortCircuitAndOperationIR.mSlotID,
                                               categoryMethod_shortCircuitAndOperationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_shortCircuitAndOperationIR_enterAccessibleEntities (defineCategoryMethod_shortCircuitAndOperationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@shortCircuitAndOperationIR llvmInstructionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_shortCircuitAndOperationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                                           const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_shortCircuitAndOperationIR * object = (const cPtr_shortCircuitAndOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_shortCircuitAndOperationIR) ;
  GALGAS_string var_startLabel = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 46)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 46)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 46)) ;
  GALGAS_string var_trueLabel = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 47)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 47)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 47)) ;
  GALGAS_string var_falseLabel = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 48)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 48)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 48)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_startLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string (";--- left operand of short circuit and\n")  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_startLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mLeftInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br i1 ").add_operation (extensionGetter_string (object->mAttribute_mLeftOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)).add_operation (var_trueLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)).add_operation (var_falseLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_trueLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 54))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 54)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mRightInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_falseLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_falseLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTargetOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string (" = phi i1 ["), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (extensionGetter_string (object->mAttribute_mRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (var_trueLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string ("], [false, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (var_startLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_shortCircuitAndOperationIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_shortCircuitAndOperationIR.mSlotID,
                                           categoryMethod_shortCircuitAndOperationIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_shortCircuitAndOperationIR_llvmInstructionCode (defineCategoryMethod_shortCircuitAndOperationIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@loadRegisterIR llvmInstructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadRegisterIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                               GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadRegisterIR * object = (const cPtr_loadRegisterIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadRegisterIR) ;
  GALGAS_string var_llvmType = extensionGetter_llvmTypeName (object->mAttribute_mTargetValue.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (GALGAS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (GALGAS_string ("* inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (object->mAttribute_mRegisterAddress.getter_string (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (object->mAttribute_mRegisterAddress.getter_hexString (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27))  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadRegisterIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadRegisterIR.mSlotID,
                                           categoryMethod_loadRegisterIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadRegisterIR_llvmInstructionCode (defineCategoryMethod_loadRegisterIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@loadRegisterIR enterAccessibleEntities'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadRegisterIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadRegisterIR * object = (const cPtr_loadRegisterIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadRegisterIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (object->mAttribute_mRegisterName  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 33)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadRegisterIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadRegisterIR.mSlotID,
                                               categoryMethod_loadRegisterIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadRegisterIR_enterAccessibleEntities (defineCategoryMethod_loadRegisterIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@loadGlobalVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadGlobalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  GALGAS_string var_llvmType = extensionGetter_llvmTypeName (object->mAttribute_mTargetValue.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26))  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("volatile ")  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)) ;
  }
  ioArgument_ioLLVMcode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (function_mangledNameForGlobalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30))  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadGlobalVariableIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadGlobalVariableIR.mSlotID,
                                           categoryMethod_loadGlobalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadGlobalVariableIR_llvmInstructionCode (defineCategoryMethod_loadGlobalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@loadGlobalVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadGlobalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mVariableName  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 36)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadGlobalVariableIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadGlobalVariableIR.mSlotID,
                                               categoryMethod_loadGlobalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadGlobalVariableIR_enterAccessibleEntities (defineCategoryMethod_loadGlobalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@loadLocalVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadLocalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadLocalVariableIR * object = (const cPtr_loadLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadLocalVariableIR) ;
  GALGAS_string var_llvmType = extensionGetter_llvmTypeName (object->mAttribute_mTargetValue.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 23)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24))  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (function_mangledNameForLocalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25))  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadLocalVariableIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadLocalVariableIR.mSlotID,
                                           categoryMethod_loadLocalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadLocalVariableIR_llvmInstructionCode (defineCategoryMethod_loadLocalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@loadLocalVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadLocalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                        GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadLocalVariableIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadLocalVariableIR.mSlotID,
                                               categoryMethod_loadLocalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadLocalVariableIR_enterAccessibleEntities (defineCategoryMethod_loadLocalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@storeVolatileIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeVolatileIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeVolatileIR * object = (const cPtr_storeVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeVolatileIR) ;
  GALGAS_string var_llvmType = extensionGetter_llvmTypeName (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  store volatile ").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (extensionGetter_string (object->mAttribute_mSourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string ("* inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (object->mAttribute_mAddress.getter_string (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (object->mAttribute_mAddress.getter_hexString (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29))  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeVolatileIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeVolatileIR.mSlotID,
                                           categoryMethod_storeVolatileIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeVolatileIR_llvmInstructionCode (defineCategoryMethod_storeVolatileIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@storeVolatileIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeVolatileIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeVolatileIR * object = (const cPtr_storeVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeVolatileIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (object->mAttribute_mRegisterName  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 35)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeVolatileIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeVolatileIR.mSlotID,
                                               categoryMethod_storeVolatileIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeVolatileIR_enterAccessibleEntities (defineCategoryMethod_storeVolatileIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@storeGlobalVariableIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeGlobalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  GALGAS_string var_llvmType = extensionGetter_llvmTypeName (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 27)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  store ")  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("volatile ")  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 30)) ;
  }
  ioArgument_ioLLVMcode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (extensionGetter_string (object->mAttribute_mSourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (function_mangledNameForGlobalVariable (object->mAttribute_mGlobalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32))  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeGlobalVariableIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeGlobalVariableIR.mSlotID,
                                           categoryMethod_storeGlobalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeGlobalVariableIR_llvmInstructionCode (defineCategoryMethod_storeGlobalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@storeGlobalVariableIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeGlobalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mGlobalVarName  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 38)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeGlobalVariableIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeGlobalVariableIR.mSlotID,
                                               categoryMethod_storeGlobalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeGlobalVariableIR_enterAccessibleEntities (defineCategoryMethod_storeGlobalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@storeLocalVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeLocalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeLocalVariableIR * object = (const cPtr_storeLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeLocalVariableIR) ;
  GALGAS_string var_llvmType = extensionGetter_llvmTypeName (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  store ")  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (extensionGetter_string (object->mAttribute_mSourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (function_mangledNameForLocalVariable (object->mAttribute_mLocalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27))  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeLocalVariableIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeLocalVariableIR.mSlotID,
                                           categoryMethod_storeLocalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeLocalVariableIR_llvmInstructionCode (defineCategoryMethod_storeLocalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@storeLocalVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeLocalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeLocalVariableIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeLocalVariableIR.mSlotID,
                                               categoryMethod_storeLocalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeLocalVariableIR_enterAccessibleEntities (defineCategoryMethod_storeLocalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@loadStructureConstantIR llvmInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadStructureConstantIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                        const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                        GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadStructureConstantIR * object = (const cPtr_loadStructureConstantIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadStructureConstantIR) ;
  GALGAS_string var_llvmType = extensionGetter_llvmTypeName (object->mAttribute_mTargetValue.mAttribute_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 23)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_string (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 24)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 24))  COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 24)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)).add_operation (object->mAttribute_mTypeName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)).add_operation (GALGAS_string (".init\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25))  COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadStructureConstantIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadStructureConstantIR.mSlotID,
                                           categoryMethod_loadStructureConstantIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadStructureConstantIR_llvmInstructionCode (defineCategoryMethod_loadStructureConstantIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@loadStructureConstantIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadStructureConstantIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                            GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadStructureConstantIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadStructureConstantIR.mSlotID,
                                               categoryMethod_loadStructureConstantIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadStructureConstantIR_enterAccessibleEntities (defineCategoryMethod_loadStructureConstantIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@getElementPtrIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_getElementPtrIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getElementPtrIR * object = (const cPtr_getElementPtrIR *) inObject ;
  macroValidSharedObject (object, cPtr_getElementPtrIR) ;
  GALGAS_string var_llvmType = extensionGetter_llvmTypeName (extensionGetter_type (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 25)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (GALGAS_string ("  ").add_operation (extensionGetter_name (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 26)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 26))  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 26)) ;
  ioArgument_ioLLVMcode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 27)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 27)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 27)).add_operation (extensionGetter_name (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 27)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 27)).add_operation (object->mAttribute_mIndex.getter_string (SOURCE_FILE ("intermediate-get-element-ptr.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 27))  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 27)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_getElementPtrIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getElementPtrIR.mSlotID,
                                           categoryMethod_getElementPtrIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getElementPtrIR_llvmInstructionCode (defineCategoryMethod_getElementPtrIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@getElementPtrIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_getElementPtrIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                    GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_getElementPtrIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_getElementPtrIR.mSlotID,
                                               categoryMethod_getElementPtrIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getElementPtrIR_enterAccessibleEntities (defineCategoryMethod_getElementPtrIR_enterAccessibleEntities, NULL) ;

