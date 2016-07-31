#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"




//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_specific_5F_syntax::rule_plm_5F_specific_5F_syntax_declaration_i0_ (GALGAS_ast & ioArgument_ioAST,
                                                                                        C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_target) COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  GALGAS_lstring var_targetName_610 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_literal_5F_string) COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  ioArgument_ioAST.mAttribute_mTargetList.addAssign_operation (var_targetName_610  COMMA_SOURCE_FILE ("target-generation.galgas", 12)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_specific_5F_syntax::rule_plm_5F_specific_5F_syntax_declaration_i0_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_target) COMMA_SOURCE_FILE ("target-generation.galgas", 10)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_literal_5F_string) COMMA_SOURCE_FILE ("target-generation.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_declaration_i0_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                            C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_configuration) COMMA_SOURCE_FILE ("configuration.galgas", 46)) ;
  GALGAS_lbigint var_pointerSize_2027 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 47)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 48)) ;
  GALGAS_lstring var_panicCodeTypeName_2073 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_typeName) COMMA_SOURCE_FILE ("configuration.galgas", 49)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 50)) ;
  GALGAS_lstring var_panicLineTypeName_2120 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_typeName) COMMA_SOURCE_FILE ("configuration.galgas", 51)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 52)) ;
  GALGAS_lstring var_unsignedIntegerTypeName_2172 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_typeName) COMMA_SOURCE_FILE ("configuration.galgas", 53)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 54)) ;
  GALGAS_lbigint var_systemStackSize_2215 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 55)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 56)) ;
  GALGAS_lbigint var_stackedUserRegisterOnInterruptByteSize_2281 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 57)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 58)) ;
  GALGAS_lbigint var_servicePushedRegisterByteSize_2338 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 59)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 60)) ;
  GALGAS_lbigint var_sectionPushedRegisterByteSize_2395 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 61)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("configuration.galgas", 62)) ;
  GALGAS_targetParameters var_parameters_2422 = GALGAS_targetParameters::constructor_new (var_systemStackSize_2215, var_stackedUserRegisterOnInterruptByteSize_2281, var_servicePushedRegisterByteSize_2338, var_sectionPushedRegisterByteSize_2395  COMMA_SOURCE_FILE ("configuration.galgas", 63)) ;
  GALGAS_interruptionConfigurationList var_interruptionConfigurationList_2662 = GALGAS_interruptionConfigurationList::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_interruptName_2726 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("configuration.galgas", 72)) ;
      GALGAS_interruptionPanicCode var_interruptionPanicCode_2777 ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
      case 1: {
        var_interruptionPanicCode_2777 = GALGAS_interruptionPanicCode::constructor_noPanicCode (SOURCE_FILE ("configuration.galgas", 75)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 77)) ;
        GALGAS_lbigint var_panicCode_2889 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 78)) ;
        var_interruptionPanicCode_2777 = GALGAS_interruptionPanicCode::constructor_panicCode (var_panicCode_2889  COMMA_SOURCE_FILE ("configuration.galgas", 79)) ;
      } break ;
      default:
        break ;
      }
      var_interruptionConfigurationList_2662.addAssign_operation (var_interruptName_2726, var_interruptionPanicCode_2777  COMMA_SOURCE_FILE ("configuration.galgas", 81)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("configuration.galgas", 83)) ;
  ioArgument_ioAST.mAttribute_mDeclarationList.addAssign_operation (GALGAS_configurationDeclarationAST::constructor_new (var_pointerSize_2027, var_panicCodeTypeName_2073, var_panicLineTypeName_2120, var_unsignedIntegerTypeName_2172, var_parameters_2422, var_interruptionConfigurationList_2662  COMMA_SOURCE_FILE ("configuration.galgas", 84))  COMMA_SOURCE_FILE ("configuration.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_declaration_i0_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_configuration) COMMA_SOURCE_FILE ("configuration.galgas", 46)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 47)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 48)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_typeName) COMMA_SOURCE_FILE ("configuration.galgas", 49)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 50)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_typeName) COMMA_SOURCE_FILE ("configuration.galgas", 51)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 52)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_typeName) COMMA_SOURCE_FILE ("configuration.galgas", 53)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 54)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 55)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 56)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 57)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 58)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 59)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 60)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 61)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("configuration.galgas", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_plm_5F_target_5F_specific_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("configuration.galgas", 72)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 77)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 78)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("configuration.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
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
  macroMyNew (result, cCollectionElement_interruptionConfigurationList (mObject.mAttribute_mInterruptName, mObject.mAttribute_mInterruptionPanicCode COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_interruptionConfigurationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInterruptName" ":" ;
  mObject.mAttribute_mInterruptName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInterruptionPanicCode" ":" ;
  mObject.mAttribute_mInterruptionPanicCode.description (ioString, inIndentation) ;
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

GALGAS_interruptionConfigurationList::GALGAS_interruptionConfigurationList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_interruptionPanicCode & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_interruptionConfigurationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
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
    addObject (attributes) ;
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      outOperand0 = p->mObject.mAttribute_mInterruptName ;
      outOperand1 = p->mObject.mAttribute_mInterruptionPanicCode ;
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
    outOperand0 = p->mObject.mAttribute_mInterruptName ;
    outOperand1 = p->mObject.mAttribute_mInterruptionPanicCode ;
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
    outOperand0 = p->mObject.mAttribute_mInterruptName ;
    outOperand1 = p->mObject.mAttribute_mInterruptionPanicCode ;
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
    outOperand0 = p->mObject.mAttribute_mInterruptName ;
    outOperand1 = p->mObject.mAttribute_mInterruptionPanicCode ;
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
    outOperand0 = p->mObject.mAttribute_mInterruptName ;
    outOperand1 = p->mObject.mAttribute_mInterruptionPanicCode ;
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
    result = p->mObject.mAttribute_mInterruptName ;
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
    result = p->mObject.mAttribute_mInterruptionPanicCode ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_interruptionConfigurationList::cEnumerator_interruptionConfigurationList (const GALGAS_interruptionConfigurationList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mInterruptName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode cEnumerator_interruptionConfigurationList::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject.mAttribute_mInterruptionPanicCode ;
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

cMapElement_enumConstantMap::cMapElement_enumConstantMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mIndex
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIndex (in_mIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_enumConstantMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_enumConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_enumConstantMap (mAttribute_lkey, mAttribute_mIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_enumConstantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mAttribute_mIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_enumConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_enumConstantMap * operand = (cMapElement_enumConstantMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (operand->mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap::GALGAS_enumConstantMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap::GALGAS_enumConstantMap (const GALGAS_enumConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap & GALGAS_enumConstantMap::operator = (const GALGAS_enumConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap GALGAS_enumConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap GALGAS_enumConstantMap::constructor_mapWithMapToOverride (const GALGAS_enumConstantMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap GALGAS_enumConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_uint & inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_enumConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@enumConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_uint inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_enumConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_enumConstantMap_searchKey = "there is no '%K' constant" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_uint & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_enumConstantMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
    outArgument0 = p->mAttribute_mIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_enumConstantMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_enumConstantMap * p = (cMapElement_enumConstantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
    p->mAttribute_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_enumConstantMap * GALGAS_enumConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * result = (cMapElement_enumConstantMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_enumConstantMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_enumConstantMap::cEnumerator_enumConstantMap (const GALGAS_enumConstantMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element cEnumerator_enumConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumConstantMap) ;
  return GALGAS_enumConstantMap_2D_element (p->mAttribute_lkey, p->mAttribute_mIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_enumConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_enumConstantMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumConstantMap) ;
  return p->mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @enumConstantMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap ("enumConstantMap",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap GALGAS_enumConstantMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  const GALGAS_enumConstantMap * p = (const GALGAS_enumConstantMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@structureFieldListAST' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_structureFieldListAST : public cCollectionElement {
  public : GALGAS_structureFieldListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_structureFieldListAST (const GALGAS_lstring & in_mFieldName,
                                                     const GALGAS_bool & in_mIsPublic,
                                                     const GALGAS_lstring & in_mFieldTypeName,
                                                     const GALGAS_structureVarInit & in_mInitialisation
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

cCollectionElement_structureFieldListAST::cCollectionElement_structureFieldListAST (const GALGAS_lstring & in_mFieldName,
                                                                                    const GALGAS_bool & in_mIsPublic,
                                                                                    const GALGAS_lstring & in_mFieldTypeName,
                                                                                    const GALGAS_structureVarInit & in_mInitialisation
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFieldName, in_mIsPublic, in_mFieldTypeName, in_mInitialisation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_structureFieldListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_structureFieldListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_structureFieldListAST (mObject.mAttribute_mFieldName, mObject.mAttribute_mIsPublic, mObject.mAttribute_mFieldTypeName, mObject.mAttribute_mInitialisation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_structureFieldListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldName" ":" ;
  mObject.mAttribute_mFieldName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mObject.mAttribute_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldTypeName" ":" ;
  mObject.mAttribute_mFieldTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialisation" ":" ;
  mObject.mAttribute_mInitialisation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_structureFieldListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_structureFieldListAST * operand = (cCollectionElement_structureFieldListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_structureFieldListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST::GALGAS_structureFieldListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST::GALGAS_structureFieldListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST GALGAS_structureFieldListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_structureFieldListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST GALGAS_structureFieldListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_bool & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2,
                                                                                      const GALGAS_structureVarInit & inOperand3
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_structureFieldListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_structureFieldListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mFieldName,
                                                              const GALGAS_bool & in_mIsPublic,
                                                              const GALGAS_lstring & in_mFieldTypeName,
                                                              const GALGAS_structureVarInit & in_mInitialisation
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_structureFieldListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_structureFieldListAST (in_mFieldName,
                                                           in_mIsPublic,
                                                           in_mFieldTypeName,
                                                           in_mInitialisation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_bool & inOperand1,
                                                        const GALGAS_lstring & inOperand2,
                                                        const GALGAS_structureVarInit & inOperand3
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_structureFieldListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_bool inOperand1,
                                                         const GALGAS_lstring inOperand2,
                                                         const GALGAS_structureVarInit inOperand3,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_structureFieldListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_bool & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_structureVarInit & outOperand3,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_structureFieldListAST * p = (cCollectionElement_structureFieldListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
      outOperand0 = p->mObject.mAttribute_mFieldName ;
      outOperand1 = p->mObject.mAttribute_mIsPublic ;
      outOperand2 = p->mObject.mAttribute_mFieldTypeName ;
      outOperand3 = p->mObject.mAttribute_mInitialisation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_bool & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_structureVarInit & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structureFieldListAST * p = (cCollectionElement_structureFieldListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
    outOperand0 = p->mObject.mAttribute_mFieldName ;
    outOperand1 = p->mObject.mAttribute_mIsPublic ;
    outOperand2 = p->mObject.mAttribute_mFieldTypeName ;
    outOperand3 = p->mObject.mAttribute_mInitialisation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_bool & outOperand1,
                                                   GALGAS_lstring & outOperand2,
                                                   GALGAS_structureVarInit & outOperand3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structureFieldListAST * p = (cCollectionElement_structureFieldListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
    outOperand0 = p->mObject.mAttribute_mFieldName ;
    outOperand1 = p->mObject.mAttribute_mIsPublic ;
    outOperand2 = p->mObject.mAttribute_mFieldTypeName ;
    outOperand3 = p->mObject.mAttribute_mInitialisation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_bool & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_structureVarInit & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structureFieldListAST * p = (cCollectionElement_structureFieldListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
    outOperand0 = p->mObject.mAttribute_mFieldName ;
    outOperand1 = p->mObject.mAttribute_mIsPublic ;
    outOperand2 = p->mObject.mAttribute_mFieldTypeName ;
    outOperand3 = p->mObject.mAttribute_mInitialisation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_bool & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                GALGAS_structureVarInit & outOperand3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structureFieldListAST * p = (cCollectionElement_structureFieldListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
    outOperand0 = p->mObject.mAttribute_mFieldName ;
    outOperand1 = p->mObject.mAttribute_mIsPublic ;
    outOperand2 = p->mObject.mAttribute_mFieldTypeName ;
    outOperand3 = p->mObject.mAttribute_mInitialisation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST GALGAS_structureFieldListAST::add_operation (const GALGAS_structureFieldListAST & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_structureFieldListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST GALGAS_structureFieldListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_structureFieldListAST result = GALGAS_structureFieldListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST GALGAS_structureFieldListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_structureFieldListAST result = GALGAS_structureFieldListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST GALGAS_structureFieldListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_structureFieldListAST result = GALGAS_structureFieldListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST::plusAssign_operation (const GALGAS_structureFieldListAST inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structureFieldListAST::getter_mFieldNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structureFieldListAST * p = (cCollectionElement_structureFieldListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
    result = p->mObject.mAttribute_mFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structureFieldListAST::getter_mIsPublicAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structureFieldListAST * p = (cCollectionElement_structureFieldListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
    result = p->mObject.mAttribute_mIsPublic ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structureFieldListAST::getter_mFieldTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structureFieldListAST * p = (cCollectionElement_structureFieldListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
    result = p->mObject.mAttribute_mFieldTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureVarInit GALGAS_structureFieldListAST::getter_mInitialisationAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structureFieldListAST * p = (cCollectionElement_structureFieldListAST *) attributes.ptr () ;
  GALGAS_structureVarInit result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
    result = p->mObject.mAttribute_mInitialisation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_structureFieldListAST::cEnumerator_structureFieldListAST (const GALGAS_structureFieldListAST & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element cEnumerator_structureFieldListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_structureFieldListAST * p = (const cCollectionElement_structureFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_structureFieldListAST::current_mFieldName (LOCATION_ARGS) const {
  const cCollectionElement_structureFieldListAST * p = (const cCollectionElement_structureFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
  return p->mObject.mAttribute_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_structureFieldListAST::current_mIsPublic (LOCATION_ARGS) const {
  const cCollectionElement_structureFieldListAST * p = (const cCollectionElement_structureFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
  return p->mObject.mAttribute_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_structureFieldListAST::current_mFieldTypeName (LOCATION_ARGS) const {
  const cCollectionElement_structureFieldListAST * p = (const cCollectionElement_structureFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
  return p->mObject.mAttribute_mFieldTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureVarInit cEnumerator_structureFieldListAST::current_mInitialisation (LOCATION_ARGS) const {
  const cCollectionElement_structureFieldListAST * p = (const cCollectionElement_structureFieldListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structureFieldListAST) ;
  return p->mObject.mAttribute_mInitialisation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @structureFieldListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureFieldListAST ("structureFieldListAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structureFieldListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureFieldListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structureFieldListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureFieldListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST GALGAS_structureFieldListAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structureFieldListAST result ;
  const GALGAS_structureFieldListAST * p = (const GALGAS_structureFieldListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureFieldListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureFieldListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_structureVarInit_expression::cEnumAssociatedValues_structureVarInit_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_structureVarInit_expression::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_structureVarInit_expression::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_structureVarInit_expression * ptr = dynamic_cast<const cEnumAssociatedValues_structureVarInit_expression *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureVarInit::GALGAS_structureVarInit (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureVarInit GALGAS_structureVarInit::constructor_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_structureVarInit result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_expression ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_structureVarInit_expression (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureVarInit GALGAS_structureVarInit::constructor_noExpression (UNUSED_LOCATION_ARGS) {
  GALGAS_structureVarInit result ;
  result.mEnum = kEnum_noExpression ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureVarInit::method_expression (GALGAS_expressionAST & outAssociatedValue0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_expression) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @structureVarInit expression invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_structureVarInit_expression * ptr = (const cEnumAssociatedValues_structureVarInit_expression *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_structureVarInit [3] = {
  "(not built)",
  "expression",
  "noExpression"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structureVarInit::getter_isExpression (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_expression == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structureVarInit::getter_isNoExpression (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noExpression == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureVarInit::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @structureVarInit: " << gEnumNameArrayFor_structureVarInit [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_structureVarInit::objectCompare (const GALGAS_structureVarInit & inOperand) const {
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
//                                               @structureVarInit type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureVarInit ("structureVarInit",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structureVarInit::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureVarInit ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structureVarInit::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureVarInit (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureVarInit GALGAS_structureVarInit::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structureVarInit result ;
  const GALGAS_structureVarInit * p = (const GALGAS_structureVarInit *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureVarInit *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureVarInit", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mType
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
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mType
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
  macroMyNew (result, cCollectionElement_propertyList (mObject.mAttribute_mPropertyName, mObject.mAttribute_mType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_propertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mAttribute_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
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

GALGAS_propertyList::GALGAS_propertyList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_propertyList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_propertyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_string & in_mPropertyName,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_propertyList (in_mPropertyName,
                                                  in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::addAssign_operation (const GALGAS_string & inOperand0,
                                               const GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
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
      outOperand0 = p->mObject.mAttribute_mPropertyName ;
      outOperand1 = p->mObject.mAttribute_mType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::setter_popFirst (GALGAS_string & outOperand0,
                                           GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
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
    outOperand0 = p->mObject.mAttribute_mPropertyName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::setter_popLast (GALGAS_string & outOperand0,
                                          GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
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
    outOperand0 = p->mObject.mAttribute_mPropertyName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::method_first (GALGAS_string & outOperand0,
                                        GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
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
    outOperand0 = p->mObject.mAttribute_mPropertyName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::method_last (GALGAS_string & outOperand0,
                                       GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
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
    outOperand0 = p->mObject.mAttribute_mPropertyName ;
    outOperand1 = p->mObject.mAttribute_mType ;
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
    result = p->mObject.mAttribute_mPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_propertyList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_propertyList::cEnumerator_propertyList (const GALGAS_propertyList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_propertyList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_propertyList * p = (const cCollectionElement_propertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyList) ;
  return p->mObject.mAttribute_mType ;
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

cMapElement_propertyMap::cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_bool & in_mIsPublic,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                  const GALGAS_uint & in_mIndex
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIsPublic (in_mIsPublic),
mAttribute_mTypeProxy (in_mTypeProxy),
mAttribute_mIndex (in_mIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_propertyMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsPublic.isValid () && mAttribute_mTypeProxy.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_propertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_propertyMap (mAttribute_lkey, mAttribute_mIsPublic, mAttribute_mTypeProxy, mAttribute_mIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_propertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mAttribute_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeProxy" ":" ;
  mAttribute_mTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mAttribute_mIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_propertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_propertyMap * operand = (cMapElement_propertyMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPublic.objectCompare (operand->mAttribute_mIsPublic) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeProxy.objectCompare (operand->mAttribute_mTypeProxy) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (operand->mAttribute_mIndex) ;
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
                                              const GALGAS_unifiedTypeMap_2D_proxy & inArgument1,
                                              const GALGAS_uint & inArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
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
                                           GALGAS_unifiedTypeMap_2D_proxy inArgument1,
                                           GALGAS_uint inArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
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
                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                           GALGAS_uint & outArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kSearchErrorMessage_propertyMap_searchKey
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    outArgument0 = p->mAttribute_mIsPublic ;
    outArgument1 = p->mAttribute_mTypeProxy ;
    outArgument2 = p->mAttribute_mIndex ;
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
    result = p->mAttribute_mIsPublic ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_propertyMap::getter_mTypeProxyForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mAttribute_mTypeProxy ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_propertyMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap::setter_setMIsPublicForKey (GALGAS_bool inAttributeValue,
                                                    GALGAS_string inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mAttribute_mIsPublic = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap::setter_setMTypeProxyForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mAttribute_mTypeProxy = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                 GALGAS_string inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mAttribute_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_propertyMap * GALGAS_propertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * result = (cMapElement_propertyMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_propertyMap::cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element cEnumerator_propertyMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return GALGAS_propertyMap_2D_element (p->mAttribute_lkey, p->mAttribute_mIsPublic, p->mAttribute_mTypeProxy, p->mAttribute_mIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_propertyMap::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mAttribute_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_propertyMap::current_mTypeProxy (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mAttribute_mTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_propertyMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mAttribute_mIndex ;
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
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
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
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
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
  macroMyNew (result, cCollectionElement_constructorSignature (mObject.mAttribute_mSelector, mObject.mAttribute_mType, mObject.mAttribute_mFieldIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_constructorSignature::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mAttribute_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldIndex" ":" ;
  mObject.mAttribute_mFieldIndex.description (ioString, inIndentation) ;
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

GALGAS_constructorSignature::GALGAS_constructorSignature (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature GALGAS_constructorSignature::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_constructorSignature result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature GALGAS_constructorSignature::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                    const GALGAS_uint & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_constructorSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_constructorSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_string & in_mSelector,
                                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
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
                                                       const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                       const GALGAS_uint & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_constructorSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                        const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                        GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
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
      outOperand0 = p->mObject.mAttribute_mSelector ;
      outOperand1 = p->mObject.mAttribute_mType ;
      outOperand2 = p->mObject.mAttribute_mFieldIndex ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::setter_popFirst (GALGAS_string & outOperand0,
                                                   GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
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
    outOperand0 = p->mObject.mAttribute_mSelector ;
    outOperand1 = p->mObject.mAttribute_mType ;
    outOperand2 = p->mObject.mAttribute_mFieldIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::setter_popLast (GALGAS_string & outOperand0,
                                                  GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
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
    outOperand0 = p->mObject.mAttribute_mSelector ;
    outOperand1 = p->mObject.mAttribute_mType ;
    outOperand2 = p->mObject.mAttribute_mFieldIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::method_first (GALGAS_string & outOperand0,
                                                GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
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
    outOperand0 = p->mObject.mAttribute_mSelector ;
    outOperand1 = p->mObject.mAttribute_mType ;
    outOperand2 = p->mObject.mAttribute_mFieldIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::method_last (GALGAS_string & outOperand0,
                                               GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
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
    outOperand0 = p->mObject.mAttribute_mSelector ;
    outOperand1 = p->mObject.mAttribute_mType ;
    outOperand2 = p->mObject.mAttribute_mFieldIndex ;
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
    result = p->mObject.mAttribute_mSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_constructorSignature::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    result = p->mObject.mAttribute_mType ;
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
    result = p->mObject.mAttribute_mFieldIndex ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_constructorSignature::cEnumerator_constructorSignature (const GALGAS_constructorSignature & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_constructorSignature::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject.mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_constructorSignature::current_mFieldIndex (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject.mAttribute_mFieldIndex ;
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
  macroMyNew (result, cSortedListElement_sortedOperandIRList (mObject.mAttribute_mOperand, mObject.mAttribute_mIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_sortedOperandIRList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperand" ":" ;
  mObject.mAttribute_mOperand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mObject.mAttribute_mIndex.description (ioString, inIndentation) ;
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
    result = mObject.mAttribute_mIndex.objectCompare (operand->mObject.mAttribute_mIndex) ;
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
  result.addObject (attributes) ;
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
    addObject (attributes) ;
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
    outOperand0 = p->mObject.mAttribute_mOperand ;
    outOperand1 = p->mObject.mAttribute_mIndex ;
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
    outOperand0 = p->mObject.mAttribute_mOperand ;
    outOperand1 = p->mObject.mAttribute_mIndex ;
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
    outOperand0 = p->mObject.mAttribute_mOperand ;
    outOperand1 = p->mObject.mAttribute_mIndex ;
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
    outOperand0 = p->mObject.mAttribute_mOperand ;
    outOperand1 = p->mObject.mAttribute_mIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_sortedOperandIRList::cEnumerator_sortedOperandIRList (const GALGAS_sortedOperandIRList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_sortedOperandIRList::current_mIndex (LOCATION_ARGS) const {
  const cSortedListElement_sortedOperandIRList * p = (const cSortedListElement_sortedOperandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
  return p->mObject.mAttribute_mIndex ;
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
//                                Class for element of '@controlRegisterNameList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_controlRegisterNameList : public cCollectionElement {
  public : GALGAS_controlRegisterNameList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_controlRegisterNameList (const GALGAS_lstring & in_mRegisterName,
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

cCollectionElement_controlRegisterNameList::cCollectionElement_controlRegisterNameList (const GALGAS_lstring & in_mRegisterName,
                                                                                        const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                                                        const GALGAS_lstringlist & in_mAttributeList,
                                                                                        const GALGAS_expressionAST & in_mRegisterAddress,
                                                                                        const GALGAS_location & in_mRegisterAddressLocation
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterName, in_mControlRegisterKind, in_mAttributeList, in_mRegisterAddress, in_mRegisterAddressLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_controlRegisterNameList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_controlRegisterNameList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controlRegisterNameList (mObject.mAttribute_mRegisterName, mObject.mAttribute_mControlRegisterKind, mObject.mAttribute_mAttributeList, mObject.mAttribute_mRegisterAddress, mObject.mAttribute_mRegisterAddressLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_controlRegisterNameList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterName" ":" ;
  mObject.mAttribute_mRegisterName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterKind" ":" ;
  mObject.mAttribute_mControlRegisterKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeList" ":" ;
  mObject.mAttribute_mAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterAddress" ":" ;
  mObject.mAttribute_mRegisterAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterAddressLocation" ":" ;
  mObject.mAttribute_mRegisterAddressLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_controlRegisterNameList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterNameList * operand = (cCollectionElement_controlRegisterNameList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterNameList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList::GALGAS_controlRegisterNameList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList::GALGAS_controlRegisterNameList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList GALGAS_controlRegisterNameList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_controlRegisterNameList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList GALGAS_controlRegisterNameList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_controlRegisterKind & inOperand1,
                                                                                          const GALGAS_lstringlist & inOperand2,
                                                                                          const GALGAS_expressionAST & inOperand3,
                                                                                          const GALGAS_location & inOperand4
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterNameList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterNameList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mRegisterName,
                                                                const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                                const GALGAS_lstringlist & in_mAttributeList,
                                                                const GALGAS_expressionAST & in_mRegisterAddress,
                                                                const GALGAS_location & in_mRegisterAddressLocation
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterNameList * p = NULL ;
  macroMyNew (p, cCollectionElement_controlRegisterNameList (in_mRegisterName,
                                                             in_mControlRegisterKind,
                                                             in_mAttributeList,
                                                             in_mRegisterAddress,
                                                             in_mRegisterAddressLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_controlRegisterKind & inOperand1,
                                                          const GALGAS_lstringlist & inOperand2,
                                                          const GALGAS_expressionAST & inOperand3,
                                                          const GALGAS_location & inOperand4
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterNameList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_controlRegisterKind inOperand1,
                                                           const GALGAS_lstringlist inOperand2,
                                                           const GALGAS_expressionAST inOperand3,
                                                           const GALGAS_location inOperand4,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterNameList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
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
    cCollectionElement_controlRegisterNameList * p = (cCollectionElement_controlRegisterNameList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
      outOperand0 = p->mObject.mAttribute_mRegisterName ;
      outOperand1 = p->mObject.mAttribute_mControlRegisterKind ;
      outOperand2 = p->mObject.mAttribute_mAttributeList ;
      outOperand3 = p->mObject.mAttribute_mRegisterAddress ;
      outOperand4 = p->mObject.mAttribute_mRegisterAddressLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_controlRegisterKind & outOperand1,
                                                      GALGAS_lstringlist & outOperand2,
                                                      GALGAS_expressionAST & outOperand3,
                                                      GALGAS_location & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameList * p = (cCollectionElement_controlRegisterNameList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
    outOperand0 = p->mObject.mAttribute_mRegisterName ;
    outOperand1 = p->mObject.mAttribute_mControlRegisterKind ;
    outOperand2 = p->mObject.mAttribute_mAttributeList ;
    outOperand3 = p->mObject.mAttribute_mRegisterAddress ;
    outOperand4 = p->mObject.mAttribute_mRegisterAddressLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_controlRegisterKind & outOperand1,
                                                     GALGAS_lstringlist & outOperand2,
                                                     GALGAS_expressionAST & outOperand3,
                                                     GALGAS_location & outOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameList * p = (cCollectionElement_controlRegisterNameList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
    outOperand0 = p->mObject.mAttribute_mRegisterName ;
    outOperand1 = p->mObject.mAttribute_mControlRegisterKind ;
    outOperand2 = p->mObject.mAttribute_mAttributeList ;
    outOperand3 = p->mObject.mAttribute_mRegisterAddress ;
    outOperand4 = p->mObject.mAttribute_mRegisterAddressLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_controlRegisterKind & outOperand1,
                                                   GALGAS_lstringlist & outOperand2,
                                                   GALGAS_expressionAST & outOperand3,
                                                   GALGAS_location & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameList * p = (cCollectionElement_controlRegisterNameList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
    outOperand0 = p->mObject.mAttribute_mRegisterName ;
    outOperand1 = p->mObject.mAttribute_mControlRegisterKind ;
    outOperand2 = p->mObject.mAttribute_mAttributeList ;
    outOperand3 = p->mObject.mAttribute_mRegisterAddress ;
    outOperand4 = p->mObject.mAttribute_mRegisterAddressLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_controlRegisterKind & outOperand1,
                                                  GALGAS_lstringlist & outOperand2,
                                                  GALGAS_expressionAST & outOperand3,
                                                  GALGAS_location & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameList * p = (cCollectionElement_controlRegisterNameList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
    outOperand0 = p->mObject.mAttribute_mRegisterName ;
    outOperand1 = p->mObject.mAttribute_mControlRegisterKind ;
    outOperand2 = p->mObject.mAttribute_mAttributeList ;
    outOperand3 = p->mObject.mAttribute_mRegisterAddress ;
    outOperand4 = p->mObject.mAttribute_mRegisterAddressLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList GALGAS_controlRegisterNameList::add_operation (const GALGAS_controlRegisterNameList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterNameList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList GALGAS_controlRegisterNameList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterNameList result = GALGAS_controlRegisterNameList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList GALGAS_controlRegisterNameList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterNameList result = GALGAS_controlRegisterNameList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList GALGAS_controlRegisterNameList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterNameList result = GALGAS_controlRegisterNameList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList::plusAssign_operation (const GALGAS_controlRegisterNameList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterNameList::getter_mRegisterNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameList * p = (cCollectionElement_controlRegisterNameList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
    result = p->mObject.mAttribute_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterKind GALGAS_controlRegisterNameList::getter_mControlRegisterKindAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameList * p = (cCollectionElement_controlRegisterNameList *) attributes.ptr () ;
  GALGAS_controlRegisterKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
    result = p->mObject.mAttribute_mControlRegisterKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_controlRegisterNameList::getter_mAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameList * p = (cCollectionElement_controlRegisterNameList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
    result = p->mObject.mAttribute_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_controlRegisterNameList::getter_mRegisterAddressAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameList * p = (cCollectionElement_controlRegisterNameList *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
    result = p->mObject.mAttribute_mRegisterAddress ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_controlRegisterNameList::getter_mRegisterAddressLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameList * p = (cCollectionElement_controlRegisterNameList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
    result = p->mObject.mAttribute_mRegisterAddressLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_controlRegisterNameList::cEnumerator_controlRegisterNameList (const GALGAS_controlRegisterNameList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element cEnumerator_controlRegisterNameList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameList * p = (const cCollectionElement_controlRegisterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_controlRegisterNameList::current_mRegisterName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameList * p = (const cCollectionElement_controlRegisterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
  return p->mObject.mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterKind cEnumerator_controlRegisterNameList::current_mControlRegisterKind (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameList * p = (const cCollectionElement_controlRegisterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
  return p->mObject.mAttribute_mControlRegisterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_controlRegisterNameList::current_mAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameList * p = (const cCollectionElement_controlRegisterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
  return p->mObject.mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cEnumerator_controlRegisterNameList::current_mRegisterAddress (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameList * p = (const cCollectionElement_controlRegisterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
  return p->mObject.mAttribute_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_controlRegisterNameList::current_mRegisterAddressLocation (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameList * p = (const cCollectionElement_controlRegisterNameList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameList) ;
  return p->mObject.mAttribute_mRegisterAddressLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @controlRegisterNameList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterNameList ("controlRegisterNameList",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterNameList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterNameList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterNameList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList GALGAS_controlRegisterNameList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterNameList result ;
  const GALGAS_controlRegisterNameList * p = (const GALGAS_controlRegisterNameList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterNameList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterNameList", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  macroMyNew (result, cCollectionElement_controlRegisterBitSliceList (mObject.mAttribute_mRegisterBitSlice COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_controlRegisterBitSliceList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitSlice" ":" ;
  mObject.mAttribute_mRegisterBitSlice.description (ioString, inIndentation) ;
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

GALGAS_controlRegisterBitSliceList::GALGAS_controlRegisterBitSliceList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::constructor_listWithValue (const GALGAS_controlRegisterBitSlice & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterBitSliceList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
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
    addObject (attributes) ;
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      outOperand0 = p->mObject.mAttribute_mRegisterBitSlice ;
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
    outOperand0 = p->mObject.mAttribute_mRegisterBitSlice ;
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
    outOperand0 = p->mObject.mAttribute_mRegisterBitSlice ;
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
    outOperand0 = p->mObject.mAttribute_mRegisterBitSlice ;
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
    outOperand0 = p->mObject.mAttribute_mRegisterBitSlice ;
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
    result = p->mObject.mAttribute_mRegisterBitSlice ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_controlRegisterBitSliceList::cEnumerator_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSliceList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mRegisterBitSlice ;
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
  macroMyNew (result, cCollectionElement_controlRegisterFieldList (mObject.mAttribute_mFieldBitCount, mObject.mAttribute_mFieldName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_controlRegisterFieldList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldBitCount" ":" ;
  mObject.mAttribute_mFieldBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldName" ":" ;
  mObject.mAttribute_mFieldName.description (ioString, inIndentation) ;
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

GALGAS_controlRegisterFieldList::GALGAS_controlRegisterFieldList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_controlRegisterFieldList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                                            const GALGAS_string & inOperand1
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterFieldList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
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
    addObject (attributes) ;
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      outOperand0 = p->mObject.mAttribute_mFieldBitCount ;
      outOperand1 = p->mObject.mAttribute_mFieldName ;
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
    outOperand0 = p->mObject.mAttribute_mFieldBitCount ;
    outOperand1 = p->mObject.mAttribute_mFieldName ;
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
    outOperand0 = p->mObject.mAttribute_mFieldBitCount ;
    outOperand1 = p->mObject.mAttribute_mFieldName ;
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
    outOperand0 = p->mObject.mAttribute_mFieldBitCount ;
    outOperand1 = p->mObject.mAttribute_mFieldName ;
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
    outOperand0 = p->mObject.mAttribute_mFieldBitCount ;
    outOperand1 = p->mObject.mAttribute_mFieldName ;
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
    result = p->mObject.mAttribute_mFieldBitCount ;
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
    result = p->mObject.mAttribute_mFieldName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_controlRegisterFieldList::cEnumerator_controlRegisterFieldList (const GALGAS_controlRegisterFieldList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mFieldBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_controlRegisterFieldList::current_mFieldName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterFieldList * p = (const cCollectionElement_controlRegisterFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
  return p->mObject.mAttribute_mFieldName ;
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
mAttribute_mBitIndex (in_mBitIndex),
mAttribute_mBitCount (in_mBitCount) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_controlRegisterFieldMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBitIndex.isValid () && mAttribute_mBitCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_controlRegisterFieldMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_controlRegisterFieldMap (mAttribute_lkey, mAttribute_mBitIndex, mAttribute_mBitCount COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_controlRegisterFieldMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitIndex" ":" ;
  mAttribute_mBitIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mAttribute_mBitCount.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_controlRegisterFieldMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterFieldMap * operand = (cMapElement_controlRegisterFieldMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mBitIndex.objectCompare (operand->mAttribute_mBitIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitCount.objectCompare (operand->mAttribute_mBitCount) ;
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
    outArgument0 = p->mAttribute_mBitIndex ;
    outArgument1 = p->mAttribute_mBitCount ;
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
    result = p->mAttribute_mBitIndex ;
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
    result = p->mAttribute_mBitCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap::setter_setMBitIndexForKey (GALGAS_uint inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterFieldMap * p = (cMapElement_controlRegisterFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    p->mAttribute_mBitIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterFieldMap * p = (cMapElement_controlRegisterFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    p->mAttribute_mBitCount = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_controlRegisterFieldMap * GALGAS_controlRegisterFieldMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterFieldMap * result = (cMapElement_controlRegisterFieldMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterFieldMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_controlRegisterFieldMap::cEnumerator_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element cEnumerator_controlRegisterFieldMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return GALGAS_controlRegisterFieldMap_2D_element (p->mAttribute_lkey, p->mAttribute_mBitIndex, p->mAttribute_mBitCount) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_controlRegisterFieldMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_controlRegisterFieldMap::current_mBitIndex (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return p->mAttribute_mBitIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_controlRegisterFieldMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return p->mAttribute_mBitCount ;
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
                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mAccessOperator (in_mAccessOperator),
mAttribute_mAccessRightOperand (in_mAccessRightOperand),
mAttribute_mSubMap (in_mSubMap),
mAttribute_mResultType (in_mResultType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_sliceMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAccessOperator.isValid () && mAttribute_mAccessRightOperand.isValid () && mAttribute_mSubMap.isValid () && mAttribute_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_sliceMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_sliceMap (mAttribute_lkey, mAttribute_mAccessOperator, mAttribute_mAccessRightOperand, mAttribute_mSubMap, mAttribute_mResultType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_sliceMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessOperator" ":" ;
  mAttribute_mAccessOperator.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessRightOperand" ":" ;
  mAttribute_mAccessRightOperand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSubMap" ":" ;
  mAttribute_mSubMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mAttribute_mResultType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_sliceMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_sliceMap * operand = (cMapElement_sliceMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mAccessOperator.objectCompare (operand->mAttribute_mAccessOperator) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAccessRightOperand.objectCompare (operand->mAttribute_mAccessRightOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSubMap.objectCompare (operand->mAttribute_mSubMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (operand->mAttribute_mResultType) ;
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
                                           const GALGAS_unifiedTypeMap_2D_proxy & inArgument3,
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
                                        GALGAS_unifiedTypeMap_2D_proxy inArgument3,
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
                                        GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
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
    outArgument0 = p->mAttribute_mAccessOperator ;
    outArgument1 = p->mAttribute_mAccessRightOperand ;
    outArgument2 = p->mAttribute_mSubMap ;
    outArgument3 = p->mAttribute_mResultType ;
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
    result = p->mAttribute_mAccessOperator ;
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
    result = p->mAttribute_mAccessRightOperand ;
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
    result = p->mAttribute_mSubMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_sliceMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap::setter_setMAccessOperatorForKey (GALGAS_llvmBinaryOperation inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mAttribute_mAccessOperator = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap::setter_setMAccessRightOperandForKey (GALGAS_bigint inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mAttribute_mAccessRightOperand = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap::setter_setMSubMapForKey (GALGAS_sliceMap inAttributeValue,
                                               GALGAS_string inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mAttribute_mSubMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap::setter_setMResultTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mAttribute_mResultType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_sliceMap * GALGAS_sliceMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_sliceMap * result = (cMapElement_sliceMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_sliceMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_sliceMap::cEnumerator_sliceMap (const GALGAS_sliceMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element cEnumerator_sliceMap::current (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return GALGAS_sliceMap_2D_element (p->mAttribute_lkey, p->mAttribute_mAccessOperator, p->mAttribute_mAccessRightOperand, p->mAttribute_mSubMap, p->mAttribute_mResultType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_sliceMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cEnumerator_sliceMap::current_mAccessOperator (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mAttribute_mAccessOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_sliceMap::current_mAccessRightOperand (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mAttribute_mAccessRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap cEnumerator_sliceMap::current_mSubMap (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mAttribute_mSubMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_sliceMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mAttribute_mResultType ;
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
                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
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
mAttribute_mType (in_mType),
mAttribute_mIsReadOnly (in_mIsReadOnly),
mAttribute_mIsAccessibleInUserMode (in_mIsAccessibleInUserMode),
mAttribute_mRegisterFieldAccessMap (in_mRegisterFieldAccessMap),
mAttribute_mRegisterFieldMap (in_mRegisterFieldMap),
mAttribute_mAddress (in_mAddress),
mAttribute_mControlRegisterFieldList (in_mControlRegisterFieldList),
mAttribute_mRegisterBitCount (in_mRegisterBitCount),
mAttribute_mArraySize (in_mArraySize),
mAttribute_mElementArraySize (in_mElementArraySize) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_controlRegisterMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mIsReadOnly.isValid () && mAttribute_mIsAccessibleInUserMode.isValid () && mAttribute_mRegisterFieldAccessMap.isValid () && mAttribute_mRegisterFieldMap.isValid () && mAttribute_mAddress.isValid () && mAttribute_mControlRegisterFieldList.isValid () && mAttribute_mRegisterBitCount.isValid () && mAttribute_mArraySize.isValid () && mAttribute_mElementArraySize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_controlRegisterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_controlRegisterMap (mAttribute_lkey, mAttribute_mType, mAttribute_mIsReadOnly, mAttribute_mIsAccessibleInUserMode, mAttribute_mRegisterFieldAccessMap, mAttribute_mRegisterFieldMap, mAttribute_mAddress, mAttribute_mControlRegisterFieldList, mAttribute_mRegisterBitCount, mAttribute_mArraySize, mAttribute_mElementArraySize COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_controlRegisterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsReadOnly" ":" ;
  mAttribute_mIsReadOnly.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsAccessibleInUserMode" ":" ;
  mAttribute_mIsAccessibleInUserMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterFieldAccessMap" ":" ;
  mAttribute_mRegisterFieldAccessMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterFieldMap" ":" ;
  mAttribute_mRegisterFieldMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddress" ":" ;
  mAttribute_mAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterFieldList" ":" ;
  mAttribute_mControlRegisterFieldList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitCount" ":" ;
  mAttribute_mRegisterBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArraySize" ":" ;
  mAttribute_mArraySize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElementArraySize" ":" ;
  mAttribute_mElementArraySize.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_controlRegisterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterMap * operand = (cMapElement_controlRegisterMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mType.objectCompare (operand->mAttribute_mType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsReadOnly.objectCompare (operand->mAttribute_mIsReadOnly) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsAccessibleInUserMode.objectCompare (operand->mAttribute_mIsAccessibleInUserMode) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterFieldAccessMap.objectCompare (operand->mAttribute_mRegisterFieldAccessMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterFieldMap.objectCompare (operand->mAttribute_mRegisterFieldMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAddress.objectCompare (operand->mAttribute_mAddress) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mControlRegisterFieldList.objectCompare (operand->mAttribute_mControlRegisterFieldList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterBitCount.objectCompare (operand->mAttribute_mRegisterBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mArraySize.objectCompare (operand->mAttribute_mArraySize) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElementArraySize.objectCompare (operand->mAttribute_mElementArraySize) ;
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
                                                     const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
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
                                                  GALGAS_unifiedTypeMap_2D_proxy inArgument0,
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
                                                  GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
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
    outArgument0 = p->mAttribute_mType ;
    outArgument1 = p->mAttribute_mIsReadOnly ;
    outArgument2 = p->mAttribute_mIsAccessibleInUserMode ;
    outArgument3 = p->mAttribute_mRegisterFieldAccessMap ;
    outArgument4 = p->mAttribute_mRegisterFieldMap ;
    outArgument5 = p->mAttribute_mAddress ;
    outArgument6 = p->mAttribute_mControlRegisterFieldList ;
    outArgument7 = p->mAttribute_mRegisterBitCount ;
    outArgument8 = p->mAttribute_mArraySize ;
    outArgument9 = p->mAttribute_mElementArraySize ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_controlRegisterMap::getter_mTypeForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mAttribute_mType ;
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
    result = p->mAttribute_mIsReadOnly ;
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
    result = p->mAttribute_mIsAccessibleInUserMode ;
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
    result = p->mAttribute_mRegisterFieldAccessMap ;
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
    result = p->mAttribute_mRegisterFieldMap ;
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
    result = p->mAttribute_mAddress ;
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
    result = p->mAttribute_mControlRegisterFieldList ;
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
    result = p->mAttribute_mRegisterBitCount ;
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
    result = p->mAttribute_mArraySize ;
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
    result = p->mAttribute_mElementArraySize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mAttribute_mType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMIsReadOnlyForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mAttribute_mIsReadOnly = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMIsAccessibleInUserModeForKey (GALGAS_bool inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mAttribute_mIsAccessibleInUserMode = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMRegisterFieldAccessMapForKey (GALGAS_sliceMap inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mAttribute_mRegisterFieldAccessMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMRegisterFieldMapForKey (GALGAS_controlRegisterFieldMap inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mAttribute_mRegisterFieldMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMAddressForKey (GALGAS_bigint inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mAttribute_mAddress = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMControlRegisterFieldListForKey (GALGAS_controlRegisterFieldList inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mAttribute_mControlRegisterFieldList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMRegisterBitCountForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mAttribute_mRegisterBitCount = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMArraySizeForKey (GALGAS_uint inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mAttribute_mArraySize = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMElementArraySizeForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mAttribute_mElementArraySize = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_controlRegisterMap * GALGAS_controlRegisterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterMap * result = (cMapElement_controlRegisterMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_controlRegisterMap::cEnumerator_controlRegisterMap (const GALGAS_controlRegisterMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element cEnumerator_controlRegisterMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return GALGAS_controlRegisterMap_2D_element (p->mAttribute_lkey, p->mAttribute_mType, p->mAttribute_mIsReadOnly, p->mAttribute_mIsAccessibleInUserMode, p->mAttribute_mRegisterFieldAccessMap, p->mAttribute_mRegisterFieldMap, p->mAttribute_mAddress, p->mAttribute_mControlRegisterFieldList, p->mAttribute_mRegisterBitCount, p->mAttribute_mArraySize, p->mAttribute_mElementArraySize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_controlRegisterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_controlRegisterMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_controlRegisterMap::current_mIsReadOnly (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mAttribute_mIsReadOnly ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_controlRegisterMap::current_mIsAccessibleInUserMode (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mAttribute_mIsAccessibleInUserMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap cEnumerator_controlRegisterMap::current_mRegisterFieldAccessMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mAttribute_mRegisterFieldAccessMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap cEnumerator_controlRegisterMap::current_mRegisterFieldMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mAttribute_mRegisterFieldMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_controlRegisterMap::current_mAddress (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mAttribute_mAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList cEnumerator_controlRegisterMap::current_mControlRegisterFieldList (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mAttribute_mControlRegisterFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_controlRegisterMap::current_mRegisterBitCount (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mAttribute_mRegisterBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_controlRegisterMap::current_mArraySize (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mAttribute_mArraySize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_controlRegisterMap::current_mElementArraySize (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mAttribute_mElementArraySize ;
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
//                                   Class for element of '@allowedRoutineList' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_allowedRoutineList : public cCollectionElement {
  public : GALGAS_allowedRoutineList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_allowedRoutineList (const GALGAS_bool & in_mHasWriteAccess,
                                                  const GALGAS_lstring & in_mReceiverTypeName,
                                                  const GALGAS_lstring & in_mRoutineName,
                                                  const GALGAS_routineKind & in_mRoutineKind
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

cCollectionElement_allowedRoutineList::cCollectionElement_allowedRoutineList (const GALGAS_bool & in_mHasWriteAccess,
                                                                              const GALGAS_lstring & in_mReceiverTypeName,
                                                                              const GALGAS_lstring & in_mRoutineName,
                                                                              const GALGAS_routineKind & in_mRoutineKind
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mHasWriteAccess, in_mReceiverTypeName, in_mRoutineName, in_mRoutineKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_allowedRoutineList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_allowedRoutineList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_allowedRoutineList (mObject.mAttribute_mHasWriteAccess, mObject.mAttribute_mReceiverTypeName, mObject.mAttribute_mRoutineName, mObject.mAttribute_mRoutineKind COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_allowedRoutineList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasWriteAccess" ":" ;
  mObject.mAttribute_mHasWriteAccess.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReceiverTypeName" ":" ;
  mObject.mAttribute_mReceiverTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineName" ":" ;
  mObject.mAttribute_mRoutineName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineKind" ":" ;
  mObject.mAttribute_mRoutineKind.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_allowedRoutineList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_allowedRoutineList * operand = (cCollectionElement_allowedRoutineList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_allowedRoutineList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList::GALGAS_allowedRoutineList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList::GALGAS_allowedRoutineList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList GALGAS_allowedRoutineList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_allowedRoutineList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList GALGAS_allowedRoutineList::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                const GALGAS_lstring & inOperand1,
                                                                                const GALGAS_lstring & inOperand2,
                                                                                const GALGAS_routineKind & inOperand3
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_allowedRoutineList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_allowedRoutineList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_bool & in_mHasWriteAccess,
                                                           const GALGAS_lstring & in_mReceiverTypeName,
                                                           const GALGAS_lstring & in_mRoutineName,
                                                           const GALGAS_routineKind & in_mRoutineKind
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_allowedRoutineList * p = NULL ;
  macroMyNew (p, cCollectionElement_allowedRoutineList (in_mHasWriteAccess,
                                                        in_mReceiverTypeName,
                                                        in_mRoutineName,
                                                        in_mRoutineKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineList::addAssign_operation (const GALGAS_bool & inOperand0,
                                                     const GALGAS_lstring & inOperand1,
                                                     const GALGAS_lstring & inOperand2,
                                                     const GALGAS_routineKind & inOperand3
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allowedRoutineList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineList::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                      const GALGAS_lstring inOperand1,
                                                      const GALGAS_lstring inOperand2,
                                                      const GALGAS_routineKind inOperand3,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allowedRoutineList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineList::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      GALGAS_routineKind & outOperand3,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_allowedRoutineList * p = (cCollectionElement_allowedRoutineList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
      outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
      outOperand1 = p->mObject.mAttribute_mReceiverTypeName ;
      outOperand2 = p->mObject.mAttribute_mRoutineName ;
      outOperand3 = p->mObject.mAttribute_mRoutineKind ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineList::setter_popFirst (GALGAS_bool & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_routineKind & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedRoutineList * p = (cCollectionElement_allowedRoutineList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mReceiverTypeName ;
    outOperand2 = p->mObject.mAttribute_mRoutineName ;
    outOperand3 = p->mObject.mAttribute_mRoutineKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineList::setter_popLast (GALGAS_bool & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                GALGAS_routineKind & outOperand3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedRoutineList * p = (cCollectionElement_allowedRoutineList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mReceiverTypeName ;
    outOperand2 = p->mObject.mAttribute_mRoutineName ;
    outOperand3 = p->mObject.mAttribute_mRoutineKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineList::method_first (GALGAS_bool & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              GALGAS_lstring & outOperand2,
                                              GALGAS_routineKind & outOperand3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedRoutineList * p = (cCollectionElement_allowedRoutineList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mReceiverTypeName ;
    outOperand2 = p->mObject.mAttribute_mRoutineName ;
    outOperand3 = p->mObject.mAttribute_mRoutineKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineList::method_last (GALGAS_bool & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_lstring & outOperand2,
                                             GALGAS_routineKind & outOperand3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedRoutineList * p = (cCollectionElement_allowedRoutineList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mReceiverTypeName ;
    outOperand2 = p->mObject.mAttribute_mRoutineName ;
    outOperand3 = p->mObject.mAttribute_mRoutineKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList GALGAS_allowedRoutineList::add_operation (const GALGAS_allowedRoutineList & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_allowedRoutineList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList GALGAS_allowedRoutineList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_allowedRoutineList result = GALGAS_allowedRoutineList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList GALGAS_allowedRoutineList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_allowedRoutineList result = GALGAS_allowedRoutineList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList GALGAS_allowedRoutineList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_allowedRoutineList result = GALGAS_allowedRoutineList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineList::plusAssign_operation (const GALGAS_allowedRoutineList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedRoutineList::getter_mHasWriteAccessAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedRoutineList * p = (cCollectionElement_allowedRoutineList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
    result = p->mObject.mAttribute_mHasWriteAccess ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedRoutineList::getter_mReceiverTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedRoutineList * p = (cCollectionElement_allowedRoutineList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
    result = p->mObject.mAttribute_mReceiverTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedRoutineList::getter_mRoutineNameAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedRoutineList * p = (cCollectionElement_allowedRoutineList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
    result = p->mObject.mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_allowedRoutineList::getter_mRoutineKindAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedRoutineList * p = (cCollectionElement_allowedRoutineList *) attributes.ptr () ;
  GALGAS_routineKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
    result = p->mObject.mAttribute_mRoutineKind ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_allowedRoutineList::cEnumerator_allowedRoutineList (const GALGAS_allowedRoutineList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList_2D_element cEnumerator_allowedRoutineList::current (LOCATION_ARGS) const {
  const cCollectionElement_allowedRoutineList * p = (const cCollectionElement_allowedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_allowedRoutineList::current_mHasWriteAccess (LOCATION_ARGS) const {
  const cCollectionElement_allowedRoutineList * p = (const cCollectionElement_allowedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
  return p->mObject.mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_allowedRoutineList::current_mReceiverTypeName (LOCATION_ARGS) const {
  const cCollectionElement_allowedRoutineList * p = (const cCollectionElement_allowedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
  return p->mObject.mAttribute_mReceiverTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_allowedRoutineList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_allowedRoutineList * p = (const cCollectionElement_allowedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
  return p->mObject.mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind cEnumerator_allowedRoutineList::current_mRoutineKind (LOCATION_ARGS) const {
  const cCollectionElement_allowedRoutineList * p = (const cCollectionElement_allowedRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedRoutineList) ;
  return p->mObject.mAttribute_mRoutineKind ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @allowedRoutineList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedRoutineList ("allowedRoutineList",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedRoutineList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedRoutineList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedRoutineList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedRoutineList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList GALGAS_allowedRoutineList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allowedRoutineList result ;
  const GALGAS_allowedRoutineList * p = (const GALGAS_allowedRoutineList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedRoutineList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedRoutineList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind::GALGAS_routineKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::constructor_function (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_function ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::constructor_section (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_section ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::constructor_service (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_service ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::constructor_primitive (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = kEnum_primitive ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_routineKind [5] = {
  "(not built)",
  "function",
  "section",
  "service",
  "primitive"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKind::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKind::getter_isSection (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_section == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKind::getter_isService (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_service == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineKind::getter_isPrimitive (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_primitive == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineKind::description (C_String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString << "<enum @routineKind: " << gEnumNameArrayFor_routineKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineKind::objectCompare (const GALGAS_routineKind & inOperand) const {
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
//                                                  @routineKind type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineKind ("routineKind",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineKind::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  const GALGAS_routineKind * p = (const GALGAS_routineKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@allowedInitList' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_allowedInitList : public cCollectionElement {
  public : GALGAS_allowedInitList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_allowedInitList (const GALGAS_bool & in_mHasWriteAccess,
                                               const GALGAS_lbigint & in_mInitPriority
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

cCollectionElement_allowedInitList::cCollectionElement_allowedInitList (const GALGAS_bool & in_mHasWriteAccess,
                                                                        const GALGAS_lbigint & in_mInitPriority
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mHasWriteAccess, in_mInitPriority) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_allowedInitList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_allowedInitList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_allowedInitList (mObject.mAttribute_mHasWriteAccess, mObject.mAttribute_mInitPriority COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_allowedInitList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasWriteAccess" ":" ;
  mObject.mAttribute_mHasWriteAccess.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitPriority" ":" ;
  mObject.mAttribute_mInitPriority.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_allowedInitList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_allowedInitList * operand = (cCollectionElement_allowedInitList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_allowedInitList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList::GALGAS_allowedInitList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList::GALGAS_allowedInitList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList GALGAS_allowedInitList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_allowedInitList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList GALGAS_allowedInitList::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                          const GALGAS_lbigint & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_allowedInitList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_allowedInitList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_bool & in_mHasWriteAccess,
                                                        const GALGAS_lbigint & in_mInitPriority
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_allowedInitList * p = NULL ;
  macroMyNew (p, cCollectionElement_allowedInitList (in_mHasWriteAccess,
                                                     in_mInitPriority COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList::addAssign_operation (const GALGAS_bool & inOperand0,
                                                  const GALGAS_lbigint & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allowedInitList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                   const GALGAS_lbigint inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allowedInitList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                   GALGAS_lbigint & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_allowedInitList * p = (cCollectionElement_allowedInitList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_allowedInitList) ;
      outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
      outOperand1 = p->mObject.mAttribute_mInitPriority ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList::setter_popFirst (GALGAS_bool & outOperand0,
                                              GALGAS_lbigint & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedInitList * p = (cCollectionElement_allowedInitList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedInitList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mInitPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList::setter_popLast (GALGAS_bool & outOperand0,
                                             GALGAS_lbigint & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedInitList * p = (cCollectionElement_allowedInitList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedInitList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mInitPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList::method_first (GALGAS_bool & outOperand0,
                                           GALGAS_lbigint & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedInitList * p = (cCollectionElement_allowedInitList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedInitList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mInitPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList::method_last (GALGAS_bool & outOperand0,
                                          GALGAS_lbigint & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedInitList * p = (cCollectionElement_allowedInitList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedInitList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mInitPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList GALGAS_allowedInitList::add_operation (const GALGAS_allowedInitList & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_allowedInitList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList GALGAS_allowedInitList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_allowedInitList result = GALGAS_allowedInitList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList GALGAS_allowedInitList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_allowedInitList result = GALGAS_allowedInitList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList GALGAS_allowedInitList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_allowedInitList result = GALGAS_allowedInitList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList::plusAssign_operation (const GALGAS_allowedInitList inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedInitList::getter_mHasWriteAccessAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedInitList * p = (cCollectionElement_allowedInitList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedInitList) ;
    result = p->mObject.mAttribute_mHasWriteAccess ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_allowedInitList::getter_mInitPriorityAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedInitList * p = (cCollectionElement_allowedInitList *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedInitList) ;
    result = p->mObject.mAttribute_mInitPriority ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_allowedInitList::cEnumerator_allowedInitList (const GALGAS_allowedInitList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element cEnumerator_allowedInitList::current (LOCATION_ARGS) const {
  const cCollectionElement_allowedInitList * p = (const cCollectionElement_allowedInitList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedInitList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_allowedInitList::current_mHasWriteAccess (LOCATION_ARGS) const {
  const cCollectionElement_allowedInitList * p = (const cCollectionElement_allowedInitList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedInitList) ;
  return p->mObject.mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_allowedInitList::current_mInitPriority (LOCATION_ARGS) const {
  const cCollectionElement_allowedInitList * p = (const cCollectionElement_allowedInitList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedInitList) ;
  return p->mObject.mAttribute_mInitPriority ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @allowedInitList type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedInitList ("allowedInitList",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedInitList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedInitList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedInitList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedInitList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList GALGAS_allowedInitList::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_allowedInitList result ;
  const GALGAS_allowedInitList * p = (const GALGAS_allowedInitList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedInitList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedInitList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@allowedPanicList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_allowedPanicList : public cCollectionElement {
  public : GALGAS_allowedPanicList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_allowedPanicList (const GALGAS_bool & in_mHasWriteAccess,
                                                const GALGAS_lstring & in_mPanicName,
                                                const GALGAS_lbigint & in_mPanicPriority
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

cCollectionElement_allowedPanicList::cCollectionElement_allowedPanicList (const GALGAS_bool & in_mHasWriteAccess,
                                                                          const GALGAS_lstring & in_mPanicName,
                                                                          const GALGAS_lbigint & in_mPanicPriority
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mHasWriteAccess, in_mPanicName, in_mPanicPriority) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_allowedPanicList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_allowedPanicList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_allowedPanicList (mObject.mAttribute_mHasWriteAccess, mObject.mAttribute_mPanicName, mObject.mAttribute_mPanicPriority COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_allowedPanicList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasWriteAccess" ":" ;
  mObject.mAttribute_mHasWriteAccess.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPanicName" ":" ;
  mObject.mAttribute_mPanicName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPanicPriority" ":" ;
  mObject.mAttribute_mPanicPriority.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_allowedPanicList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_allowedPanicList * operand = (cCollectionElement_allowedPanicList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_allowedPanicList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList::GALGAS_allowedPanicList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList::GALGAS_allowedPanicList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList GALGAS_allowedPanicList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_allowedPanicList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList GALGAS_allowedPanicList::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_lbigint & inOperand2
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_allowedPanicList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_allowedPanicList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedPanicList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_bool & in_mHasWriteAccess,
                                                         const GALGAS_lstring & in_mPanicName,
                                                         const GALGAS_lbigint & in_mPanicPriority
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_allowedPanicList * p = NULL ;
  macroMyNew (p, cCollectionElement_allowedPanicList (in_mHasWriteAccess,
                                                      in_mPanicName,
                                                      in_mPanicPriority COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedPanicList::addAssign_operation (const GALGAS_bool & inOperand0,
                                                   const GALGAS_lstring & inOperand1,
                                                   const GALGAS_lbigint & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allowedPanicList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedPanicList::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                    const GALGAS_lstring inOperand1,
                                                    const GALGAS_lbigint inOperand2,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allowedPanicList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedPanicList::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lbigint & outOperand2,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_allowedPanicList * p = (cCollectionElement_allowedPanicList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_allowedPanicList) ;
      outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
      outOperand1 = p->mObject.mAttribute_mPanicName ;
      outOperand2 = p->mObject.mAttribute_mPanicPriority ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedPanicList::setter_popFirst (GALGAS_bool & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_lbigint & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedPanicList * p = (cCollectionElement_allowedPanicList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedPanicList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mPanicName ;
    outOperand2 = p->mObject.mAttribute_mPanicPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedPanicList::setter_popLast (GALGAS_bool & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              GALGAS_lbigint & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedPanicList * p = (cCollectionElement_allowedPanicList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedPanicList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mPanicName ;
    outOperand2 = p->mObject.mAttribute_mPanicPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedPanicList::method_first (GALGAS_bool & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_lbigint & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedPanicList * p = (cCollectionElement_allowedPanicList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedPanicList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mPanicName ;
    outOperand2 = p->mObject.mAttribute_mPanicPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedPanicList::method_last (GALGAS_bool & outOperand0,
                                           GALGAS_lstring & outOperand1,
                                           GALGAS_lbigint & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedPanicList * p = (cCollectionElement_allowedPanicList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedPanicList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mPanicName ;
    outOperand2 = p->mObject.mAttribute_mPanicPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList GALGAS_allowedPanicList::add_operation (const GALGAS_allowedPanicList & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_allowedPanicList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList GALGAS_allowedPanicList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_allowedPanicList result = GALGAS_allowedPanicList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList GALGAS_allowedPanicList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_allowedPanicList result = GALGAS_allowedPanicList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList GALGAS_allowedPanicList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_allowedPanicList result = GALGAS_allowedPanicList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedPanicList::plusAssign_operation (const GALGAS_allowedPanicList inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedPanicList::getter_mHasWriteAccessAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedPanicList * p = (cCollectionElement_allowedPanicList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedPanicList) ;
    result = p->mObject.mAttribute_mHasWriteAccess ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedPanicList::getter_mPanicNameAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedPanicList * p = (cCollectionElement_allowedPanicList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedPanicList) ;
    result = p->mObject.mAttribute_mPanicName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_allowedPanicList::getter_mPanicPriorityAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedPanicList * p = (cCollectionElement_allowedPanicList *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedPanicList) ;
    result = p->mObject.mAttribute_mPanicPriority ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_allowedPanicList::cEnumerator_allowedPanicList (const GALGAS_allowedPanicList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList_2D_element cEnumerator_allowedPanicList::current (LOCATION_ARGS) const {
  const cCollectionElement_allowedPanicList * p = (const cCollectionElement_allowedPanicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedPanicList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_allowedPanicList::current_mHasWriteAccess (LOCATION_ARGS) const {
  const cCollectionElement_allowedPanicList * p = (const cCollectionElement_allowedPanicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedPanicList) ;
  return p->mObject.mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_allowedPanicList::current_mPanicName (LOCATION_ARGS) const {
  const cCollectionElement_allowedPanicList * p = (const cCollectionElement_allowedPanicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedPanicList) ;
  return p->mObject.mAttribute_mPanicName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_allowedPanicList::current_mPanicPriority (LOCATION_ARGS) const {
  const cCollectionElement_allowedPanicList * p = (const cCollectionElement_allowedPanicList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedPanicList) ;
  return p->mObject.mAttribute_mPanicPriority ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @allowedPanicList type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedPanicList ("allowedPanicList",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedPanicList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedPanicList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedPanicList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedPanicList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList GALGAS_allowedPanicList::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_allowedPanicList result ;
  const GALGAS_allowedPanicList * p = (const GALGAS_allowedPanicList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedPanicList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedPanicList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@allowedGuardList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_allowedGuardList : public cCollectionElement {
  public : GALGAS_allowedGuardList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_allowedGuardList (const GALGAS_lstring & in_mOptionalTypeName,
                                                const GALGAS_lstring & in_mGuardName
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

cCollectionElement_allowedGuardList::cCollectionElement_allowedGuardList (const GALGAS_lstring & in_mOptionalTypeName,
                                                                          const GALGAS_lstring & in_mGuardName
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionalTypeName, in_mGuardName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_allowedGuardList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_allowedGuardList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_allowedGuardList (mObject.mAttribute_mOptionalTypeName, mObject.mAttribute_mGuardName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_allowedGuardList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionalTypeName" ":" ;
  mObject.mAttribute_mOptionalTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardName" ":" ;
  mObject.mAttribute_mGuardName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_allowedGuardList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_allowedGuardList * operand = (cCollectionElement_allowedGuardList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_allowedGuardList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList::GALGAS_allowedGuardList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList::GALGAS_allowedGuardList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList GALGAS_allowedGuardList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_allowedGuardList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList GALGAS_allowedGuardList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_allowedGuardList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_allowedGuardList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_lstring & in_mOptionalTypeName,
                                                         const GALGAS_lstring & in_mGuardName
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_allowedGuardList * p = NULL ;
  macroMyNew (p, cCollectionElement_allowedGuardList (in_mOptionalTypeName,
                                                      in_mGuardName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                   const GALGAS_lstring & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allowedGuardList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                    const GALGAS_lstring inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allowedGuardList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_allowedGuardList * p = (cCollectionElement_allowedGuardList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_allowedGuardList) ;
      outOperand0 = p->mObject.mAttribute_mOptionalTypeName ;
      outOperand1 = p->mObject.mAttribute_mGuardName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardList::setter_popFirst (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedGuardList * p = (cCollectionElement_allowedGuardList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedGuardList) ;
    outOperand0 = p->mObject.mAttribute_mOptionalTypeName ;
    outOperand1 = p->mObject.mAttribute_mGuardName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardList::setter_popLast (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedGuardList * p = (cCollectionElement_allowedGuardList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedGuardList) ;
    outOperand0 = p->mObject.mAttribute_mOptionalTypeName ;
    outOperand1 = p->mObject.mAttribute_mGuardName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardList::method_first (GALGAS_lstring & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedGuardList * p = (cCollectionElement_allowedGuardList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedGuardList) ;
    outOperand0 = p->mObject.mAttribute_mOptionalTypeName ;
    outOperand1 = p->mObject.mAttribute_mGuardName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardList::method_last (GALGAS_lstring & outOperand0,
                                           GALGAS_lstring & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedGuardList * p = (cCollectionElement_allowedGuardList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedGuardList) ;
    outOperand0 = p->mObject.mAttribute_mOptionalTypeName ;
    outOperand1 = p->mObject.mAttribute_mGuardName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList GALGAS_allowedGuardList::add_operation (const GALGAS_allowedGuardList & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_allowedGuardList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList GALGAS_allowedGuardList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_allowedGuardList result = GALGAS_allowedGuardList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList GALGAS_allowedGuardList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_allowedGuardList result = GALGAS_allowedGuardList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList GALGAS_allowedGuardList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_allowedGuardList result = GALGAS_allowedGuardList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardList::plusAssign_operation (const GALGAS_allowedGuardList inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedGuardList::getter_mOptionalTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedGuardList * p = (cCollectionElement_allowedGuardList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedGuardList) ;
    result = p->mObject.mAttribute_mOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedGuardList::getter_mGuardNameAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedGuardList * p = (cCollectionElement_allowedGuardList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedGuardList) ;
    result = p->mObject.mAttribute_mGuardName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_allowedGuardList::cEnumerator_allowedGuardList (const GALGAS_allowedGuardList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList_2D_element cEnumerator_allowedGuardList::current (LOCATION_ARGS) const {
  const cCollectionElement_allowedGuardList * p = (const cCollectionElement_allowedGuardList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedGuardList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_allowedGuardList::current_mOptionalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_allowedGuardList * p = (const cCollectionElement_allowedGuardList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedGuardList) ;
  return p->mObject.mAttribute_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_allowedGuardList::current_mGuardName (LOCATION_ARGS) const {
  const cCollectionElement_allowedGuardList * p = (const cCollectionElement_allowedGuardList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedGuardList) ;
  return p->mObject.mAttribute_mGuardName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @allowedGuardList type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedGuardList ("allowedGuardList",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedGuardList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedGuardList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedGuardList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedGuardList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList GALGAS_allowedGuardList::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_allowedGuardList result ;
  const GALGAS_allowedGuardList * p = (const GALGAS_allowedGuardList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedGuardList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedGuardList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@allowedISRList' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_allowedISRList : public cCollectionElement {
  public : GALGAS_allowedISRList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_allowedISRList (const GALGAS_bool & in_mHasWriteAccess,
                                              const GALGAS_lstring & in_mISRName
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

cCollectionElement_allowedISRList::cCollectionElement_allowedISRList (const GALGAS_bool & in_mHasWriteAccess,
                                                                      const GALGAS_lstring & in_mISRName
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mHasWriteAccess, in_mISRName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_allowedISRList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_allowedISRList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_allowedISRList (mObject.mAttribute_mHasWriteAccess, mObject.mAttribute_mISRName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_allowedISRList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasWriteAccess" ":" ;
  mObject.mAttribute_mHasWriteAccess.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mISRName" ":" ;
  mObject.mAttribute_mISRName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_allowedISRList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_allowedISRList * operand = (cCollectionElement_allowedISRList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_allowedISRList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList::GALGAS_allowedISRList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList::GALGAS_allowedISRList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList GALGAS_allowedISRList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_allowedISRList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList GALGAS_allowedISRList::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                        const GALGAS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_allowedISRList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_allowedISRList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_bool & in_mHasWriteAccess,
                                                       const GALGAS_lstring & in_mISRName
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_allowedISRList * p = NULL ;
  macroMyNew (p, cCollectionElement_allowedISRList (in_mHasWriteAccess,
                                                    in_mISRName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRList::addAssign_operation (const GALGAS_bool & inOperand0,
                                                 const GALGAS_lstring & inOperand1
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allowedISRList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRList::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                  const GALGAS_lstring inOperand1,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allowedISRList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRList::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_allowedISRList * p = (cCollectionElement_allowedISRList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_allowedISRList) ;
      outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
      outOperand1 = p->mObject.mAttribute_mISRName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRList::setter_popFirst (GALGAS_bool & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedISRList * p = (cCollectionElement_allowedISRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedISRList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mISRName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRList::setter_popLast (GALGAS_bool & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedISRList * p = (cCollectionElement_allowedISRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedISRList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mISRName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRList::method_first (GALGAS_bool & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedISRList * p = (cCollectionElement_allowedISRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedISRList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mISRName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRList::method_last (GALGAS_bool & outOperand0,
                                         GALGAS_lstring & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedISRList * p = (cCollectionElement_allowedISRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedISRList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mISRName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList GALGAS_allowedISRList::add_operation (const GALGAS_allowedISRList & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_allowedISRList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList GALGAS_allowedISRList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_allowedISRList result = GALGAS_allowedISRList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList GALGAS_allowedISRList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_allowedISRList result = GALGAS_allowedISRList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList GALGAS_allowedISRList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_allowedISRList result = GALGAS_allowedISRList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRList::plusAssign_operation (const GALGAS_allowedISRList inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedISRList::getter_mHasWriteAccessAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedISRList * p = (cCollectionElement_allowedISRList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedISRList) ;
    result = p->mObject.mAttribute_mHasWriteAccess ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedISRList::getter_mISRNameAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedISRList * p = (cCollectionElement_allowedISRList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedISRList) ;
    result = p->mObject.mAttribute_mISRName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_allowedISRList::cEnumerator_allowedISRList (const GALGAS_allowedISRList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList_2D_element cEnumerator_allowedISRList::current (LOCATION_ARGS) const {
  const cCollectionElement_allowedISRList * p = (const cCollectionElement_allowedISRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedISRList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_allowedISRList::current_mHasWriteAccess (LOCATION_ARGS) const {
  const cCollectionElement_allowedISRList * p = (const cCollectionElement_allowedISRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedISRList) ;
  return p->mObject.mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_allowedISRList::current_mISRName (LOCATION_ARGS) const {
  const cCollectionElement_allowedISRList * p = (const cCollectionElement_allowedISRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedISRList) ;
  return p->mObject.mAttribute_mISRName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @allowedISRList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedISRList ("allowedISRList",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedISRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedISRList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedISRList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedISRList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList GALGAS_allowedISRList::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_allowedISRList result ;
  const GALGAS_allowedISRList * p = (const GALGAS_allowedISRList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedISRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedISRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@allowedTaskList' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_allowedTaskList : public cCollectionElement {
  public : GALGAS_allowedTaskList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_allowedTaskList (const GALGAS_bool & in_mHasWriteAccess,
                                               const GALGAS_lstring & in_mTaskName
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

cCollectionElement_allowedTaskList::cCollectionElement_allowedTaskList (const GALGAS_bool & in_mHasWriteAccess,
                                                                        const GALGAS_lstring & in_mTaskName
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mHasWriteAccess, in_mTaskName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_allowedTaskList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_allowedTaskList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_allowedTaskList (mObject.mAttribute_mHasWriteAccess, mObject.mAttribute_mTaskName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_allowedTaskList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasWriteAccess" ":" ;
  mObject.mAttribute_mHasWriteAccess.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskName" ":" ;
  mObject.mAttribute_mTaskName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_allowedTaskList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_allowedTaskList * operand = (cCollectionElement_allowedTaskList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_allowedTaskList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList::GALGAS_allowedTaskList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList::GALGAS_allowedTaskList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList GALGAS_allowedTaskList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_allowedTaskList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList GALGAS_allowedTaskList::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                          const GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_allowedTaskList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_allowedTaskList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_bool & in_mHasWriteAccess,
                                                        const GALGAS_lstring & in_mTaskName
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_allowedTaskList * p = NULL ;
  macroMyNew (p, cCollectionElement_allowedTaskList (in_mHasWriteAccess,
                                                     in_mTaskName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskList::addAssign_operation (const GALGAS_bool & inOperand0,
                                                  const GALGAS_lstring & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allowedTaskList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskList::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                   const GALGAS_lstring inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allowedTaskList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskList::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_allowedTaskList * p = (cCollectionElement_allowedTaskList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_allowedTaskList) ;
      outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
      outOperand1 = p->mObject.mAttribute_mTaskName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskList::setter_popFirst (GALGAS_bool & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedTaskList * p = (cCollectionElement_allowedTaskList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedTaskList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mTaskName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskList::setter_popLast (GALGAS_bool & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedTaskList * p = (cCollectionElement_allowedTaskList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedTaskList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mTaskName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskList::method_first (GALGAS_bool & outOperand0,
                                           GALGAS_lstring & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedTaskList * p = (cCollectionElement_allowedTaskList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedTaskList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mTaskName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskList::method_last (GALGAS_bool & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedTaskList * p = (cCollectionElement_allowedTaskList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allowedTaskList) ;
    outOperand0 = p->mObject.mAttribute_mHasWriteAccess ;
    outOperand1 = p->mObject.mAttribute_mTaskName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList GALGAS_allowedTaskList::add_operation (const GALGAS_allowedTaskList & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_allowedTaskList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList GALGAS_allowedTaskList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_allowedTaskList result = GALGAS_allowedTaskList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList GALGAS_allowedTaskList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_allowedTaskList result = GALGAS_allowedTaskList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList GALGAS_allowedTaskList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_allowedTaskList result = GALGAS_allowedTaskList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskList::plusAssign_operation (const GALGAS_allowedTaskList inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedTaskList::getter_mHasWriteAccessAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedTaskList * p = (cCollectionElement_allowedTaskList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedTaskList) ;
    result = p->mObject.mAttribute_mHasWriteAccess ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedTaskList::getter_mTaskNameAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allowedTaskList * p = (cCollectionElement_allowedTaskList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allowedTaskList) ;
    result = p->mObject.mAttribute_mTaskName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_allowedTaskList::cEnumerator_allowedTaskList (const GALGAS_allowedTaskList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList_2D_element cEnumerator_allowedTaskList::current (LOCATION_ARGS) const {
  const cCollectionElement_allowedTaskList * p = (const cCollectionElement_allowedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedTaskList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_allowedTaskList::current_mHasWriteAccess (LOCATION_ARGS) const {
  const cCollectionElement_allowedTaskList * p = (const cCollectionElement_allowedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedTaskList) ;
  return p->mObject.mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_allowedTaskList::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_allowedTaskList * p = (const cCollectionElement_allowedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allowedTaskList) ;
  return p->mObject.mAttribute_mTaskName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @allowedTaskList type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedTaskList ("allowedTaskList",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedTaskList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedTaskList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedTaskList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedTaskList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList GALGAS_allowedTaskList::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_allowedTaskList result ;
  const GALGAS_allowedTaskList * p = (const GALGAS_allowedTaskList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedTaskList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedTaskList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_allowedRoutineMap::cMapElement_allowedRoutineMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_bool & in_mHasWriteAccess
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mHasWriteAccess (in_mHasWriteAccess) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_allowedRoutineMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHasWriteAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_allowedRoutineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_allowedRoutineMap (mAttribute_lkey, mAttribute_mHasWriteAccess COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_allowedRoutineMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasWriteAccess" ":" ;
  mAttribute_mHasWriteAccess.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_allowedRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_allowedRoutineMap * operand = (cMapElement_allowedRoutineMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasWriteAccess.objectCompare (operand->mAttribute_mHasWriteAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap::GALGAS_allowedRoutineMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap::GALGAS_allowedRoutineMap (const GALGAS_allowedRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap & GALGAS_allowedRoutineMap::operator = (const GALGAS_allowedRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap GALGAS_allowedRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_allowedRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap GALGAS_allowedRoutineMap::constructor_mapWithMapToOverride (const GALGAS_allowedRoutineMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_allowedRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap GALGAS_allowedRoutineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_allowedRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_bool & inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_allowedRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_allowedRoutineMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@allowedRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_bool inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_allowedRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_allowedRoutineMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_allowedRoutineMap_searchKey = "there is no '%K' routine" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_bool & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_allowedRoutineMap * p = (const cMapElement_allowedRoutineMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_allowedRoutineMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_allowedRoutineMap) ;
    outArgument0 = p->mAttribute_mHasWriteAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedRoutineMap::getter_mHasWriteAccessForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_allowedRoutineMap * p = (const cMapElement_allowedRoutineMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_allowedRoutineMap) ;
    result = p->mAttribute_mHasWriteAccess ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineMap::setter_setMHasWriteAccessForKey (GALGAS_bool inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_allowedRoutineMap * p = (cMapElement_allowedRoutineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_allowedRoutineMap) ;
    p->mAttribute_mHasWriteAccess = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_allowedRoutineMap * GALGAS_allowedRoutineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_allowedRoutineMap * result = (cMapElement_allowedRoutineMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_allowedRoutineMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_allowedRoutineMap::cEnumerator_allowedRoutineMap (const GALGAS_allowedRoutineMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element cEnumerator_allowedRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_allowedRoutineMap * p = (const cMapElement_allowedRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_allowedRoutineMap) ;
  return GALGAS_allowedRoutineMap_2D_element (p->mAttribute_lkey, p->mAttribute_mHasWriteAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_allowedRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_allowedRoutineMap::current_mHasWriteAccess (LOCATION_ARGS) const {
  const cMapElement_allowedRoutineMap * p = (const cMapElement_allowedRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_allowedRoutineMap) ;
  return p->mAttribute_mHasWriteAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @allowedRoutineMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedRoutineMap ("allowedRoutineMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedRoutineMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap GALGAS_allowedRoutineMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_allowedRoutineMap result ;
  const GALGAS_allowedRoutineMap * p = (const GALGAS_allowedRoutineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_allowedISRMap::cMapElement_allowedISRMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_bool & in_mHasWriteAccess
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mHasWriteAccess (in_mHasWriteAccess) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_allowedISRMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHasWriteAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_allowedISRMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_allowedISRMap (mAttribute_lkey, mAttribute_mHasWriteAccess COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_allowedISRMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasWriteAccess" ":" ;
  mAttribute_mHasWriteAccess.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_allowedISRMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_allowedISRMap * operand = (cMapElement_allowedISRMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasWriteAccess.objectCompare (operand->mAttribute_mHasWriteAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap::GALGAS_allowedISRMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap::GALGAS_allowedISRMap (const GALGAS_allowedISRMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap & GALGAS_allowedISRMap::operator = (const GALGAS_allowedISRMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap GALGAS_allowedISRMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_allowedISRMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap GALGAS_allowedISRMap::constructor_mapWithMapToOverride (const GALGAS_allowedISRMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_allowedISRMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap GALGAS_allowedISRMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_allowedISRMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_bool & inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_allowedISRMap * p = NULL ;
  macroMyNew (p, cMapElement_allowedISRMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@allowedISRMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRMap::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_bool inArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_allowedISRMap * p = NULL ;
  macroMyNew (p, cMapElement_allowedISRMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_allowedISRMap_searchKey = "there is no '%K' routine" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRMap::method_searchKey (GALGAS_lstring inKey,
                                             GALGAS_bool & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_allowedISRMap * p = (const cMapElement_allowedISRMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_allowedISRMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_allowedISRMap) ;
    outArgument0 = p->mAttribute_mHasWriteAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedISRMap::getter_mHasWriteAccessForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_allowedISRMap * p = (const cMapElement_allowedISRMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_allowedISRMap) ;
    result = p->mAttribute_mHasWriteAccess ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRMap::setter_setMHasWriteAccessForKey (GALGAS_bool inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_allowedISRMap * p = (cMapElement_allowedISRMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_allowedISRMap) ;
    p->mAttribute_mHasWriteAccess = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_allowedISRMap * GALGAS_allowedISRMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_allowedISRMap * result = (cMapElement_allowedISRMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_allowedISRMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_allowedISRMap::cEnumerator_allowedISRMap (const GALGAS_allowedISRMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap_2D_element cEnumerator_allowedISRMap::current (LOCATION_ARGS) const {
  const cMapElement_allowedISRMap * p = (const cMapElement_allowedISRMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_allowedISRMap) ;
  return GALGAS_allowedISRMap_2D_element (p->mAttribute_lkey, p->mAttribute_mHasWriteAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_allowedISRMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_allowedISRMap::current_mHasWriteAccess (LOCATION_ARGS) const {
  const cMapElement_allowedISRMap * p = (const cMapElement_allowedISRMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_allowedISRMap) ;
  return p->mAttribute_mHasWriteAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @allowedISRMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedISRMap ("allowedISRMap",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedISRMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedISRMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedISRMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedISRMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap GALGAS_allowedISRMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_allowedISRMap result ;
  const GALGAS_allowedISRMap * p = (const GALGAS_allowedISRMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedISRMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedISRMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_allowedTaskMap::cMapElement_allowedTaskMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_bool & in_mHasWriteAccess
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mHasWriteAccess (in_mHasWriteAccess) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_allowedTaskMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHasWriteAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_allowedTaskMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_allowedTaskMap (mAttribute_lkey, mAttribute_mHasWriteAccess COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_allowedTaskMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasWriteAccess" ":" ;
  mAttribute_mHasWriteAccess.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_allowedTaskMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_allowedTaskMap * operand = (cMapElement_allowedTaskMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasWriteAccess.objectCompare (operand->mAttribute_mHasWriteAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap::GALGAS_allowedTaskMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap::GALGAS_allowedTaskMap (const GALGAS_allowedTaskMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap & GALGAS_allowedTaskMap::operator = (const GALGAS_allowedTaskMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap GALGAS_allowedTaskMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_allowedTaskMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap GALGAS_allowedTaskMap::constructor_mapWithMapToOverride (const GALGAS_allowedTaskMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_allowedTaskMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap GALGAS_allowedTaskMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_allowedTaskMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_bool & inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_allowedTaskMap * p = NULL ;
  macroMyNew (p, cMapElement_allowedTaskMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@allowedTaskMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_bool inArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_allowedTaskMap * p = NULL ;
  macroMyNew (p, cMapElement_allowedTaskMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' task is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_allowedTaskMap_searchKey = "there is no '%K' task" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_bool & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_allowedTaskMap * p = (const cMapElement_allowedTaskMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_allowedTaskMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_allowedTaskMap) ;
    outArgument0 = p->mAttribute_mHasWriteAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedTaskMap::getter_mHasWriteAccessForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_allowedTaskMap * p = (const cMapElement_allowedTaskMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_allowedTaskMap) ;
    result = p->mAttribute_mHasWriteAccess ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskMap::setter_setMHasWriteAccessForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_allowedTaskMap * p = (cMapElement_allowedTaskMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_allowedTaskMap) ;
    p->mAttribute_mHasWriteAccess = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_allowedTaskMap * GALGAS_allowedTaskMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_allowedTaskMap * result = (cMapElement_allowedTaskMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_allowedTaskMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_allowedTaskMap::cEnumerator_allowedTaskMap (const GALGAS_allowedTaskMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap_2D_element cEnumerator_allowedTaskMap::current (LOCATION_ARGS) const {
  const cMapElement_allowedTaskMap * p = (const cMapElement_allowedTaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_allowedTaskMap) ;
  return GALGAS_allowedTaskMap_2D_element (p->mAttribute_lkey, p->mAttribute_mHasWriteAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_allowedTaskMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_allowedTaskMap::current_mHasWriteAccess (LOCATION_ARGS) const {
  const cMapElement_allowedTaskMap * p = (const cMapElement_allowedTaskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_allowedTaskMap) ;
  return p->mAttribute_mHasWriteAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @allowedTaskMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedTaskMap ("allowedTaskMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedTaskMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedTaskMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedTaskMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedTaskMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap GALGAS_allowedTaskMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_allowedTaskMap result ;
  const GALGAS_allowedTaskMap * p = (const GALGAS_allowedTaskMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedTaskMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedTaskMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_moduleMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_moduleMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_moduleMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_moduleMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_moduleMap * operand = (cMapElement_moduleMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
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
  cMapElement_moduleMap * result = (cMapElement_moduleMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_moduleMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_moduleMap::cEnumerator_moduleMap (const GALGAS_moduleMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element cEnumerator_moduleMap::current (LOCATION_ARGS) const {
  const cMapElement_moduleMap * p = (const cMapElement_moduleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_moduleMap) ;
  return GALGAS_moduleMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_moduleMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
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
  macroMyNew (result, cCollectionElement_moduleListIR (mObject.mAttribute_mModuleName, mObject.mAttribute_mType, mObject.mAttribute_mInitialValueList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_moduleListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModuleName" ":" ;
  mObject.mAttribute_mModuleName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialValueList" ":" ;
  mObject.mAttribute_mInitialValueList.description (ioString, inIndentation) ;
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

GALGAS_moduleListIR::GALGAS_moduleListIR (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR GALGAS_moduleListIR::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_moduleListIR result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR GALGAS_moduleListIR::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                    const GALGAS_operandIRList & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_moduleListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_moduleListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
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
    addObject (attributes) ;
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      outOperand0 = p->mObject.mAttribute_mModuleName ;
      outOperand1 = p->mObject.mAttribute_mType ;
      outOperand2 = p->mObject.mAttribute_mInitialValueList ;
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
    outOperand0 = p->mObject.mAttribute_mModuleName ;
    outOperand1 = p->mObject.mAttribute_mType ;
    outOperand2 = p->mObject.mAttribute_mInitialValueList ;
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
    outOperand0 = p->mObject.mAttribute_mModuleName ;
    outOperand1 = p->mObject.mAttribute_mType ;
    outOperand2 = p->mObject.mAttribute_mInitialValueList ;
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
    outOperand0 = p->mObject.mAttribute_mModuleName ;
    outOperand1 = p->mObject.mAttribute_mType ;
    outOperand2 = p->mObject.mAttribute_mInitialValueList ;
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
    outOperand0 = p->mObject.mAttribute_mModuleName ;
    outOperand1 = p->mObject.mAttribute_mType ;
    outOperand2 = p->mObject.mAttribute_mInitialValueList ;
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
    result = p->mObject.mAttribute_mModuleName ;
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
    result = p->mObject.mAttribute_mType ;
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
    result = p->mObject.mAttribute_mInitialValueList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_moduleListIR::cEnumerator_moduleListIR (const GALGAS_moduleListIR & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mModuleName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_moduleListIR::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_moduleListIR * p = (const cCollectionElement_moduleListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
  return p->mObject.mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList cEnumerator_moduleListIR::current_mInitialValueList (LOCATION_ARGS) const {
  const cCollectionElement_moduleListIR * p = (const cCollectionElement_moduleListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
  return p->mObject.mAttribute_mInitialValueList ;
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
  macroMyNew (result, cCollectionElement_operandIRList (mObject.mAttribute_mOperand COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_operandIRList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperand" ":" ;
  mObject.mAttribute_mOperand.description (ioString, inIndentation) ;
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

GALGAS_operandIRList::GALGAS_operandIRList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_operandIRList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_operandIRList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_operandIRList::constructor_listWithValue (const GALGAS_objectIR & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_operandIRList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
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
    addObject (attributes) ;
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      outOperand0 = p->mObject.mAttribute_mOperand ;
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
    outOperand0 = p->mObject.mAttribute_mOperand ;
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
    outOperand0 = p->mObject.mAttribute_mOperand ;
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
    outOperand0 = p->mObject.mAttribute_mOperand ;
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
    outOperand0 = p->mObject.mAttribute_mOperand ;
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
    result = p->mObject.mAttribute_mOperand ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_operandIRList::cEnumerator_operandIRList (const GALGAS_operandIRList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
  return p->mObject.mAttribute_mOperand ;
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
//                                                                                                                     *
//                                     Class for element of '@taskVarListAST' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_taskVarListAST : public cCollectionElement {
  public : GALGAS_taskVarListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_taskVarListAST (const GALGAS_lstring & in_mVarName,
                                              const GALGAS_lstring & in_mVarTypeName,
                                              const GALGAS_expressionAST & in_mVarInitExpression
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

cCollectionElement_taskVarListAST::cCollectionElement_taskVarListAST (const GALGAS_lstring & in_mVarName,
                                                                      const GALGAS_lstring & in_mVarTypeName,
                                                                      const GALGAS_expressionAST & in_mVarInitExpression
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarName, in_mVarTypeName, in_mVarInitExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_taskVarListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_taskVarListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_taskVarListAST (mObject.mAttribute_mVarName, mObject.mAttribute_mVarTypeName, mObject.mAttribute_mVarInitExpression COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_taskVarListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarName" ":" ;
  mObject.mAttribute_mVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarTypeName" ":" ;
  mObject.mAttribute_mVarTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarInitExpression" ":" ;
  mObject.mAttribute_mVarInitExpression.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_taskVarListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_taskVarListAST * operand = (cCollectionElement_taskVarListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_taskVarListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST::GALGAS_taskVarListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST::GALGAS_taskVarListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST GALGAS_taskVarListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_taskVarListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST GALGAS_taskVarListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lstring & inOperand1,
                                                                        const GALGAS_expressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_taskVarListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_taskVarListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskVarListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_lstring & in_mVarName,
                                                       const GALGAS_lstring & in_mVarTypeName,
                                                       const GALGAS_expressionAST & in_mVarInitExpression
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_taskVarListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_taskVarListAST (in_mVarName,
                                                    in_mVarTypeName,
                                                    in_mVarInitExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskVarListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                 const GALGAS_lstring & inOperand1,
                                                 const GALGAS_expressionAST & inOperand2
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskVarListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskVarListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                  const GALGAS_lstring inOperand1,
                                                  const GALGAS_expressionAST inOperand2,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskVarListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskVarListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_expressionAST & outOperand2,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_taskVarListAST * p = (cCollectionElement_taskVarListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_taskVarListAST) ;
      outOperand0 = p->mObject.mAttribute_mVarName ;
      outOperand1 = p->mObject.mAttribute_mVarTypeName ;
      outOperand2 = p->mObject.mAttribute_mVarInitExpression ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskVarListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_expressionAST & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskVarListAST * p = (cCollectionElement_taskVarListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskVarListAST) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mVarTypeName ;
    outOperand2 = p->mObject.mAttribute_mVarInitExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskVarListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_expressionAST & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskVarListAST * p = (cCollectionElement_taskVarListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskVarListAST) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mVarTypeName ;
    outOperand2 = p->mObject.mAttribute_mVarInitExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskVarListAST::method_first (GALGAS_lstring & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          GALGAS_expressionAST & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskVarListAST * p = (cCollectionElement_taskVarListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskVarListAST) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mVarTypeName ;
    outOperand2 = p->mObject.mAttribute_mVarInitExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskVarListAST::method_last (GALGAS_lstring & outOperand0,
                                         GALGAS_lstring & outOperand1,
                                         GALGAS_expressionAST & outOperand2,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskVarListAST * p = (cCollectionElement_taskVarListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskVarListAST) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mVarTypeName ;
    outOperand2 = p->mObject.mAttribute_mVarInitExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST GALGAS_taskVarListAST::add_operation (const GALGAS_taskVarListAST & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_taskVarListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST GALGAS_taskVarListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_taskVarListAST result = GALGAS_taskVarListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST GALGAS_taskVarListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_taskVarListAST result = GALGAS_taskVarListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST GALGAS_taskVarListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_taskVarListAST result = GALGAS_taskVarListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskVarListAST::plusAssign_operation (const GALGAS_taskVarListAST inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskVarListAST::getter_mVarNameAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskVarListAST * p = (cCollectionElement_taskVarListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskVarListAST) ;
    result = p->mObject.mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskVarListAST::getter_mVarTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskVarListAST * p = (cCollectionElement_taskVarListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskVarListAST) ;
    result = p->mObject.mAttribute_mVarTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_taskVarListAST::getter_mVarInitExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskVarListAST * p = (cCollectionElement_taskVarListAST *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskVarListAST) ;
    result = p->mObject.mAttribute_mVarInitExpression ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskVarListAST::cEnumerator_taskVarListAST (const GALGAS_taskVarListAST & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST_2D_element cEnumerator_taskVarListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskVarListAST * p = (const cCollectionElement_taskVarListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskVarListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_taskVarListAST::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_taskVarListAST * p = (const cCollectionElement_taskVarListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskVarListAST) ;
  return p->mObject.mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_taskVarListAST::current_mVarTypeName (LOCATION_ARGS) const {
  const cCollectionElement_taskVarListAST * p = (const cCollectionElement_taskVarListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskVarListAST) ;
  return p->mObject.mAttribute_mVarTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cEnumerator_taskVarListAST::current_mVarInitExpression (LOCATION_ARGS) const {
  const cCollectionElement_taskVarListAST * p = (const cCollectionElement_taskVarListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskVarListAST) ;
  return p->mObject.mAttribute_mVarInitExpression ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @taskVarListAST type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskVarListAST ("taskVarListAST",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskVarListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskVarListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskVarListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskVarListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskVarListAST GALGAS_taskVarListAST::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskVarListAST result ;
  const GALGAS_taskVarListAST * p = (const GALGAS_taskVarListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskVarListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskVarListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@taskInitListAST' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_taskInitListAST : public cCollectionElement {
  public : GALGAS_taskInitListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_taskInitListAST (const GALGAS_lbigint & in_mTaskInitPriority,
                                               const GALGAS_instructionListAST & in_mTaskInitInstructionList,
                                               const GALGAS_location & in_mEndOfTaskInitDeclaration
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

cCollectionElement_taskInitListAST::cCollectionElement_taskInitListAST (const GALGAS_lbigint & in_mTaskInitPriority,
                                                                        const GALGAS_instructionListAST & in_mTaskInitInstructionList,
                                                                        const GALGAS_location & in_mEndOfTaskInitDeclaration
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskInitPriority, in_mTaskInitInstructionList, in_mEndOfTaskInitDeclaration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_taskInitListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_taskInitListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_taskInitListAST (mObject.mAttribute_mTaskInitPriority, mObject.mAttribute_mTaskInitInstructionList, mObject.mAttribute_mEndOfTaskInitDeclaration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_taskInitListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskInitPriority" ":" ;
  mObject.mAttribute_mTaskInitPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskInitInstructionList" ":" ;
  mObject.mAttribute_mTaskInitInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfTaskInitDeclaration" ":" ;
  mObject.mAttribute_mEndOfTaskInitDeclaration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_taskInitListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_taskInitListAST * operand = (cCollectionElement_taskInitListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_taskInitListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST::GALGAS_taskInitListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST::GALGAS_taskInitListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST GALGAS_taskInitListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_taskInitListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST GALGAS_taskInitListAST::constructor_listWithValue (const GALGAS_lbigint & inOperand0,
                                                                          const GALGAS_instructionListAST & inOperand1,
                                                                          const GALGAS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_taskInitListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_taskInitListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lbigint & in_mTaskInitPriority,
                                                        const GALGAS_instructionListAST & in_mTaskInitInstructionList,
                                                        const GALGAS_location & in_mEndOfTaskInitDeclaration
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_taskInitListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_taskInitListAST (in_mTaskInitPriority,
                                                     in_mTaskInitInstructionList,
                                                     in_mEndOfTaskInitDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST::addAssign_operation (const GALGAS_lbigint & inOperand0,
                                                  const GALGAS_instructionListAST & inOperand1,
                                                  const GALGAS_location & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskInitListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST::setter_insertAtIndex (const GALGAS_lbigint inOperand0,
                                                   const GALGAS_instructionListAST inOperand1,
                                                   const GALGAS_location inOperand2,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskInitListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST::setter_removeAtIndex (GALGAS_lbigint & outOperand0,
                                                   GALGAS_instructionListAST & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_taskInitListAST * p = (cCollectionElement_taskInitListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_taskInitListAST) ;
      outOperand0 = p->mObject.mAttribute_mTaskInitPriority ;
      outOperand1 = p->mObject.mAttribute_mTaskInitInstructionList ;
      outOperand2 = p->mObject.mAttribute_mEndOfTaskInitDeclaration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST::setter_popFirst (GALGAS_lbigint & outOperand0,
                                              GALGAS_instructionListAST & outOperand1,
                                              GALGAS_location & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskInitListAST * p = (cCollectionElement_taskInitListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskInitListAST) ;
    outOperand0 = p->mObject.mAttribute_mTaskInitPriority ;
    outOperand1 = p->mObject.mAttribute_mTaskInitInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfTaskInitDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST::setter_popLast (GALGAS_lbigint & outOperand0,
                                             GALGAS_instructionListAST & outOperand1,
                                             GALGAS_location & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskInitListAST * p = (cCollectionElement_taskInitListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskInitListAST) ;
    outOperand0 = p->mObject.mAttribute_mTaskInitPriority ;
    outOperand1 = p->mObject.mAttribute_mTaskInitInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfTaskInitDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST::method_first (GALGAS_lbigint & outOperand0,
                                           GALGAS_instructionListAST & outOperand1,
                                           GALGAS_location & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskInitListAST * p = (cCollectionElement_taskInitListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskInitListAST) ;
    outOperand0 = p->mObject.mAttribute_mTaskInitPriority ;
    outOperand1 = p->mObject.mAttribute_mTaskInitInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfTaskInitDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST::method_last (GALGAS_lbigint & outOperand0,
                                          GALGAS_instructionListAST & outOperand1,
                                          GALGAS_location & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskInitListAST * p = (cCollectionElement_taskInitListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskInitListAST) ;
    outOperand0 = p->mObject.mAttribute_mTaskInitPriority ;
    outOperand1 = p->mObject.mAttribute_mTaskInitInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfTaskInitDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST GALGAS_taskInitListAST::add_operation (const GALGAS_taskInitListAST & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_taskInitListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST GALGAS_taskInitListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_taskInitListAST result = GALGAS_taskInitListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST GALGAS_taskInitListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_taskInitListAST result = GALGAS_taskInitListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST GALGAS_taskInitListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_taskInitListAST result = GALGAS_taskInitListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST::plusAssign_operation (const GALGAS_taskInitListAST inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskInitListAST::getter_mTaskInitPriorityAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskInitListAST * p = (cCollectionElement_taskInitListAST *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskInitListAST) ;
    result = p->mObject.mAttribute_mTaskInitPriority ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_taskInitListAST::getter_mTaskInitInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskInitListAST * p = (cCollectionElement_taskInitListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskInitListAST) ;
    result = p->mObject.mAttribute_mTaskInitInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskInitListAST::getter_mEndOfTaskInitDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskInitListAST * p = (cCollectionElement_taskInitListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskInitListAST) ;
    result = p->mObject.mAttribute_mEndOfTaskInitDeclaration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskInitListAST::cEnumerator_taskInitListAST (const GALGAS_taskInitListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element cEnumerator_taskInitListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskInitListAST * p = (const cCollectionElement_taskInitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskInitListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_taskInitListAST::current_mTaskInitPriority (LOCATION_ARGS) const {
  const cCollectionElement_taskInitListAST * p = (const cCollectionElement_taskInitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskInitListAST) ;
  return p->mObject.mAttribute_mTaskInitPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_taskInitListAST::current_mTaskInitInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_taskInitListAST * p = (const cCollectionElement_taskInitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskInitListAST) ;
  return p->mObject.mAttribute_mTaskInitInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_taskInitListAST::current_mEndOfTaskInitDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_taskInitListAST * p = (const cCollectionElement_taskInitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskInitListAST) ;
  return p->mObject.mAttribute_mEndOfTaskInitDeclaration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @taskInitListAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskInitListAST ("taskInitListAST",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskInitListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskInitListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskInitListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskInitListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST GALGAS_taskInitListAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_taskInitListAST result ;
  const GALGAS_taskInitListAST * p = (const GALGAS_taskInitListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskInitListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskInitListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@syncInstructionBranchList' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_syncInstructionBranchList : public cCollectionElement {
  public : GALGAS_syncInstructionBranchList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_syncInstructionBranchList (const GALGAS_guardedCommand & in_mGuardedCommand,
                                                         const GALGAS_instructionListAST & in_mInstructionList,
                                                         const GALGAS_location & in_mEndOfBranch
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

cCollectionElement_syncInstructionBranchList::cCollectionElement_syncInstructionBranchList (const GALGAS_guardedCommand & in_mGuardedCommand,
                                                                                            const GALGAS_instructionListAST & in_mInstructionList,
                                                                                            const GALGAS_location & in_mEndOfBranch
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand, in_mInstructionList, in_mEndOfBranch) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_syncInstructionBranchList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_syncInstructionBranchList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syncInstructionBranchList (mObject.mAttribute_mGuardedCommand, mObject.mAttribute_mInstructionList, mObject.mAttribute_mEndOfBranch COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_syncInstructionBranchList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGuardedCommand" ":" ;
  mObject.mAttribute_mGuardedCommand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfBranch" ":" ;
  mObject.mAttribute_mEndOfBranch.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_syncInstructionBranchList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syncInstructionBranchList * operand = (cCollectionElement_syncInstructionBranchList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syncInstructionBranchList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList::GALGAS_syncInstructionBranchList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList::GALGAS_syncInstructionBranchList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList GALGAS_syncInstructionBranchList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_syncInstructionBranchList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList GALGAS_syncInstructionBranchList::constructor_listWithValue (const GALGAS_guardedCommand & inOperand0,
                                                                                              const GALGAS_instructionListAST & inOperand1,
                                                                                              const GALGAS_location & inOperand2
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_syncInstructionBranchList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_guardedCommand & in_mGuardedCommand,
                                                                  const GALGAS_instructionListAST & in_mInstructionList,
                                                                  const GALGAS_location & in_mEndOfBranch
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchList * p = NULL ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchList (in_mGuardedCommand,
                                                               in_mInstructionList,
                                                               in_mEndOfBranch COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList::addAssign_operation (const GALGAS_guardedCommand & inOperand0,
                                                            const GALGAS_instructionListAST & inOperand1,
                                                            const GALGAS_location & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList::setter_insertAtIndex (const GALGAS_guardedCommand inOperand0,
                                                             const GALGAS_instructionListAST inOperand1,
                                                             const GALGAS_location inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList::setter_removeAtIndex (GALGAS_guardedCommand & outOperand0,
                                                             GALGAS_instructionListAST & outOperand1,
                                                             GALGAS_location & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syncInstructionBranchList * p = (cCollectionElement_syncInstructionBranchList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syncInstructionBranchList) ;
      outOperand0 = p->mObject.mAttribute_mGuardedCommand ;
      outOperand1 = p->mObject.mAttribute_mInstructionList ;
      outOperand2 = p->mObject.mAttribute_mEndOfBranch ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList::setter_popFirst (GALGAS_guardedCommand & outOperand0,
                                                        GALGAS_instructionListAST & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchList * p = (cCollectionElement_syncInstructionBranchList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchList) ;
    outOperand0 = p->mObject.mAttribute_mGuardedCommand ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfBranch ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList::setter_popLast (GALGAS_guardedCommand & outOperand0,
                                                       GALGAS_instructionListAST & outOperand1,
                                                       GALGAS_location & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchList * p = (cCollectionElement_syncInstructionBranchList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchList) ;
    outOperand0 = p->mObject.mAttribute_mGuardedCommand ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfBranch ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList::method_first (GALGAS_guardedCommand & outOperand0,
                                                     GALGAS_instructionListAST & outOperand1,
                                                     GALGAS_location & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchList * p = (cCollectionElement_syncInstructionBranchList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchList) ;
    outOperand0 = p->mObject.mAttribute_mGuardedCommand ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfBranch ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList::method_last (GALGAS_guardedCommand & outOperand0,
                                                    GALGAS_instructionListAST & outOperand1,
                                                    GALGAS_location & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchList * p = (cCollectionElement_syncInstructionBranchList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchList) ;
    outOperand0 = p->mObject.mAttribute_mGuardedCommand ;
    outOperand1 = p->mObject.mAttribute_mInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfBranch ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList GALGAS_syncInstructionBranchList::add_operation (const GALGAS_syncInstructionBranchList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList GALGAS_syncInstructionBranchList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchList result = GALGAS_syncInstructionBranchList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList GALGAS_syncInstructionBranchList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchList result = GALGAS_syncInstructionBranchList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList GALGAS_syncInstructionBranchList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchList result = GALGAS_syncInstructionBranchList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList::plusAssign_operation (const GALGAS_syncInstructionBranchList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommand GALGAS_syncInstructionBranchList::getter_mGuardedCommandAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchList * p = (cCollectionElement_syncInstructionBranchList *) attributes.ptr () ;
  GALGAS_guardedCommand result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchList) ;
    result = p->mObject.mAttribute_mGuardedCommand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_syncInstructionBranchList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchList * p = (cCollectionElement_syncInstructionBranchList *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchList) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syncInstructionBranchList::getter_mEndOfBranchAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchList * p = (cCollectionElement_syncInstructionBranchList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchList) ;
    result = p->mObject.mAttribute_mEndOfBranch ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syncInstructionBranchList::cEnumerator_syncInstructionBranchList (const GALGAS_syncInstructionBranchList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element cEnumerator_syncInstructionBranchList::current (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchList * p = (const cCollectionElement_syncInstructionBranchList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommand cEnumerator_syncInstructionBranchList::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchList * p = (const cCollectionElement_syncInstructionBranchList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchList) ;
  return p->mObject.mAttribute_mGuardedCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_syncInstructionBranchList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchList * p = (const cCollectionElement_syncInstructionBranchList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchList) ;
  return p->mObject.mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_syncInstructionBranchList::current_mEndOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchList * p = (const cCollectionElement_syncInstructionBranchList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchList) ;
  return p->mObject.mAttribute_mEndOfBranch ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @syncInstructionBranchList type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionBranchList ("syncInstructionBranchList",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionBranchList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList GALGAS_syncInstructionBranchList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchList result ;
  const GALGAS_syncInstructionBranchList * p = (const GALGAS_syncInstructionBranchList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionBranchList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@instructionListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_instructionListAST : public cCollectionElement {
  public : GALGAS_instructionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_instructionListAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_instructionAST & in_mInstruction
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

cCollectionElement_instructionListAST::cCollectionElement_instructionListAST (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_instructionAST & in_mInstruction
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionLocation, in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_instructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_instructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_instructionListAST (mObject.mAttribute_mInstructionLocation, mObject.mAttribute_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_instructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionLocation" ":" ;
  mObject.mAttribute_mInstructionLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mAttribute_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_instructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_instructionListAST * operand = (cCollectionElement_instructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_instructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST::GALGAS_instructionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST::GALGAS_instructionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_instructionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::constructor_listWithValue (const GALGAS_location & inOperand0,
                                                                                const GALGAS_instructionAST & inOperand1
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_instructionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_instructionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_instructionAST & in_mInstruction
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_instructionListAST (in_mInstructionLocation,
                                                        in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::addAssign_operation (const GALGAS_location & inOperand0,
                                                     const GALGAS_instructionAST & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                      const GALGAS_instructionAST inOperand1,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                      GALGAS_instructionAST & outOperand1,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
      outOperand0 = p->mObject.mAttribute_mInstructionLocation ;
      outOperand1 = p->mObject.mAttribute_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::setter_popFirst (GALGAS_location & outOperand0,
                                                 GALGAS_instructionAST & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstructionLocation ;
    outOperand1 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::setter_popLast (GALGAS_location & outOperand0,
                                                GALGAS_instructionAST & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstructionLocation ;
    outOperand1 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::method_first (GALGAS_location & outOperand0,
                                              GALGAS_instructionAST & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstructionLocation ;
    outOperand1 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::method_last (GALGAS_location & outOperand0,
                                             GALGAS_instructionAST & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstructionLocation ;
    outOperand1 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::add_operation (const GALGAS_instructionListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::plusAssign_operation (const GALGAS_instructionListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_instructionListAST::getter_mInstructionLocationAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    result = p->mObject.mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionAST GALGAS_instructionListAST::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  GALGAS_instructionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    result = p->mObject.mAttribute_mInstruction ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_instructionListAST::cEnumerator_instructionListAST (const GALGAS_instructionListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element cEnumerator_instructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListAST * p = (const cCollectionElement_instructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_instructionListAST::current_mInstructionLocation (LOCATION_ARGS) const {
  const cCollectionElement_instructionListAST * p = (const cCollectionElement_instructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
  return p->mObject.mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionAST cEnumerator_instructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_instructionListAST * p = (const cCollectionElement_instructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
  return p->mObject.mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @instructionListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListAST ("instructionListAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_instructionListAST result ;
  const GALGAS_instructionListAST * p = (const GALGAS_instructionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@taskInitSortedListAST' sorted list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_taskInitSortedListAST : public cSortedListElement {
  public : GALGAS_taskInitSortedListAST_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_taskInitSortedListAST (const GALGAS_lbigint & in_mTaskInitPriority,
                                                     const GALGAS_instructionListAST & in_mTaskInitInstructionList,
                                                     const GALGAS_location & in_mEndOfTaskInitDeclaration,
                                                     const GALGAS_bigint & in_mPriority
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

cSortedListElement_taskInitSortedListAST::cSortedListElement_taskInitSortedListAST (const GALGAS_lbigint & in_mTaskInitPriority,
                                                                                    const GALGAS_instructionListAST & in_mTaskInitInstructionList,
                                                                                    const GALGAS_location & in_mEndOfTaskInitDeclaration,
                                                                                    const GALGAS_bigint & in_mPriority
                                                                                    COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mTaskInitPriority, in_mTaskInitInstructionList, in_mEndOfTaskInitDeclaration, in_mPriority) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_taskInitSortedListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_taskInitSortedListAST::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_taskInitSortedListAST (mObject.mAttribute_mTaskInitPriority, mObject.mAttribute_mTaskInitInstructionList, mObject.mAttribute_mEndOfTaskInitDeclaration, mObject.mAttribute_mPriority COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_taskInitSortedListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskInitPriority" ":" ;
  mObject.mAttribute_mTaskInitPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskInitInstructionList" ":" ;
  mObject.mAttribute_mTaskInitInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfTaskInitDeclaration" ":" ;
  mObject.mAttribute_mEndOfTaskInitDeclaration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mAttribute_mPriority.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_taskInitSortedListAST::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_taskInitSortedListAST * operand = (cSortedListElement_taskInitSortedListAST *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskInitSortedListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST::GALGAS_taskInitSortedListAST (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_taskInitSortedListAST::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_taskInitSortedListAST * operand = (const cSortedListElement_taskInitSortedListAST *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskInitSortedListAST) ;
  if (result == kOperandEqual) {
    result = mObject.mAttribute_mPriority.objectCompare (operand->mObject.mAttribute_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST GALGAS_taskInitSortedListAST::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_taskInitSortedListAST result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST GALGAS_taskInitSortedListAST::constructor_sortedListWithValue (const GALGAS_lbigint & inOperand0,
                                                                                            const GALGAS_instructionListAST & inOperand1,
                                                                                            const GALGAS_location & inOperand2,
                                                                                            const GALGAS_bigint & inOperand3
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskInitSortedListAST result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_taskInitSortedListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.addObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitSortedListAST::addAssign_operation (const GALGAS_lbigint & inOperand0,
                                                        const GALGAS_instructionListAST & inOperand1,
                                                        const GALGAS_location & inOperand2,
                                                        const GALGAS_bigint & inOperand3
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_taskInitSortedListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitSortedListAST::plusAssign_operation (const GALGAS_taskInitSortedListAST inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitSortedListAST::setter_popSmallest (GALGAS_lbigint & outOperand0,
                                                       GALGAS_instructionListAST & outOperand1,
                                                       GALGAS_location & outOperand2,
                                                       GALGAS_bigint & outOperand3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskInitSortedListAST * p = (cSortedListElement_taskInitSortedListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskInitSortedListAST) ;
    outOperand0 = p->mObject.mAttribute_mTaskInitPriority ;
    outOperand1 = p->mObject.mAttribute_mTaskInitInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfTaskInitDeclaration ;
    outOperand3 = p->mObject.mAttribute_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitSortedListAST::setter_popGreatest (GALGAS_lbigint & outOperand0,
                                                       GALGAS_instructionListAST & outOperand1,
                                                       GALGAS_location & outOperand2,
                                                       GALGAS_bigint & outOperand3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskInitSortedListAST * p = (cSortedListElement_taskInitSortedListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskInitSortedListAST) ;
    outOperand0 = p->mObject.mAttribute_mTaskInitPriority ;
    outOperand1 = p->mObject.mAttribute_mTaskInitInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfTaskInitDeclaration ;
    outOperand3 = p->mObject.mAttribute_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitSortedListAST::method_smallest (GALGAS_lbigint & outOperand0,
                                                    GALGAS_instructionListAST & outOperand1,
                                                    GALGAS_location & outOperand2,
                                                    GALGAS_bigint & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskInitSortedListAST * p = (cSortedListElement_taskInitSortedListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskInitSortedListAST) ;
    outOperand0 = p->mObject.mAttribute_mTaskInitPriority ;
    outOperand1 = p->mObject.mAttribute_mTaskInitInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfTaskInitDeclaration ;
    outOperand3 = p->mObject.mAttribute_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitSortedListAST::method_greatest (GALGAS_lbigint & outOperand0,
                                                    GALGAS_instructionListAST & outOperand1,
                                                    GALGAS_location & outOperand2,
                                                    GALGAS_bigint & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskInitSortedListAST * p = (cSortedListElement_taskInitSortedListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskInitSortedListAST) ;
    outOperand0 = p->mObject.mAttribute_mTaskInitPriority ;
    outOperand1 = p->mObject.mAttribute_mTaskInitInstructionList ;
    outOperand2 = p->mObject.mAttribute_mEndOfTaskInitDeclaration ;
    outOperand3 = p->mObject.mAttribute_mPriority ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskInitSortedListAST::cEnumerator_taskInitSortedListAST (const GALGAS_taskInitSortedListAST & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST_2D_element cEnumerator_taskInitSortedListAST::current (LOCATION_ARGS) const {
  const cSortedListElement_taskInitSortedListAST * p = (const cSortedListElement_taskInitSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskInitSortedListAST) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_taskInitSortedListAST::current_mTaskInitPriority (LOCATION_ARGS) const {
  const cSortedListElement_taskInitSortedListAST * p = (const cSortedListElement_taskInitSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskInitSortedListAST) ;
  return p->mObject.mAttribute_mTaskInitPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_taskInitSortedListAST::current_mTaskInitInstructionList (LOCATION_ARGS) const {
  const cSortedListElement_taskInitSortedListAST * p = (const cSortedListElement_taskInitSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskInitSortedListAST) ;
  return p->mObject.mAttribute_mTaskInitInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_taskInitSortedListAST::current_mEndOfTaskInitDeclaration (LOCATION_ARGS) const {
  const cSortedListElement_taskInitSortedListAST * p = (const cSortedListElement_taskInitSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskInitSortedListAST) ;
  return p->mObject.mAttribute_mEndOfTaskInitDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_taskInitSortedListAST::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_taskInitSortedListAST * p = (const cSortedListElement_taskInitSortedListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskInitSortedListAST) ;
  return p->mObject.mAttribute_mPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @taskInitSortedListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskInitSortedListAST ("taskInitSortedListAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskInitSortedListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskInitSortedListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskInitSortedListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskInitSortedListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST GALGAS_taskInitSortedListAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_taskInitSortedListAST result ;
  const GALGAS_taskInitSortedListAST * p = (const GALGAS_taskInitSortedListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskInitSortedListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskInitSortedListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_taskProcedureMap::cMapElement_taskProcedureMap (const GALGAS_lstring & inKey
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_taskProcedureMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_taskProcedureMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_taskProcedureMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_taskProcedureMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_taskProcedureMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_taskProcedureMap * operand = (cMapElement_taskProcedureMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap::GALGAS_taskProcedureMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap::GALGAS_taskProcedureMap (const GALGAS_taskProcedureMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap & GALGAS_taskProcedureMap::operator = (const GALGAS_taskProcedureMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskProcedureMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_taskProcedureMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskProcedureMap::constructor_mapWithMapToOverride (const GALGAS_taskProcedureMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_taskProcedureMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskProcedureMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_taskProcedureMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_taskProcedureMap * p = NULL ;
  macroMyNew (p, cMapElement_taskProcedureMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskProcedureMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap::setter_insertKey (GALGAS_lstring inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_taskProcedureMap * p = NULL ;
  macroMyNew (p, cMapElement_taskProcedureMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' proc is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_taskProcedureMap_searchKey = "there is no '%K' proc" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap::method_searchKey (GALGAS_lstring inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_taskProcedureMap * p = (const cMapElement_taskProcedureMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_taskProcedureMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_taskProcedureMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_taskProcedureMap * GALGAS_taskProcedureMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_taskProcedureMap * result = (cMapElement_taskProcedureMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskProcedureMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskProcedureMap::cEnumerator_taskProcedureMap (const GALGAS_taskProcedureMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element cEnumerator_taskProcedureMap::current (LOCATION_ARGS) const {
  const cMapElement_taskProcedureMap * p = (const cMapElement_taskProcedureMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskProcedureMap) ;
  return GALGAS_taskProcedureMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_taskProcedureMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskProcedureMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskProcedureMap ("taskProcedureMap",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskProcedureMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskProcedureMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskProcedureMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskProcedureMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskProcedureMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskProcedureMap result ;
  const GALGAS_taskProcedureMap * p = (const GALGAS_taskProcedureMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskProcedureMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskProcedureMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_taskMap::cMapElement_taskMap (const GALGAS_lstring & inKey,
                                          const GALGAS_taskProcedureMap & in_mTaskProcedureMap
                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTaskProcedureMap (in_mTaskProcedureMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_taskMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTaskProcedureMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_taskMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_taskMap (mAttribute_lkey, mAttribute_mTaskProcedureMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_taskMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskProcedureMap" ":" ;
  mAttribute_mTaskProcedureMap.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_taskMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_taskMap * operand = (cMapElement_taskMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTaskProcedureMap.objectCompare (operand->mAttribute_mTaskProcedureMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap::GALGAS_taskMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap::GALGAS_taskMap (const GALGAS_taskMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap & GALGAS_taskMap::operator = (const GALGAS_taskMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap GALGAS_taskMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_taskMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap GALGAS_taskMap::constructor_mapWithMapToOverride (const GALGAS_taskMap & inMapToOverride
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_taskMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap GALGAS_taskMap::getter_overriddenMap (C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_taskMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap::addAssign_operation (const GALGAS_lstring & inKey,
                                          const GALGAS_taskProcedureMap & inArgument0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * p = NULL ;
  macroMyNew (p, cMapElement_taskMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap::setter_insertKey (GALGAS_lstring inKey,
                                       GALGAS_taskProcedureMap inArgument0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * p = NULL ;
  macroMyNew (p, cMapElement_taskMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' task is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_taskMap_searchKey = "there is no '%K' task" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap::method_searchKey (GALGAS_lstring inKey,
                                       GALGAS_taskProcedureMap & outArgument0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_taskMap_searchKey
                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_taskMap) ;
    outArgument0 = p->mAttribute_mTaskProcedureMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskMap::getter_mTaskProcedureMapForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) attributes ;
  GALGAS_taskProcedureMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    result = p->mAttribute_mTaskProcedureMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap::setter_setMTaskProcedureMapForKey (GALGAS_taskProcedureMap inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_taskMap * p = (cMapElement_taskMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    p->mAttribute_mTaskProcedureMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_taskMap * GALGAS_taskMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                         const GALGAS_string & inKey
                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * result = (cMapElement_taskMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskMap::cEnumerator_taskMap (const GALGAS_taskMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element cEnumerator_taskMap::current (LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMap) ;
  return GALGAS_taskMap_2D_element (p->mAttribute_lkey, p->mAttribute_mTaskProcedureMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_taskMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap cEnumerator_taskMap::current_mTaskProcedureMap (LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMap) ;
  return p->mAttribute_mTaskProcedureMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @taskMap type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskMap ("taskMap",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap GALGAS_taskMap::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_taskMap result ;
  const GALGAS_taskMap * p = (const GALGAS_taskMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_taskMapIR::cMapElement_taskMapIR (const GALGAS_lstring & inKey,
                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mTaskType,
                                              const GALGAS_bigint & in_mPriority,
                                              const GALGAS_bigint & in_mStackSize,
                                              const GALGAS_allocaList & in_mAllocaList,
                                              const GALGAS_instructionListIR & in_mInitInstructionListIR
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTaskType (in_mTaskType),
mAttribute_mPriority (in_mPriority),
mAttribute_mStackSize (in_mStackSize),
mAttribute_mAllocaList (in_mAllocaList),
mAttribute_mInitInstructionListIR (in_mInitInstructionListIR) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_taskMapIR::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTaskType.isValid () && mAttribute_mPriority.isValid () && mAttribute_mStackSize.isValid () && mAttribute_mAllocaList.isValid () && mAttribute_mInitInstructionListIR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_taskMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_taskMapIR (mAttribute_lkey, mAttribute_mTaskType, mAttribute_mPriority, mAttribute_mStackSize, mAttribute_mAllocaList, mAttribute_mInitInstructionListIR COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_taskMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskType" ":" ;
  mAttribute_mTaskType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mAttribute_mPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStackSize" ":" ;
  mAttribute_mStackSize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllocaList" ":" ;
  mAttribute_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitInstructionListIR" ":" ;
  mAttribute_mInitInstructionListIR.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_taskMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_taskMapIR * operand = (cMapElement_taskMapIR *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTaskType.objectCompare (operand->mAttribute_mTaskType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPriority.objectCompare (operand->mAttribute_mPriority) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStackSize.objectCompare (operand->mAttribute_mStackSize) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAllocaList.objectCompare (operand->mAttribute_mAllocaList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInitInstructionListIR.objectCompare (operand->mAttribute_mInitInstructionListIR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR::GALGAS_taskMapIR (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR::GALGAS_taskMapIR (const GALGAS_taskMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR & GALGAS_taskMapIR::operator = (const GALGAS_taskMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR GALGAS_taskMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR GALGAS_taskMapIR::constructor_mapWithMapToOverride (const GALGAS_taskMapIR & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR GALGAS_taskMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_taskMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                            const GALGAS_bigint & inArgument1,
                                            const GALGAS_bigint & inArgument2,
                                            const GALGAS_allocaList & inArgument3,
                                            const GALGAS_instructionListIR & inArgument4,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * p = NULL ;
  macroMyNew (p, cMapElement_taskMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::setter_insertKey (GALGAS_lstring inKey,
                                         GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                         GALGAS_bigint inArgument1,
                                         GALGAS_bigint inArgument2,
                                         GALGAS_allocaList inArgument3,
                                         GALGAS_instructionListIR inArgument4,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * p = NULL ;
  macroMyNew (p, cMapElement_taskMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_taskMapIR_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                         GALGAS_bigint & outArgument1,
                                         GALGAS_bigint & outArgument2,
                                         GALGAS_allocaList & outArgument3,
                                         GALGAS_instructionListIR & outArgument4,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_taskMapIR_searchKey
                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    outArgument0 = p->mAttribute_mTaskType ;
    outArgument1 = p->mAttribute_mPriority ;
    outArgument2 = p->mAttribute_mStackSize ;
    outArgument3 = p->mAttribute_mAllocaList ;
    outArgument4 = p->mAttribute_mInitInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::setter_removeKey (GALGAS_lstring inKey,
                                         GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                         GALGAS_bigint & outArgument1,
                                         GALGAS_bigint & outArgument2,
                                         GALGAS_allocaList & outArgument3,
                                         GALGAS_instructionListIR & outArgument4,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "** internal error **" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes.ptr () ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    outArgument0 = p->mAttribute_mTaskType ;
    outArgument1 = p->mAttribute_mPriority ;
    outArgument2 = p->mAttribute_mStackSize ;
    outArgument3 = p->mAttribute_mAllocaList ;
    outArgument4 = p->mAttribute_mInitInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_taskMapIR::getter_mTaskTypeForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mAttribute_mTaskType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskMapIR::getter_mPriorityForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mAttribute_mPriority ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskMapIR::getter_mStackSizeForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mAttribute_mStackSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_taskMapIR::getter_mAllocaListForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_allocaList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mAttribute_mAllocaList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_taskMapIR::getter_mInitInstructionListIRForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mAttribute_mInitInstructionListIR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::setter_setMTaskTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mAttribute_mTaskType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::setter_setMPriorityForKey (GALGAS_bigint inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mAttribute_mPriority = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::setter_setMStackSizeForKey (GALGAS_bigint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mAttribute_mStackSize = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::setter_setMAllocaListForKey (GALGAS_allocaList inAttributeValue,
                                                    GALGAS_string inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mAttribute_mAllocaList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR::setter_setMInitInstructionListIRForKey (GALGAS_instructionListIR inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mAttribute_mInitInstructionListIR = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_taskMapIR * GALGAS_taskMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * result = (cMapElement_taskMapIR *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskMapIR) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskMapIR::cEnumerator_taskMapIR (const GALGAS_taskMapIR & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element cEnumerator_taskMapIR::current (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return GALGAS_taskMapIR_2D_element (p->mAttribute_lkey, p->mAttribute_mTaskType, p->mAttribute_mPriority, p->mAttribute_mStackSize, p->mAttribute_mAllocaList, p->mAttribute_mInitInstructionListIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_taskMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_taskMapIR::current_mTaskType (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mAttribute_mTaskType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_taskMapIR::current_mPriority (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_taskMapIR::current_mStackSize (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mAttribute_mStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_taskMapIR::current_mAllocaList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_taskMapIR::current_mInitInstructionListIR (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mAttribute_mInitInstructionListIR ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @taskMapIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskMapIR ("taskMapIR",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMapIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR GALGAS_taskMapIR::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  const GALGAS_taskMapIR * p = (const GALGAS_taskMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@allocaList' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_allocaList : public cCollectionElement {
  public : GALGAS_allocaList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_allocaList (const GALGAS_string & in_mVarName,
                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mType
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

cCollectionElement_allocaList::cCollectionElement_allocaList (const GALGAS_string & in_mVarName,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarName, in_mType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_allocaList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_allocaList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_allocaList (mObject.mAttribute_mVarName, mObject.mAttribute_mType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_allocaList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarName" ":" ;
  mObject.mAttribute_mVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_allocaList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_allocaList * operand = (cCollectionElement_allocaList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_allocaList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList::GALGAS_allocaList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList::GALGAS_allocaList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_allocaList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_allocaList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_allocaList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_string & in_mVarName,
                                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_allocaList * p = NULL ;
  macroMyNew (p, cCollectionElement_allocaList (in_mVarName,
                                                in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::addAssign_operation (const GALGAS_string & inOperand0,
                                             const GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allocaList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                              const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_allocaList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                              GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_allocaList) ;
      outOperand0 = p->mObject.mAttribute_mVarName ;
      outOperand1 = p->mObject.mAttribute_mType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::setter_popFirst (GALGAS_string & outOperand0,
                                         GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::setter_popLast (GALGAS_string & outOperand0,
                                        GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::method_first (GALGAS_string & outOperand0,
                                      GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::method_last (GALGAS_string & outOperand0,
                                     GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::add_operation (const GALGAS_allocaList & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_allocaList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_allocaList result = GALGAS_allocaList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_allocaList result = GALGAS_allocaList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_allocaList result = GALGAS_allocaList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList::plusAssign_operation (const GALGAS_allocaList inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_allocaList::getter_mVarNameAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_allocaList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_allocaList::cEnumerator_allocaList (const GALGAS_allocaList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList_2D_element cEnumerator_allocaList::current (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_allocaList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_allocaList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mAttribute_mType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @allocaList type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allocaList ("allocaList",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allocaList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allocaList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allocaList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_allocaList::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allocaList result ;
  const GALGAS_allocaList * p = (const GALGAS_allocaList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allocaList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allocaList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@instructionListIR' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_instructionListIR : public cCollectionElement {
  public : GALGAS_instructionListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_instructionListIR (const GALGAS_abstractInstructionIR & in_mInstructionGeneration
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

cCollectionElement_instructionListIR::cCollectionElement_instructionListIR (const GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_instructionListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_instructionListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_instructionListIR (mObject.mAttribute_mInstructionGeneration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_instructionListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionGeneration" ":" ;
  mObject.mAttribute_mInstructionGeneration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_instructionListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_instructionListIR * operand = (cCollectionElement_instructionListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_instructionListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR::GALGAS_instructionListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR::GALGAS_instructionListIR (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_instructionListIR result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::constructor_listWithValue (const GALGAS_abstractInstructionIR & inOperand0
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_instructionListIR result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_instructionListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_instructionListIR (in_mInstructionGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::addAssign_operation (const GALGAS_abstractInstructionIR & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::setter_insertAtIndex (const GALGAS_abstractInstructionIR inOperand0,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::setter_removeAtIndex (GALGAS_abstractInstructionIR & outOperand0,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
      outOperand0 = p->mObject.mAttribute_mInstructionGeneration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::setter_popFirst (GALGAS_abstractInstructionIR & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mAttribute_mInstructionGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::setter_popLast (GALGAS_abstractInstructionIR & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mAttribute_mInstructionGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::method_first (GALGAS_abstractInstructionIR & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mAttribute_mInstructionGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::method_last (GALGAS_abstractInstructionIR & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mAttribute_mInstructionGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::add_operation (const GALGAS_instructionListIR & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::plusAssign_operation (const GALGAS_instructionListIR inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInstructionIR GALGAS_instructionListIR::getter_mInstructionGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  GALGAS_abstractInstructionIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    result = p->mObject.mAttribute_mInstructionGeneration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_instructionListIR::cEnumerator_instructionListIR (const GALGAS_instructionListIR & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR_2D_element cEnumerator_instructionListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInstructionIR cEnumerator_instructionListIR::current_mInstructionGeneration (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject.mAttribute_mInstructionGeneration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @instructionListIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListIR ("instructionListIR",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_instructionListIR result ;
  const GALGAS_instructionListIR * p = (const GALGAS_instructionListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@taskSortedListIR' sorted list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_taskSortedListIR : public cSortedListElement {
  public : GALGAS_taskSortedListIR_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_taskSortedListIR (const GALGAS_string & in_mTaskName,
                                                const GALGAS_bigint & in_mPriority,
                                                const GALGAS_bigint & in_mStackSize,
                                                const GALGAS_allocaList & in_mAllocaList,
                                                const GALGAS_instructionListIR & in_mInitInstructionListIR
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

cSortedListElement_taskSortedListIR::cSortedListElement_taskSortedListIR (const GALGAS_string & in_mTaskName,
                                                                          const GALGAS_bigint & in_mPriority,
                                                                          const GALGAS_bigint & in_mStackSize,
                                                                          const GALGAS_allocaList & in_mAllocaList,
                                                                          const GALGAS_instructionListIR & in_mInitInstructionListIR
                                                                          COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mTaskName, in_mPriority, in_mStackSize, in_mAllocaList, in_mInitInstructionListIR) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_taskSortedListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_taskSortedListIR::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_taskSortedListIR (mObject.mAttribute_mTaskName, mObject.mAttribute_mPriority, mObject.mAttribute_mStackSize, mObject.mAttribute_mAllocaList, mObject.mAttribute_mInitInstructionListIR COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_taskSortedListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskName" ":" ;
  mObject.mAttribute_mTaskName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPriority" ":" ;
  mObject.mAttribute_mPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStackSize" ":" ;
  mObject.mAttribute_mStackSize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllocaList" ":" ;
  mObject.mAttribute_mAllocaList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitInstructionListIR" ":" ;
  mObject.mAttribute_mInitInstructionListIR.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_taskSortedListIR::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_taskSortedListIR * operand = (cSortedListElement_taskSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskSortedListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR::GALGAS_taskSortedListIR (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_taskSortedListIR::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_taskSortedListIR * operand = (const cSortedListElement_taskSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskSortedListIR) ;
  if (result == kOperandEqual) {
    result = mObject.mAttribute_mPriority.objectCompare (operand->mObject.mAttribute_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_taskSortedListIR result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::constructor_sortedListWithValue (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_bigint & inOperand1,
                                                                                  const GALGAS_bigint & inOperand2,
                                                                                  const GALGAS_allocaList & inOperand3,
                                                                                  const GALGAS_instructionListIR & inOperand4
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_taskSortedListIR result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_taskSortedListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.addObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR::addAssign_operation (const GALGAS_string & inOperand0,
                                                   const GALGAS_bigint & inOperand1,
                                                   const GALGAS_bigint & inOperand2,
                                                   const GALGAS_allocaList & inOperand3,
                                                   const GALGAS_instructionListIR & inOperand4
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_taskSortedListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR::plusAssign_operation (const GALGAS_taskSortedListIR inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR::setter_popSmallest (GALGAS_string & outOperand0,
                                                  GALGAS_bigint & outOperand1,
                                                  GALGAS_bigint & outOperand2,
                                                  GALGAS_allocaList & outOperand3,
                                                  GALGAS_instructionListIR & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mAttribute_mTaskName ;
    outOperand1 = p->mObject.mAttribute_mPriority ;
    outOperand2 = p->mObject.mAttribute_mStackSize ;
    outOperand3 = p->mObject.mAttribute_mAllocaList ;
    outOperand4 = p->mObject.mAttribute_mInitInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR::setter_popGreatest (GALGAS_string & outOperand0,
                                                  GALGAS_bigint & outOperand1,
                                                  GALGAS_bigint & outOperand2,
                                                  GALGAS_allocaList & outOperand3,
                                                  GALGAS_instructionListIR & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mAttribute_mTaskName ;
    outOperand1 = p->mObject.mAttribute_mPriority ;
    outOperand2 = p->mObject.mAttribute_mStackSize ;
    outOperand3 = p->mObject.mAttribute_mAllocaList ;
    outOperand4 = p->mObject.mAttribute_mInitInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR::method_smallest (GALGAS_string & outOperand0,
                                               GALGAS_bigint & outOperand1,
                                               GALGAS_bigint & outOperand2,
                                               GALGAS_allocaList & outOperand3,
                                               GALGAS_instructionListIR & outOperand4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mAttribute_mTaskName ;
    outOperand1 = p->mObject.mAttribute_mPriority ;
    outOperand2 = p->mObject.mAttribute_mStackSize ;
    outOperand3 = p->mObject.mAttribute_mAllocaList ;
    outOperand4 = p->mObject.mAttribute_mInitInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSortedListIR::method_greatest (GALGAS_string & outOperand0,
                                               GALGAS_bigint & outOperand1,
                                               GALGAS_bigint & outOperand2,
                                               GALGAS_allocaList & outOperand3,
                                               GALGAS_instructionListIR & outOperand4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mAttribute_mTaskName ;
    outOperand1 = p->mObject.mAttribute_mPriority ;
    outOperand2 = p->mObject.mAttribute_mStackSize ;
    outOperand3 = p->mObject.mAttribute_mAllocaList ;
    outOperand4 = p->mObject.mAttribute_mInitInstructionListIR ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskSortedListIR::cEnumerator_taskSortedListIR (const GALGAS_taskSortedListIR & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR_2D_element cEnumerator_taskSortedListIR::current (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_taskSortedListIR::current_mTaskName (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mAttribute_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_taskSortedListIR::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_taskSortedListIR::current_mStackSize (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mAttribute_mStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList cEnumerator_taskSortedListIR::current_mAllocaList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_taskSortedListIR::current_mInitInstructionListIR (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mAttribute_mInitInstructionListIR ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskSortedListIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskSortedListIR ("taskSortedListIR",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskSortedListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSortedListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskSortedListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSortedListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskSortedListIR result ;
  const GALGAS_taskSortedListIR * p = (const GALGAS_taskSortedListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskSortedListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSortedListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

