#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-3.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Extension method '@externProcedureDeclarationListAST noteTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_externProcedureDeclarationListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_externProcedureDeclarationListAST enumerator_2298 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2298.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_2367 (enumerator_2298.current_mProcFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_2367.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_2367.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 54)) ;
      }
      enumerator_2367.gotoNextObject () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_2298.current_mReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_2298.current_mReturnTypeName (HERE) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 57)) ;
      }
    }
    enumerator_2298.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Extension method '@externProcedureDeclarationListAST enterExternProcInContext'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterExternProcInContext (const GALGAS_externProcedureDeclarationListAST inObject,
                                               GALGAS_semanticContext & ioArgument_ioContext,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_externProcedureDeclarationListAST enumerator_3033 (temp_0, kENUMERATION_UP) ;
  while (enumerator_3033.hasCurrentObject ()) {
    extensionMethod_enterExternProcInContext (enumerator_3033.current (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 70)) ;
    enumerator_3033.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Extension method '@externProcedureDeclarationListAST externProcedureSemanticAnalysis'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_externProcedureSemanticAnalysis (const GALGAS_externProcedureDeclarationListAST inObject,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationListAST temp_0 = inObject ;
  cEnumerator_externProcedureDeclarationListAST enumerator_4833 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4833.hasCurrentObject ()) {
    extensionMethod_externProcedureSemanticAnalysis (enumerator_4833.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 116)) ;
    enumerator_4833.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_externProcedureMapIR::cMapElement_externProcedureMapIR (const GALGAS_lstring & inKey,
                                                                    const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mReturnType (in_mReturnType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_externProcedureMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mReturnType.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_externProcedureMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_externProcedureMapIR (mProperty_lkey, mProperty_mFormalArgumentListForGeneration, mProperty_mReturnType COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_externProcedureMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentListForGeneration" ":" ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnType" ":" ;
  mProperty_mReturnType.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_externProcedureMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_externProcedureMapIR * operand = (cMapElement_externProcedureMapIR *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (operand->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReturnType.objectCompare (operand->mProperty_mReturnType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR::GALGAS_externProcedureMapIR (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR::GALGAS_externProcedureMapIR (const GALGAS_externProcedureMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR & GALGAS_externProcedureMapIR::operator = (const GALGAS_externProcedureMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::constructor_mapWithMapToOverride (const GALGAS_externProcedureMapIR & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_routineFormalArgumentListIR & inArgument0,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * p = NULL ;
  macroMyNew (p, cMapElement_externProcedureMapIR (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@externProcedureMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureMapIR::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_routineFormalArgumentListIR inArgument0,
                                                    GALGAS_unifiedTypeMap_2D_proxy inArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * p = NULL ;
  macroMyNew (p, cMapElement_externProcedureMapIR (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "extern procedure %K is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_externProcedureMapIR::getter_mFormalArgumentListForGenerationForKey (const GALGAS_string & inKey,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) attributes ;
  GALGAS_routineFormalArgumentListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_externProcedureMapIR::getter_mReturnTypeForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    result = p->mProperty_mReturnType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureMapIR::setter_setMFormalArgumentListForGenerationForKey (GALGAS_routineFormalArgumentListIR inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_externProcedureMapIR * p = (cMapElement_externProcedureMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externProcedureMapIR::setter_setMReturnTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_externProcedureMapIR * p = (cMapElement_externProcedureMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    p->mProperty_mReturnType = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_externProcedureMapIR * GALGAS_externProcedureMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * result = (cMapElement_externProcedureMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_externProcedureMapIR) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_externProcedureMapIR::cEnumerator_externProcedureMapIR (const GALGAS_externProcedureMapIR & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR_2D_element cEnumerator_externProcedureMapIR::current (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return GALGAS_externProcedureMapIR_2D_element (p->mProperty_lkey, p->mProperty_mFormalArgumentListForGeneration, p->mProperty_mReturnType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_externProcedureMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR cEnumerator_externProcedureMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mProperty_mFormalArgumentListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_externProcedureMapIR::current_mReturnType (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mProperty_mReturnType ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @externProcedureMapIR type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externProcedureMapIR ("externProcedureMapIR",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externProcedureMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externProcedureMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureMapIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  const GALGAS_externProcedureMapIR * p = (const GALGAS_externProcedureMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externProcedureMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@routineFormalArgumentListIR' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_routineFormalArgumentListIR : public cCollectionElement {
  public : GALGAS_routineFormalArgumentListIR_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_routineFormalArgumentListIR (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                           const GALGAS_PLMType & in_mFormalArgumentType,
                                                           const GALGAS_string & in_mFormalArgumentName
                                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_routineFormalArgumentListIR (const GALGAS_routineFormalArgumentListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_routineFormalArgumentListIR::cCollectionElement_routineFormalArgumentListIR (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                const GALGAS_PLMType & in_mFormalArgumentType,
                                                                                                const GALGAS_string & in_mFormalArgumentName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentKind, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_routineFormalArgumentListIR::cCollectionElement_routineFormalArgumentListIR (const GALGAS_routineFormalArgumentListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentKind, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_routineFormalArgumentListIR::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_routineFormalArgumentListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineFormalArgumentListIR (mObject.mProperty_mFormalArgumentKind, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_routineFormalArgumentListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentKind" ":" ;
  mObject.mProperty_mFormalArgumentKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mProperty_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_routineFormalArgumentListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineFormalArgumentListIR * operand = (cCollectionElement_routineFormalArgumentListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineFormalArgumentListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR::GALGAS_routineFormalArgumentListIR (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR::GALGAS_routineFormalArgumentListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineFormalArgumentListIR  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                  const GALGAS_PLMType & inOperand1,
                                                                                                  const GALGAS_string & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineFormalArgumentListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineFormalArgumentListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                    const GALGAS_PLMType & in_mFormalArgumentType,
                                                                    const GALGAS_string & in_mFormalArgumentName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (in_mFormalArgumentKind,
                                                                 in_mFormalArgumentType,
                                                                 in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                              const GALGAS_PLMType & inOperand1,
                                                              const GALGAS_string & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::setter_append (GALGAS_routineFormalArgumentListIR_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                               const GALGAS_PLMType inOperand1,
                                                               const GALGAS_string inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                               GALGAS_PLMType & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
      outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                          GALGAS_PLMType & outOperand1,
                                                          GALGAS_string & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                         GALGAS_PLMType & outOperand1,
                                                         GALGAS_string & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                       GALGAS_PLMType & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                      GALGAS_PLMType & outOperand1,
                                                      GALGAS_string & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::add_operation (const GALGAS_routineFormalArgumentListIR & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result = GALGAS_routineFormalArgumentListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result = GALGAS_routineFormalArgumentListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result = GALGAS_routineFormalArgumentListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineFormalArgumentListIR::plusAssign_operation (const GALGAS_routineFormalArgumentListIR inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentListIR::getter_mFormalArgumentKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_routineFormalArgumentListIR::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_routineFormalArgumentListIR::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_routineFormalArgumentListIR::cEnumerator_routineFormalArgumentListIR (const GALGAS_routineFormalArgumentListIR & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR_2D_element cEnumerator_routineFormalArgumentListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode cEnumerator_routineFormalArgumentListIR::current_mFormalArgumentKind (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_routineFormalArgumentListIR::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_routineFormalArgumentListIR::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @routineFormalArgumentListIR type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineFormalArgumentListIR ("routineFormalArgumentListIR",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineFormalArgumentListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR result ;
  const GALGAS_routineFormalArgumentListIR * p = (const GALGAS_routineFormalArgumentListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineFormalArgumentListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension method '@externProcedureMapIR llvmPrototypeGeneration'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_llvmPrototypeGeneration (const GALGAS_externProcedureMapIR inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("extern functions"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)) ;
  const GALGAS_externProcedureMapIR temp_0 = inObject ;
  cEnumerator_externProcedureMapIR enumerator_7206 (temp_0, kENUMERATION_UP) ;
  while (enumerator_7206.hasCurrentObject ()) {
    extensionMethod_llvmPrototypeGeneration (enumerator_7206.current (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)) ;
    enumerator_7206.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 183)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@isrDeclarationListAST' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_isrDeclarationListAST : public cCollectionElement {
  public : GALGAS_isrDeclarationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_isrDeclarationListAST (const GALGAS_lstring & in_mISRName,
                                                     const GALGAS_mode & in_mMode,
                                                     const GALGAS_lstring & in_mDriverName,
                                                     const GALGAS_instructionListAST & in_mISRInstructionList,
                                                     const GALGAS_location & in_mEndOfISRDeclaration
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_isrDeclarationListAST (const GALGAS_isrDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_isrDeclarationListAST::cCollectionElement_isrDeclarationListAST (const GALGAS_lstring & in_mISRName,
                                                                                    const GALGAS_mode & in_mMode,
                                                                                    const GALGAS_lstring & in_mDriverName,
                                                                                    const GALGAS_instructionListAST & in_mISRInstructionList,
                                                                                    const GALGAS_location & in_mEndOfISRDeclaration
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mISRName, in_mMode, in_mDriverName, in_mISRInstructionList, in_mEndOfISRDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_isrDeclarationListAST::cCollectionElement_isrDeclarationListAST (const GALGAS_isrDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mISRName, inElement.mProperty_mMode, inElement.mProperty_mDriverName, inElement.mProperty_mISRInstructionList, inElement.mProperty_mEndOfISRDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_isrDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_isrDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_isrDeclarationListAST (mObject.mProperty_mISRName, mObject.mProperty_mMode, mObject.mProperty_mDriverName, mObject.mProperty_mISRInstructionList, mObject.mProperty_mEndOfISRDeclaration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_isrDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mISRName" ":" ;
  mObject.mProperty_mISRName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMode" ":" ;
  mObject.mProperty_mMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriverName" ":" ;
  mObject.mProperty_mDriverName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mISRInstructionList" ":" ;
  mObject.mProperty_mISRInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfISRDeclaration" ":" ;
  mObject.mProperty_mEndOfISRDeclaration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_isrDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_isrDeclarationListAST * operand = (cCollectionElement_isrDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_isrDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST::GALGAS_isrDeclarationListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST::GALGAS_isrDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_isrDeclarationListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_mode & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2,
                                                                                      const GALGAS_instructionListAST & inOperand3,
                                                                                      const GALGAS_location & inOperand4
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_isrDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_isrDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_isrDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_isrDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mISRName,
                                                              const GALGAS_mode & in_mMode,
                                                              const GALGAS_lstring & in_mDriverName,
                                                              const GALGAS_instructionListAST & in_mISRInstructionList,
                                                              const GALGAS_location & in_mEndOfISRDeclaration
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_isrDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_isrDeclarationListAST (in_mISRName,
                                                           in_mMode,
                                                           in_mDriverName,
                                                           in_mISRInstructionList,
                                                           in_mEndOfISRDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_isrDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_mode & inOperand1,
                                                        const GALGAS_lstring & inOperand2,
                                                        const GALGAS_instructionListAST & inOperand3,
                                                        const GALGAS_location & inOperand4
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_isrDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_isrDeclarationListAST::setter_append (GALGAS_isrDeclarationListAST_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_isrDeclarationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_isrDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_mode inOperand1,
                                                         const GALGAS_lstring inOperand2,
                                                         const GALGAS_instructionListAST inOperand3,
                                                         const GALGAS_location inOperand4,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_isrDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_isrDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_mode & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_instructionListAST & outOperand3,
                                                         GALGAS_location & outOperand4,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mISRName ;
      outOperand1 = p->mObject.mProperty_mMode ;
      outOperand2 = p->mObject.mProperty_mDriverName ;
      outOperand3 = p->mObject.mProperty_mISRInstructionList ;
      outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_isrDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_mode & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_instructionListAST & outOperand3,
                                                    GALGAS_location & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mISRName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mDriverName ;
    outOperand3 = p->mObject.mProperty_mISRInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_isrDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_mode & outOperand1,
                                                   GALGAS_lstring & outOperand2,
                                                   GALGAS_instructionListAST & outOperand3,
                                                   GALGAS_location & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mISRName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mDriverName ;
    outOperand3 = p->mObject.mProperty_mISRInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_isrDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_mode & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_instructionListAST & outOperand3,
                                                 GALGAS_location & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mISRName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mDriverName ;
    outOperand3 = p->mObject.mProperty_mISRInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_isrDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_mode & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                GALGAS_instructionListAST & outOperand3,
                                                GALGAS_location & outOperand4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mISRName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mDriverName ;
    outOperand3 = p->mObject.mProperty_mISRInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::add_operation (const GALGAS_isrDeclarationListAST & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result = GALGAS_isrDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result = GALGAS_isrDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result = GALGAS_isrDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_isrDeclarationListAST::plusAssign_operation (const GALGAS_isrDeclarationListAST inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_isrDeclarationListAST::getter_mISRNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mISRName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_isrDeclarationListAST::getter_mModeAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mMode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_isrDeclarationListAST::getter_mDriverNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mDriverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_isrDeclarationListAST::getter_mISRInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mISRInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_isrDeclarationListAST::getter_mEndOfISRDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_isrDeclarationListAST * p = (cCollectionElement_isrDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfISRDeclaration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_isrDeclarationListAST::cEnumerator_isrDeclarationListAST (const GALGAS_isrDeclarationListAST & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST_2D_element cEnumerator_isrDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_isrDeclarationListAST::current_mISRName (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mISRName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode cEnumerator_isrDeclarationListAST::current_mMode (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_isrDeclarationListAST::current_mDriverName (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mDriverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cEnumerator_isrDeclarationListAST::current_mISRInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mISRInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_isrDeclarationListAST::current_mEndOfISRDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_isrDeclarationListAST * p = (const cCollectionElement_isrDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_isrDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfISRDeclaration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @isrDeclarationListAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_isrDeclarationListAST ("isrDeclarationListAST",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_isrDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_isrDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_isrDeclarationListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST GALGAS_isrDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_isrDeclarationListAST result ;
  const GALGAS_isrDeclarationListAST * p = (const GALGAS_isrDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_isrDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("isrDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@isrDeclarationListAST enterInContext'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterInContext (const GALGAS_isrDeclarationListAST inObject,
                                     GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                     GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                     GALGAS_decoratedRoutineList & ioArgument_ioDecoratedRoutineList,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_isrDeclarationListAST temp_0 = inObject ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedISRDeclarations::constructor_new (temp_0  COMMA_SOURCE_FILE ("declaration-isr.galgas", 57))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 57)) ;
  const GALGAS_isrDeclarationListAST temp_1 = inObject ;
  cEnumerator_isrDeclarationListAST enumerator_2346 (temp_1, kENUMERATION_UP) ;
  while (enumerator_2346.hasCurrentObject ()) {
    GALGAS_lstring var_driverLLVMBaseTypeName_2380 = function_llvmDriverNameFromName (enumerator_2346.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 60)) ;
    GALGAS_lstring var_isrRoutineMangledName_2454 = function_routineMangledNameFromAST (var_driverLLVMBaseTypeName_2380.getter_string (SOURCE_FILE ("declaration-isr.galgas", 61)), enumerator_2346.current (HERE).getter_mISRName (HERE), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 61)) ;
    ioArgument_ioDecoratedRoutineList.addAssign_operation (function_typeNameForTypeMapForDriver (enumerator_2346.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 63)), enumerator_2346.current (HERE).getter_mMode (HERE), GALGAS_routineKind::constructor_function (enumerator_2346.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 65)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-isr.galgas", 68)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-isr.galgas", 68)) COMMA_SOURCE_FILE ("declaration-isr.galgas", 68)).operator_or (GALGAS_routineAttributes::constructor_controlRegisterReadable (SOURCE_FILE ("declaration-isr.galgas", 68)) COMMA_SOURCE_FILE ("declaration-isr.galgas", 68)).operator_or (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("declaration-isr.galgas", 68)) COMMA_SOURCE_FILE ("declaration-isr.galgas", 68)), var_isrRoutineMangledName_2454, GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 70)), enumerator_2346.current (HERE).getter_mISRInstructionList (HERE), enumerator_2346.current (HERE).getter_mEndOfISRDeclaration (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-isr.galgas", 73))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 62)) ;
    enumerator_2346.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_decoratedISRDeclarations::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedISRDeclarations * p = (const cPtr_decoratedISRDeclarations *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedISRDeclarations) ;
  if (kOperandEqual == result) {
    result = mProperty_mISRDeclarationList.objectCompare (p->mProperty_mISRDeclarationList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_decoratedISRDeclarations::objectCompare (const GALGAS_decoratedISRDeclarations & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedISRDeclarations::GALGAS_decoratedISRDeclarations (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedISRDeclarations GALGAS_decoratedISRDeclarations::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedISRDeclarations::constructor_new (GALGAS_isrDeclarationListAST::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedISRDeclarations::GALGAS_decoratedISRDeclarations (const cPtr_decoratedISRDeclarations * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedISRDeclarations) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedISRDeclarations GALGAS_decoratedISRDeclarations::constructor_new (const GALGAS_isrDeclarationListAST & inAttribute_mISRDeclarationList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_decoratedISRDeclarations result ;
  if (inAttribute_mISRDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedISRDeclarations (inAttribute_mISRDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST GALGAS_decoratedISRDeclarations::getter_mISRDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_isrDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedISRDeclarations * p = (const cPtr_decoratedISRDeclarations *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclarations) ;
    result = p->mProperty_mISRDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST cPtr_decoratedISRDeclarations::getter_mISRDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mISRDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @decoratedISRDeclarations class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedISRDeclarations::cPtr_decoratedISRDeclarations (const GALGAS_isrDeclarationListAST & in_mISRDeclarationList
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mISRDeclarationList (in_mISRDeclarationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_decoratedISRDeclarations::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclarations ;
}

void cPtr_decoratedISRDeclarations::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@decoratedISRDeclarations:" ;
  mProperty_mISRDeclarationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_decoratedISRDeclarations::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedISRDeclarations (mProperty_mISRDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @decoratedISRDeclarations type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedISRDeclarations ("decoratedISRDeclarations",
                                                 & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedISRDeclarations::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclarations ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedISRDeclarations::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedISRDeclarations (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedISRDeclarations GALGAS_decoratedISRDeclarations::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_decoratedISRDeclarations result ;
  const GALGAS_decoratedISRDeclarations * p = (const GALGAS_decoratedISRDeclarations *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedISRDeclarations *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedISRDeclarations", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_interruptMapIR::cMapElement_interruptMapIR (const GALGAS_lstring & inKey,
                                                        const GALGAS_PLMType & in_mSelfType,
                                                        const GALGAS_string & in_mDriverName,
                                                        const GALGAS_mode & in_mMode
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSelfType (in_mSelfType),
mProperty_mDriverName (in_mDriverName),
mProperty_mMode (in_mMode) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_interruptMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSelfType.isValid () && mProperty_mDriverName.isValid () && mProperty_mMode.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_interruptMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_interruptMapIR (mProperty_lkey, mProperty_mSelfType, mProperty_mDriverName, mProperty_mMode COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_interruptMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelfType" ":" ;
  mProperty_mSelfType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriverName" ":" ;
  mProperty_mDriverName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMode" ":" ;
  mProperty_mMode.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_interruptMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_interruptMapIR * operand = (cMapElement_interruptMapIR *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfType.objectCompare (operand->mProperty_mSelfType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDriverName.objectCompare (operand->mProperty_mDriverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMode.objectCompare (operand->mProperty_mMode) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR::GALGAS_interruptMapIR (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR::GALGAS_interruptMapIR (const GALGAS_interruptMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR & GALGAS_interruptMapIR::operator = (const GALGAS_interruptMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR GALGAS_interruptMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_interruptMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR GALGAS_interruptMapIR::constructor_mapWithMapToOverride (const GALGAS_interruptMapIR & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR GALGAS_interruptMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_interruptMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_interruptMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_PLMType & inArgument0,
                                                 const GALGAS_string & inArgument1,
                                                 const GALGAS_mode & inArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * p = NULL ;
  macroMyNew (p, cMapElement_interruptMapIR (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@interruptMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_interruptMapIR::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_PLMType inArgument0,
                                              GALGAS_string inArgument1,
                                              GALGAS_mode inArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * p = NULL ;
  macroMyNew (p, cMapElement_interruptMapIR (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "interrupt '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_interruptMapIR::getter_mSelfTypeForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mSelfType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_interruptMapIR::getter_mDriverNameForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mDriverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_interruptMapIR::getter_mModeForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mMode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_interruptMapIR::setter_setMSelfTypeForKey (GALGAS_PLMType inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mProperty_mSelfType = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_interruptMapIR::setter_setMDriverNameForKey (GALGAS_string inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mProperty_mDriverName = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_interruptMapIR::setter_setMModeForKey (GALGAS_mode inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    p->mProperty_mMode = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_interruptMapIR * GALGAS_interruptMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * result = (cMapElement_interruptMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_interruptMapIR) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_interruptMapIR::cEnumerator_interruptMapIR (const GALGAS_interruptMapIR & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR_2D_element cEnumerator_interruptMapIR::current (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return GALGAS_interruptMapIR_2D_element (p->mProperty_lkey, p->mProperty_mSelfType, p->mProperty_mDriverName, p->mProperty_mMode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_interruptMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_interruptMapIR::current_mSelfType (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mSelfType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_interruptMapIR::current_mDriverName (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mDriverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode cEnumerator_interruptMapIR::current_mMode (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mMode ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @interruptMapIR type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptMapIR ("interruptMapIR",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_interruptMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_interruptMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptMapIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR GALGAS_interruptMapIR::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR result ;
  const GALGAS_interruptMapIR * p = (const GALGAS_interruptMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@interruptMapIR interruptCodeGeneration'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_interruptCodeGeneration (const GALGAS_interruptMapIR inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              GALGAS_string & ioArgument_ioAScode,
                                              const GALGAS_string constinArgument_inUndefinedInterruptString,
                                              const GALGAS_string constinArgument_inXTRInterruptHandlerString,
                                              const GALGAS_generationContext constinArgument_inGenerationContext,
                                              GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_definedInterrupts_5502 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-isr.galgas", 133)) ;
  const GALGAS_interruptMapIR temp_0 = inObject ;
  cEnumerator_interruptMapIR enumerator_5531 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5531.hasCurrentObject ()) {
    var_definedInterrupts_5502.addAssign_operation (enumerator_5531.current (HERE).getter_lkey (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 135)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_5531.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 136)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = function_llvmNameForServiceInterrupt (enumerator_5531.current (HERE).getter_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 137)).getter_string (HERE) ;
    }else if (kBoolFalse == test_2) {
      temp_1 = function_llvmNameForSectionInterrupt (enumerator_5531.current (HERE).getter_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 139)) ;
    }
    GALGAS_string var_interruptImplementationName_5618 = temp_1 ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_interruptImplementationName_5618, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 141)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_interruptImplementationName_5618, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 142)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 142)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 142)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 142)) ;
    GALGAS_string var_varName_6004 = function_llvmNameForGlobalVariable (enumerator_5531.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 144)) ;
    GALGAS_string var_llvmTypeName_6078 = extensionGetter_llvmTypeName (enumerator_5531.current (HERE).getter_mSelfType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 145)) ;
    GALGAS_string var_driverLLVMBaseTypeName_6171 = enumerator_5531.current (HERE).getter_mSelfType (HERE).getter_llvmBaseTypeName (HERE) ;
    GALGAS_lstring var_isrRoutineMangledName_6240 = function_routineMangledNameFromAST (var_driverLLVMBaseTypeName_6171, enumerator_5531.current (HERE).getter_lkey (HERE), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 148)) ;
    GALGAS_string var_isrRoutineLLVMName_6341 = function_llvmNameForFunction (var_isrRoutineMangledName_6240.getter_string (SOURCE_FILE ("declaration-isr.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 149)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_isrRoutineLLVMName_6341, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 150)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 150)).add_operation (var_llvmTypeName_6078, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 150)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 150)).add_operation (var_varName_6004, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 150)).add_operation (GALGAS_string ("); \xC2""\xA7""\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 150)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 152)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 153)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_5531.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 155)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_interruptHandlerName_6683 = function_llvmNameForServiceInterrupt (enumerator_5531.current (HERE).getter_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 156)).getter_string (HERE) ;
      GALGAS_string var_isrName_6755 = function_llvmNameForSectionInterrupt (enumerator_5531.current (HERE).getter_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 157)) ;
      GALGAS_string var_s_31__6822 = constinArgument_inXTRInterruptHandlerString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), var_isrName_6755, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 158)) ;
      GALGAS_string var_s_32__6916 = var_s_31__6822.getter_stringByReplacingStringByString (GALGAS_string ("!HANDLER!"), var_interruptHandlerName_6683, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 159)) ;
      ioArgument_ioAScode.plusAssign_operation(var_s_32__6916, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 160)) ;
    }
    enumerator_5531.gotoNextObject () ;
  }
  cEnumerator_availableInterruptMap enumerator_7145 (constinArgument_inGenerationContext.getter_mAvailableInterruptMap (HERE), kENUMERATION_UP) ;
  while (enumerator_7145.hasCurrentObject ()) {
    const enumGalgasBool test_4 = var_definedInterrupts_5502.getter_hasKey (enumerator_7145.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("declaration-isr.galgas", 165)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 165)).boolEnum () ;
    if (kBoolTrue == test_4) {
      switch (enumerator_7145.current_mInterruptionPanicCode (HERE).enumValue ()) {
      case GALGAS_interruptionPanicCode::kNotBuilt:
        break ;
      case GALGAS_interruptionPanicCode::kEnum_noCode:
        {
          GALGAS_string var_s_7261 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForSectionInterrupt (enumerator_7145.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 168)) ;
          ioArgument_ioAScode.plusAssign_operation(var_s_7261, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 169)) ;
        }
        break ;
      case GALGAS_interruptionPanicCode::kEnum_code:
        {
          const cEnumAssociatedValues_interruptionPanicCode_code * extractPtr_8129 = (const cEnumAssociatedValues_interruptionPanicCode_code *) (enumerator_7145.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_value = extractPtr_8129->mAssociatedValue0 ;
          const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_string var_s_7511 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForSectionInterrupt (enumerator_7145.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)) ;
            ioArgument_ioAScode.plusAssign_operation(var_s_7511, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 173)) ;
          }else if (kBoolFalse == test_5) {
            GALGAS_string var_name_7683 = function_llvmNameForSectionInterrupt (enumerator_7145.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 175)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic code for ").add_operation (var_name_7683, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 176)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (var_name_7683, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)).add_operation (GALGAS_string (" noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 177)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @panic.isr (").add_operation (extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)).add_operation (extractedValue_value.getter_bigint (HERE).getter_string (SOURCE_FILE ("declaration-isr.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)) ;
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)) ;
          }
        }
        break ;
      }
    }
    enumerator_7145.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_guardKind_convenienceGuard::cEnumAssociatedValues_guardKind_convenienceGuard (const GALGAS_callInstructionAST & inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_guardKind_convenienceGuard::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_guardKind_convenienceGuard::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardKind_convenienceGuard * ptr = dynamic_cast<const cEnumAssociatedValues_guardKind_convenienceGuard *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKind::GALGAS_guardKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKind GALGAS_guardKind::constructor_baseGuard (UNUSED_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  result.mEnum = kEnum_baseGuard ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKind GALGAS_guardKind::constructor_convenienceGuard (const GALGAS_callInstructionAST & inAssociatedValue0
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_convenienceGuard ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardKind_convenienceGuard (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardKind::method_convenienceGuard (GALGAS_callInstructionAST & outAssociatedValue0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_convenienceGuard) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @guardKind convenienceGuard invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardKind_convenienceGuard * ptr = (const cEnumAssociatedValues_guardKind_convenienceGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_guardKind [3] = {
  "(not built)",
  "baseGuard",
  "convenienceGuard"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_guardKind::getter_isBaseGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_baseGuard == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_guardKind::getter_isConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_convenienceGuard == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardKind::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<enum @guardKind: " << gEnumNameArrayFor_guardKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_guardKind::objectCompare (const GALGAS_guardKind & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @guardKind type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardKind ("guardKind",
                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_guardKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_guardKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKind GALGAS_guardKind::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_guardKind result ;
  const GALGAS_guardKind * p = (const GALGAS_guardKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension method '@guardDeclarationListAST noteTypesInPrecedenceGraph'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_guardDeclarationListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardDeclarationListAST temp_0 = inObject ;
  cEnumerator_guardDeclarationListAST enumerator_2805 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2805.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_2875 (enumerator_2805.current_mGuardFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_2875.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_2875.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 79)) ;
      }
      enumerator_2875.gotoNextObject () ;
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2805.current_mGuardInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 81)) ;
    enumerator_2805.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@guardDeclarationListAST enterInContext'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterInContext (const GALGAS_guardDeclarationListAST inObject,
                                     const GALGAS_string constinArgument_inReceiverTypeName,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardDeclarationListAST temp_0 = inObject ;
  cEnumerator_guardDeclarationListAST enumerator_7185 (temp_0, kENUMERATION_UP) ;
  while (enumerator_7185.hasCurrentObject ()) {
    GALGAS_lstring var_guardMangledName_7239 = function_routineMangledNameFromAST (constinArgument_inReceiverTypeName, enumerator_7185.current (HERE).getter_mGuardName (HERE), enumerator_7185.current (HERE).getter_mGuardFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 185)) ;
    GALGAS_routineTypedSignature var_signature_7471 ;
    {
    routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, enumerator_7185.current (HERE).getter_mGuardFormalArgumentList (HERE), var_signature_7471, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 191)) ;
    }
    {
    ioArgument_ioContext.mProperty_mGuardMapForContext.setter_insertKey (var_guardMangledName_7239, enumerator_7185.current (HERE).getter_mIsPublic (HERE), var_signature_7471, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 193)) ;
    }
    enumerator_7185.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension method '@guardDeclarationListAST guardSemanticAnalysis'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_guardSemanticAnalysis (const GALGAS_guardDeclarationListAST inObject,
                                            GALGAS_PLMType inArgument_inReceiverType,
                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardDeclarationListAST temp_0 = inObject ;
  cEnumerator_guardDeclarationListAST enumerator_8278 (temp_0, kENUMERATION_UP) ;
  while (enumerator_8278.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_8302 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_8358 (enumerator_8278.current (HERE).getter_mGuardAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_8358.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_8358.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 214)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_warnIfUnused_8302.operator_not (SOURCE_FILE ("declaration-guard.galgas", 215)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_8358.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 216)), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 216)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 216)), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 216)) ;
        }
        var_warnIfUnused_8302 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_8358.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 220)), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 220)), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 220)) ;
      }
      enumerator_8358.gotoNextObject () ;
    }
    {
    routine_guardSemanticAnalysis (inArgument_inReceiverType, enumerator_8278.current (HERE).getter_mGuardName (HERE), enumerator_8278.current (HERE).getter_mGuardFormalArgumentList (HERE), enumerator_8278.current (HERE).getter_mGuardKind (HERE), enumerator_8278.current (HERE).getter_mGuardInstructionList (HERE), enumerator_8278.current (HERE).getter_mEndOfGuardDeclaration (HERE), var_warnIfUnused_8302, constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 223)) ;
    }
    enumerator_8278.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard::cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (const GALGAS_allocaList & inAssociatedValue0,
                                                                                                                            const GALGAS_instructionListIR & inAssociatedValue1,
                                                                                                                            const GALGAS_string & inAssociatedValue2,
                                                                                                                            const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * ptr = dynamic_cast<const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKindGenerationIR::GALGAS_guardKindGenerationIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKindGenerationIR GALGAS_guardKindGenerationIR::constructor_baseGuard (UNUSED_LOCATION_ARGS) {
  GALGAS_guardKindGenerationIR result ;
  result.mEnum = kEnum_baseGuard ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKindGenerationIR GALGAS_guardKindGenerationIR::constructor_convenienceGuard (const GALGAS_allocaList & inAssociatedValue0,
                                                                                         const GALGAS_instructionListIR & inAssociatedValue1,
                                                                                         const GALGAS_string & inAssociatedValue2,
                                                                                         const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_guardKindGenerationIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_convenienceGuard ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardKindGenerationIR::method_convenienceGuard (GALGAS_allocaList & outAssociatedValue0,
                                                            GALGAS_instructionListIR & outAssociatedValue1,
                                                            GALGAS_string & outAssociatedValue2,
                                                            GALGAS_procCallEffectiveParameterListIR & outAssociatedValue3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_convenienceGuard) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @guardKindGenerationIR convenienceGuard invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * ptr = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_guardKindGenerationIR [3] = {
  "(not built)",
  "baseGuard",
  "convenienceGuard"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_guardKindGenerationIR::getter_isBaseGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_baseGuard == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_guardKindGenerationIR::getter_isConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_convenienceGuard == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardKindGenerationIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @guardKindGenerationIR: " << gEnumNameArrayFor_guardKindGenerationIR [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_guardKindGenerationIR::objectCompare (const GALGAS_guardKindGenerationIR & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @guardKindGenerationIR type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardKindGenerationIR ("guardKindGenerationIR",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_guardKindGenerationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKindGenerationIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_guardKindGenerationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardKindGenerationIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKindGenerationIR GALGAS_guardKindGenerationIR::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardKindGenerationIR result ;
  const GALGAS_guardKindGenerationIR * p = (const GALGAS_guardKindGenerationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardKindGenerationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKindGenerationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_guardMapIR::cMapElement_guardMapIR (const GALGAS_lstring & inKey,
                                                const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                const GALGAS_PLMType & in_mReceiverType,
                                                const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                const GALGAS_allocaList & in_mAllocaList,
                                                const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                                const GALGAS_bool & in_mWarnIfUnused
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mGuardKindGenerationIR (in_mGuardKindGenerationIR),
mProperty_mAllocaList (in_mAllocaList),
mProperty_mInstructionGenerationList (in_mInstructionGenerationList),
mProperty_mWarnIfUnused (in_mWarnIfUnused) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_guardMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mReceiverType.isValid () && mProperty_mGuardKindGenerationIR.isValid () && mProperty_mAllocaList.isValid () && mProperty_mInstructionGenerationList.isValid () && mProperty_mWarnIfUnused.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_guardMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_guardMapIR (mProperty_lkey, mProperty_mFormalArgumentListForGeneration, mProperty_mReceiverType, mProperty_mGuardKindGenerationIR, mProperty_mAllocaList, mProperty_mInstructionGenerationList, mProperty_mWarnIfUnused COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_guardMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentListForGeneration" ":" ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReceiverType" ":" ;
  mProperty_mReceiverType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardKindGenerationIR" ":" ;
  mProperty_mGuardKindGenerationIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllocaList" ":" ;
  mProperty_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionGenerationList" ":" ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWarnIfUnused" ":" ;
  mProperty_mWarnIfUnused.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_guardMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_guardMapIR * operand = (cMapElement_guardMapIR *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (operand->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (operand->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGuardKindGenerationIR.objectCompare (operand->mProperty_mGuardKindGenerationIR) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllocaList.objectCompare (operand->mProperty_mAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionGenerationList.objectCompare (operand->mProperty_mInstructionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarnIfUnused.objectCompare (operand->mProperty_mWarnIfUnused) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapIR::GALGAS_guardMapIR (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapIR::GALGAS_guardMapIR (const GALGAS_guardMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapIR & GALGAS_guardMapIR::operator = (const GALGAS_guardMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapIR GALGAS_guardMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_guardMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapIR GALGAS_guardMapIR::constructor_mapWithMapToOverride (const GALGAS_guardMapIR & inMapToOverride
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_guardMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapIR GALGAS_guardMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_guardMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                             const GALGAS_routineFormalArgumentListIR & inArgument0,
                                             const GALGAS_PLMType & inArgument1,
                                             const GALGAS_guardKindGenerationIR & inArgument2,
                                             const GALGAS_allocaList & inArgument3,
                                             const GALGAS_instructionListIR & inArgument4,
                                             const GALGAS_bool & inArgument5,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_guardMapIR * p = NULL ;
  macroMyNew (p, cMapElement_guardMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@guardMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapIR::setter_insertKey (GALGAS_lstring inKey,
                                          GALGAS_routineFormalArgumentListIR inArgument0,
                                          GALGAS_PLMType inArgument1,
                                          GALGAS_guardKindGenerationIR inArgument2,
                                          GALGAS_allocaList inArgument3,
                                          GALGAS_instructionListIR inArgument4,
                                          GALGAS_bool inArgument5,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_guardMapIR * p = NULL ;
  macroMyNew (p, cMapElement_guardMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "guard '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR GALGAS_guardMapIR::getter_mFormalArgumentListForGenerationForKey (const GALGAS_string & inKey,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_routineFormalArgumentListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_guardMapIR::getter_mReceiverTypeForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKindGenerationIR GALGAS_guardMapIR::getter_mGuardKindGenerationIRForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_guardKindGenerationIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mProperty_mGuardKindGenerationIR ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList GALGAS_guardMapIR::getter_mAllocaListForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mProperty_mAllocaList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_guardMapIR::getter_mInstructionGenerationListForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mProperty_mInstructionGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_guardMapIR::getter_mWarnIfUnusedForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    result = p->mProperty_mWarnIfUnused ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapIR::setter_setMFormalArgumentListForGenerationForKey (GALGAS_routineFormalArgumentListIR inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapIR::setter_setMReceiverTypeForKey (GALGAS_PLMType inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mProperty_mReceiverType = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapIR::setter_setMGuardKindGenerationIRForKey (GALGAS_guardKindGenerationIR inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mProperty_mGuardKindGenerationIR = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapIR::setter_setMAllocaListForKey (GALGAS_allocaList inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mProperty_mAllocaList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapIR::setter_setMInstructionGenerationListForKey (GALGAS_instructionListIR inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mProperty_mInstructionGenerationList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapIR::setter_setMWarnIfUnusedForKey (GALGAS_bool inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapIR * p = (cMapElement_guardMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapIR) ;
    p->mProperty_mWarnIfUnused = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_guardMapIR * GALGAS_guardMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_guardMapIR * result = (cMapElement_guardMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_guardMapIR) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_guardMapIR::cEnumerator_guardMapIR (const GALGAS_guardMapIR & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapIR_2D_element cEnumerator_guardMapIR::current (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return GALGAS_guardMapIR_2D_element (p->mProperty_lkey, p->mProperty_mFormalArgumentListForGeneration, p->mProperty_mReceiverType, p->mProperty_mGuardKindGenerationIR, p->mProperty_mAllocaList, p->mProperty_mInstructionGenerationList, p->mProperty_mWarnIfUnused) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_guardMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListIR cEnumerator_guardMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mProperty_mFormalArgumentListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_guardMapIR::current_mReceiverType (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mProperty_mReceiverType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardKindGenerationIR cEnumerator_guardMapIR::current_mGuardKindGenerationIR (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mProperty_mGuardKindGenerationIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_allocaList cEnumerator_guardMapIR::current_mAllocaList (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mProperty_mAllocaList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cEnumerator_guardMapIR::current_mInstructionGenerationList (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mProperty_mInstructionGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_guardMapIR::current_mWarnIfUnused (LOCATION_ARGS) const {
  const cMapElement_guardMapIR * p = (const cMapElement_guardMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapIR) ;
  return p->mProperty_mWarnIfUnused ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @guardMapIR type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapIR ("guardMapIR",
                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_guardMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_guardMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapIR GALGAS_guardMapIR::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guardMapIR result ;
  const GALGAS_guardMapIR * p = (const GALGAS_guardMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Extension method '@guardMapIR guardCodeGeneration'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_guardCodeGeneration (const GALGAS_guardMapIR inObject,
                                          GALGAS_string & ioArgument_ioLLVMcode,
                                          GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                          const GALGAS_generationContext constinArgument_inGenerationContext,
                                          GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardMapIR temp_0 = inObject ;
  cEnumerator_guardMapIR enumerator_22345 (temp_0, kENUMERATION_UP) ;
  while (enumerator_22345.hasCurrentObject ()) {
    switch (enumerator_22345.current (HERE).getter_mGuardKindGenerationIR (HERE).enumValue ()) {
    case GALGAS_guardKindGenerationIR::kNotBuilt:
      break ;
    case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
      {
      }
      break ;
    case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
      {
        GALGAS_string var_guardImplementationName_22481 = function_llvmNameForGuardImplementation (enumerator_22345.current (HERE).getter_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 559)) ;
        GALGAS_string var_guardCallName_22559 = function_llvmNameForGuardCall (enumerator_22345.current (HERE).getter_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 560)) ;
        ioArgument_ioSectionList.addAssign_operation (var_guardCallName_22559, var_guardImplementationName_22481, GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 561)) ;
      }
      break ;
    }
    extensionMethod_llvmCodeGeneration (enumerator_22345.current (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 566)) ;
    enumerator_22345.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Class for element of '@decoratedRoutineList' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_decoratedRoutineList : public cCollectionElement {
  public : GALGAS_decoratedRoutineList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_decoratedRoutineList (const GALGAS_lstring & in_mReceiverTypeName,
                                                    const GALGAS_mode & in_mMode,
                                                    const GALGAS_routineKind & in_mRoutineKind,
                                                    const GALGAS_bool & in_mWarnIfUnused,
                                                    const GALGAS_bool & in_mExportedRoutine,
                                                    const GALGAS_routineAttributes & in_mRoutineAttributes,
                                                    const GALGAS_lstring & in_mRoutineMangledName,
                                                    const GALGAS_routineFormalArgumentListAST & in_mRoutineFormalArgumentList,
                                                    const GALGAS_instructionListAST & in_mRoutineInstructionList,
                                                    const GALGAS_location & in_mEndOfRoutineDeclaration,
                                                    const GALGAS_lstring & in_mReturnTypeName
                                                    COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_decoratedRoutineList (const GALGAS_decoratedRoutineList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_decoratedRoutineList::cCollectionElement_decoratedRoutineList (const GALGAS_lstring & in_mReceiverTypeName,
                                                                                  const GALGAS_mode & in_mMode,
                                                                                  const GALGAS_routineKind & in_mRoutineKind,
                                                                                  const GALGAS_bool & in_mWarnIfUnused,
                                                                                  const GALGAS_bool & in_mExportedRoutine,
                                                                                  const GALGAS_routineAttributes & in_mRoutineAttributes,
                                                                                  const GALGAS_lstring & in_mRoutineMangledName,
                                                                                  const GALGAS_routineFormalArgumentListAST & in_mRoutineFormalArgumentList,
                                                                                  const GALGAS_instructionListAST & in_mRoutineInstructionList,
                                                                                  const GALGAS_location & in_mEndOfRoutineDeclaration,
                                                                                  const GALGAS_lstring & in_mReturnTypeName
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mReceiverTypeName, in_mMode, in_mRoutineKind, in_mWarnIfUnused, in_mExportedRoutine, in_mRoutineAttributes, in_mRoutineMangledName, in_mRoutineFormalArgumentList, in_mRoutineInstructionList, in_mEndOfRoutineDeclaration, in_mReturnTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_decoratedRoutineList::cCollectionElement_decoratedRoutineList (const GALGAS_decoratedRoutineList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mReceiverTypeName, inElement.mProperty_mMode, inElement.mProperty_mRoutineKind, inElement.mProperty_mWarnIfUnused, inElement.mProperty_mExportedRoutine, inElement.mProperty_mRoutineAttributes, inElement.mProperty_mRoutineMangledName, inElement.mProperty_mRoutineFormalArgumentList, inElement.mProperty_mRoutineInstructionList, inElement.mProperty_mEndOfRoutineDeclaration, inElement.mProperty_mReturnTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_decoratedRoutineList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_decoratedRoutineList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_decoratedRoutineList (mObject.mProperty_mReceiverTypeName, mObject.mProperty_mMode, mObject.mProperty_mRoutineKind, mObject.mProperty_mWarnIfUnused, mObject.mProperty_mExportedRoutine, mObject.mProperty_mRoutineAttributes, mObject.mProperty_mRoutineMangledName, mObject.mProperty_mRoutineFormalArgumentList, mObject.mProperty_mRoutineInstructionList, mObject.mProperty_mEndOfRoutineDeclaration, mObject.mProperty_mReturnTypeName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_decoratedRoutineList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReceiverTypeName" ":" ;
  mObject.mProperty_mReceiverTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMode" ":" ;
  mObject.mProperty_mMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineKind" ":" ;
  mObject.mProperty_mRoutineKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWarnIfUnused" ":" ;
  mObject.mProperty_mWarnIfUnused.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExportedRoutine" ":" ;
  mObject.mProperty_mExportedRoutine.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineAttributes" ":" ;
  mObject.mProperty_mRoutineAttributes.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineMangledName" ":" ;
  mObject.mProperty_mRoutineMangledName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineFormalArgumentList" ":" ;
  mObject.mProperty_mRoutineFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineInstructionList" ":" ;
  mObject.mProperty_mRoutineInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfRoutineDeclaration" ":" ;
  mObject.mProperty_mEndOfRoutineDeclaration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnTypeName" ":" ;
  mObject.mProperty_mReturnTypeName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_decoratedRoutineList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_decoratedRoutineList * operand = (cCollectionElement_decoratedRoutineList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_decoratedRoutineList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList::GALGAS_decoratedRoutineList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList::GALGAS_decoratedRoutineList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList GALGAS_decoratedRoutineList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedRoutineList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList GALGAS_decoratedRoutineList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_mode & inOperand1,
                                                                                    const GALGAS_routineKind & inOperand2,
                                                                                    const GALGAS_bool & inOperand3,
                                                                                    const GALGAS_bool & inOperand4,
                                                                                    const GALGAS_routineAttributes & inOperand5,
                                                                                    const GALGAS_lstring & inOperand6,
                                                                                    const GALGAS_routineFormalArgumentListAST & inOperand7,
                                                                                    const GALGAS_instructionListAST & inOperand8,
                                                                                    const GALGAS_location & inOperand9,
                                                                                    const GALGAS_lstring & inOperand10
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRoutineList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_decoratedRoutineList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_decoratedRoutineList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRoutineList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mReceiverTypeName,
                                                             const GALGAS_mode & in_mMode,
                                                             const GALGAS_routineKind & in_mRoutineKind,
                                                             const GALGAS_bool & in_mWarnIfUnused,
                                                             const GALGAS_bool & in_mExportedRoutine,
                                                             const GALGAS_routineAttributes & in_mRoutineAttributes,
                                                             const GALGAS_lstring & in_mRoutineMangledName,
                                                             const GALGAS_routineFormalArgumentListAST & in_mRoutineFormalArgumentList,
                                                             const GALGAS_instructionListAST & in_mRoutineInstructionList,
                                                             const GALGAS_location & in_mEndOfRoutineDeclaration,
                                                             const GALGAS_lstring & in_mReturnTypeName
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRoutineList * p = NULL ;
  macroMyNew (p, cCollectionElement_decoratedRoutineList (in_mReceiverTypeName,
                                                          in_mMode,
                                                          in_mRoutineKind,
                                                          in_mWarnIfUnused,
                                                          in_mExportedRoutine,
                                                          in_mRoutineAttributes,
                                                          in_mRoutineMangledName,
                                                          in_mRoutineFormalArgumentList,
                                                          in_mRoutineInstructionList,
                                                          in_mEndOfRoutineDeclaration,
                                                          in_mReturnTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRoutineList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_mode & inOperand1,
                                                       const GALGAS_routineKind & inOperand2,
                                                       const GALGAS_bool & inOperand3,
                                                       const GALGAS_bool & inOperand4,
                                                       const GALGAS_routineAttributes & inOperand5,
                                                       const GALGAS_lstring & inOperand6,
                                                       const GALGAS_routineFormalArgumentListAST & inOperand7,
                                                       const GALGAS_instructionListAST & inOperand8,
                                                       const GALGAS_location & inOperand9,
                                                       const GALGAS_lstring & inOperand10
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedRoutineList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRoutineList::setter_append (GALGAS_decoratedRoutineList_2D_element inElement,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedRoutineList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRoutineList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_mode inOperand1,
                                                        const GALGAS_routineKind inOperand2,
                                                        const GALGAS_bool inOperand3,
                                                        const GALGAS_bool inOperand4,
                                                        const GALGAS_routineAttributes inOperand5,
                                                        const GALGAS_lstring inOperand6,
                                                        const GALGAS_routineFormalArgumentListAST inOperand7,
                                                        const GALGAS_instructionListAST inOperand8,
                                                        const GALGAS_location inOperand9,
                                                        const GALGAS_lstring inOperand10,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_decoratedRoutineList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRoutineList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_mode & outOperand1,
                                                        GALGAS_routineKind & outOperand2,
                                                        GALGAS_bool & outOperand3,
                                                        GALGAS_bool & outOperand4,
                                                        GALGAS_routineAttributes & outOperand5,
                                                        GALGAS_lstring & outOperand6,
                                                        GALGAS_routineFormalArgumentListAST & outOperand7,
                                                        GALGAS_instructionListAST & outOperand8,
                                                        GALGAS_location & outOperand9,
                                                        GALGAS_lstring & outOperand10,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      outOperand9.drop () ;
      outOperand10.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
      outOperand0 = p->mObject.mProperty_mReceiverTypeName ;
      outOperand1 = p->mObject.mProperty_mMode ;
      outOperand2 = p->mObject.mProperty_mRoutineKind ;
      outOperand3 = p->mObject.mProperty_mWarnIfUnused ;
      outOperand4 = p->mObject.mProperty_mExportedRoutine ;
      outOperand5 = p->mObject.mProperty_mRoutineAttributes ;
      outOperand6 = p->mObject.mProperty_mRoutineMangledName ;
      outOperand7 = p->mObject.mProperty_mRoutineFormalArgumentList ;
      outOperand8 = p->mObject.mProperty_mRoutineInstructionList ;
      outOperand9 = p->mObject.mProperty_mEndOfRoutineDeclaration ;
      outOperand10 = p->mObject.mProperty_mReturnTypeName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRoutineList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_mode & outOperand1,
                                                   GALGAS_routineKind & outOperand2,
                                                   GALGAS_bool & outOperand3,
                                                   GALGAS_bool & outOperand4,
                                                   GALGAS_routineAttributes & outOperand5,
                                                   GALGAS_lstring & outOperand6,
                                                   GALGAS_routineFormalArgumentListAST & outOperand7,
                                                   GALGAS_instructionListAST & outOperand8,
                                                   GALGAS_location & outOperand9,
                                                   GALGAS_lstring & outOperand10,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    outOperand0 = p->mObject.mProperty_mReceiverTypeName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mRoutineKind ;
    outOperand3 = p->mObject.mProperty_mWarnIfUnused ;
    outOperand4 = p->mObject.mProperty_mExportedRoutine ;
    outOperand5 = p->mObject.mProperty_mRoutineAttributes ;
    outOperand6 = p->mObject.mProperty_mRoutineMangledName ;
    outOperand7 = p->mObject.mProperty_mRoutineFormalArgumentList ;
    outOperand8 = p->mObject.mProperty_mRoutineInstructionList ;
    outOperand9 = p->mObject.mProperty_mEndOfRoutineDeclaration ;
    outOperand10 = p->mObject.mProperty_mReturnTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRoutineList::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_mode & outOperand1,
                                                  GALGAS_routineKind & outOperand2,
                                                  GALGAS_bool & outOperand3,
                                                  GALGAS_bool & outOperand4,
                                                  GALGAS_routineAttributes & outOperand5,
                                                  GALGAS_lstring & outOperand6,
                                                  GALGAS_routineFormalArgumentListAST & outOperand7,
                                                  GALGAS_instructionListAST & outOperand8,
                                                  GALGAS_location & outOperand9,
                                                  GALGAS_lstring & outOperand10,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    outOperand0 = p->mObject.mProperty_mReceiverTypeName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mRoutineKind ;
    outOperand3 = p->mObject.mProperty_mWarnIfUnused ;
    outOperand4 = p->mObject.mProperty_mExportedRoutine ;
    outOperand5 = p->mObject.mProperty_mRoutineAttributes ;
    outOperand6 = p->mObject.mProperty_mRoutineMangledName ;
    outOperand7 = p->mObject.mProperty_mRoutineFormalArgumentList ;
    outOperand8 = p->mObject.mProperty_mRoutineInstructionList ;
    outOperand9 = p->mObject.mProperty_mEndOfRoutineDeclaration ;
    outOperand10 = p->mObject.mProperty_mReturnTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRoutineList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_mode & outOperand1,
                                                GALGAS_routineKind & outOperand2,
                                                GALGAS_bool & outOperand3,
                                                GALGAS_bool & outOperand4,
                                                GALGAS_routineAttributes & outOperand5,
                                                GALGAS_lstring & outOperand6,
                                                GALGAS_routineFormalArgumentListAST & outOperand7,
                                                GALGAS_instructionListAST & outOperand8,
                                                GALGAS_location & outOperand9,
                                                GALGAS_lstring & outOperand10,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    outOperand0 = p->mObject.mProperty_mReceiverTypeName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mRoutineKind ;
    outOperand3 = p->mObject.mProperty_mWarnIfUnused ;
    outOperand4 = p->mObject.mProperty_mExportedRoutine ;
    outOperand5 = p->mObject.mProperty_mRoutineAttributes ;
    outOperand6 = p->mObject.mProperty_mRoutineMangledName ;
    outOperand7 = p->mObject.mProperty_mRoutineFormalArgumentList ;
    outOperand8 = p->mObject.mProperty_mRoutineInstructionList ;
    outOperand9 = p->mObject.mProperty_mEndOfRoutineDeclaration ;
    outOperand10 = p->mObject.mProperty_mReturnTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRoutineList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_mode & outOperand1,
                                               GALGAS_routineKind & outOperand2,
                                               GALGAS_bool & outOperand3,
                                               GALGAS_bool & outOperand4,
                                               GALGAS_routineAttributes & outOperand5,
                                               GALGAS_lstring & outOperand6,
                                               GALGAS_routineFormalArgumentListAST & outOperand7,
                                               GALGAS_instructionListAST & outOperand8,
                                               GALGAS_location & outOperand9,
                                               GALGAS_lstring & outOperand10,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    outOperand0 = p->mObject.mProperty_mReceiverTypeName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mRoutineKind ;
    outOperand3 = p->mObject.mProperty_mWarnIfUnused ;
    outOperand4 = p->mObject.mProperty_mExportedRoutine ;
    outOperand5 = p->mObject.mProperty_mRoutineAttributes ;
    outOperand6 = p->mObject.mProperty_mRoutineMangledName ;
    outOperand7 = p->mObject.mProperty_mRoutineFormalArgumentList ;
    outOperand8 = p->mObject.mProperty_mRoutineInstructionList ;
    outOperand9 = p->mObject.mProperty_mEndOfRoutineDeclaration ;
    outOperand10 = p->mObject.mProperty_mReturnTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList GALGAS_decoratedRoutineList::add_operation (const GALGAS_decoratedRoutineList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedRoutineList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList GALGAS_decoratedRoutineList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedRoutineList result = GALGAS_decoratedRoutineList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList GALGAS_decoratedRoutineList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedRoutineList result = GALGAS_decoratedRoutineList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList GALGAS_decoratedRoutineList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedRoutineList result = GALGAS_decoratedRoutineList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedRoutineList::plusAssign_operation (const GALGAS_decoratedRoutineList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedRoutineList::getter_mReceiverTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    result = p->mObject.mProperty_mReceiverTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode GALGAS_decoratedRoutineList::getter_mModeAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  GALGAS_mode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    result = p->mObject.mProperty_mMode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind GALGAS_decoratedRoutineList::getter_mRoutineKindAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  GALGAS_routineKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    result = p->mObject.mProperty_mRoutineKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedRoutineList::getter_mWarnIfUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    result = p->mObject.mProperty_mWarnIfUnused ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedRoutineList::getter_mExportedRoutineAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    result = p->mObject.mProperty_mExportedRoutine ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAttributes GALGAS_decoratedRoutineList::getter_mRoutineAttributesAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  GALGAS_routineAttributes result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    result = p->mObject.mProperty_mRoutineAttributes ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedRoutineList::getter_mRoutineMangledNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    result = p->mObject.mProperty_mRoutineMangledName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST GALGAS_decoratedRoutineList::getter_mRoutineFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    result = p->mObject.mProperty_mRoutineFormalArgumentList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_decoratedRoutineList::getter_mRoutineInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    result = p->mObject.mProperty_mRoutineInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_decoratedRoutineList::getter_mEndOfRoutineDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    result = p->mObject.mProperty_mEndOfRoutineDeclaration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedRoutineList::getter_mReturnTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRoutineList * p = (cCollectionElement_decoratedRoutineList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
    result = p->mObject.mProperty_mReturnTypeName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_decoratedRoutineList::cEnumerator_decoratedRoutineList (const GALGAS_decoratedRoutineList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList_2D_element cEnumerator_decoratedRoutineList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRoutineList * p = (const cCollectionElement_decoratedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_decoratedRoutineList::current_mReceiverTypeName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRoutineList * p = (const cCollectionElement_decoratedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
  return p->mObject.mProperty_mReceiverTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode cEnumerator_decoratedRoutineList::current_mMode (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRoutineList * p = (const cCollectionElement_decoratedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
  return p->mObject.mProperty_mMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineKind cEnumerator_decoratedRoutineList::current_mRoutineKind (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRoutineList * p = (const cCollectionElement_decoratedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
  return p->mObject.mProperty_mRoutineKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_decoratedRoutineList::current_mWarnIfUnused (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRoutineList * p = (const cCollectionElement_decoratedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
  return p->mObject.mProperty_mWarnIfUnused ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_decoratedRoutineList::current_mExportedRoutine (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRoutineList * p = (const cCollectionElement_decoratedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
  return p->mObject.mProperty_mExportedRoutine ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAttributes cEnumerator_decoratedRoutineList::current_mRoutineAttributes (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRoutineList * p = (const cCollectionElement_decoratedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
  return p->mObject.mProperty_mRoutineAttributes ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_decoratedRoutineList::current_mRoutineMangledName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRoutineList * p = (const cCollectionElement_decoratedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
  return p->mObject.mProperty_mRoutineMangledName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineFormalArgumentListAST cEnumerator_decoratedRoutineList::current_mRoutineFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRoutineList * p = (const cCollectionElement_decoratedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
  return p->mObject.mProperty_mRoutineFormalArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cEnumerator_decoratedRoutineList::current_mRoutineInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRoutineList * p = (const cCollectionElement_decoratedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
  return p->mObject.mProperty_mRoutineInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_decoratedRoutineList::current_mEndOfRoutineDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRoutineList * p = (const cCollectionElement_decoratedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
  return p->mObject.mProperty_mEndOfRoutineDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_decoratedRoutineList::current_mReturnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRoutineList * p = (const cCollectionElement_decoratedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRoutineList) ;
  return p->mObject.mProperty_mReturnTypeName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @decoratedRoutineList type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedRoutineList ("decoratedRoutineList",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedRoutineList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRoutineList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedRoutineList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedRoutineList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedRoutineList GALGAS_decoratedRoutineList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRoutineList result ;
  const GALGAS_decoratedRoutineList * p = (const GALGAS_decoratedRoutineList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedRoutineList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRoutineList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes::GALGAS_routineAttributes (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes::GALGAS_routineAttributes (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes GALGAS_routineAttributes::constructor_none (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAttributes (0) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes GALGAS_routineAttributes::constructor_all (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAttributes ((uint64_t) 0x3F) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes GALGAS_routineAttributes::constructor_mutating (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAttributes (((uint64_t) 1) << 0) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes GALGAS_routineAttributes::constructor_directPropertyAccess (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAttributes (((uint64_t) 1) << 1) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes GALGAS_routineAttributes::constructor_guard (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAttributes (((uint64_t) 1) << 2) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes GALGAS_routineAttributes::constructor_boot (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAttributes (((uint64_t) 1) << 3) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes GALGAS_routineAttributes::constructor_controlRegisterReadable (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAttributes (((uint64_t) 1) << 4) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes GALGAS_routineAttributes::constructor_panicAllowed (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAttributes (((uint64_t) 1) << 5) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineAttributes::objectCompare (const GALGAS_routineAttributes & inOperand) const {
   typeComparisonResult result = kOperandNotValid ;
   if (mIsValid && inOperand.mIsValid) {
     result = kOperandEqual ;
     if (mFlags < inOperand.mFlags) {
       result = kFirstOperandLowerThanSecond ;
     }else if (mFlags > inOperand.mFlags) {
       result = kFirstOperandGreaterThanSecond ;
     }
   }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineAttributes::isValid (void) const {
  return mIsValid ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineAttributes::drop (void) {
  mIsValid = false ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes GALGAS_routineAttributes::operator_or (const GALGAS_routineAttributes & inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_routineAttributes (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes GALGAS_routineAttributes::operator_and (const GALGAS_routineAttributes & inOperand
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_routineAttributes (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes GALGAS_routineAttributes::operator_xor (const GALGAS_routineAttributes & inOperand
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_routineAttributes (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes GALGAS_routineAttributes::substract_operation (const GALGAS_routineAttributes & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_routineAttributes (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineAttributes GALGAS_routineAttributes::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineAttributes result ;
  if (mIsValid) {
    result = GALGAS_routineAttributes (((uint64_t) 0x3F) ^ mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineAttributes::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "<boolset @routineAttributes:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    if ((mFlags & ((uint64_t) 1) << 0) != 0) {
      ioString << " mutating" ;
    }
    if ((mFlags & ((uint64_t) 1) << 1) != 0) {
      ioString << " directPropertyAccess" ;
    }
    if ((mFlags & ((uint64_t) 1) << 2) != 0) {
      ioString << " guard" ;
    }
    if ((mFlags & ((uint64_t) 1) << 3) != 0) {
      ioString << " boot" ;
    }
    if ((mFlags & ((uint64_t) 1) << 4) != 0) {
      ioString << " controlRegisterReadable" ;
    }
    if ((mFlags & ((uint64_t) 1) << 5) != 0) {
      ioString << " panicAllowed" ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineAttributes::getter_none (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineAttributes::getter_all (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == (uint64_t) 0x3F) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineAttributes::getter_mutating (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 0) != 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineAttributes::getter_directPropertyAccess (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 1) != 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineAttributes::getter_guard (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 2) != 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineAttributes::getter_boot (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 3) != 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineAttributes::getter_controlRegisterReadable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 4) != 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineAttributes::getter_panicAllowed (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 5) != 0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @routineAttributes type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineAttributes ("routineAttributes",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineAttributes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineAttributes ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineAttributes::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineAttributes (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineAttributes GALGAS_routineAttributes::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineAttributes result ;
  const GALGAS_routineAttributes * p = (const GALGAS_routineAttributes *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineAttributes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineAttributes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension method '@decoratedRoutineList routineSemanticAnalysis'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_routineSemanticAnalysis (const GALGAS_decoratedRoutineList inObject,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_decoratedRoutineList temp_0 = inObject ;
  cEnumerator_decoratedRoutineList enumerator_1194 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1194.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_1194.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("routine-analysis.galgas", 27)) ;
    enumerator_1194.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Extension Getter '@mode string'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_string (const GALGAS_mode & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_mode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_mode::kNotBuilt:
    break ;
  case GALGAS_mode::kEnum_userMode:
    {
      result_result = GALGAS_string ("user") ;
    }
    break ;
  case GALGAS_mode::kEnum_sectionMode:
    {
      result_result = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_mode::kEnum_serviceMode:
    {
      result_result = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_mode::kEnum_primitiveMode:
    {
      result_result = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_mode::kEnum_guardMode:
    {
      result_result = GALGAS_string ("guard") ;
    }
    break ;
  case GALGAS_mode::kEnum_panicMode:
    {
      result_result = GALGAS_string ("panic") ;
    }
    break ;
  case GALGAS_mode::kEnum_bootMode:
    {
      result_result = GALGAS_string ("boot") ;
    }
    break ;
  case GALGAS_mode::kEnum_startupMode:
    {
      result_result = GALGAS_string ("startup") ;
    }
    break ;
  case GALGAS_mode::kEnum_anyMode:
    {
      result_result = GALGAS_string ("any") ;
    }
    break ;
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Extension Getter '@mode controlRegisterAccess'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_controlRegisterAccess (const GALGAS_mode & inObject,
                                                   const GALGAS_bool & constinArgument_inIsAccessibleInUserMode,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_mode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_mode::kNotBuilt:
    break ;
  case GALGAS_mode::kEnum_userMode:
  case GALGAS_mode::kEnum_anyMode:
    {
      result_result = constinArgument_inIsAccessibleInUserMode ;
    }
    break ;
  case GALGAS_mode::kEnum_sectionMode:
  case GALGAS_mode::kEnum_serviceMode:
  case GALGAS_mode::kEnum_primitiveMode:
  case GALGAS_mode::kEnum_panicMode:
  case GALGAS_mode::kEnum_bootMode:
  case GALGAS_mode::kEnum_startupMode:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_mode::kEnum_guardMode:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Abstract extension getter '@abstractDeclarationAST locationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_abstractDeclarationAST_locationForErrorSignaling> gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_locationForErrorSignaling (const int32_t inClassIndex,
                                                     enterExtensionGetter_abstractDeclarationAST_locationForErrorSignaling inGetter) {
  gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_abstractDeclarationAST_locationForErrorSignaling (void) {
  gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_abstractDeclarationAST_locationForErrorSignaling (NULL,
                                                                             freeExtensionGetter_abstractDeclarationAST_locationForErrorSignaling) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location callExtensionGetter_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractDeclarationAST_locationForErrorSignaling f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling.count ()) {
      f = gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling.count ()) {
           f = gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractDeclarationAST_locationForErrorSignaling.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@declarationListAST' list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_declarationListAST : public cCollectionElement {
  public : GALGAS_declarationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_declarationListAST (const GALGAS_abstractDeclarationAST & in_mDeclaration
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_declarationListAST (const GALGAS_declarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GALGAS_abstractDeclarationAST & in_mDeclaration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GALGAS_declarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_declarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_declarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_declarationListAST (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_declarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_declarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_declarationListAST * operand = (cCollectionElement_declarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_declarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST::GALGAS_declarationListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST::GALGAS_declarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_declarationListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::constructor_listWithValue (const GALGAS_abstractDeclarationAST & inOperand0
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractDeclarationAST & in_mDeclaration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_declarationListAST (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::addAssign_operation (const GALGAS_abstractDeclarationAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_append (GALGAS_declarationListAST_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_insertAtIndex (const GALGAS_abstractDeclarationAST inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_removeAtIndex (GALGAS_abstractDeclarationAST & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
      outOperand0 = p->mObject.mProperty_mDeclaration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_popFirst (GALGAS_abstractDeclarationAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_popLast (GALGAS_abstractDeclarationAST & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::method_first (GALGAS_abstractDeclarationAST & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::method_last (GALGAS_abstractDeclarationAST & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::add_operation (const GALGAS_declarationListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_declarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::plusAssign_operation (const GALGAS_declarationListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST GALGAS_declarationListAST::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  GALGAS_abstractDeclarationAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_declarationListAST::cEnumerator_declarationListAST (const GALGAS_declarationListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST_2D_element cEnumerator_declarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST cEnumerator_declarationListAST::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject.mProperty_mDeclaration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @declarationListAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationListAST ("declarationListAST",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_declarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_declarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST result ;
  const GALGAS_declarationListAST * p = (const GALGAS_declarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@checkTargetListAST' list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_checkTargetListAST : public cCollectionElement {
  public : GALGAS_checkTargetListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_checkTargetListAST (const GALGAS_location & in_mTargetConstructLocation,
                                                  const GALGAS_lstringlist & in_mAcceptedTargetList
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_checkTargetListAST (const GALGAS_checkTargetListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_checkTargetListAST::cCollectionElement_checkTargetListAST (const GALGAS_location & in_mTargetConstructLocation,
                                                                              const GALGAS_lstringlist & in_mAcceptedTargetList
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetConstructLocation, in_mAcceptedTargetList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_checkTargetListAST::cCollectionElement_checkTargetListAST (const GALGAS_checkTargetListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetConstructLocation, inElement.mProperty_mAcceptedTargetList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_checkTargetListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_checkTargetListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_checkTargetListAST (mObject.mProperty_mTargetConstructLocation, mObject.mProperty_mAcceptedTargetList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_checkTargetListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetConstructLocation" ":" ;
  mObject.mProperty_mTargetConstructLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAcceptedTargetList" ":" ;
  mObject.mProperty_mAcceptedTargetList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_checkTargetListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_checkTargetListAST * operand = (cCollectionElement_checkTargetListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_checkTargetListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST::GALGAS_checkTargetListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST::GALGAS_checkTargetListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_checkTargetListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::constructor_listWithValue (const GALGAS_location & inOperand0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_location & in_mTargetConstructLocation,
                                                           const GALGAS_lstringlist & in_mAcceptedTargetList
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_checkTargetListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_checkTargetListAST (in_mTargetConstructLocation,
                                                        in_mAcceptedTargetList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::addAssign_operation (const GALGAS_location & inOperand0,
                                                     const GALGAS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::setter_append (GALGAS_checkTargetListAST_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_checkTargetListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                      const GALGAS_lstringlist inOperand1,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                      GALGAS_lstringlist & outOperand1,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
      outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
      outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::setter_popFirst (GALGAS_location & outOperand0,
                                                 GALGAS_lstringlist & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::setter_popLast (GALGAS_location & outOperand0,
                                                GALGAS_lstringlist & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::method_first (GALGAS_location & outOperand0,
                                              GALGAS_lstringlist & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::method_last (GALGAS_location & outOperand0,
                                             GALGAS_lstringlist & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::add_operation (const GALGAS_checkTargetListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_checkTargetListAST::plusAssign_operation (const GALGAS_checkTargetListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_checkTargetListAST::getter_mTargetConstructLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    result = p->mObject.mProperty_mTargetConstructLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_checkTargetListAST::getter_mAcceptedTargetListAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    result = p->mObject.mProperty_mAcceptedTargetList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_checkTargetListAST::cEnumerator_checkTargetListAST (const GALGAS_checkTargetListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST_2D_element cEnumerator_checkTargetListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_checkTargetListAST::current_mTargetConstructLocation (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject.mProperty_mTargetConstructLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_checkTargetListAST::current_mAcceptedTargetList (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject.mProperty_mAcceptedTargetList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @checkTargetListAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkTargetListAST ("checkTargetListAST",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_checkTargetListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkTargetListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_checkTargetListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkTargetListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_checkTargetListAST result ;
  const GALGAS_checkTargetListAST * p = (const GALGAS_checkTargetListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_checkTargetListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkTargetListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast::GALGAS_ast (void) :
mProperty_mDeclarationListAST (),
mProperty_mExtendStaticArrayDeclarationAST (),
mProperty_mStandaloneFunctionDeclarationListAST (),
mProperty_mRequiredProcListAST (),
mProperty_mExternProcListAST (),
mProperty_mISRDeclarationListAST (),
mProperty_mStandAloneSystemRoutineListAST (),
mProperty_mTargetListAST (),
mProperty_mTaskListAST (),
mProperty_mCheckTargetListAST (),
mProperty_mDriverDeclarationListAST (),
mProperty_mRequiredDriverListAST (),
mProperty_mTypeDeclarationIndex (),
mProperty_mControlRegisterUserAccesMapAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast::~ GALGAS_ast (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast::GALGAS_ast (const GALGAS_declarationListAST & inOperand0,
                        const GALGAS_extendStaticArrayDeclarationAST & inOperand1,
                        const GALGAS_functionDeclarationListAST & inOperand2,
                        const GALGAS_requiredProcedureDeclarationListAST & inOperand3,
                        const GALGAS_externProcedureDeclarationListAST & inOperand4,
                        const GALGAS_isrDeclarationListAST & inOperand5,
                        const GALGAS_systemRoutineDeclarationListAST & inOperand6,
                        const GALGAS_lstringlist & inOperand7,
                        const GALGAS_taskListAST & inOperand8,
                        const GALGAS_checkTargetListAST & inOperand9,
                        const GALGAS_driverDeclarationListAST & inOperand10,
                        const GALGAS_driverInstanciationListAST & inOperand11,
                        const GALGAS_uint & inOperand12,
                        const GALGAS_controlRegisterUserAccesMapAST & inOperand13) :
mProperty_mDeclarationListAST (inOperand0),
mProperty_mExtendStaticArrayDeclarationAST (inOperand1),
mProperty_mStandaloneFunctionDeclarationListAST (inOperand2),
mProperty_mRequiredProcListAST (inOperand3),
mProperty_mExternProcListAST (inOperand4),
mProperty_mISRDeclarationListAST (inOperand5),
mProperty_mStandAloneSystemRoutineListAST (inOperand6),
mProperty_mTargetListAST (inOperand7),
mProperty_mTaskListAST (inOperand8),
mProperty_mCheckTargetListAST (inOperand9),
mProperty_mDriverDeclarationListAST (inOperand10),
mProperty_mRequiredDriverListAST (inOperand11),
mProperty_mTypeDeclarationIndex (inOperand12),
mProperty_mControlRegisterUserAccesMapAST (inOperand13) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast GALGAS_ast::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ast (GALGAS_declarationListAST::constructor_emptyList (HERE),
                     GALGAS_extendStaticArrayDeclarationAST::constructor_emptyList (HERE),
                     GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_externProcedureDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_isrDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_lstringlist::constructor_emptyList (HERE),
                     GALGAS_taskListAST::constructor_emptyList (HERE),
                     GALGAS_checkTargetListAST::constructor_emptyList (HERE),
                     GALGAS_driverDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_driverInstanciationListAST::constructor_emptyList (HERE),
                     GALGAS_uint::constructor_default (HERE),
                     GALGAS_controlRegisterUserAccesMapAST::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast GALGAS_ast::constructor_new (const GALGAS_declarationListAST & inOperand0,
                                        const GALGAS_extendStaticArrayDeclarationAST & inOperand1,
                                        const GALGAS_functionDeclarationListAST & inOperand2,
                                        const GALGAS_requiredProcedureDeclarationListAST & inOperand3,
                                        const GALGAS_externProcedureDeclarationListAST & inOperand4,
                                        const GALGAS_isrDeclarationListAST & inOperand5,
                                        const GALGAS_systemRoutineDeclarationListAST & inOperand6,
                                        const GALGAS_lstringlist & inOperand7,
                                        const GALGAS_taskListAST & inOperand8,
                                        const GALGAS_checkTargetListAST & inOperand9,
                                        const GALGAS_driverDeclarationListAST & inOperand10,
                                        const GALGAS_driverInstanciationListAST & inOperand11,
                                        const GALGAS_uint & inOperand12,
                                        const GALGAS_controlRegisterUserAccesMapAST & inOperand13 
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    result = GALGAS_ast (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_ast::objectCompare (const GALGAS_ast & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDeclarationListAST.objectCompare (inOperand.mProperty_mDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtendStaticArrayDeclarationAST.objectCompare (inOperand.mProperty_mExtendStaticArrayDeclarationAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStandaloneFunctionDeclarationListAST.objectCompare (inOperand.mProperty_mStandaloneFunctionDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredProcListAST.objectCompare (inOperand.mProperty_mRequiredProcListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternProcListAST.objectCompare (inOperand.mProperty_mExternProcListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mISRDeclarationListAST.objectCompare (inOperand.mProperty_mISRDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStandAloneSystemRoutineListAST.objectCompare (inOperand.mProperty_mStandAloneSystemRoutineListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetListAST.objectCompare (inOperand.mProperty_mTargetListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskListAST.objectCompare (inOperand.mProperty_mTaskListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCheckTargetListAST.objectCompare (inOperand.mProperty_mCheckTargetListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverDeclarationListAST.objectCompare (inOperand.mProperty_mDriverDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredDriverListAST.objectCompare (inOperand.mProperty_mRequiredDriverListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeDeclarationIndex.objectCompare (inOperand.mProperty_mTypeDeclarationIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterUserAccesMapAST.objectCompare (inOperand.mProperty_mControlRegisterUserAccesMapAST) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_ast::isValid (void) const {
  return mProperty_mDeclarationListAST.isValid () && mProperty_mExtendStaticArrayDeclarationAST.isValid () && mProperty_mStandaloneFunctionDeclarationListAST.isValid () && mProperty_mRequiredProcListAST.isValid () && mProperty_mExternProcListAST.isValid () && mProperty_mISRDeclarationListAST.isValid () && mProperty_mStandAloneSystemRoutineListAST.isValid () && mProperty_mTargetListAST.isValid () && mProperty_mTaskListAST.isValid () && mProperty_mCheckTargetListAST.isValid () && mProperty_mDriverDeclarationListAST.isValid () && mProperty_mRequiredDriverListAST.isValid () && mProperty_mTypeDeclarationIndex.isValid () && mProperty_mControlRegisterUserAccesMapAST.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ast::drop (void) {
  mProperty_mDeclarationListAST.drop () ;
  mProperty_mExtendStaticArrayDeclarationAST.drop () ;
  mProperty_mStandaloneFunctionDeclarationListAST.drop () ;
  mProperty_mRequiredProcListAST.drop () ;
  mProperty_mExternProcListAST.drop () ;
  mProperty_mISRDeclarationListAST.drop () ;
  mProperty_mStandAloneSystemRoutineListAST.drop () ;
  mProperty_mTargetListAST.drop () ;
  mProperty_mTaskListAST.drop () ;
  mProperty_mCheckTargetListAST.drop () ;
  mProperty_mDriverDeclarationListAST.drop () ;
  mProperty_mRequiredDriverListAST.drop () ;
  mProperty_mTypeDeclarationIndex.drop () ;
  mProperty_mControlRegisterUserAccesMapAST.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ast::description (C_String & ioString,
                              const int32_t inIndentation) const {
  ioString << "<struct @ast:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExtendStaticArrayDeclarationAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStandaloneFunctionDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredProcListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternProcListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mISRDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStandAloneSystemRoutineListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCheckTargetListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDriverDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredDriverListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeDeclarationIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterUserAccesMapAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_ast::getter_mDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendStaticArrayDeclarationAST GALGAS_ast::getter_mExtendStaticArrayDeclarationAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExtendStaticArrayDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_functionDeclarationListAST GALGAS_ast::getter_mStandaloneFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStandaloneFunctionDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_requiredProcedureDeclarationListAST GALGAS_ast::getter_mRequiredProcListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRequiredProcListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureDeclarationListAST GALGAS_ast::getter_mExternProcListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternProcListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_isrDeclarationListAST GALGAS_ast::getter_mISRDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mISRDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_systemRoutineDeclarationListAST GALGAS_ast::getter_mStandAloneSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStandAloneSystemRoutineListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_ast::getter_mTargetListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskListAST GALGAS_ast::getter_mTaskListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkTargetListAST GALGAS_ast::getter_mCheckTargetListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCheckTargetListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationListAST GALGAS_ast::getter_mDriverDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationListAST GALGAS_ast::getter_mRequiredDriverListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRequiredDriverListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_ast::getter_mTypeDeclarationIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeDeclarationIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST GALGAS_ast::getter_mControlRegisterUserAccesMapAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterUserAccesMapAST ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                      @ast type                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ast ("ast",
                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ast::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ast ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ast::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ast (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ast GALGAS_ast::extractObject (const GALGAS_object & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GALGAS_ast result ;
  const GALGAS_ast * p = (const GALGAS_ast *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ast *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ast", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@routineTypedSignature' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_routineTypedSignature : public cCollectionElement {
  public : GALGAS_routineTypedSignature_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_routineTypedSignature (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                     const GALGAS_lstring & in_mSelector,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_routineTypedSignature (const GALGAS_routineTypedSignature_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_routineTypedSignature::cCollectionElement_routineTypedSignature (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                    const GALGAS_lstring & in_mSelector,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mTypeProxy) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_routineTypedSignature::cCollectionElement_routineTypedSignature (const GALGAS_routineTypedSignature_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mSelector, inElement.mProperty_mTypeProxy) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_routineTypedSignature::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_routineTypedSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineTypedSignature (mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mTypeProxy COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_routineTypedSignature::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentPassingMode" ":" ;
  mObject.mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeProxy" ":" ;
  mObject.mProperty_mTypeProxy.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_routineTypedSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineTypedSignature * operand = (cCollectionElement_routineTypedSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineTypedSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature::GALGAS_routineTypedSignature (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature::GALGAS_routineTypedSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineTypedSignature  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineTypedSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineTypedSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineTypedSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineTypedSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                              const GALGAS_lstring & in_mSelector,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_routineTypedSignature * p = NULL ;
  macroMyNew (p, cCollectionElement_routineTypedSignature (in_mFormalArgumentPassingMode,
                                                           in_mSelector,
                                                           in_mTypeProxy COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineTypedSignature::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineTypedSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineTypedSignature::setter_append (GALGAS_routineTypedSignature_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineTypedSignature (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineTypedSignature::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_unifiedTypeMap_2D_proxy inOperand2,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_routineTypedSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineTypedSignature::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
      outOperand1 = p->mObject.mProperty_mSelector ;
      outOperand2 = p->mObject.mProperty_mTypeProxy ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineTypedSignature::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineTypedSignature::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineTypedSignature::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineTypedSignature::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::add_operation (const GALGAS_routineTypedSignature & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineTypedSignature::plusAssign_operation (const GALGAS_routineTypedSignature inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode GALGAS_routineTypedSignature::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_routineTypedSignature::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineTypedSignature::getter_mTypeProxyAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mTypeProxy ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_routineTypedSignature::cEnumerator_routineTypedSignature (const GALGAS_routineTypedSignature & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature_2D_element cEnumerator_routineTypedSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procFormalArgumentPassingMode cEnumerator_routineTypedSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_routineTypedSignature::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mSelector ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_routineTypedSignature::current_mTypeProxy (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mTypeProxy ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @routineTypedSignature type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineTypedSignature ("routineTypedSignature",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineTypedSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineTypedSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineTypedSignature (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineTypedSignature result ;
  const GALGAS_routineTypedSignature * p = (const GALGAS_routineTypedSignature *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineTypedSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineTypedSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Extension Getter '@routineTypedSignature string'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_string (const GALGAS_routineTypedSignature & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("(") ;
  const GALGAS_routineTypedSignature temp_0 = inObject ;
  cEnumerator_routineTypedSignature enumerator_854 (temp_0, kENUMERATION_UP) ;
  while (enumerator_854.hasCurrentObject ()) {
    result_result.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_854.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 17)).add_operation (enumerator_854.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 17)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 17)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 17)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 17)) ;
    enumerator_854.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 19)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension Getter '@routineFormalArgumentListAST routineSignature'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring extensionGetter_routineSignature (const GALGAS_routineFormalArgumentListAST & inObject,
                                                 const GALGAS_location & constinArgument_inRoutineNameLocation,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_key_1991 = GALGAS_string ("(") ;
  const GALGAS_routineFormalArgumentListAST temp_0 = inObject ;
  cEnumerator_routineFormalArgumentListAST enumerator_2052 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2052.hasCurrentObject ()) {
    var_key_1991.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_2052.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 41)).add_operation (enumerator_2052.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 41)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 41)) ;
    enumerator_2052.gotoNextObject () ;
  }
  var_key_1991.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 43)) ;
  result_result = GALGAS_lstring::constructor_new (var_key_1991, constinArgument_inRoutineNameLocation  COMMA_SOURCE_FILE ("context-routines.galgas", 44)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@effectiveArgumentListAST' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_effectiveArgumentListAST : public cCollectionElement {
  public : GALGAS_effectiveArgumentListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_effectiveArgumentListAST (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                        const GALGAS_lstring & in_mSelector
                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_effectiveArgumentListAST (const GALGAS_effectiveArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_effectiveArgumentListAST::cCollectionElement_effectiveArgumentListAST (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                                                          const GALGAS_lstring & in_mSelector
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterKind, in_mSelector) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_effectiveArgumentListAST::cCollectionElement_effectiveArgumentListAST (const GALGAS_effectiveArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEffectiveParameterKind, inElement.mProperty_mSelector) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_effectiveArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_effectiveArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_effectiveArgumentListAST (mObject.mProperty_mEffectiveParameterKind, mObject.mProperty_mSelector COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_effectiveArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEffectiveParameterKind" ":" ;
  mObject.mProperty_mEffectiveParameterKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_effectiveArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_effectiveArgumentListAST * operand = (cCollectionElement_effectiveArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_effectiveArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST::GALGAS_effectiveArgumentListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST::GALGAS_effectiveArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_effectiveArgumentListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::constructor_listWithValue (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_effectiveArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_effectiveArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_effectiveArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                                 const GALGAS_lstring & in_mSelector
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_effectiveArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_effectiveArgumentListAST (in_mEffectiveParameterKind,
                                                              in_mSelector COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_effectiveArgumentListAST::addAssign_operation (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                           const GALGAS_lstring & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_effectiveArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_effectiveArgumentListAST::setter_append (GALGAS_effectiveArgumentListAST_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_effectiveArgumentListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_effectiveArgumentListAST::setter_insertAtIndex (const GALGAS_effectiveArgumentPassingModeAST inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_effectiveArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_effectiveArgumentListAST::setter_removeAtIndex (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
      outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
      outOperand1 = p->mObject.mProperty_mSelector ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_effectiveArgumentListAST::setter_popFirst (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mProperty_mSelector ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_effectiveArgumentListAST::setter_popLast (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mProperty_mSelector ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_effectiveArgumentListAST::method_first (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mProperty_mSelector ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_effectiveArgumentListAST::method_last (GALGAS_effectiveArgumentPassingModeAST & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mProperty_mSelector ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::add_operation (const GALGAS_effectiveArgumentListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result = GALGAS_effectiveArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result = GALGAS_effectiveArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result = GALGAS_effectiveArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_effectiveArgumentListAST::plusAssign_operation (const GALGAS_effectiveArgumentListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentPassingModeAST GALGAS_effectiveArgumentListAST::getter_mEffectiveParameterKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  GALGAS_effectiveArgumentPassingModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    result = p->mObject.mProperty_mEffectiveParameterKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_effectiveArgumentListAST::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_effectiveArgumentListAST::cEnumerator_effectiveArgumentListAST (const GALGAS_effectiveArgumentListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST_2D_element cEnumerator_effectiveArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentPassingModeAST cEnumerator_effectiveArgumentListAST::current_mEffectiveParameterKind (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject.mProperty_mEffectiveParameterKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_effectiveArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @effectiveArgumentListAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_effectiveArgumentListAST ("effectiveArgumentListAST",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_effectiveArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_effectiveArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST GALGAS_effectiveArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST result ;
  const GALGAS_effectiveArgumentListAST * p = (const GALGAS_effectiveArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_effectiveArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Extension Getter '@routineKind executionMode'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mode extensionGetter_executionMode (const GALGAS_routineKind & inObject,
                                           C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mode result_result ; // Returned variable
  const GALGAS_routineKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      const cEnumAssociatedValues_routineKind_function * extractPtr_3077 = (const cEnumAssociatedValues_routineKind_function *) (temp_0.unsafePointer ()) ;
      const GALGAS_mode extractedValue_mode = extractPtr_3077->mAssociatedValue0 ;
      result_result = extractedValue_mode ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      result_result = GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("context-routines.galgas", 73)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      result_result = GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("context-routines.galgas", 74)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      result_result = GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("context-routines.galgas", 75)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_guardMapForContext::cMapElement_guardMapForContext (const GALGAS_lstring & inKey,
                                                                const GALGAS_bool & in_mIsPublic,
                                                                const GALGAS_routineTypedSignature & in_mSignature
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mSignature (in_mSignature) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_guardMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_guardMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_guardMapForContext (mProperty_lkey, mProperty_mIsPublic, mProperty_mSignature COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_guardMapForContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mProperty_mSignature.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_guardMapForContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_guardMapForContext * operand = (cMapElement_guardMapForContext *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPublic.objectCompare (operand->mProperty_mIsPublic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignature.objectCompare (operand->mProperty_mSignature) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext::GALGAS_guardMapForContext (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext::GALGAS_guardMapForContext (const GALGAS_guardMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext & GALGAS_guardMapForContext::operator = (const GALGAS_guardMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext GALGAS_guardMapForContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext GALGAS_guardMapForContext::constructor_mapWithMapToOverride (const GALGAS_guardMapForContext & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext GALGAS_guardMapForContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_guardMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapForContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_bool & inArgument0,
                                                     const GALGAS_routineTypedSignature & inArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_guardMapForContext (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@guardMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapForContext::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_bool inArgument0,
                                                  GALGAS_routineTypedSignature inArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_guardMapForContext (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' guard is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_guardMapForContext_searchKey = "there is no '%K' guard" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapForContext::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_bool & outArgument0,
                                                  GALGAS_routineTypedSignature & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_guardMapForContext_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mSignature ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_guardMapForContext::getter_mIsPublicForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mProperty_mIsPublic ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature GALGAS_guardMapForContext::getter_mSignatureForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GALGAS_routineTypedSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapForContext::setter_setMIsPublicForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mIsPublic = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_guardMapForContext::setter_setMSignatureForKey (GALGAS_routineTypedSignature inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mSignature = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_guardMapForContext * GALGAS_guardMapForContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * result = (cMapElement_guardMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_guardMapForContext) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_guardMapForContext::cEnumerator_guardMapForContext (const GALGAS_guardMapForContext & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext_2D_element cEnumerator_guardMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return GALGAS_guardMapForContext_2D_element (p->mProperty_lkey, p->mProperty_mIsPublic, p->mProperty_mSignature) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_guardMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_guardMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mIsPublic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineTypedSignature cEnumerator_guardMapForContext::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mSignature ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @guardMapForContext type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapForContext ("guardMapForContext",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_guardMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_guardMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapForContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext GALGAS_guardMapForContext::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  const GALGAS_guardMapForContext * p = (const GALGAS_guardMapForContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_routineArgumentSignatureMapForContext::cMapElement_routineArgumentSignatureMapForContext (const GALGAS_lstring & inKey,
                                                                                                      const GALGAS_lstring & in_mRoutineLLVMName,
                                                                                                      const GALGAS_routineDescriptor & in_mDescriptor
                                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRoutineLLVMName (in_mRoutineLLVMName),
mProperty_mDescriptor (in_mDescriptor) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_routineArgumentSignatureMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineLLVMName.isValid () && mProperty_mDescriptor.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_routineArgumentSignatureMapForContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineArgumentSignatureMapForContext (mProperty_lkey, mProperty_mRoutineLLVMName, mProperty_mDescriptor COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_routineArgumentSignatureMapForContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineLLVMName" ":" ;
  mProperty_mRoutineLLVMName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDescriptor" ":" ;
  mProperty_mDescriptor.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_routineArgumentSignatureMapForContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineArgumentSignatureMapForContext * operand = (cMapElement_routineArgumentSignatureMapForContext *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineLLVMName.objectCompare (operand->mProperty_mRoutineLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDescriptor.objectCompare (operand->mProperty_mDescriptor) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext::GALGAS_routineArgumentSignatureMapForContext (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext::GALGAS_routineArgumentSignatureMapForContext (const GALGAS_routineArgumentSignatureMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext & GALGAS_routineArgumentSignatureMapForContext::operator = (const GALGAS_routineArgumentSignatureMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext GALGAS_routineArgumentSignatureMapForContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineArgumentSignatureMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext GALGAS_routineArgumentSignatureMapForContext::constructor_mapWithMapToOverride (const GALGAS_routineArgumentSignatureMapForContext & inMapToOverride
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_routineArgumentSignatureMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext GALGAS_routineArgumentSignatureMapForContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_routineArgumentSignatureMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineArgumentSignatureMapForContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                                        const GALGAS_lstring & inArgument0,
                                                                        const GALGAS_routineDescriptor & inArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_routineArgumentSignatureMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_routineArgumentSignatureMapForContext (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineArgumentSignatureMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineArgumentSignatureMapForContext::setter_insertKey (GALGAS_lstring inKey,
                                                                     GALGAS_lstring inArgument0,
                                                                     GALGAS_routineDescriptor inArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_routineArgumentSignatureMapForContext * p = NULL ;
  macroMyNew (p, cMapElement_routineArgumentSignatureMapForContext (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine signature is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_routineArgumentSignatureMapForContext_searchKey = "there is no '%K' routine signature" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineArgumentSignatureMapForContext::method_searchKey (GALGAS_lstring inKey,
                                                                     GALGAS_lstring & outArgument0,
                                                                     GALGAS_routineDescriptor & outArgument1,
                                                                     GALGAS_location & outKeyLocation,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) performSearch (inKey,
                                                                                                                                           inCompiler,
                                                                                                                                           kSearchErrorMessage_routineArgumentSignatureMapForContext_searchKey
                                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outKeyLocation.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
    outArgument0 = p->mProperty_mRoutineLLVMName ;
    outArgument1 = p->mProperty_mDescriptor ;
    outKeyLocation = p->mProperty_lkey.mProperty_location ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_routineArgumentSignatureMapForContext::getter_mRoutineLLVMNameForKey (const GALGAS_string & inKey,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
    result = p->mProperty_mRoutineLLVMName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineDescriptor GALGAS_routineArgumentSignatureMapForContext::getter_mDescriptorForKey (const GALGAS_string & inKey,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) attributes ;
  GALGAS_routineDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
    result = p->mProperty_mDescriptor ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineArgumentSignatureMapForContext::setter_setMRoutineLLVMNameForKey (GALGAS_lstring inAttributeValue,
                                                                                     GALGAS_string inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineArgumentSignatureMapForContext * p = (cMapElement_routineArgumentSignatureMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
    p->mProperty_mRoutineLLVMName = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_routineArgumentSignatureMapForContext::setter_setMDescriptorForKey (GALGAS_routineDescriptor inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineArgumentSignatureMapForContext * p = (cMapElement_routineArgumentSignatureMapForContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
    p->mProperty_mDescriptor = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_routineArgumentSignatureMapForContext * GALGAS_routineArgumentSignatureMapForContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                     const GALGAS_string & inKey
                                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_routineArgumentSignatureMapForContext * result = (cMapElement_routineArgumentSignatureMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineArgumentSignatureMapForContext) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_routineArgumentSignatureMapForContext::cEnumerator_routineArgumentSignatureMapForContext (const GALGAS_routineArgumentSignatureMapForContext & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext_2D_element cEnumerator_routineArgumentSignatureMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
  return GALGAS_routineArgumentSignatureMapForContext_2D_element (p->mProperty_lkey, p->mProperty_mRoutineLLVMName, p->mProperty_mDescriptor) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_routineArgumentSignatureMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_routineArgumentSignatureMapForContext::current_mRoutineLLVMName (LOCATION_ARGS) const {
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
  return p->mProperty_mRoutineLLVMName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineDescriptor cEnumerator_routineArgumentSignatureMapForContext::current_mDescriptor (LOCATION_ARGS) const {
  const cMapElement_routineArgumentSignatureMapForContext * p = (const cMapElement_routineArgumentSignatureMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineArgumentSignatureMapForContext) ;
  return p->mProperty_mDescriptor ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @routineArgumentSignatureMapForContext type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineArgumentSignatureMapForContext ("routineArgumentSignatureMapForContext",
                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_routineArgumentSignatureMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineArgumentSignatureMapForContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_routineArgumentSignatureMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineArgumentSignatureMapForContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineArgumentSignatureMapForContext GALGAS_routineArgumentSignatureMapForContext::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineArgumentSignatureMapForContext result ;
  const GALGAS_routineArgumentSignatureMapForContext * p = (const GALGAS_routineArgumentSignatureMapForContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineArgumentSignatureMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineArgumentSignatureMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_flatValuedObjectMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObjectState.isValid () && mProperty_mObjectShouldBeValuedAtEndOfScope.isValid () && mProperty_mValuedObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_flatValuedObjectMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_flatValuedObjectMap (mProperty_lkey, mProperty_mObjectState, mProperty_mObjectShouldBeValuedAtEndOfScope, mProperty_mValuedObject COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_flatValuedObjectMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObjectState" ":" ;
  mProperty_mObjectState.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObjectShouldBeValuedAtEndOfScope" ":" ;
  mProperty_mObjectShouldBeValuedAtEndOfScope.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValuedObject" ":" ;
  mProperty_mValuedObject.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_flatValuedObjectMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_flatValuedObjectMap * operand = (cMapElement_flatValuedObjectMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mObjectState.objectCompare (operand->mProperty_mObjectState) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObjectShouldBeValuedAtEndOfScope.objectCompare (operand->mProperty_mObjectShouldBeValuedAtEndOfScope) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValuedObject.objectCompare (operand->mProperty_mValuedObject) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap::GALGAS_flatValuedObjectMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap::GALGAS_flatValuedObjectMap (const GALGAS_flatValuedObjectMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap & GALGAS_flatValuedObjectMap::operator = (const GALGAS_flatValuedObjectMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::constructor_mapWithMapToOverride (const GALGAS_flatValuedObjectMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_flatValuedObjectMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_flatValuedObjectMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_valuedObjectState & inArgument0,
                                                      const GALGAS_bool & inArgument1,
                                                      const GALGAS_valuedObject & inArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * p = NULL ;
  macroMyNew (p, cMapElement_flatValuedObjectMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@flatValuedObjectMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_flatValuedObjectMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_valuedObjectState inArgument0,
                                                   GALGAS_bool inArgument1,
                                                   GALGAS_valuedObject inArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * p = NULL ;
  macroMyNew (p, cMapElement_flatValuedObjectMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entity is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_flatValuedObjectMap_searchKey = "there is no '%K' entity" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_flatValuedObjectMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_valuedObjectState & outArgument0,
                                                   GALGAS_bool & outArgument1,
                                                   GALGAS_valuedObject & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_flatValuedObjectMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_flatValuedObjectMap::setter_removeKey (GALGAS_lstring inKey,
                                                   GALGAS_valuedObjectState & outArgument0,
                                                   GALGAS_bool & outArgument1,
                                                   GALGAS_valuedObject & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' entity" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState GALGAS_flatValuedObjectMap::getter_mObjectStateForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) attributes ;
  GALGAS_valuedObjectState result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    result = p->mProperty_mObjectState ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_flatValuedObjectMap::getter_mObjectShouldBeValuedAtEndOfScopeForKey (const GALGAS_string & inKey,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    result = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_flatValuedObjectMap::getter_mValuedObjectForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) attributes ;
  GALGAS_valuedObject result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    result = p->mProperty_mValuedObject ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_flatValuedObjectMap::setter_setMObjectStateForKey (GALGAS_valuedObjectState inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    p->mProperty_mObjectState = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_flatValuedObjectMap::setter_setMObjectShouldBeValuedAtEndOfScopeForKey (GALGAS_bool inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    p->mProperty_mObjectShouldBeValuedAtEndOfScope = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_flatValuedObjectMap::setter_setMValuedObjectForKey (GALGAS_valuedObject inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    p->mProperty_mValuedObject = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_flatValuedObjectMap * GALGAS_flatValuedObjectMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * result = (cMapElement_flatValuedObjectMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_flatValuedObjectMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_flatValuedObjectMap::cEnumerator_flatValuedObjectMap (const GALGAS_flatValuedObjectMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap_2D_element cEnumerator_flatValuedObjectMap::current (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return GALGAS_flatValuedObjectMap_2D_element (p->mProperty_lkey, p->mProperty_mObjectState, p->mProperty_mObjectShouldBeValuedAtEndOfScope, p->mProperty_mValuedObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_flatValuedObjectMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState cEnumerator_flatValuedObjectMap::current_mObjectState (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mObjectState ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_flatValuedObjectMap::current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject cEnumerator_flatValuedObjectMap::current_mValuedObject (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mValuedObject ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @flatValuedObjectMap type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_flatValuedObjectMap ("flatValuedObjectMap",
                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_flatValuedObjectMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_flatValuedObjectMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_flatValuedObjectMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_flatValuedObjectMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap result ;
  const GALGAS_flatValuedObjectMap * p = (const GALGAS_flatValuedObjectMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_flatValuedObjectMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("flatValuedObjectMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Class for element of '@scopeStack' list                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_scopeStack : public cCollectionElement {
  public : GALGAS_scopeStack_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_scopeStack (const GALGAS_scopeKind & in_mScopeKind,
                                          const GALGAS_bool & in_mFirstBranch,
                                          const GALGAS_referenceStateMap & in_mInitialStateMap,
                                          const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                          const GALGAS_lstringlist & in_mObjectList
                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_scopeStack (const GALGAS_scopeStack_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_scopeStack::cCollectionElement_scopeStack (const GALGAS_scopeKind & in_mScopeKind,
                                                              const GALGAS_bool & in_mFirstBranch,
                                                              const GALGAS_referenceStateMap & in_mInitialStateMap,
                                                              const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                                              const GALGAS_lstringlist & in_mObjectList
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mScopeKind, in_mFirstBranch, in_mInitialStateMap, in_mReferenceStateMap, in_mObjectList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_scopeStack::cCollectionElement_scopeStack (const GALGAS_scopeStack_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mScopeKind, inElement.mProperty_mFirstBranch, inElement.mProperty_mInitialStateMap, inElement.mProperty_mReferenceStateMap, inElement.mProperty_mObjectList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_scopeStack::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_scopeStack::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_scopeStack (mObject.mProperty_mScopeKind, mObject.mProperty_mFirstBranch, mObject.mProperty_mInitialStateMap, mObject.mProperty_mReferenceStateMap, mObject.mProperty_mObjectList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_scopeStack::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mScopeKind" ":" ;
  mObject.mProperty_mScopeKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFirstBranch" ":" ;
  mObject.mProperty_mFirstBranch.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialStateMap" ":" ;
  mObject.mProperty_mInitialStateMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReferenceStateMap" ":" ;
  mObject.mProperty_mReferenceStateMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObjectList" ":" ;
  mObject.mProperty_mObjectList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_scopeStack::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_scopeStack * operand = (cCollectionElement_scopeStack *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_scopeStack) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack::GALGAS_scopeStack (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack::GALGAS_scopeStack (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack GALGAS_scopeStack::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_scopeStack  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack GALGAS_scopeStack::constructor_listWithValue (const GALGAS_scopeKind & inOperand0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scopeStack::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_scopeKind & in_mScopeKind,
                                                   const GALGAS_bool & in_mFirstBranch,
                                                   const GALGAS_referenceStateMap & in_mInitialStateMap,
                                                   const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                                   const GALGAS_lstringlist & in_mObjectList
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = NULL ;
  macroMyNew (p, cCollectionElement_scopeStack (in_mScopeKind,
                                                in_mFirstBranch,
                                                in_mInitialStateMap,
                                                in_mReferenceStateMap,
                                                in_mObjectList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scopeStack::addAssign_operation (const GALGAS_scopeKind & inOperand0,
                                             const GALGAS_bool & inOperand1,
                                             const GALGAS_referenceStateMap & inOperand2,
                                             const GALGAS_referenceStateMap & inOperand3,
                                             const GALGAS_lstringlist & inOperand4
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_scopeStack (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scopeStack::setter_append (GALGAS_scopeStack_2D_element inElement,
                                       C_Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_scopeStack (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scopeStack::setter_insertAtIndex (const GALGAS_scopeKind inOperand0,
                                              const GALGAS_bool inOperand1,
                                              const GALGAS_referenceStateMap inOperand2,
                                              const GALGAS_referenceStateMap inOperand3,
                                              const GALGAS_lstringlist inOperand4,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_scopeStack (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scopeStack::setter_removeAtIndex (GALGAS_scopeKind & outOperand0,
                                              GALGAS_bool & outOperand1,
                                              GALGAS_referenceStateMap & outOperand2,
                                              GALGAS_referenceStateMap & outOperand3,
                                              GALGAS_lstringlist & outOperand4,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
    if (NULL == p) {
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
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scopeStack::setter_popFirst (GALGAS_scopeKind & outOperand0,
                                         GALGAS_bool & outOperand1,
                                         GALGAS_referenceStateMap & outOperand2,
                                         GALGAS_referenceStateMap & outOperand3,
                                         GALGAS_lstringlist & outOperand4,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scopeStack::setter_popLast (GALGAS_scopeKind & outOperand0,
                                        GALGAS_bool & outOperand1,
                                        GALGAS_referenceStateMap & outOperand2,
                                        GALGAS_referenceStateMap & outOperand3,
                                        GALGAS_lstringlist & outOperand4,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scopeStack::method_first (GALGAS_scopeKind & outOperand0,
                                      GALGAS_bool & outOperand1,
                                      GALGAS_referenceStateMap & outOperand2,
                                      GALGAS_referenceStateMap & outOperand3,
                                      GALGAS_lstringlist & outOperand4,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scopeStack::method_last (GALGAS_scopeKind & outOperand0,
                                     GALGAS_bool & outOperand1,
                                     GALGAS_referenceStateMap & outOperand2,
                                     GALGAS_referenceStateMap & outOperand3,
                                     GALGAS_lstringlist & outOperand4,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack GALGAS_scopeStack::add_operation (const GALGAS_scopeStack & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_scopeStack result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack GALGAS_scopeStack::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack GALGAS_scopeStack::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack GALGAS_scopeStack::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scopeStack::plusAssign_operation (const GALGAS_scopeStack inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeKind GALGAS_scopeStack::getter_mScopeKindAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_scopeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mScopeKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_scopeStack::getter_mFirstBranchAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mFirstBranch ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap GALGAS_scopeStack::getter_mInitialStateMapAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_referenceStateMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mInitialStateMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap GALGAS_scopeStack::getter_mReferenceStateMapAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_referenceStateMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mReferenceStateMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_scopeStack::getter_mObjectListAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mObjectList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_scopeStack::cEnumerator_scopeStack (const GALGAS_scopeStack & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack_2D_element cEnumerator_scopeStack::current (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeKind cEnumerator_scopeStack::current_mScopeKind (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mScopeKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_scopeStack::current_mFirstBranch (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mFirstBranch ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap cEnumerator_scopeStack::current_mInitialStateMap (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mInitialStateMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap cEnumerator_scopeStack::current_mReferenceStateMap (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mReferenceStateMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_scopeStack::current_mObjectList (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mObjectList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @scopeStack type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scopeStack ("scopeStack",
                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_scopeStack::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeStack ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_scopeStack::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeStack (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeStack GALGAS_scopeStack::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_scopeStack result ;
  const GALGAS_scopeStack * p = (const GALGAS_scopeStack *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_scopeStack *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeStack", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState::GALGAS_valuedObjectState (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState GALGAS_valuedObjectState::constructor_noValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = kEnum_noValue ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState GALGAS_valuedObjectState::constructor_hasUnreadValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = kEnum_hasUnreadValue ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState GALGAS_valuedObjectState::constructor_hasReadValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = kEnum_hasReadValue ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_valuedObjectState [4] = {
  "(not built)",
  "noValue",
  "hasUnreadValue",
  "hasReadValue"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObjectState::getter_isNoValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noValue == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObjectState::getter_isHasUnreadValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasUnreadValue == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObjectState::getter_isHasReadValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasReadValue == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObjectState::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "<enum @valuedObjectState: " << gEnumNameArrayFor_valuedObjectState [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_valuedObjectState::objectCompare (const GALGAS_valuedObjectState & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @valuedObjectState type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_valuedObjectState ("valuedObjectState",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_valuedObjectState::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObjectState ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_valuedObjectState::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_valuedObjectState (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState GALGAS_valuedObjectState::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  const GALGAS_valuedObjectState * p = (const GALGAS_valuedObjectState *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_valuedObjectState *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObjectState", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_driver::cEnumAssociatedValues_valuedObject_driver (const GALGAS_PLMType & inAssociatedValue0,
                                                                                      const GALGAS_bool & inAssociatedValue1
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_driver::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_valuedObject_driver::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_driver * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_driver *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_task::cEnumAssociatedValues_valuedObject_task (const GALGAS_PLMType & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_task::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_valuedObject_task::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_task * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_task *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_registerGroup::cEnumAssociatedValues_valuedObject_registerGroup (const GALGAS_controlRegisterMap & inAssociatedValue0,
                                                                                                    const GALGAS_registerGroupKind & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_registerGroup::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_valuedObject_registerGroup::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_registerGroup * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_registerGroup *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_globalConstant::cEnumAssociatedValues_valuedObject_globalConstant (const GALGAS_objectIR & inAssociatedValue0
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_globalConstant::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_valuedObject_globalConstant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_globalConstant * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_globalConstant *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_localConstant::cEnumAssociatedValues_valuedObject_localConstant (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1,
                                                                                                    const GALGAS_bool & inAssociatedValue2
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_localConstant::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_valuedObject_localConstant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_localConstant * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_localConstant *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_localVariable::cEnumAssociatedValues_valuedObject_localVariable (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_localVariable::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_valuedObject_localVariable::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_localVariable * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_localVariable *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_valuedObject_globalSyncInstance::cEnumAssociatedValues_valuedObject_globalSyncInstance (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                              const GALGAS_lstring & inAssociatedValue1
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_valuedObject_globalSyncInstance::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_valuedObject_globalSyncInstance::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_valuedObject_globalSyncInstance * ptr = dynamic_cast<const cEnumAssociatedValues_valuedObject_globalSyncInstance *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject::GALGAS_valuedObject (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::constructor_driver (const GALGAS_PLMType & inAssociatedValue0,
                                                             const GALGAS_bool & inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_driver ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_driver (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::constructor_task (const GALGAS_PLMType & inAssociatedValue0
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_task ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_task (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::constructor_registerGroup (const GALGAS_controlRegisterMap & inAssociatedValue0,
                                                                    const GALGAS_registerGroupKind & inAssociatedValue1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_registerGroup ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_registerGroup (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::constructor_globalConstant (const GALGAS_objectIR & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_globalConstant ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_globalConstant (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::constructor_localConstant (const GALGAS_PLMType & inAssociatedValue0,
                                                                    const GALGAS_lstring & inAssociatedValue1,
                                                                    const GALGAS_bool & inAssociatedValue2
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_localConstant ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_localConstant (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::constructor_localVariable (const GALGAS_PLMType & inAssociatedValue0,
                                                                    const GALGAS_lstring & inAssociatedValue1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_localVariable ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_localVariable (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::constructor_globalSyncInstance (const GALGAS_PLMType & inAssociatedValue0,
                                                                         const GALGAS_lstring & inAssociatedValue1
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_globalSyncInstance ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_valuedObject_globalSyncInstance (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::method_driver (GALGAS_PLMType & outAssociatedValue0,
                                         GALGAS_bool & outAssociatedValue1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_driver) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @valuedObject driver invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_driver * ptr = (const cEnumAssociatedValues_valuedObject_driver *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::method_task (GALGAS_PLMType & outAssociatedValue0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_task) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @valuedObject task invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_task * ptr = (const cEnumAssociatedValues_valuedObject_task *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::method_registerGroup (GALGAS_controlRegisterMap & outAssociatedValue0,
                                                GALGAS_registerGroupKind & outAssociatedValue1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_registerGroup) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @valuedObject registerGroup invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_registerGroup * ptr = (const cEnumAssociatedValues_valuedObject_registerGroup *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::method_globalConstant (GALGAS_objectIR & outAssociatedValue0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_globalConstant) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @valuedObject globalConstant invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_globalConstant * ptr = (const cEnumAssociatedValues_valuedObject_globalConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::method_localConstant (GALGAS_PLMType & outAssociatedValue0,
                                                GALGAS_lstring & outAssociatedValue1,
                                                GALGAS_bool & outAssociatedValue2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_localConstant) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @valuedObject localConstant invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_localConstant * ptr = (const cEnumAssociatedValues_valuedObject_localConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::method_localVariable (GALGAS_PLMType & outAssociatedValue0,
                                                GALGAS_lstring & outAssociatedValue1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_localVariable) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @valuedObject localVariable invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_localVariable * ptr = (const cEnumAssociatedValues_valuedObject_localVariable *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::method_globalSyncInstance (GALGAS_PLMType & outAssociatedValue0,
                                                     GALGAS_lstring & outAssociatedValue1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_globalSyncInstance) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @valuedObject globalSyncInstance invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_valuedObject_globalSyncInstance * ptr = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_valuedObject [8] = {
  "(not built)",
  "driver",
  "task",
  "registerGroup",
  "globalConstant",
  "localConstant",
  "localVariable",
  "globalSyncInstance"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isDriver (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_driver == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isTask (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_task == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isRegisterGroup (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerGroup == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isGlobalConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalConstant == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isLocalConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_localConstant == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isLocalVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_localVariable == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_valuedObject::getter_isGlobalSyncInstance (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_globalSyncInstance == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_valuedObject::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "<enum @valuedObject: " << gEnumNameArrayFor_valuedObject [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_valuedObject::objectCompare (const GALGAS_valuedObject & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @valuedObject type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_valuedObject ("valuedObject",
                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_valuedObject::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_valuedObject::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_valuedObject (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObject GALGAS_valuedObject::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  const GALGAS_valuedObject * p = (const GALGAS_valuedObject *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_valuedObject *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeKind::GALGAS_scopeKind (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeKind GALGAS_scopeKind::constructor_selectScope (UNUSED_LOCATION_ARGS) {
  GALGAS_scopeKind result ;
  result.mEnum = kEnum_selectScope ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeKind GALGAS_scopeKind::constructor_repeatScope (UNUSED_LOCATION_ARGS) {
  GALGAS_scopeKind result ;
  result.mEnum = kEnum_repeatScope ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_scopeKind [3] = {
  "(not built)",
  "selectScope",
  "repeatScope"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_scopeKind::getter_isSelectScope (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selectScope == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_scopeKind::getter_isRepeatScope (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_repeatScope == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_scopeKind::description (C_String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString << "<enum @scopeKind: " << gEnumNameArrayFor_scopeKind [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_scopeKind::objectCompare (const GALGAS_scopeKind & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @scopeKind type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scopeKind ("scopeKind",
                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_scopeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_scopeKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_scopeKind GALGAS_scopeKind::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_scopeKind result ;
  const GALGAS_scopeKind * p = (const GALGAS_scopeKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_scopeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_referenceStateMap::cMapElement_referenceStateMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_valuedObjectState & in_mState
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mState (in_mState) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_referenceStateMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mState.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_referenceStateMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_referenceStateMap (mProperty_lkey, mProperty_mState COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_referenceStateMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mState" ":" ;
  mProperty_mState.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_referenceStateMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_referenceStateMap * operand = (cMapElement_referenceStateMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mState.objectCompare (operand->mProperty_mState) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap::GALGAS_referenceStateMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap::GALGAS_referenceStateMap (const GALGAS_referenceStateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap & GALGAS_referenceStateMap::operator = (const GALGAS_referenceStateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap GALGAS_referenceStateMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap GALGAS_referenceStateMap::constructor_mapWithMapToOverride (const GALGAS_referenceStateMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap GALGAS_referenceStateMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_referenceStateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_referenceStateMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_valuedObjectState & inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * p = NULL ;
  macroMyNew (p, cMapElement_referenceStateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@referenceStateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_referenceStateMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_valuedObjectState inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * p = NULL ;
  macroMyNew (p, cMapElement_referenceStateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_referenceStateMap_searchKey = "INTERNAL ERROR" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_referenceStateMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_valuedObjectState & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_referenceStateMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_referenceStateMap) ;
    outArgument0 = p->mProperty_mState ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState GALGAS_referenceStateMap::getter_mStateForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) attributes ;
  GALGAS_valuedObjectState result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_referenceStateMap) ;
    result = p->mProperty_mState ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_referenceStateMap::setter_setMStateForKey (GALGAS_valuedObjectState inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_referenceStateMap * p = (cMapElement_referenceStateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_referenceStateMap) ;
    p->mProperty_mState = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_referenceStateMap * GALGAS_referenceStateMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * result = (cMapElement_referenceStateMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_referenceStateMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_referenceStateMap::cEnumerator_referenceStateMap (const GALGAS_referenceStateMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap_2D_element cEnumerator_referenceStateMap::current (LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_referenceStateMap) ;
  return GALGAS_referenceStateMap_2D_element (p->mProperty_lkey, p->mProperty_mState) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_referenceStateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_valuedObjectState cEnumerator_referenceStateMap::current_mState (LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_referenceStateMap) ;
  return p->mProperty_mState ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @referenceStateMap type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_referenceStateMap ("referenceStateMap",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_referenceStateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_referenceStateMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_referenceStateMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_referenceStateMap GALGAS_referenceStateMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  const GALGAS_referenceStateMap * p = (const GALGAS_referenceStateMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_referenceStateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("referenceStateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Extension Getter '@valuedObjectState string'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_string (const GALGAS_valuedObjectState & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_valuedObjectState temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_valuedObjectState::kNotBuilt:
    break ;
  case GALGAS_valuedObjectState::kEnum_noValue:
    {
      result_result = GALGAS_string ("no value") ;
    }
    break ;
  case GALGAS_valuedObjectState::kEnum_hasUnreadValue:
    {
      result_result = GALGAS_string ("unread value") ;
    }
    break ;
  case GALGAS_valuedObjectState::kEnum_hasReadValue:
    {
      result_result = GALGAS_string ("read value") ;
    }
    break ;
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        '@semanticTypePrecedenceGraph' graph                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTypePrecedenceGraph::GALGAS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticTypePrecedenceGraph::setter_addNode (GALGAS_lstring inKey,
                                                         GALGAS_abstractDeclarationAST inArgument_0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_declarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' symbol is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticTypePrecedenceGraph::method_topologicalSort (GALGAS_declarationListAST & outSortedList,
                                                                 GALGAS_lstringlist & outSortedKeyList,
                                                                 GALGAS_declarationListAST & outUnsortedList,
                                                                 GALGAS_lstringlist & outUnsortedKeyList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_declarationListAST (sortedList) ;
  outUnsortedList = GALGAS_declarationListAST (unsortedList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticTypePrecedenceGraph::method_depthFirstTopologicalSort (GALGAS_declarationListAST & outSortedList,
                                                                           GALGAS_lstringlist & outSortedKeyList,
                                                                           GALGAS_declarationListAST & outUnsortedList,
                                                                           GALGAS_lstringlist & outUnsortedKeyList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_declarationListAST (sortedList) ;
  outUnsortedList = GALGAS_declarationListAST (unsortedList) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticTypePrecedenceGraph::method_circularities (GALGAS_declarationListAST & outInfoList,
                                                               GALGAS_lstringlist & outKeyList
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GALGAS_declarationListAST & outInfoList,
                                                                      GALGAS_lstringlist & outKeyList
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GALGAS_declarationListAST & outInfoList,
                                                                        GALGAS_lstringlist & outKeyList
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                                 const GALGAS_stringset & inKeysToExclude,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_semanticTypePrecedenceGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                                   const GALGAS_stringset & inNodesToExclude,
                                                                                   C_Compiler * inCompiler
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @semanticTypePrecedenceGraph type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypePrecedenceGraph result ;
  const GALGAS_semanticTypePrecedenceGraph * p = (const GALGAS_semanticTypePrecedenceGraph *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticTypePrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypePrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@semanticTypePrecedenceGraph noteUINTType'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_noteUINTType (GALGAS_semanticTypePrecedenceGraph & ioObject,
                                   const GALGAS_uint constinArgument_inBitSize,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_typeName_981 = GALGAS_lstring::constructor_new (GALGAS_string ("$uint").add_operation (constinArgument_inBitSize.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 14)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 14)) ;
  {
  ioObject.setter_noteNode (var_typeName_981 COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 15)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph> gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph (void) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_enterInPrecedenceGraph (NULL,
                                                                          freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.count ()) {
          f = gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Abstract extension getter '@abstractDeclarationAST keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling> gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_keyRepresentationForErrorSignaling (const int32_t inClassIndex,
                                                              enterExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling inGetter) {
  gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling (void) {
  gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling (NULL,
                                                                                      freeExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string callExtensionGetter_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling.count ()) {
      f = gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling.count ()) {
           f = gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractDeclarationAST_keyRepresentationForErrorSignaling.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@declarationDecorationList' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_declarationDecorationList : public cCollectionElement {
  public : GALGAS_declarationDecorationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_declarationDecorationList (const GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_declarationDecorationList (const GALGAS_declarationDecorationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_declarationDecorationList::cCollectionElement_declarationDecorationList (const GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_declarationDecorationList::cCollectionElement_declarationDecorationList (const GALGAS_declarationDecorationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_declarationDecorationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_declarationDecorationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_declarationDecorationList (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_declarationDecorationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_declarationDecorationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_declarationDecorationList * operand = (cCollectionElement_declarationDecorationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_declarationDecorationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList::GALGAS_declarationDecorationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList::GALGAS_declarationDecorationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_declarationDecorationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::constructor_listWithValue (const GALGAS_abstractDecoratedDeclaration & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_declarationDecorationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationDecorationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_declarationDecorationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationDecorationList * p = NULL ;
  macroMyNew (p, cCollectionElement_declarationDecorationList (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::addAssign_operation (const GALGAS_abstractDecoratedDeclaration & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationDecorationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::setter_append (GALGAS_declarationDecorationList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationDecorationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::setter_insertAtIndex (const GALGAS_abstractDecoratedDeclaration inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationDecorationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::setter_removeAtIndex (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
      outOperand0 = p->mObject.mProperty_mDeclaration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::setter_popFirst (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::setter_popLast (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::method_first (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::method_last (GALGAS_abstractDecoratedDeclaration & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::add_operation (const GALGAS_declarationDecorationList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result = GALGAS_declarationDecorationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result = GALGAS_declarationDecorationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_declarationDecorationList result = GALGAS_declarationDecorationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationDecorationList::plusAssign_operation (const GALGAS_declarationDecorationList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDecoratedDeclaration GALGAS_declarationDecorationList::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationDecorationList * p = (cCollectionElement_declarationDecorationList *) attributes.ptr () ;
  GALGAS_abstractDecoratedDeclaration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_declarationDecorationList::cEnumerator_declarationDecorationList (const GALGAS_declarationDecorationList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList_2D_element cEnumerator_declarationDecorationList::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationDecorationList * p = (const cCollectionElement_declarationDecorationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDecoratedDeclaration cEnumerator_declarationDecorationList::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_declarationDecorationList * p = (const cCollectionElement_declarationDecorationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationDecorationList) ;
  return p->mObject.mProperty_mDeclaration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @declarationDecorationList type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationDecorationList ("declarationDecorationList",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_declarationDecorationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationDecorationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_declarationDecorationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationDecorationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationDecorationList GALGAS_declarationDecorationList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_declarationDecorationList result ;
  const GALGAS_declarationDecorationList * p = (const GALGAS_declarationDecorationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationDecorationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationDecorationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_infixOperatorMap::cMapElement_infixOperatorMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_PLMType & in_mResultType,
                                                            const GALGAS_infixOperatorDescription & in_mOperation
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mResultType (in_mResultType),
mProperty_mOperation (in_mOperation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_infixOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultType.isValid () && mProperty_mOperation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_infixOperatorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_infixOperatorMap (mProperty_lkey, mProperty_mResultType, mProperty_mOperation COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_infixOperatorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mProperty_mResultType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperation" ":" ;
  mProperty_mOperation.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_infixOperatorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_infixOperatorMap * operand = (cMapElement_infixOperatorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (operand->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperation.objectCompare (operand->mProperty_mOperation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap::GALGAS_infixOperatorMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap::GALGAS_infixOperatorMap (const GALGAS_infixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap & GALGAS_infixOperatorMap::operator = (const GALGAS_infixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::constructor_mapWithMapToOverride (const GALGAS_infixOperatorMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_infixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_infixOperatorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_PLMType & inArgument0,
                                                   const GALGAS_infixOperatorDescription & inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_infixOperatorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@infixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_infixOperatorMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_PLMType inArgument0,
                                                GALGAS_infixOperatorDescription inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_infixOperatorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_infixOperatorMap_searchKey = "** internal error **" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_infixOperatorMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_PLMType & outArgument0,
                                                GALGAS_infixOperatorDescription & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_infixOperatorMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    outArgument0 = p->mProperty_mResultType ;
    outArgument1 = p->mProperty_mOperation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_infixOperatorMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorDescription GALGAS_infixOperatorMap::getter_mOperationForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GALGAS_infixOperatorDescription result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mProperty_mOperation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_infixOperatorMap::setter_setMResultTypeForKey (GALGAS_PLMType inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    p->mProperty_mResultType = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_infixOperatorMap::setter_setMOperationForKey (GALGAS_infixOperatorDescription inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    p->mProperty_mOperation = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_infixOperatorMap * GALGAS_infixOperatorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * result = (cMapElement_infixOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_infixOperatorMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_infixOperatorMap::cEnumerator_infixOperatorMap (const GALGAS_infixOperatorMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_2D_element cEnumerator_infixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return GALGAS_infixOperatorMap_2D_element (p->mProperty_lkey, p->mProperty_mResultType, p->mProperty_mOperation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_infixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_infixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mProperty_mResultType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorDescription cEnumerator_infixOperatorMap::current_mOperation (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mProperty_mOperation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @infixOperatorMap type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorMap ("infixOperatorMap",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_infixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_infixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  const GALGAS_infixOperatorMap * p = (const GALGAS_infixOperatorMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_prefixOperatorMap::cMapElement_prefixOperatorMap (const GALGAS_lstring & inKey
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_prefixOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_prefixOperatorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_prefixOperatorMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_prefixOperatorMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_prefixOperatorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_prefixOperatorMap * operand = (cMapElement_prefixOperatorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap::GALGAS_prefixOperatorMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap::GALGAS_prefixOperatorMap (const GALGAS_prefixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap & GALGAS_prefixOperatorMap::operator = (const GALGAS_prefixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::constructor_mapWithMapToOverride (const GALGAS_prefixOperatorMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_prefixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_prefixOperatorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@prefixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_prefixOperatorMap::setter_insertKey (GALGAS_lstring inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_prefixOperatorMap_searchKey = "prefix operation is not defined for %K type" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_prefixOperatorMap::method_searchKey (GALGAS_lstring inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_prefixOperatorMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_prefixOperatorMap * GALGAS_prefixOperatorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * result = (cMapElement_prefixOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_prefixOperatorMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_prefixOperatorMap::cEnumerator_prefixOperatorMap (const GALGAS_prefixOperatorMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap_2D_element cEnumerator_prefixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return GALGAS_prefixOperatorMap_2D_element (p->mProperty_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_prefixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @prefixOperatorMap type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorMap ("prefixOperatorMap",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_prefixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  const GALGAS_prefixOperatorMap * p = (const GALGAS_prefixOperatorMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_staticStringMap::cMapElement_staticStringMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mIndex
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_staticStringMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_staticStringMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticStringMap (mProperty_lkey, mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_staticStringMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_staticStringMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticStringMap * operand = (cMapElement_staticStringMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap::GALGAS_staticStringMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap::GALGAS_staticStringMap (const GALGAS_staticStringMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap & GALGAS_staticStringMap::operator = (const GALGAS_staticStringMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap GALGAS_staticStringMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticStringMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap GALGAS_staticStringMap::constructor_mapWithMapToOverride (const GALGAS_staticStringMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap GALGAS_staticStringMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_staticStringMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticStringMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_uint & inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * p = NULL ;
  macroMyNew (p, cMapElement_staticStringMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticStringMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticStringMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_uint inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * p = NULL ;
  macroMyNew (p, cMapElement_staticStringMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_staticStringMap_searchKey = "-- internal error --" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticStringMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_uint & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_staticStringMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    outArgument0 = p->mProperty_mIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_staticStringMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticStringMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticStringMap * p = (cMapElement_staticStringMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticStringMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_staticStringMap * GALGAS_staticStringMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_staticStringMap * result = (cMapElement_staticStringMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticStringMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_staticStringMap::cEnumerator_staticStringMap (const GALGAS_staticStringMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap_2D_element cEnumerator_staticStringMap::current (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return GALGAS_staticStringMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_staticStringMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_staticStringMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_staticStringMap * p = (const cMapElement_staticStringMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticStringMap) ;
  return p->mProperty_mIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @staticStringMap type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticStringMap ("staticStringMap",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticStringMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticStringMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticStringMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticStringMap GALGAS_staticStringMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap result ;
  const GALGAS_staticStringMap * p = (const GALGAS_staticStringMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticStringMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@globalStructuredConstantList' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_globalStructuredConstantList : public cCollectionElement {
  public : GALGAS_globalStructuredConstantList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_globalStructuredConstantList (const GALGAS_PLMType & in_mType,
                                                            const GALGAS_operandIRList & in_mOperandIRList
                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_globalStructuredConstantList (const GALGAS_globalStructuredConstantList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_globalStructuredConstantList::cCollectionElement_globalStructuredConstantList (const GALGAS_PLMType & in_mType,
                                                                                                  const GALGAS_operandIRList & in_mOperandIRList
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mOperandIRList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_globalStructuredConstantList::cCollectionElement_globalStructuredConstantList (const GALGAS_globalStructuredConstantList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mOperandIRList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_globalStructuredConstantList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_globalStructuredConstantList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_globalStructuredConstantList (mObject.mProperty_mType, mObject.mProperty_mOperandIRList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_globalStructuredConstantList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperandIRList" ":" ;
  mObject.mProperty_mOperandIRList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_globalStructuredConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_globalStructuredConstantList * operand = (cCollectionElement_globalStructuredConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_globalStructuredConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList::GALGAS_globalStructuredConstantList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList::GALGAS_globalStructuredConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_globalStructuredConstantList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::constructor_listWithValue (const GALGAS_PLMType & inOperand0,
                                                                                                    const GALGAS_operandIRList & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalStructuredConstantList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_globalStructuredConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_PLMType & in_mType,
                                                                     const GALGAS_operandIRList & in_mOperandIRList
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_globalStructuredConstantList * p = NULL ;
  macroMyNew (p, cCollectionElement_globalStructuredConstantList (in_mType,
                                                                  in_mOperandIRList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::addAssign_operation (const GALGAS_PLMType & inOperand0,
                                                               const GALGAS_operandIRList & inOperand1
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_globalStructuredConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::setter_append (GALGAS_globalStructuredConstantList_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_globalStructuredConstantList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::setter_insertAtIndex (const GALGAS_PLMType inOperand0,
                                                                const GALGAS_operandIRList inOperand1,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_globalStructuredConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::setter_removeAtIndex (GALGAS_PLMType & outOperand0,
                                                                GALGAS_operandIRList & outOperand1,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
      outOperand0 = p->mObject.mProperty_mType ;
      outOperand1 = p->mObject.mProperty_mOperandIRList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::setter_popFirst (GALGAS_PLMType & outOperand0,
                                                           GALGAS_operandIRList & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::setter_popLast (GALGAS_PLMType & outOperand0,
                                                          GALGAS_operandIRList & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::method_first (GALGAS_PLMType & outOperand0,
                                                        GALGAS_operandIRList & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::method_last (GALGAS_PLMType & outOperand0,
                                                       GALGAS_operandIRList & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mOperandIRList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::add_operation (const GALGAS_globalStructuredConstantList & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result = GALGAS_globalStructuredConstantList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result = GALGAS_globalStructuredConstantList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_globalStructuredConstantList result = GALGAS_globalStructuredConstantList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalStructuredConstantList::plusAssign_operation (const GALGAS_globalStructuredConstantList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_globalStructuredConstantList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList GALGAS_globalStructuredConstantList::getter_mOperandIRListAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalStructuredConstantList * p = (cCollectionElement_globalStructuredConstantList *) attributes.ptr () ;
  GALGAS_operandIRList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
    result = p->mObject.mProperty_mOperandIRList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_globalStructuredConstantList::cEnumerator_globalStructuredConstantList (const GALGAS_globalStructuredConstantList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList_2D_element cEnumerator_globalStructuredConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_globalStructuredConstantList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject.mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList cEnumerator_globalStructuredConstantList::current_mOperandIRList (LOCATION_ARGS) const {
  const cCollectionElement_globalStructuredConstantList * p = (const cCollectionElement_globalStructuredConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalStructuredConstantList) ;
  return p->mObject.mProperty_mOperandIRList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @globalStructuredConstantList type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalStructuredConstantList ("globalStructuredConstantList",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_globalStructuredConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalStructuredConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_globalStructuredConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalStructuredConstantList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalStructuredConstantList GALGAS_globalStructuredConstantList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList result ;
  const GALGAS_globalStructuredConstantList * p = (const GALGAS_globalStructuredConstantList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalStructuredConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalStructuredConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_globalConstantMap::cMapElement_globalConstantMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_objectIR & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_globalConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_globalConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalConstantMap (mProperty_lkey, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_globalConstantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_globalConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalConstantMap * operand = (cMapElement_globalConstantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (operand->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap::GALGAS_globalConstantMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap::GALGAS_globalConstantMap (const GALGAS_globalConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap & GALGAS_globalConstantMap::operator = (const GALGAS_globalConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap GALGAS_globalConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap GALGAS_globalConstantMap::constructor_mapWithMapToOverride (const GALGAS_globalConstantMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap GALGAS_globalConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_globalConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_objectIR & inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_globalConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_objectIR inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_globalConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_globalConstantMap_searchKey = "there is no '%K' constant" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalConstantMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_objectIR & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_globalConstantMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    outArgument0 = p->mProperty_mValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_globalConstantMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) attributes ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalConstantMap::setter_setMValueForKey (GALGAS_objectIR inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalConstantMap * p = (cMapElement_globalConstantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_globalConstantMap * GALGAS_globalConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * result = (cMapElement_globalConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalConstantMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_globalConstantMap::cEnumerator_globalConstantMap (const GALGAS_globalConstantMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap_2D_element cEnumerator_globalConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return GALGAS_globalConstantMap_2D_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_globalConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cEnumerator_globalConstantMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return p->mProperty_mValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @globalConstantMap type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMap ("globalConstantMap",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_globalConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_globalConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap GALGAS_globalConstantMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  const GALGAS_globalConstantMap * p = (const GALGAS_globalConstantMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_availableInterruptMap::cMapElement_availableInterruptMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInterruptionPanicCode (in_mInterruptionPanicCode) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_availableInterruptMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_availableInterruptMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_availableInterruptMap (mProperty_lkey, mProperty_mInterruptionPanicCode COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_availableInterruptMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInterruptionPanicCode" ":" ;
  mProperty_mInterruptionPanicCode.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_availableInterruptMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_availableInterruptMap * operand = (cMapElement_availableInterruptMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInterruptionPanicCode.objectCompare (operand->mProperty_mInterruptionPanicCode) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap::GALGAS_availableInterruptMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap::GALGAS_availableInterruptMap (const GALGAS_availableInterruptMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap & GALGAS_availableInterruptMap::operator = (const GALGAS_availableInterruptMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::constructor_mapWithMapToOverride (const GALGAS_availableInterruptMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_availableInterruptMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_availableInterruptMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_interruptionPanicCode & inArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * p = NULL ;
  macroMyNew (p, cMapElement_availableInterruptMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@availableInterruptMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_availableInterruptMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_interruptionPanicCode inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * p = NULL ;
  macroMyNew (p, cMapElement_availableInterruptMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "interrupt '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_availableInterruptMap_searchKey = "interrupt '%K' is not defined" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_availableInterruptMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_interruptionPanicCode & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_availableInterruptMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    outArgument0 = p->mProperty_mInterruptionPanicCode ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionPanicCode GALGAS_availableInterruptMap::getter_mInterruptionPanicCodeForKey (const GALGAS_string & inKey,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) attributes ;
  GALGAS_interruptionPanicCode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    result = p->mProperty_mInterruptionPanicCode ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_availableInterruptMap::setter_setMInterruptionPanicCodeForKey (GALGAS_interruptionPanicCode inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_availableInterruptMap * p = (cMapElement_availableInterruptMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    p->mProperty_mInterruptionPanicCode = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_availableInterruptMap * GALGAS_availableInterruptMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * result = (cMapElement_availableInterruptMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_availableInterruptMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_availableInterruptMap::cEnumerator_availableInterruptMap (const GALGAS_availableInterruptMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap_2D_element cEnumerator_availableInterruptMap::current (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return GALGAS_availableInterruptMap_2D_element (p->mProperty_lkey, p->mProperty_mInterruptionPanicCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_availableInterruptMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionPanicCode cEnumerator_availableInterruptMap::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return p->mProperty_mInterruptionPanicCode ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @availableInterruptMap type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_availableInterruptMap ("availableInterruptMap",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_availableInterruptMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_availableInterruptMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_availableInterruptMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  const GALGAS_availableInterruptMap * p = (const GALGAS_availableInterruptMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_availableInterruptMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_panicRoutinePriorityMap::cMapElement_panicRoutinePriorityMap (const GALGAS_lstring & inKey
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_panicRoutinePriorityMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_panicRoutinePriorityMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_panicRoutinePriorityMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_panicRoutinePriorityMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_panicRoutinePriorityMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_panicRoutinePriorityMap * operand = (cMapElement_panicRoutinePriorityMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap::GALGAS_panicRoutinePriorityMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap::GALGAS_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap & GALGAS_panicRoutinePriorityMap::operator = (const GALGAS_panicRoutinePriorityMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::constructor_mapWithMapToOverride (const GALGAS_panicRoutinePriorityMap & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_panicRoutinePriorityMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_panicRoutinePriorityMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@panicRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_panicRoutinePriorityMap::setter_insertSetupKey (GALGAS_lstring inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a panic setup routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_panicRoutinePriorityMap::setter_insertLoopKey (GALGAS_lstring inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a panic loop routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey = "there is no panic setup routine with priority %K" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_panicRoutinePriorityMap::method_searchSetupKey (GALGAS_lstring inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey = "there is no panic loop routine with priority %K" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_panicRoutinePriorityMap::method_searchLoopKey (GALGAS_lstring inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_panicRoutinePriorityMap * GALGAS_panicRoutinePriorityMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * result = (cMapElement_panicRoutinePriorityMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_panicRoutinePriorityMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_panicRoutinePriorityMap::cEnumerator_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap_2D_element cEnumerator_panicRoutinePriorityMap::current (LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  return GALGAS_panicRoutinePriorityMap_2D_element (p->mProperty_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_panicRoutinePriorityMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @panicRoutinePriorityMap type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicRoutinePriorityMap ("panicRoutinePriorityMap",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_panicRoutinePriorityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_panicRoutinePriorityMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicRoutinePriorityMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  const GALGAS_panicRoutinePriorityMap * p = (const GALGAS_panicRoutinePriorityMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicRoutinePriorityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicRoutinePriorityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_PLMType & in_type,
                                                        const GALGAS_uint & in_index,
                                                        const GALGAS_bool & in_generate
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_type (in_type),
mProperty_index (in_index),
mProperty_generate (in_generate) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () && mProperty_index.isValid () && mProperty_generate.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mProperty_lkey, mProperty_type, mProperty_index, mProperty_generate COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_unifiedTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "type" ":" ;
  mProperty_type.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "index" ":" ;
  mProperty_index.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "generate" ":" ;
  mProperty_generate.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_type.objectCompare (operand->mProperty_type) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_index.objectCompare (operand->mProperty_index) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_generate.objectCompare (operand->mProperty_generate) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_uniqueMap (kMapAutomatonNoIssue, "") {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton states                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton state names                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton actions                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton transitions                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Map automaton final state issues                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::setter_insertType (GALGAS_lstring inKey,
                                               GALGAS_PLMType inArgument0,
                                               GALGAS_uint inArgument1,
                                               GALGAS_bool inArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' type is already declared in %L" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     0,
                     NULL,
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_unifiedTypeMap_searchKey = "there is no '%K' type" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_PLMType & outArgument0,
                                              GALGAS_uint & outArgument1,
                                              GALGAS_bool & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_unifiedTypeMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_index ;
    outArgument2 = p->mProperty_generate ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_unifiedTypeMap::getter_typeForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_type ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_unifiedTypeMap::getter_indexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_index ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_unifiedTypeMap::getter_generateForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_generate ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::setter_setTypeForKey (GALGAS_PLMType inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_type = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::setter_setIndexForKey (GALGAS_uint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_index = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_unifiedTypeMap::setter_setGenerateForKey (GALGAS_bool inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_generate = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_unifiedTypeMap::current_type (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_type ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_unifiedTypeMap::current_index (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_index ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_unifiedTypeMap::current_generate (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_generate ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @unifiedTypeMap type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  const GALGAS_unifiedTypeMap * p = (const GALGAS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Abstract extension method '@abstractDeclarationAST enterInContext'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_enterInContext> gExtensionMethodTable_abstractDeclarationAST_enterInContext ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterInContext (const int32_t inClassIndex,
                                          extensionMethodSignature_abstractDeclarationAST_enterInContext inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_enterInContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_enterInContext (void) {
  gExtensionMethodTable_abstractDeclarationAST_enterInContext.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_enterInContext (NULL,
                                                                  freeExtensionMethod_abstractDeclarationAST_enterInContext) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                         const GALGAS_functionDeclarationListAST constin_inProcedureListAST,
                                         GALGAS_semanticContext & io_ioContext,
                                         GALGAS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                         GALGAS_decoratedRoutineList & io_ioDecoratedRoutineList,
                                         GALGAS_subprogramInvocationGraph & io_ioSubprogramInvocationGraph,
                                         GALGAS_staticListInitializationMap & io_ioStaticListValueMap,
                                         GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                         GALGAS_globalVariableIRList & io_ioGlobalVariableIRList,
                                         GALGAS_controlRegisterUserAccesMapAST & io_ioControlRegisterUserAccesMapAST,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_enterInContext f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_enterInContext.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_enterInContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_enterInContext.count ()) {
          f = gExtensionMethodTable_abstractDeclarationAST_enterInContext (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractDeclarationAST_enterInContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inProcedureListAST, io_ioContext, io_ioDecoratedDeclarationList, io_ioDecoratedRoutineList, io_ioSubprogramInvocationGraph, io_ioStaticListValueMap, io_ioStaticEntityMap, io_ioGlobalVariableIRList, io_ioControlRegisterUserAccesMapAST, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes::GALGAS_PLMTypeAttributes (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes::GALGAS_PLMTypeAttributes (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::constructor_none (UNUSED_LOCATION_ARGS) {
  return GALGAS_PLMTypeAttributes (0) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::constructor_all (UNUSED_LOCATION_ARGS) {
  return GALGAS_PLMTypeAttributes ((uint64_t) 0xF) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::constructor_instanciable (UNUSED_LOCATION_ARGS) {
  return GALGAS_PLMTypeAttributes (((uint64_t) 1) << 0) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::constructor_equatable (UNUSED_LOCATION_ARGS) {
  return GALGAS_PLMTypeAttributes (((uint64_t) 1) << 1) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::constructor_copyable (UNUSED_LOCATION_ARGS) {
  return GALGAS_PLMTypeAttributes (((uint64_t) 1) << 2) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::constructor_comparable (UNUSED_LOCATION_ARGS) {
  return GALGAS_PLMTypeAttributes (((uint64_t) 1) << 3) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_PLMTypeAttributes::objectCompare (const GALGAS_PLMTypeAttributes & inOperand) const {
   typeComparisonResult result = kOperandNotValid ;
   if (mIsValid && inOperand.mIsValid) {
     result = kOperandEqual ;
     if (mFlags < inOperand.mFlags) {
       result = kFirstOperandLowerThanSecond ;
     }else if (mFlags > inOperand.mFlags) {
       result = kFirstOperandGreaterThanSecond ;
     }
   }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_PLMTypeAttributes::isValid (void) const {
  return mIsValid ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_PLMTypeAttributes::drop (void) {
  mIsValid = false ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::operator_or (const GALGAS_PLMTypeAttributes & inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_PLMTypeAttributes (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::operator_and (const GALGAS_PLMTypeAttributes & inOperand
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_PLMTypeAttributes (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::operator_xor (const GALGAS_PLMTypeAttributes & inOperand
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_PLMTypeAttributes (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::substract_operation (const GALGAS_PLMTypeAttributes & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMTypeAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_PLMTypeAttributes (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMTypeAttributes result ;
  if (mIsValid) {
    result = GALGAS_PLMTypeAttributes (((uint64_t) 0xF) ^ mFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_PLMTypeAttributes::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "<boolset @PLMTypeAttributes:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    if ((mFlags & ((uint64_t) 1) << 0) != 0) {
      ioString << " instanciable" ;
    }
    if ((mFlags & ((uint64_t) 1) << 1) != 0) {
      ioString << " equatable" ;
    }
    if ((mFlags & ((uint64_t) 1) << 2) != 0) {
      ioString << " copyable" ;
    }
    if ((mFlags & ((uint64_t) 1) << 3) != 0) {
      ioString << " comparable" ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_PLMTypeAttributes::getter_none (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_PLMTypeAttributes::getter_all (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == (uint64_t) 0xF) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_PLMTypeAttributes::getter_instanciable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 0) != 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_PLMTypeAttributes::getter_equatable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 1) != 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_PLMTypeAttributes::getter_copyable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 2) != 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_PLMTypeAttributes::getter_comparable (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << 3) != 0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @PLMTypeAttributes type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_PLMTypeAttributes ("PLMTypeAttributes",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_PLMTypeAttributes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_PLMTypeAttributes ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_PLMTypeAttributes::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_PLMTypeAttributes (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMTypeAttributes GALGAS_PLMTypeAttributes::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_PLMTypeAttributes result ;
  const GALGAS_PLMTypeAttributes * p = (const GALGAS_PLMTypeAttributes *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_PLMTypeAttributes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("PLMTypeAttributes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_propertyMap::cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_bool & in_mIsPublic,
                                                  const GALGAS_propertyAccessKind & in_mAccess
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mAccess (in_mAccess) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_propertyMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mAccess.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_propertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_propertyMap (mProperty_lkey, mProperty_mIsPublic, mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap::GALGAS_propertyMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap::GALGAS_propertyMap (const GALGAS_propertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap & GALGAS_propertyMap::operator = (const GALGAS_propertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_propertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_propertyMap::constructor_mapWithMapToOverride (const GALGAS_propertyMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_propertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_propertyMap_searchKey = "there is no '%K' property" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_propertyMap * GALGAS_propertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * result = (cMapElement_propertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_propertyMap::cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap_2D_element cEnumerator_propertyMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return GALGAS_propertyMap_2D_element (p->mProperty_lkey, p->mProperty_mIsPublic, p->mProperty_mAccess) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_propertyMap::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mIsPublic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAccessKind cEnumerator_propertyMap::current_mAccess (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mAccess ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @propertyMap type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap ("propertyMap",
                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_constructorMap::cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_constructorSignature & in_mSignature,
                                                        const GALGAS_constructorValue & in_mInitValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSignature (in_mSignature),
mProperty_mInitValue (in_mInitValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_constructorMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSignature.isValid () && mProperty_mInitValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_constructorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constructorMap (mProperty_lkey, mProperty_mSignature, mProperty_mInitValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_constructorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mProperty_mSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitValue" ":" ;
  mProperty_mInitValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_constructorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constructorMap * operand = (cMapElement_constructorMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mSignature.objectCompare (operand->mProperty_mSignature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInitValue.objectCompare (operand->mProperty_mInitValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap::GALGAS_constructorMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap::GALGAS_constructorMap (const GALGAS_constructorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap & GALGAS_constructorMap::operator = (const GALGAS_constructorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap GALGAS_constructorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap GALGAS_constructorMap::constructor_mapWithMapToOverride (const GALGAS_constructorMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap GALGAS_constructorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_constructorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_constructorSignature & inArgument0,
                                                 const GALGAS_constructorValue & inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * p = NULL ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constructorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_constructorSignature inArgument0,
                                              GALGAS_constructorValue inArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * p = NULL ;
  macroMyNew (p, cMapElement_constructorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_constructorMap_searchKey = "constructor is not defined" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_constructorSignature & outArgument0,
                                              GALGAS_constructorValue & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_constructorMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    outArgument0 = p->mProperty_mSignature ;
    outArgument1 = p->mProperty_mInitValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorSignature GALGAS_constructorMap::getter_mSignatureForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_constructorSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorValue GALGAS_constructorMap::getter_mInitValueForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) attributes ;
  GALGAS_constructorValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    result = p->mProperty_mInitValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorMap::setter_setMSignatureForKey (GALGAS_constructorSignature inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mProperty_mSignature = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_constructorMap::setter_setMInitValueForKey (GALGAS_constructorValue inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constructorMap * p = (cMapElement_constructorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constructorMap) ;
    p->mProperty_mInitValue = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_constructorMap * GALGAS_constructorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_constructorMap * result = (cMapElement_constructorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constructorMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_constructorMap::cEnumerator_constructorMap (const GALGAS_constructorMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap_2D_element cEnumerator_constructorMap::current (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return GALGAS_constructorMap_2D_element (p->mProperty_lkey, p->mProperty_mSignature, p->mProperty_mInitValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_constructorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorSignature cEnumerator_constructorMap::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mSignature ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorValue cEnumerator_constructorMap::current_mInitValue (LOCATION_ARGS) const {
  const cMapElement_constructorMap * p = (const cMapElement_constructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constructorMap) ;
  return p->mProperty_mInitValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @constructorMap type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap ("constructorMap",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_constructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_constructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_constructorMap GALGAS_constructorMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap result ;
  const GALGAS_constructorMap * p = (const GALGAS_constructorMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_enumeration::cEnumAssociatedValues_typeKind_enumeration (const GALGAS_uint & inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_enumeration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_enumeration::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_enumeration * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_enumeration *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_structure::cEnumAssociatedValues_typeKind_structure (const GALGAS_propertyList & inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_structure::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_structure::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_structure * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_structure *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_syncTool::cEnumAssociatedValues_typeKind_syncTool (const GALGAS_propertyList & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_syncTool::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_syncTool::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_syncTool * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_syncTool *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_integer::cEnumAssociatedValues_typeKind_integer (const GALGAS_bigint & inAssociatedValue0,
                                                                                const GALGAS_bigint & inAssociatedValue1,
                                                                                const GALGAS_bool & inAssociatedValue2,
                                                                                const GALGAS_uint & inAssociatedValue3
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_integer::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_integer::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_integer * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_integer *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_opaque::cEnumAssociatedValues_typeKind_opaque (const GALGAS_bigint & inAssociatedValue0
                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_opaque::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_opaque::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_opaque * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_opaque *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_arrayType::cEnumAssociatedValues_typeKind_arrayType (const GALGAS_PLMType & inAssociatedValue0,
                                                                                    const GALGAS_bigint & inAssociatedValue1
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_arrayType::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_arrayType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_arrayType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_arrayType *> (inOperand) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_dynamicArrayType::cEnumAssociatedValues_typeKind_dynamicArrayType (const GALGAS_PLMType & inAssociatedValue0
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_dynamicArrayType::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_dynamicArrayType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_dynamicArrayType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_dynamicArrayType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_function::cEnumAssociatedValues_typeKind_function (const GALGAS_routineDescriptor & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_function::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_function * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_function *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_pointer::cEnumAssociatedValues_typeKind_pointer (const GALGAS_PLMType & inAssociatedValue0
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_pointer::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_pointer::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_pointer * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_pointer *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind::GALGAS_typeKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_void (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_void ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_boolean (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_boolean ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_literalString (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_literalString ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_enumeration (const GALGAS_uint & inAssociatedValue0
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_enumeration ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_enumeration (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_structure (const GALGAS_propertyList & inAssociatedValue0
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_structure ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_structure (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_syncTool (const GALGAS_propertyList & inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_syncTool ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_syncTool (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_integer (const GALGAS_bigint & inAssociatedValue0,
                                                      const GALGAS_bigint & inAssociatedValue1,
                                                      const GALGAS_bool & inAssociatedValue2,
                                                      const GALGAS_uint & inAssociatedValue3
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_integer ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_integer (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_staticInteger (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_staticInteger ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_opaque (const GALGAS_bigint & inAssociatedValue0
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_opaque ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_opaque (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_arrayType (const GALGAS_PLMType & inAssociatedValue0,
                                                        const GALGAS_bigint & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_arrayType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_arrayType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_dynamicArrayType (const GALGAS_PLMType & inAssociatedValue0
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_dynamicArrayType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_dynamicArrayType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_function (const GALGAS_routineDescriptor & inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_function (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_pointer (const GALGAS_PLMType & inAssociatedValue0
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_pointer ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_pointer (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_enumeration (GALGAS_uint & outAssociatedValue0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_enumeration) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind enumeration invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_enumeration * ptr = (const cEnumAssociatedValues_typeKind_enumeration *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_structure (GALGAS_propertyList & outAssociatedValue0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_structure) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind structure invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_structure * ptr = (const cEnumAssociatedValues_typeKind_structure *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_syncTool (GALGAS_propertyList & outAssociatedValue0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_syncTool) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind syncTool invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_syncTool * ptr = (const cEnumAssociatedValues_typeKind_syncTool *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_integer (GALGAS_bigint & outAssociatedValue0,
                                      GALGAS_bigint & outAssociatedValue1,
                                      GALGAS_bool & outAssociatedValue2,
                                      GALGAS_uint & outAssociatedValue3,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_integer) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @typeKind integer invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_integer * ptr = (const cEnumAssociatedValues_typeKind_integer *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_opaque (GALGAS_bigint & outAssociatedValue0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_opaque) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind opaque invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_opaque * ptr = (const cEnumAssociatedValues_typeKind_opaque *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_arrayType (GALGAS_PLMType & outAssociatedValue0,
                                        GALGAS_bigint & outAssociatedValue1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @typeKind arrayType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_arrayType * ptr = (const cEnumAssociatedValues_typeKind_arrayType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_dynamicArrayType (GALGAS_PLMType & outAssociatedValue0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_dynamicArrayType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind dynamicArrayType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_dynamicArrayType * ptr = (const cEnumAssociatedValues_typeKind_dynamicArrayType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_function (GALGAS_routineDescriptor & outAssociatedValue0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind function invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_function * ptr = (const cEnumAssociatedValues_typeKind_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_pointer (GALGAS_PLMType & outAssociatedValue0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_pointer) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind pointer invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_pointer * ptr = (const cEnumAssociatedValues_typeKind_pointer *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_typeKind [14] = {
  "(not built)",
  "void",
  "boolean",
  "literalString",
  "enumeration",
  "structure",
  "syncTool",
  "integer",
  "staticInteger",
  "opaque",
  "arrayType",
  "dynamicArrayType",
  "function",
  "pointer"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isVoid (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_void == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isBoolean (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolean == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalString == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isEnumeration (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumeration == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isStructure (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structure == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isSyncTool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_syncTool == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_integer == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isStaticInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_staticInteger == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isOpaque (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_opaque == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isDynamicArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_dynamicArrayType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isPointer (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_pointer == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<enum @typeKind: " << gEnumNameArrayFor_typeKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_typeKind::objectCompare (const GALGAS_typeKind & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @typeKind type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  const GALGAS_typeKind * p = (const GALGAS_typeKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@arcAssignmentList' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_arcAssignmentList : public cCollectionElement {
  public : GALGAS_arcAssignmentList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_arcAssignmentList (const GALGAS_string & in_mPropertyName,
                                                 const GALGAS_PLMType & in_mPropertyType,
                                                 const GALGAS_uintlist & in_mPropertyIndexPath
                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_arcAssignmentList (const GALGAS_arcAssignmentList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arcAssignmentList::cCollectionElement_arcAssignmentList (const GALGAS_string & in_mPropertyName,
                                                                            const GALGAS_PLMType & in_mPropertyType,
                                                                            const GALGAS_uintlist & in_mPropertyIndexPath
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyType, in_mPropertyIndexPath) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arcAssignmentList::cCollectionElement_arcAssignmentList (const GALGAS_arcAssignmentList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyType, inElement.mProperty_mPropertyIndexPath) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_arcAssignmentList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_arcAssignmentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arcAssignmentList (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyType, mObject.mProperty_mPropertyIndexPath COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_arcAssignmentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyType" ":" ;
  mObject.mProperty_mPropertyType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyIndexPath" ":" ;
  mObject.mProperty_mPropertyIndexPath.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_arcAssignmentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arcAssignmentList * operand = (cCollectionElement_arcAssignmentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arcAssignmentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList::GALGAS_arcAssignmentList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList::GALGAS_arcAssignmentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arcAssignmentList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                              const GALGAS_PLMType & inOperand1,
                                                                              const GALGAS_uintlist & inOperand2
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_arcAssignmentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arcAssignmentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_string & in_mPropertyName,
                                                          const GALGAS_PLMType & in_mPropertyType,
                                                          const GALGAS_uintlist & in_mPropertyIndexPath
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_arcAssignmentList * p = NULL ;
  macroMyNew (p, cCollectionElement_arcAssignmentList (in_mPropertyName,
                                                       in_mPropertyType,
                                                       in_mPropertyIndexPath COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::addAssign_operation (const GALGAS_string & inOperand0,
                                                    const GALGAS_PLMType & inOperand1,
                                                    const GALGAS_uintlist & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arcAssignmentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::setter_append (GALGAS_arcAssignmentList_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arcAssignmentList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                     const GALGAS_PLMType inOperand1,
                                                     const GALGAS_uintlist inOperand2,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arcAssignmentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                     GALGAS_PLMType & outOperand1,
                                                     GALGAS_uintlist & outOperand2,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mPropertyType ;
      outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::setter_popFirst (GALGAS_string & outOperand0,
                                                GALGAS_PLMType & outOperand1,
                                                GALGAS_uintlist & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
    outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::setter_popLast (GALGAS_string & outOperand0,
                                               GALGAS_PLMType & outOperand1,
                                               GALGAS_uintlist & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
    outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::method_first (GALGAS_string & outOperand0,
                                             GALGAS_PLMType & outOperand1,
                                             GALGAS_uintlist & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
    outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::method_last (GALGAS_string & outOperand0,
                                            GALGAS_PLMType & outOperand1,
                                            GALGAS_uintlist & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
    outOperand2 = p->mObject.mProperty_mPropertyIndexPath ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::add_operation (const GALGAS_arcAssignmentList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result = GALGAS_arcAssignmentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result = GALGAS_arcAssignmentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_arcAssignmentList result = GALGAS_arcAssignmentList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arcAssignmentList::plusAssign_operation (const GALGAS_arcAssignmentList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arcAssignmentList::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_arcAssignmentList::getter_mPropertyTypeAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uintlist GALGAS_arcAssignmentList::getter_mPropertyIndexPathAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arcAssignmentList * p = (cCollectionElement_arcAssignmentList *) attributes.ptr () ;
  GALGAS_uintlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
    result = p->mObject.mProperty_mPropertyIndexPath ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_arcAssignmentList::cEnumerator_arcAssignmentList (const GALGAS_arcAssignmentList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList_2D_element cEnumerator_arcAssignmentList::current (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arcAssignmentList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_arcAssignmentList::current_mPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uintlist cEnumerator_arcAssignmentList::current_mPropertyIndexPath (LOCATION_ARGS) const {
  const cCollectionElement_arcAssignmentList * p = (const cCollectionElement_arcAssignmentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arcAssignmentList) ;
  return p->mObject.mProperty_mPropertyIndexPath ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @arcAssignmentList type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arcAssignmentList ("arcAssignmentList",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arcAssignmentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arcAssignmentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arcAssignmentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arcAssignmentList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList GALGAS_arcAssignmentList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList result ;
  const GALGAS_arcAssignmentList * p = (const GALGAS_arcAssignmentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arcAssignmentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arcAssignmentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@orderedTypeList' sorted list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cSortedListElement_orderedTypeList : public cSortedListElement {
  public : GALGAS_orderedTypeList_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_orderedTypeList (const GALGAS_PLMType & in_mType,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cSortedListElement_orderedTypeList::cSortedListElement_orderedTypeList (const GALGAS_PLMType & in_mType,
                                                                        const GALGAS_uint & in_mIndex
                                                                        COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mType, in_mIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cSortedListElement_orderedTypeList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cSortedListElement * cSortedListElement_orderedTypeList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_orderedTypeList (mObject.mProperty_mType, mObject.mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cSortedListElement_orderedTypeList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mObject.mProperty_mIndex.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_orderedTypeList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_orderedTypeList * operand = (cSortedListElement_orderedTypeList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_orderedTypeList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orderedTypeList::GALGAS_orderedTypeList (void) :
AC_GALGAS_sortedlist () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_orderedTypeList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_orderedTypeList * operand = (const cSortedListElement_orderedTypeList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_orderedTypeList) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mIndex.objectCompare (operand->mObject.mProperty_mIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orderedTypeList GALGAS_orderedTypeList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_orderedTypeList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orderedTypeList GALGAS_orderedTypeList::constructor_sortedListWithValue (const GALGAS_PLMType & inOperand0,
                                                                                const GALGAS_uint & inOperand1
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_orderedTypeList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_orderedTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_orderedTypeList::addAssign_operation (const GALGAS_PLMType & inOperand0,
                                                  const GALGAS_uint & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_orderedTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_orderedTypeList::plusAssign_operation (const GALGAS_orderedTypeList inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_orderedTypeList::setter_popSmallest (GALGAS_PLMType & outOperand0,
                                                 GALGAS_uint & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_orderedTypeList * p = (cSortedListElement_orderedTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_orderedTypeList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_orderedTypeList::setter_popGreatest (GALGAS_PLMType & outOperand0,
                                                 GALGAS_uint & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_orderedTypeList * p = (cSortedListElement_orderedTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_orderedTypeList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_orderedTypeList::method_smallest (GALGAS_PLMType & outOperand0,
                                              GALGAS_uint & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_orderedTypeList * p = (cSortedListElement_orderedTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_orderedTypeList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_orderedTypeList::method_greatest (GALGAS_PLMType & outOperand0,
                                              GALGAS_uint & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_orderedTypeList * p = (cSortedListElement_orderedTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_orderedTypeList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_orderedTypeList::cEnumerator_orderedTypeList (const GALGAS_orderedTypeList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orderedTypeList_2D_element cEnumerator_orderedTypeList::current (LOCATION_ARGS) const {
  const cSortedListElement_orderedTypeList * p = (const cSortedListElement_orderedTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_orderedTypeList) ;
  return p->mObject ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_orderedTypeList::current_mType (LOCATION_ARGS) const {
  const cSortedListElement_orderedTypeList * p = (const cSortedListElement_orderedTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_orderedTypeList) ;
  return p->mObject.mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_orderedTypeList::current_mIndex (LOCATION_ARGS) const {
  const cSortedListElement_orderedTypeList * p = (const cSortedListElement_orderedTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_orderedTypeList) ;
  return p->mObject.mProperty_mIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @orderedTypeList type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orderedTypeList ("orderedTypeList",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_orderedTypeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orderedTypeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_orderedTypeList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orderedTypeList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orderedTypeList GALGAS_orderedTypeList::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orderedTypeList result ;
  const GALGAS_orderedTypeList * p = (const GALGAS_orderedTypeList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orderedTypeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orderedTypeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

