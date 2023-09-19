#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element::GALGAS_assignmentOperatorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element::~ GALGAS_assignmentOperatorMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element::GALGAS_assignmentOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_abstractAssignmentOperatorUsage & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mOperatorUsage (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element GALGAS_assignmentOperatorMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                  const GALGAS_abstractAssignmentOperatorUsage & in_mOperatorUsage 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap_2D_element result ;
  if (in_lkey.isValid () && in_mOperatorUsage.isValid ()) {
    result = GALGAS_assignmentOperatorMap_2D_element (in_lkey, in_mOperatorUsage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_assignmentOperatorMap_2D_element::objectCompare (const GALGAS_assignmentOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperatorUsage.objectCompare (inOperand.mProperty_mOperatorUsage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_assignmentOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOperatorUsage.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOperatorUsage.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @assignmentOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOperatorUsage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @assignmentOperatorMap-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentOperatorMap_2D_element ("assignmentOperatorMap-element",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentOperatorMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element GALGAS_assignmentOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap_2D_element result ;
  const GALGAS_assignmentOperatorMap_2D_element * p = (const GALGAS_assignmentOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element::GALGAS_assignmentGenerationVarMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element::~ GALGAS_assignmentGenerationVarMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element::GALGAS_assignmentGenerationVarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element GALGAS_assignmentGenerationVarMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_assignmentGenerationVarMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element GALGAS_assignmentGenerationVarMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                            const GALGAS_string & in_mValue 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap_2D_element result ;
  if (in_lkey.isValid () && in_mValue.isValid ()) {
    result = GALGAS_assignmentGenerationVarMap_2D_element (in_lkey, in_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_assignmentGenerationVarMap_2D_element::objectCompare (const GALGAS_assignmentGenerationVarMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_assignmentGenerationVarMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @assignmentGenerationVarMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @assignmentGenerationVarMap-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2D_element ("assignmentGenerationVarMap-element",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentGenerationVarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentGenerationVarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentGenerationVarMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element GALGAS_assignmentGenerationVarMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap_2D_element result ;
  const GALGAS_assignmentGenerationVarMap_2D_element * p = (const GALGAS_assignmentGenerationVarMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentGenerationVarMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentGenerationVarMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_targetParameters::GALGAS_targetParameters (void) :
mProperty_mConfigurationLocation (),
mProperty_mPython_5F_utilityToolList (),
mProperty_mPython_5F_build (),
mProperty_mLinkerScript (),
mProperty_mPointerSize (),
mProperty_mHandleDynamicArray (),
mProperty_mSystemStackSize (),
mProperty_mStackedUserRegisterOnInterruptByteSize (),
mProperty_mNopInstructionStringInLLVM (),
mProperty_mBitbandRegisterBaseAddress (),
mProperty_mBitbandRegisterEndAddress (),
mProperty_mBitbandRegisterRelocationAddress (),
mProperty_mBitbandRegisterOffsetMultiplier (),
mProperty_mBitbandRegisterBitMultiplier (),
mProperty_mSectionHandler (),
mProperty_mSectionPushedRegisterByteSize (),
mProperty_mSectionDispatcherHeader (),
mProperty_mSectionDispatcherEntry (),
mProperty_mSectionDispatcherInvocationFromAnyMode (),
mProperty_mSectionDispatcherInvocationFromUserMode (),
mProperty_m_5F_C_5F_definitionFiles (),
mProperty_m_5F_S_5F_definitionFiles (),
mProperty_m_5F_LL_5F_definitionFiles (),
mProperty_mXtrInterruptHandler (),
mProperty_mUndefinedInterruptHandler (),
mProperty_mServiceHandler (),
mProperty_mServicePushedRegisterByteSize (),
mProperty_mServiceDispatcherEntry (),
mProperty_mServiceDispatcherHeader (),
mProperty_mServiceEntryNoReturnedValue (),
mProperty_mServiceEntryWithReturnValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_targetParameters::~ GALGAS_targetParameters (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_targetParameters::GALGAS_targetParameters (const GALGAS_location & inOperand0,
                                                  const GALGAS__32_lstringlist & inOperand1,
                                                  const GALGAS_lstring & inOperand2,
                                                  const GALGAS_lstring & inOperand3,
                                                  const GALGAS_uint & inOperand4,
                                                  const GALGAS_bool & inOperand5,
                                                  const GALGAS_lbigint & inOperand6,
                                                  const GALGAS_lbigint & inOperand7,
                                                  const GALGAS_lstring & inOperand8,
                                                  const GALGAS_lbigint & inOperand9,
                                                  const GALGAS_lbigint & inOperand10,
                                                  const GALGAS_lbigint & inOperand11,
                                                  const GALGAS_lbigint & inOperand12,
                                                  const GALGAS_lbigint & inOperand13,
                                                  const GALGAS_lstring & inOperand14,
                                                  const GALGAS_lbigint & inOperand15,
                                                  const GALGAS_lstring & inOperand16,
                                                  const GALGAS_lstring & inOperand17,
                                                  const GALGAS_lstring & inOperand18,
                                                  const GALGAS_lstring & inOperand19,
                                                  const GALGAS_lstringlist & inOperand20,
                                                  const GALGAS_lstringlist & inOperand21,
                                                  const GALGAS_lstringlist & inOperand22,
                                                  const GALGAS_lstring & inOperand23,
                                                  const GALGAS_lstring & inOperand24,
                                                  const GALGAS_lstring & inOperand25,
                                                  const GALGAS_lbigint & inOperand26,
                                                  const GALGAS_lstring & inOperand27,
                                                  const GALGAS_lstring & inOperand28,
                                                  const GALGAS_lstring & inOperand29,
                                                  const GALGAS_lstring & inOperand30) :
mProperty_mConfigurationLocation (inOperand0),
mProperty_mPython_5F_utilityToolList (inOperand1),
mProperty_mPython_5F_build (inOperand2),
mProperty_mLinkerScript (inOperand3),
mProperty_mPointerSize (inOperand4),
mProperty_mHandleDynamicArray (inOperand5),
mProperty_mSystemStackSize (inOperand6),
mProperty_mStackedUserRegisterOnInterruptByteSize (inOperand7),
mProperty_mNopInstructionStringInLLVM (inOperand8),
mProperty_mBitbandRegisterBaseAddress (inOperand9),
mProperty_mBitbandRegisterEndAddress (inOperand10),
mProperty_mBitbandRegisterRelocationAddress (inOperand11),
mProperty_mBitbandRegisterOffsetMultiplier (inOperand12),
mProperty_mBitbandRegisterBitMultiplier (inOperand13),
mProperty_mSectionHandler (inOperand14),
mProperty_mSectionPushedRegisterByteSize (inOperand15),
mProperty_mSectionDispatcherHeader (inOperand16),
mProperty_mSectionDispatcherEntry (inOperand17),
mProperty_mSectionDispatcherInvocationFromAnyMode (inOperand18),
mProperty_mSectionDispatcherInvocationFromUserMode (inOperand19),
mProperty_m_5F_C_5F_definitionFiles (inOperand20),
mProperty_m_5F_S_5F_definitionFiles (inOperand21),
mProperty_m_5F_LL_5F_definitionFiles (inOperand22),
mProperty_mXtrInterruptHandler (inOperand23),
mProperty_mUndefinedInterruptHandler (inOperand24),
mProperty_mServiceHandler (inOperand25),
mProperty_mServicePushedRegisterByteSize (inOperand26),
mProperty_mServiceDispatcherEntry (inOperand27),
mProperty_mServiceDispatcherHeader (inOperand28),
mProperty_mServiceEntryNoReturnedValue (inOperand29),
mProperty_mServiceEntryWithReturnValue (inOperand30) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_targetParameters GALGAS_targetParameters::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_targetParameters (GALGAS_location::constructor_nowhere (HERE),
                                  GALGAS__32_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_uint::constructor_default (HERE),
                                  GALGAS_bool::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lbigint::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE),
                                  GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_targetParameters GALGAS_targetParameters::constructor_new (const GALGAS_location & in_mConfigurationLocation,
                                                                  const GALGAS__32_lstringlist & in_mPython_utilityToolList,
                                                                  const GALGAS_lstring & in_mPython_build,
                                                                  const GALGAS_lstring & in_mLinkerScript,
                                                                  const GALGAS_uint & in_mPointerSize,
                                                                  const GALGAS_bool & in_mHandleDynamicArray,
                                                                  const GALGAS_lbigint & in_mSystemStackSize,
                                                                  const GALGAS_lbigint & in_mStackedUserRegisterOnInterruptByteSize,
                                                                  const GALGAS_lstring & in_mNopInstructionStringInLLVM,
                                                                  const GALGAS_lbigint & in_mBitbandRegisterBaseAddress,
                                                                  const GALGAS_lbigint & in_mBitbandRegisterEndAddress,
                                                                  const GALGAS_lbigint & in_mBitbandRegisterRelocationAddress,
                                                                  const GALGAS_lbigint & in_mBitbandRegisterOffsetMultiplier,
                                                                  const GALGAS_lbigint & in_mBitbandRegisterBitMultiplier,
                                                                  const GALGAS_lstring & in_mSectionHandler,
                                                                  const GALGAS_lbigint & in_mSectionPushedRegisterByteSize,
                                                                  const GALGAS_lstring & in_mSectionDispatcherHeader,
                                                                  const GALGAS_lstring & in_mSectionDispatcherEntry,
                                                                  const GALGAS_lstring & in_mSectionDispatcherInvocationFromAnyMode,
                                                                  const GALGAS_lstring & in_mSectionDispatcherInvocationFromUserMode,
                                                                  const GALGAS_lstringlist & in_m_C_definitionFiles,
                                                                  const GALGAS_lstringlist & in_m_S_definitionFiles,
                                                                  const GALGAS_lstringlist & in_m_LL_definitionFiles,
                                                                  const GALGAS_lstring & in_mXtrInterruptHandler,
                                                                  const GALGAS_lstring & in_mUndefinedInterruptHandler,
                                                                  const GALGAS_lstring & in_mServiceHandler,
                                                                  const GALGAS_lbigint & in_mServicePushedRegisterByteSize,
                                                                  const GALGAS_lstring & in_mServiceDispatcherEntry,
                                                                  const GALGAS_lstring & in_mServiceDispatcherHeader,
                                                                  const GALGAS_lstring & in_mServiceEntryNoReturnedValue,
                                                                  const GALGAS_lstring & in_mServiceEntryWithReturnValue 
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_targetParameters result ;
  if (in_mConfigurationLocation.isValid () && in_mPython_utilityToolList.isValid () && in_mPython_build.isValid () && in_mLinkerScript.isValid () && in_mPointerSize.isValid () && in_mHandleDynamicArray.isValid () && in_mSystemStackSize.isValid () && in_mStackedUserRegisterOnInterruptByteSize.isValid () && in_mNopInstructionStringInLLVM.isValid () && in_mBitbandRegisterBaseAddress.isValid () && in_mBitbandRegisterEndAddress.isValid () && in_mBitbandRegisterRelocationAddress.isValid () && in_mBitbandRegisterOffsetMultiplier.isValid () && in_mBitbandRegisterBitMultiplier.isValid () && in_mSectionHandler.isValid () && in_mSectionPushedRegisterByteSize.isValid () && in_mSectionDispatcherHeader.isValid () && in_mSectionDispatcherEntry.isValid () && in_mSectionDispatcherInvocationFromAnyMode.isValid () && in_mSectionDispatcherInvocationFromUserMode.isValid () && in_m_C_definitionFiles.isValid () && in_m_S_definitionFiles.isValid () && in_m_LL_definitionFiles.isValid () && in_mXtrInterruptHandler.isValid () && in_mUndefinedInterruptHandler.isValid () && in_mServiceHandler.isValid () && in_mServicePushedRegisterByteSize.isValid () && in_mServiceDispatcherEntry.isValid () && in_mServiceDispatcherHeader.isValid () && in_mServiceEntryNoReturnedValue.isValid () && in_mServiceEntryWithReturnValue.isValid ()) {
    result = GALGAS_targetParameters (in_mConfigurationLocation, in_mPython_utilityToolList, in_mPython_build, in_mLinkerScript, in_mPointerSize, in_mHandleDynamicArray, in_mSystemStackSize, in_mStackedUserRegisterOnInterruptByteSize, in_mNopInstructionStringInLLVM, in_mBitbandRegisterBaseAddress, in_mBitbandRegisterEndAddress, in_mBitbandRegisterRelocationAddress, in_mBitbandRegisterOffsetMultiplier, in_mBitbandRegisterBitMultiplier, in_mSectionHandler, in_mSectionPushedRegisterByteSize, in_mSectionDispatcherHeader, in_mSectionDispatcherEntry, in_mSectionDispatcherInvocationFromAnyMode, in_mSectionDispatcherInvocationFromUserMode, in_m_C_definitionFiles, in_m_S_definitionFiles, in_m_LL_definitionFiles, in_mXtrInterruptHandler, in_mUndefinedInterruptHandler, in_mServiceHandler, in_mServicePushedRegisterByteSize, in_mServiceDispatcherEntry, in_mServiceDispatcherHeader, in_mServiceEntryNoReturnedValue, in_mServiceEntryWithReturnValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_targetParameters::objectCompare (const GALGAS_targetParameters & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConfigurationLocation.objectCompare (inOperand.mProperty_mConfigurationLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPython_5F_utilityToolList.objectCompare (inOperand.mProperty_mPython_5F_utilityToolList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPython_5F_build.objectCompare (inOperand.mProperty_mPython_5F_build) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLinkerScript.objectCompare (inOperand.mProperty_mLinkerScript) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPointerSize.objectCompare (inOperand.mProperty_mPointerSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandleDynamicArray.objectCompare (inOperand.mProperty_mHandleDynamicArray) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSystemStackSize.objectCompare (inOperand.mProperty_mSystemStackSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStackedUserRegisterOnInterruptByteSize.objectCompare (inOperand.mProperty_mStackedUserRegisterOnInterruptByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNopInstructionStringInLLVM.objectCompare (inOperand.mProperty_mNopInstructionStringInLLVM) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterBaseAddress.objectCompare (inOperand.mProperty_mBitbandRegisterBaseAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterEndAddress.objectCompare (inOperand.mProperty_mBitbandRegisterEndAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterRelocationAddress.objectCompare (inOperand.mProperty_mBitbandRegisterRelocationAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterOffsetMultiplier.objectCompare (inOperand.mProperty_mBitbandRegisterOffsetMultiplier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterBitMultiplier.objectCompare (inOperand.mProperty_mBitbandRegisterBitMultiplier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionHandler.objectCompare (inOperand.mProperty_mSectionHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionPushedRegisterByteSize.objectCompare (inOperand.mProperty_mSectionPushedRegisterByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherHeader.objectCompare (inOperand.mProperty_mSectionDispatcherHeader) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherEntry.objectCompare (inOperand.mProperty_mSectionDispatcherEntry) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherInvocationFromAnyMode.objectCompare (inOperand.mProperty_mSectionDispatcherInvocationFromAnyMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherInvocationFromUserMode.objectCompare (inOperand.mProperty_mSectionDispatcherInvocationFromUserMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_C_5F_definitionFiles.objectCompare (inOperand.mProperty_m_5F_C_5F_definitionFiles) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_S_5F_definitionFiles.objectCompare (inOperand.mProperty_m_5F_S_5F_definitionFiles) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_LL_5F_definitionFiles.objectCompare (inOperand.mProperty_m_5F_LL_5F_definitionFiles) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mXtrInterruptHandler.objectCompare (inOperand.mProperty_mXtrInterruptHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUndefinedInterruptHandler.objectCompare (inOperand.mProperty_mUndefinedInterruptHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceHandler.objectCompare (inOperand.mProperty_mServiceHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServicePushedRegisterByteSize.objectCompare (inOperand.mProperty_mServicePushedRegisterByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceDispatcherEntry.objectCompare (inOperand.mProperty_mServiceDispatcherEntry) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceDispatcherHeader.objectCompare (inOperand.mProperty_mServiceDispatcherHeader) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceEntryNoReturnedValue.objectCompare (inOperand.mProperty_mServiceEntryNoReturnedValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceEntryWithReturnValue.objectCompare (inOperand.mProperty_mServiceEntryWithReturnValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_targetParameters::isValid (void) const {
  return mProperty_mConfigurationLocation.isValid () && mProperty_mPython_5F_utilityToolList.isValid () && mProperty_mPython_5F_build.isValid () && mProperty_mLinkerScript.isValid () && mProperty_mPointerSize.isValid () && mProperty_mHandleDynamicArray.isValid () && mProperty_mSystemStackSize.isValid () && mProperty_mStackedUserRegisterOnInterruptByteSize.isValid () && mProperty_mNopInstructionStringInLLVM.isValid () && mProperty_mBitbandRegisterBaseAddress.isValid () && mProperty_mBitbandRegisterEndAddress.isValid () && mProperty_mBitbandRegisterRelocationAddress.isValid () && mProperty_mBitbandRegisterOffsetMultiplier.isValid () && mProperty_mBitbandRegisterBitMultiplier.isValid () && mProperty_mSectionHandler.isValid () && mProperty_mSectionPushedRegisterByteSize.isValid () && mProperty_mSectionDispatcherHeader.isValid () && mProperty_mSectionDispatcherEntry.isValid () && mProperty_mSectionDispatcherInvocationFromAnyMode.isValid () && mProperty_mSectionDispatcherInvocationFromUserMode.isValid () && mProperty_m_5F_C_5F_definitionFiles.isValid () && mProperty_m_5F_S_5F_definitionFiles.isValid () && mProperty_m_5F_LL_5F_definitionFiles.isValid () && mProperty_mXtrInterruptHandler.isValid () && mProperty_mUndefinedInterruptHandler.isValid () && mProperty_mServiceHandler.isValid () && mProperty_mServicePushedRegisterByteSize.isValid () && mProperty_mServiceDispatcherEntry.isValid () && mProperty_mServiceDispatcherHeader.isValid () && mProperty_mServiceEntryNoReturnedValue.isValid () && mProperty_mServiceEntryWithReturnValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_targetParameters::drop (void) {
  mProperty_mConfigurationLocation.drop () ;
  mProperty_mPython_5F_utilityToolList.drop () ;
  mProperty_mPython_5F_build.drop () ;
  mProperty_mLinkerScript.drop () ;
  mProperty_mPointerSize.drop () ;
  mProperty_mHandleDynamicArray.drop () ;
  mProperty_mSystemStackSize.drop () ;
  mProperty_mStackedUserRegisterOnInterruptByteSize.drop () ;
  mProperty_mNopInstructionStringInLLVM.drop () ;
  mProperty_mBitbandRegisterBaseAddress.drop () ;
  mProperty_mBitbandRegisterEndAddress.drop () ;
  mProperty_mBitbandRegisterRelocationAddress.drop () ;
  mProperty_mBitbandRegisterOffsetMultiplier.drop () ;
  mProperty_mBitbandRegisterBitMultiplier.drop () ;
  mProperty_mSectionHandler.drop () ;
  mProperty_mSectionPushedRegisterByteSize.drop () ;
  mProperty_mSectionDispatcherHeader.drop () ;
  mProperty_mSectionDispatcherEntry.drop () ;
  mProperty_mSectionDispatcherInvocationFromAnyMode.drop () ;
  mProperty_mSectionDispatcherInvocationFromUserMode.drop () ;
  mProperty_m_5F_C_5F_definitionFiles.drop () ;
  mProperty_m_5F_S_5F_definitionFiles.drop () ;
  mProperty_m_5F_LL_5F_definitionFiles.drop () ;
  mProperty_mXtrInterruptHandler.drop () ;
  mProperty_mUndefinedInterruptHandler.drop () ;
  mProperty_mServiceHandler.drop () ;
  mProperty_mServicePushedRegisterByteSize.drop () ;
  mProperty_mServiceDispatcherEntry.drop () ;
  mProperty_mServiceDispatcherHeader.drop () ;
  mProperty_mServiceEntryNoReturnedValue.drop () ;
  mProperty_mServiceEntryWithReturnValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_targetParameters::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<struct @targetParameters:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mConfigurationLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPython_5F_utilityToolList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPython_5F_build.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLinkerScript.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPointerSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandleDynamicArray.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSystemStackSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStackedUserRegisterOnInterruptByteSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNopInstructionStringInLLVM.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterBaseAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterEndAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterRelocationAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterOffsetMultiplier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitbandRegisterBitMultiplier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionHandler.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionPushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionDispatcherInvocationFromAnyMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSectionDispatcherInvocationFromUserMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_C_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_S_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_LL_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mXtrInterruptHandler.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUndefinedInterruptHandler.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceHandler.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServicePushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceEntryNoReturnedValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mServiceEntryWithReturnValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @targetParameters generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_targetParameters ("targetParameters",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_targetParameters::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetParameters ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_targetParameters::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_targetParameters (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_targetParameters GALGAS_targetParameters::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_targetParameters result ;
  const GALGAS_targetParameters * p = (const GALGAS_targetParameters *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_targetParameters *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("targetParameters", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @configurationDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_configurationDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPanicCodeTypeName.printNonNullClassInstanceProperties ("mPanicCodeTypeName") ;
    mProperty_mPanicLineTypeName.printNonNullClassInstanceProperties ("mPanicLineTypeName") ;
    mProperty_mTargetParameters.printNonNullClassInstanceProperties ("mTargetParameters") ;
    mProperty_mInterruptionConfigurationList.printNonNullClassInstanceProperties ("mInterruptionConfigurationList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_configurationDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mPanicCodeTypeName.objectCompare (p->mProperty_mPanicCodeTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPanicLineTypeName.objectCompare (p->mProperty_mPanicLineTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetParameters.objectCompare (p->mProperty_mTargetParameters) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInterruptionConfigurationList.objectCompare (p->mProperty_mInterruptionConfigurationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_configurationDeclarationAST::objectCompare (const GALGAS_configurationDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_configurationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_targetParameters::constructor_default (HERE),
                                                              GALGAS_interruptionConfigurationList::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (const cPtr_configurationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_configurationDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mPanicCodeTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mPanicLineTypeName,
                                                                                        const GALGAS_targetParameters & inAttribute_mTargetParameters,
                                                                                        const GALGAS_interruptionConfigurationList & inAttribute_mInterruptionConfigurationList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_configurationDeclarationAST result ;
  if (inAttribute_mPanicCodeTypeName.isValid () && inAttribute_mPanicLineTypeName.isValid () && inAttribute_mTargetParameters.isValid () && inAttribute_mInterruptionConfigurationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_configurationDeclarationAST (inAttribute_mPanicCodeTypeName, inAttribute_mPanicLineTypeName, inAttribute_mTargetParameters, inAttribute_mInterruptionConfigurationList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configurationDeclarationAST::setter_setMPanicCodeTypeName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mPanicCodeTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configurationDeclarationAST::setter_setMPanicLineTypeName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mPanicLineTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configurationDeclarationAST::setter_setMTargetParameters (GALGAS_targetParameters inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mTargetParameters = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configurationDeclarationAST::setter_setMInterruptionConfigurationList (GALGAS_interruptionConfigurationList inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mInterruptionConfigurationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_configurationDeclarationAST::readProperty_mPanicCodeTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mPanicCodeTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_configurationDeclarationAST::readProperty_mPanicLineTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mPanicLineTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_targetParameters GALGAS_configurationDeclarationAST::readProperty_mTargetParameters (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_targetParameters () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mTargetParameters ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList GALGAS_configurationDeclarationAST::readProperty_mInterruptionConfigurationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_interruptionConfigurationList () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mInterruptionConfigurationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @configurationDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_configurationDeclarationAST::cPtr_configurationDeclarationAST (const GALGAS_lstring & in_mPanicCodeTypeName,
                                                                    const GALGAS_lstring & in_mPanicLineTypeName,
                                                                    const GALGAS_targetParameters & in_mTargetParameters,
                                                                    const GALGAS_interruptionConfigurationList & in_mInterruptionConfigurationList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mPanicCodeTypeName (in_mPanicCodeTypeName),
mProperty_mPanicLineTypeName (in_mPanicLineTypeName),
mProperty_mTargetParameters (in_mTargetParameters),
mProperty_mInterruptionConfigurationList (in_mInterruptionConfigurationList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_configurationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

void cPtr_configurationDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@configurationDeclarationAST:" ;
  mProperty_mPanicCodeTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPanicLineTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInterruptionConfigurationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_configurationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_configurationDeclarationAST (mProperty_mPanicCodeTypeName, mProperty_mPanicLineTypeName, mProperty_mTargetParameters, mProperty_mInterruptionConfigurationList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @configurationDeclarationAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configurationDeclarationAST ("configurationDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configurationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configurationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configurationDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_configurationDeclarationAST result ;
  const GALGAS_configurationDeclarationAST * p = (const GALGAS_configurationDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configurationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configurationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mTargetParameters (),
mProperty_mPanicCodeType (),
mProperty_mPanicLineType (),
mProperty_mPanicSetupRoutinePriorityMap (),
mProperty_mPanicLoopRoutinePriorityMap (),
mProperty_mRoutineMap (),
mProperty_mGuardMap (),
mProperty_mControlRegisterGroupMap (),
mProperty_mGlobalConstantMap (),
mProperty_mGlobalSyncInstanceMap (),
mProperty_mStaticListMap (),
mProperty_mRequiredRoutineSet (),
mProperty_mTypeMap (),
mProperty_mTypeConstantMap (),
mProperty_mTypeConstructorMap (),
mProperty_mTypePropertySetterMap (),
mProperty_mTypePropertyGetterMap (),
mProperty_mAvailableInterruptMap (),
mProperty_mInfixOperatorMap (),
mProperty_mPrefixOperatorMap (),
mProperty_mAssignmentOperatorMap (),
mProperty_mImplicitConversionToBooleanMap (),
mProperty_mTaskMap (),
mProperty_mGlobalTaskVariableList (),
mProperty_mValuedObjectMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_targetParameters & inOperand0,
                                                const GALGAS_omnibusType & inOperand1,
                                                const GALGAS_omnibusType & inOperand2,
                                                const GALGAS_panicRoutinePriorityMap & inOperand3,
                                                const GALGAS_panicRoutinePriorityMap & inOperand4,
                                                const GALGAS_routineMapForContext & inOperand5,
                                                const GALGAS_guardMapForContext & inOperand6,
                                                const GALGAS_controlRegisterGroupMap & inOperand7,
                                                const GALGAS_globalConstantMap & inOperand8,
                                                const GALGAS_globalSyncInstanceMap & inOperand9,
                                                const GALGAS_staticlistMap & inOperand10,
                                                const GALGAS_stringset & inOperand11,
                                                const GALGAS_unifiedTypeMap & inOperand12,
                                                const GALGAS_typeConstantMap & inOperand13,
                                                const GALGAS_typeConstructorMap & inOperand14,
                                                const GALGAS_typePropertySetterMap & inOperand15,
                                                const GALGAS_typePropertyGetterMap & inOperand16,
                                                const GALGAS_availableInterruptMap & inOperand17,
                                                const GALGAS_infixOperatorMap & inOperand18,
                                                const GALGAS_prefixOperatorMap & inOperand19,
                                                const GALGAS_assignmentOperatorMap & inOperand20,
                                                const GALGAS_implicitConversionToBooleanMap & inOperand21,
                                                const GALGAS_taskMap & inOperand22,
                                                const GALGAS_globalTaskVariableList & inOperand23,
                                                const GALGAS_universalValuedObjectMap & inOperand24) :
mProperty_mTargetParameters (inOperand0),
mProperty_mPanicCodeType (inOperand1),
mProperty_mPanicLineType (inOperand2),
mProperty_mPanicSetupRoutinePriorityMap (inOperand3),
mProperty_mPanicLoopRoutinePriorityMap (inOperand4),
mProperty_mRoutineMap (inOperand5),
mProperty_mGuardMap (inOperand6),
mProperty_mControlRegisterGroupMap (inOperand7),
mProperty_mGlobalConstantMap (inOperand8),
mProperty_mGlobalSyncInstanceMap (inOperand9),
mProperty_mStaticListMap (inOperand10),
mProperty_mRequiredRoutineSet (inOperand11),
mProperty_mTypeMap (inOperand12),
mProperty_mTypeConstantMap (inOperand13),
mProperty_mTypeConstructorMap (inOperand14),
mProperty_mTypePropertySetterMap (inOperand15),
mProperty_mTypePropertyGetterMap (inOperand16),
mProperty_mAvailableInterruptMap (inOperand17),
mProperty_mInfixOperatorMap (inOperand18),
mProperty_mPrefixOperatorMap (inOperand19),
mProperty_mAssignmentOperatorMap (inOperand20),
mProperty_mImplicitConversionToBooleanMap (inOperand21),
mProperty_mTaskMap (inOperand22),
mProperty_mGlobalTaskVariableList (inOperand23),
mProperty_mValuedObjectMap (inOperand24) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_targetParameters::constructor_default (HERE),
                                 GALGAS_omnibusType::constructor_default (HERE),
                                 GALGAS_omnibusType::constructor_default (HERE),
                                 GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_routineMapForContext::constructor_emptyMap (HERE),
                                 GALGAS_guardMapForContext::constructor_emptyMap (HERE),
                                 GALGAS_controlRegisterGroupMap::constructor_emptyMap (HERE),
                                 GALGAS_globalConstantMap::constructor_emptyMap (HERE),
                                 GALGAS_globalSyncInstanceMap::constructor_emptyMap (HERE),
                                 GALGAS_staticlistMap::constructor_emptyMap (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE),
                                 GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_typeConstantMap::constructor_emptyMap (HERE),
                                 GALGAS_typeConstructorMap::constructor_emptyMap (HERE),
                                 GALGAS_typePropertySetterMap::constructor_emptyMap (HERE),
                                 GALGAS_typePropertyGetterMap::constructor_emptyMap (HERE),
                                 GALGAS_availableInterruptMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_assignmentOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_implicitConversionToBooleanMap::constructor_emptyMap (HERE),
                                 GALGAS_taskMap::constructor_emptyMap (HERE),
                                 GALGAS_globalTaskVariableList::constructor_emptyList (HERE),
                                 GALGAS_universalValuedObjectMap::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_targetParameters & in_mTargetParameters,
                                                                const GALGAS_omnibusType & in_mPanicCodeType,
                                                                const GALGAS_omnibusType & in_mPanicLineType,
                                                                const GALGAS_panicRoutinePriorityMap & in_mPanicSetupRoutinePriorityMap,
                                                                const GALGAS_panicRoutinePriorityMap & in_mPanicLoopRoutinePriorityMap,
                                                                const GALGAS_routineMapForContext & in_mRoutineMap,
                                                                const GALGAS_guardMapForContext & in_mGuardMap,
                                                                const GALGAS_controlRegisterGroupMap & in_mControlRegisterGroupMap,
                                                                const GALGAS_globalConstantMap & in_mGlobalConstantMap,
                                                                const GALGAS_globalSyncInstanceMap & in_mGlobalSyncInstanceMap,
                                                                const GALGAS_staticlistMap & in_mStaticListMap,
                                                                const GALGAS_stringset & in_mRequiredRoutineSet,
                                                                const GALGAS_unifiedTypeMap & in_mTypeMap,
                                                                const GALGAS_typeConstantMap & in_mTypeConstantMap,
                                                                const GALGAS_typeConstructorMap & in_mTypeConstructorMap,
                                                                const GALGAS_typePropertySetterMap & in_mTypePropertySetterMap,
                                                                const GALGAS_typePropertyGetterMap & in_mTypePropertyGetterMap,
                                                                const GALGAS_availableInterruptMap & in_mAvailableInterruptMap,
                                                                const GALGAS_infixOperatorMap & in_mInfixOperatorMap,
                                                                const GALGAS_prefixOperatorMap & in_mPrefixOperatorMap,
                                                                const GALGAS_assignmentOperatorMap & in_mAssignmentOperatorMap,
                                                                const GALGAS_implicitConversionToBooleanMap & in_mImplicitConversionToBooleanMap,
                                                                const GALGAS_taskMap & in_mTaskMap,
                                                                const GALGAS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                                                const GALGAS_universalValuedObjectMap & in_mValuedObjectMap 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (in_mTargetParameters.isValid () && in_mPanicCodeType.isValid () && in_mPanicLineType.isValid () && in_mPanicSetupRoutinePriorityMap.isValid () && in_mPanicLoopRoutinePriorityMap.isValid () && in_mRoutineMap.isValid () && in_mGuardMap.isValid () && in_mControlRegisterGroupMap.isValid () && in_mGlobalConstantMap.isValid () && in_mGlobalSyncInstanceMap.isValid () && in_mStaticListMap.isValid () && in_mRequiredRoutineSet.isValid () && in_mTypeMap.isValid () && in_mTypeConstantMap.isValid () && in_mTypeConstructorMap.isValid () && in_mTypePropertySetterMap.isValid () && in_mTypePropertyGetterMap.isValid () && in_mAvailableInterruptMap.isValid () && in_mInfixOperatorMap.isValid () && in_mPrefixOperatorMap.isValid () && in_mAssignmentOperatorMap.isValid () && in_mImplicitConversionToBooleanMap.isValid () && in_mTaskMap.isValid () && in_mGlobalTaskVariableList.isValid () && in_mValuedObjectMap.isValid ()) {
    result = GALGAS_semanticContext (in_mTargetParameters, in_mPanicCodeType, in_mPanicLineType, in_mPanicSetupRoutinePriorityMap, in_mPanicLoopRoutinePriorityMap, in_mRoutineMap, in_mGuardMap, in_mControlRegisterGroupMap, in_mGlobalConstantMap, in_mGlobalSyncInstanceMap, in_mStaticListMap, in_mRequiredRoutineSet, in_mTypeMap, in_mTypeConstantMap, in_mTypeConstructorMap, in_mTypePropertySetterMap, in_mTypePropertyGetterMap, in_mAvailableInterruptMap, in_mInfixOperatorMap, in_mPrefixOperatorMap, in_mAssignmentOperatorMap, in_mImplicitConversionToBooleanMap, in_mTaskMap, in_mGlobalTaskVariableList, in_mValuedObjectMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetParameters.objectCompare (inOperand.mProperty_mTargetParameters) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicCodeType.objectCompare (inOperand.mProperty_mPanicCodeType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLineType.objectCompare (inOperand.mProperty_mPanicLineType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicSetupRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicSetupRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLoopRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicLoopRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineMap.objectCompare (inOperand.mProperty_mRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardMap.objectCompare (inOperand.mProperty_mGuardMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterGroupMap.objectCompare (inOperand.mProperty_mControlRegisterGroupMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalConstantMap.objectCompare (inOperand.mProperty_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalSyncInstanceMap.objectCompare (inOperand.mProperty_mGlobalSyncInstanceMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticListMap.objectCompare (inOperand.mProperty_mStaticListMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredRoutineSet.objectCompare (inOperand.mProperty_mRequiredRoutineSet) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeMap.objectCompare (inOperand.mProperty_mTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeConstantMap.objectCompare (inOperand.mProperty_mTypeConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeConstructorMap.objectCompare (inOperand.mProperty_mTypeConstructorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypePropertySetterMap.objectCompare (inOperand.mProperty_mTypePropertySetterMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypePropertyGetterMap.objectCompare (inOperand.mProperty_mTypePropertyGetterMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAvailableInterruptMap.objectCompare (inOperand.mProperty_mAvailableInterruptMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInfixOperatorMap.objectCompare (inOperand.mProperty_mInfixOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPrefixOperatorMap.objectCompare (inOperand.mProperty_mPrefixOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAssignmentOperatorMap.objectCompare (inOperand.mProperty_mAssignmentOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mImplicitConversionToBooleanMap.objectCompare (inOperand.mProperty_mImplicitConversionToBooleanMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskMap.objectCompare (inOperand.mProperty_mTaskMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalTaskVariableList.objectCompare (inOperand.mProperty_mGlobalTaskVariableList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValuedObjectMap.objectCompare (inOperand.mProperty_mValuedObjectMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mTargetParameters.isValid () && mProperty_mPanicCodeType.isValid () && mProperty_mPanicLineType.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mRoutineMap.isValid () && mProperty_mGuardMap.isValid () && mProperty_mControlRegisterGroupMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mStaticListMap.isValid () && mProperty_mRequiredRoutineSet.isValid () && mProperty_mTypeMap.isValid () && mProperty_mTypeConstantMap.isValid () && mProperty_mTypeConstructorMap.isValid () && mProperty_mTypePropertySetterMap.isValid () && mProperty_mTypePropertyGetterMap.isValid () && mProperty_mAvailableInterruptMap.isValid () && mProperty_mInfixOperatorMap.isValid () && mProperty_mPrefixOperatorMap.isValid () && mProperty_mAssignmentOperatorMap.isValid () && mProperty_mImplicitConversionToBooleanMap.isValid () && mProperty_mTaskMap.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mValuedObjectMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::drop (void) {
  mProperty_mTargetParameters.drop () ;
  mProperty_mPanicCodeType.drop () ;
  mProperty_mPanicLineType.drop () ;
  mProperty_mPanicSetupRoutinePriorityMap.drop () ;
  mProperty_mPanicLoopRoutinePriorityMap.drop () ;
  mProperty_mRoutineMap.drop () ;
  mProperty_mGuardMap.drop () ;
  mProperty_mControlRegisterGroupMap.drop () ;
  mProperty_mGlobalConstantMap.drop () ;
  mProperty_mGlobalSyncInstanceMap.drop () ;
  mProperty_mStaticListMap.drop () ;
  mProperty_mRequiredRoutineSet.drop () ;
  mProperty_mTypeMap.drop () ;
  mProperty_mTypeConstantMap.drop () ;
  mProperty_mTypeConstructorMap.drop () ;
  mProperty_mTypePropertySetterMap.drop () ;
  mProperty_mTypePropertyGetterMap.drop () ;
  mProperty_mAvailableInterruptMap.drop () ;
  mProperty_mInfixOperatorMap.drop () ;
  mProperty_mPrefixOperatorMap.drop () ;
  mProperty_mAssignmentOperatorMap.drop () ;
  mProperty_mImplicitConversionToBooleanMap.drop () ;
  mProperty_mTaskMap.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mValuedObjectMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicCodeType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLineType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterGroupMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredRoutineSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypeConstructorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypePropertySetterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTypePropertyGetterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInfixOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPrefixOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAssignmentOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mImplicitConversionToBooleanMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValuedObjectMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @semanticContext generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext insertGetter'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertGetter (GALGAS_semanticContext & ioObject,
                                   const GALGAS_lstring constinArgument_inTypeName,
                                   const GALGAS_lstring constinArgument_inGetterName,
                                   const GALGAS_propertyVisibility constinArgument_inVisibility,
                                   const GALGAS_propertyGetterKind constinArgument_inAccess,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * objectArray_5759 = (cMapElement_typePropertyGetterMap *) ioObject.mProperty_mTypePropertyGetterMap.readWriteAccessForWithInstruction (inCompiler, constinArgument_inTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("context.galgas", 133)) ;
  if (NULL != objectArray_5759) {
    macroValidSharedObject (objectArray_5759, cMapElement_typePropertyGetterMap) ;
    {
    objectArray_5759->mProperty_mGetterMap.setter_insertKey (constinArgument_inGetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 134)) ;
    }
  }else{
    GALGAS_propertyGetterMap var_getterMap_5919 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("context.galgas", 136)) ;
    {
    var_getterMap_5919.setter_insertKey (constinArgument_inGetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 137)) ;
    }
    {
    ioObject.mProperty_mTypePropertyGetterMap.setter_insertKey (constinArgument_inTypeName, var_getterMap_5919, inCompiler COMMA_SOURCE_FILE ("context.galgas", 138)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@semanticContext propertyGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap extensionGetter_propertyGetterMap (const GALGAS_semanticContext & inObject,
                                                            const GALGAS_omnibusType & constinArgument_inType,
                                                            C_Compiler *
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGetterMap result_result ; // Returned variable
  const GALGAS_semanticContext temp_0 = inObject ;
  const cMapElement_typePropertyGetterMap * objectArray_6292 = (const cMapElement_typePropertyGetterMap *) temp_0.readProperty_mTypePropertyGetterMap ().readAccessForWithInstruction (constinArgument_inType.readProperty_omnibusTypeDescriptionName ()) ;
  if (NULL != objectArray_6292) {
      macroValidSharedObject (objectArray_6292, cMapElement_typePropertyGetterMap) ;
    result_result = objectArray_6292->mProperty_mGetterMap ;
  }else{
    result_result = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("context.galgas", 148)) ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext addComputedPropertyGetter'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addComputedPropertyGetter (GALGAS_semanticContext & ioObject,
                                                const GALGAS_lstring constinArgument_inTypeName,
                                                const GALGAS_string constinArgument_inLLVMBaseTypeName,
                                                const GALGAS_lstring constinArgument_inPropertyName,
                                                const GALGAS_mode constinArgument_inMode,
                                                const GALGAS_propertyVisibility constinArgument_inVisibility,
                                                const GALGAS_unifiedTypeMapEntry constinArgument_inResultTypeProxy,
                                                GALGAS_lstring & outArgument_outRoutineLLVMName,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  GALGAS_propertyGetterMap var_getterMap_6944 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_semanticContext temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mTypePropertyGetterMap ().getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("context.galgas", 164)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_semanticContext temp_2 = ioObject ;
      temp_2.readProperty_mTypePropertyGetterMap ().method_searchKey (constinArgument_inTypeName, var_getterMap_6944, inCompiler COMMA_SOURCE_FILE ("context.galgas", 165)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_getterMap_6944 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("context.galgas", 167)) ;
  }
  outArgument_outRoutineLLVMName = GALGAS_lstring::constructor_new (function_getterLLVMName (constinArgument_inLLVMBaseTypeName, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 169)), constinArgument_inPropertyName.readProperty_location ()  COMMA_SOURCE_FILE ("context.galgas", 169)) ;
  GALGAS_routineLLVMNameDict var_modeDictionary_7225 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 170)) ;
  {
  var_getterMap_6944.setter_insertKey (constinArgument_inPropertyName, constinArgument_inVisibility, GALGAS_propertyGetterKind::constructor_computedProperty (constinArgument_inResultTypeProxy, var_modeDictionary_7225  COMMA_SOURCE_FILE ("context.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 171)) ;
  }
  {
  ioObject.mProperty_mTypePropertyGetterMap.setter_insertOrReplace (constinArgument_inTypeName, var_getterMap_6944 COMMA_SOURCE_FILE ("context.galgas", 176)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext insertPropertySetter'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertPropertySetter (GALGAS_semanticContext & ioObject,
                                           const GALGAS_lstring constinArgument_inTypeName,
                                           const GALGAS_lstring constinArgument_inSetterName,
                                           const GALGAS_propertyVisibility constinArgument_inVisibility,
                                           const GALGAS_propertySetterKind constinArgument_inAccess,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * objectArray_9356 = (cMapElement_typePropertySetterMap *) ioObject.mProperty_mTypePropertySetterMap.readWriteAccessForWithInstruction (inCompiler, constinArgument_inTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("context.galgas", 220)) ;
  if (NULL != objectArray_9356) {
    macroValidSharedObject (objectArray_9356, cMapElement_typePropertySetterMap) ;
    {
    objectArray_9356->mProperty_mSetterMap.setter_insertKey (constinArgument_inSetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 221)) ;
    }
  }else{
    GALGAS_propertySetterMap var_setterMap_9516 = GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("context.galgas", 223)) ;
    {
    var_setterMap_9516.setter_insertKey (constinArgument_inSetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 224)) ;
    }
    {
    ioObject.mProperty_mTypePropertySetterMap.setter_insertKey (constinArgument_inTypeName, var_setterMap_9516, inCompiler COMMA_SOURCE_FILE ("context.galgas", 225)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@semanticContext propertySetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap extensionGetter_propertySetterMap (const GALGAS_semanticContext & inObject,
                                                            const GALGAS_omnibusType & constinArgument_inType,
                                                            C_Compiler *
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertySetterMap result_result ; // Returned variable
  const GALGAS_semanticContext temp_0 = inObject ;
  const cMapElement_typePropertySetterMap * objectArray_9889 = (const cMapElement_typePropertySetterMap *) temp_0.readProperty_mTypePropertySetterMap ().readAccessForWithInstruction (constinArgument_inType.readProperty_omnibusTypeDescriptionName ()) ;
  if (NULL != objectArray_9889) {
      macroValidSharedObject (objectArray_9889, cMapElement_typePropertySetterMap) ;
    result_result = objectArray_9889->mProperty_mSetterMap ;
  }else{
    result_result = GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("context.galgas", 235)) ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@semanticContext booleanType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType extensionGetter_booleanType (const GALGAS_semanticContext & inObject,
                                                const GALGAS_location &,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  const GALGAS_semanticContext temp_0 = inObject ;
  extensionMethod_searchType (temp_0.readProperty_mTypeMap (), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 317)).getter_nowhere (SOURCE_FILE ("context.galgas", 317)), result_result, inCompiler COMMA_SOURCE_FILE ("context.galgas", 317)) ;
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
// @assignRepeatedValueToFixedSizeArrayElementsFunctionIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mFixedSizeArrayType.printNonNullClassInstanceProperties ("mFixedSizeArrayType") ;
    mProperty_mElementType.printNonNullClassInstanceProperties ("mElementType") ;
    mProperty_mArraySize.printNonNullClassInstanceProperties ("mArraySize") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFixedSizeArrayType.objectCompare (p->mProperty_mFixedSizeArrayType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (p->mProperty_mArraySize) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::objectCompare (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                        GALGAS_bool::constructor_default (HERE),
                                                                                        GALGAS_bool::constructor_default (HERE),
                                                                                        GALGAS_omnibusType::constructor_default (HERE),
                                                                                        GALGAS_omnibusType::constructor_default (HERE),
                                                                                        GALGAS_uint::constructor_default (HERE)
                                                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                                                                            const GALGAS_bool & inAttribute_isRequired,
                                                                                                                                            const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                                                                            const GALGAS_omnibusType & inAttribute_mFixedSizeArrayType,
                                                                                                                                            const GALGAS_omnibusType & inAttribute_mElementType,
                                                                                                                                            const GALGAS_uint & inAttribute_mArraySize
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mFixedSizeArrayType.isValid () && inAttribute_mElementType.isValid () && inAttribute_mArraySize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mFixedSizeArrayType, inAttribute_mElementType, inAttribute_mArraySize COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setter_setMFixedSizeArrayType (GALGAS_omnibusType inValue
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mFixedSizeArrayType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setter_setMElementType (GALGAS_omnibusType inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setter_setMArraySize (GALGAS_uint inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mArraySize = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mFixedSizeArrayType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mFixedSizeArrayType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mElementType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mElementType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mArraySize (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mArraySize ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @assignRepeatedValueToFixedSizeArrayElementsFunctionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                                                        const GALGAS_bool & in_isRequired,
                                                                                                                        const GALGAS_bool & in_warnsIfUnused,
                                                                                                                        const GALGAS_omnibusType & in_mFixedSizeArrayType,
                                                                                                                        const GALGAS_omnibusType & in_mElementType,
                                                                                                                        const GALGAS_uint & in_mArraySize
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mFixedSizeArrayType (in_mFixedSizeArrayType),
mProperty_mElementType (in_mElementType),
mProperty_mArraySize (in_mArraySize) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;
}

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "[@assignRepeatedValueToFixedSizeArrayElementsFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFixedSizeArrayType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFixedSizeArrayType, mProperty_mElementType, mProperty_mArraySize COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @assignRepeatedValueToFixedSizeArrayElementsFunctionIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR",
                                                                              & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@structurePropertyListAST-element enterPropertyInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterPropertyInContext (const GALGAS_structurePropertyListAST_2D_element inObject,
                                             GALGAS_semanticContext & ioArgument_ioContext,
                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                             const GALGAS_lstring constinArgument_inReceiverTypeName,
                                             const GALGAS_lstring constinArgument_inOmnibusTypeSpecificName,
                                             const GALGAS_string constinArgument_inReceiverLLVMBaseTypeName,
                                             GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                             GALGAS_propertyList & ioArgument_ioPropertyList,
                                             GALGAS_sortedOperandIRList & ioArgument_sortedOperandIRList,
                                             GALGAS_constructorSignature & ioArgument_constructorSignature,
                                             GALGAS_string & ioArgument_ioConstructorKey,
                                             GALGAS_bool & ioArgument_canBeCopied,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lbigint var_explicitAlignment_12306 = GALGAS_lbigint::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 339)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 339))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 339)) ;
  GALGAS_bool var_alignmentDefined_12352 = GALGAS_bool (false) ;
  const GALGAS_structurePropertyListAST_2D_element temp_0 = inObject ;
  cEnumerator_propertyAttributeList enumerator_12394 (temp_0.readProperty_mPropertyAttributeList (), kENUMERATION_UP) ;
  while (enumerator_12394.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_12394.current_mAttributeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("align"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_12394.current_mAttributeName (HERE).readProperty_location (), GALGAS_string ("only the @align attribute is allowed here"), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 343)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_alignmentDefined_12352.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_12394.current_mAttributeName (HERE).readProperty_location (), GALGAS_string ("@align attribute already defined"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 345)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsNotEqual, enumerator_12394.current_mAttributeValue (HERE).readProperty_bigint ().objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)).left_shift_operation (enumerator_12394.current_mAttributeValue (HERE).readProperty_bigint ().substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_12394.current_mAttributeValue (HERE).readProperty_location (), GALGAS_string ("alignment should be a power of 2"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 349)) ;
          }
        }
        if (kBoolFalse == test_5) {
          var_explicitAlignment_12306 = enumerator_12394.current_mAttributeValue (HERE) ;
          var_alignmentDefined_12352 = GALGAS_bool (true) ;
        }
      }
    }
    enumerator_12394.gotoNextObject () ;
  }
  const GALGAS_structurePropertyListAST_2D_element temp_7 = inObject ;
  GALGAS_omnibusType temp_8 ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, temp_7.readProperty_mPropertyTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 358)) ;
  }else if (kBoolFalse == test_9) {
    const GALGAS_structurePropertyListAST_2D_element temp_10 = inObject ;
    temp_8 = extensionGetter_type (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_10.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 359)) ;
  }
  GALGAS_omnibusType var_optionalPropertyType_12977 = temp_8 ;
  const GALGAS_structurePropertyListAST_2D_element temp_11 = inObject ;
  switch (temp_11.readProperty_mPropertyKind ().enumValue ()) {
  case GALGAS_propertyKindAST::kNotBuilt:
    break ;
  case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_14193 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (temp_11.readProperty_mPropertyKind ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_13229_initExpression = extractPtr_14193->mAssociatedValue0 ;
      GALGAS_objectIR var_expressionIR_13516 ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_12 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_13 = inObject ;
      routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_13229_initExpression, temp_12.readProperty_mPropertyName ().readProperty_location (), temp_13.readProperty_mPropertyTypeName (), var_expressionIR_13516, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 364)) ;
      }
      GALGAS_omnibusType var_actualPropertyType_13556 ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_12977.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("type-structure-declaration.galgas", 373)))).boolEnum () ;
        if (kBoolTrue == test_14) {
          var_actualPropertyType_13556 = var_optionalPropertyType_12977 ;
        }
      }
      if (kBoolFalse == test_14) {
        var_actualPropertyType_13556 = extensionGetter_type (var_expressionIR_13516, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 376)) ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_13556.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 378)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 378)).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_structurePropertyListAST_2D_element temp_16 = inObject ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mPropertyName ().readProperty_location (), var_actualPropertyType_13556.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 379)), fixItArray17  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 379)) ;
        }
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_13556.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 381)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 381)).boolEnum () ;
        if (kBoolTrue == test_18) {
          ioArgument_canBeCopied = GALGAS_bool (false) ;
        }
      }
      {
      const GALGAS_structurePropertyListAST_2D_element temp_19 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_20 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_19.readProperty_mPropertyName (), temp_20.readProperty_mVisibility (), GALGAS_propertyGetterKind::constructor_constantProperty (extensionGetter_withType (var_expressionIR_13516, var_actualPropertyType_13556, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 388))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 384)) ;
      }
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_15876 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (temp_11.readProperty_mPropertyKind ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_14229_initExpression = extractPtr_15876->mAssociatedValue0 ;
      GALGAS_objectIR var_expressionIR_14516 ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_21 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_22 = inObject ;
      routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_14229_initExpression, temp_21.readProperty_mPropertyName ().readProperty_location (), temp_22.readProperty_mPropertyTypeName (), var_expressionIR_14516, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 391)) ;
      }
      GALGAS_omnibusType var_actualPropertyType_14556 ;
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        test_23 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_12977.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("type-structure-declaration.galgas", 400)))).boolEnum () ;
        if (kBoolTrue == test_23) {
          var_actualPropertyType_14556 = var_optionalPropertyType_12977 ;
        }
      }
      if (kBoolFalse == test_23) {
        var_actualPropertyType_14556 = extensionGetter_type (var_expressionIR_14516, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 403)) ;
      }
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = var_actualPropertyType_14556.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("type-structure-declaration.galgas", 405)).boolEnum () ;
        if (kBoolTrue == test_24) {
          var_actualPropertyType_14556 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 406)) ;
        }
      }
      if (kBoolFalse == test_24) {
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_actualPropertyType_14556.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("type-structure-declaration.galgas", 407)).boolEnum () ;
          if (kBoolTrue == test_25) {
            const GALGAS_structurePropertyListAST_2D_element temp_26 = inObject ;
            TC_Array <C_FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticError (temp_26.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("$").add_operation (var_actualPropertyType_14556.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 409)).add_operation (GALGAS_string (" type is a compile time type, and is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 409)), fixItArray27  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 408)) ;
          }
        }
        if (kBoolFalse == test_25) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_14556.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 410)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 410)).boolEnum () ;
            if (kBoolTrue == test_28) {
              const GALGAS_structurePropertyListAST_2D_element temp_29 = inObject ;
              TC_Array <C_FixItDescription> fixItArray30 ;
              inCompiler->emitSemanticError (temp_29.readProperty_mPropertyName ().readProperty_location (), var_actualPropertyType_14556.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)), fixItArray30  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)) ;
            }
          }
        }
      }
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        test_31 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_14556.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 413)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 413)).boolEnum () ;
        if (kBoolTrue == test_31) {
          ioArgument_canBeCopied = GALGAS_bool (false) ;
        }
      }
      GALGAS_uint var_propertyIndex_15298 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 416)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_32 = inObject ;
      ioArgument_ioPropertyList.addAssign_operation (temp_32.readProperty_mPropertyName ().readProperty_string (), var_actualPropertyType_14556  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 417)) ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_33 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_34 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_33.readProperty_mPropertyName (), temp_34.readProperty_mVisibility (), GALGAS_propertyGetterKind::constructor_storedProperty (var_actualPropertyType_14556, var_propertyIndex_15298  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 418)) ;
      }
      {
      const GALGAS_structurePropertyListAST_2D_element temp_35 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_36 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_35.readProperty_mPropertyName (), temp_36.readProperty_mVisibility (), GALGAS_propertySetterKind::constructor_storedProperty (var_actualPropertyType_14556, var_propertyIndex_15298  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 424)) ;
      }
      ioArgument_sortedOperandIRList.addAssign_operation (extensionGetter_withType (var_expressionIR_14516, var_actualPropertyType_14556, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 430)), var_propertyIndex_15298  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 430)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    {
      enumGalgasBool test_37 = kBoolTrue ;
      if (kBoolTrue == test_37) {
        test_37 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12977.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 432)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 432)).boolEnum () ;
        if (kBoolTrue == test_37) {
          const GALGAS_structurePropertyListAST_2D_element temp_38 = inObject ;
          TC_Array <C_FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (temp_38.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12977.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 433)), fixItArray39  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 433)) ;
        }
      }
      GALGAS_uint var_propertyIndex_16106 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 435)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_40 = inObject ;
      ioArgument_ioPropertyList.addAssign_operation (temp_40.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12977  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)) ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_41 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_42 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_41.readProperty_mPropertyName (), temp_42.readProperty_mVisibility (), GALGAS_propertyGetterKind::constructor_storedProperty (var_optionalPropertyType_12977, var_propertyIndex_16106  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 437)) ;
      }
      {
      const GALGAS_structurePropertyListAST_2D_element temp_43 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_44 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_43.readProperty_mPropertyName (), temp_44.readProperty_mVisibility (), GALGAS_propertySetterKind::constructor_storedProperty (var_optionalPropertyType_12977, var_propertyIndex_16106  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 443)) ;
      }
      const GALGAS_structurePropertyListAST_2D_element temp_45 = inObject ;
      ioArgument_constructorSignature.addAssign_operation (temp_45.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12977, var_propertyIndex_16106  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 449)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_46 = inObject ;
      ioArgument_ioConstructorKey.plusAssign_operation(GALGAS_string ("!").add_operation (temp_46.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 450)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
    {
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        test_47 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12977.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 452)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 452)).boolEnum () ;
        if (kBoolTrue == test_47) {
          const GALGAS_structurePropertyListAST_2D_element temp_48 = inObject ;
          TC_Array <C_FixItDescription> fixItArray49 ;
          inCompiler->emitSemanticError (temp_48.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12977.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 453)), fixItArray49  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 453)) ;
        }
      }
      GALGAS_uint var_propertyIndex_16976 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 455)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_50 = inObject ;
      ioArgument_ioPropertyList.addAssign_operation (temp_50.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12977  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 456)) ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_51 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_52 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_51.readProperty_mPropertyName (), temp_52.readProperty_mVisibility (), GALGAS_propertyGetterKind::constructor_storedProperty (var_optionalPropertyType_12977, var_propertyIndex_16976  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 457)) ;
      }
      const GALGAS_structurePropertyListAST_2D_element temp_53 = inObject ;
      ioArgument_constructorSignature.addAssign_operation (temp_53.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12977, var_propertyIndex_16976  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 463)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_54 = inObject ;
      ioArgument_ioConstructorKey.plusAssign_operation(GALGAS_string ("!").add_operation (temp_54.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_18683 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (temp_11.readProperty_mPropertyKind ().unsafePointer ()) ;
      const GALGAS_instructionListAST extractedValue_17469_instructionList = extractPtr_18683->mAssociatedValue0 ;
      const GALGAS_location extractedValue_17485_endOfInstructionList = extractPtr_18683->mAssociatedValue1 ;
      enumGalgasBool test_55 = kBoolTrue ;
      if (kBoolTrue == test_55) {
        test_55 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12977.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 466)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 466)).boolEnum () ;
        if (kBoolTrue == test_55) {
          const GALGAS_structurePropertyListAST_2D_element temp_56 = inObject ;
          TC_Array <C_FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (temp_56.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12977.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 467)), fixItArray57  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 467)) ;
        }
      }
      const GALGAS_structurePropertyListAST_2D_element temp_58 = inObject ;
      GALGAS_string var_llvmRoutineName_17688 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_58.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 469)) ;
      GALGAS_routineLLVMNameDict var_modeDictionary_17779 = extensionGetter_routineLLVMDictionaryForFunction (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 470)), var_llvmRoutineName_17688, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 470)) ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_59 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_60 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_61 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_59.readProperty_mPropertyName (), temp_60.readProperty_mVisibility (), GALGAS_propertyGetterKind::constructor_computedProperty (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_61.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 476)), var_modeDictionary_17779  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 471)) ;
      }
      const GALGAS_structurePropertyListAST_2D_element temp_62 = inObject ;
      GALGAS_lstring var_functionLLVMName_18154 = GALGAS_lstring::constructor_new (var_llvmRoutineName_17688, temp_62.readProperty_mPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 480)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_63 = inObject ;
      ioArgument_ioDecoratedRoutineList.addAssign_operation (constinArgument_inReceiverTypeName, GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 486)), GALGAS_bool (false), GALGAS_routineKind::constructor_function (SOURCE_FILE ("type-structure-declaration.galgas", 488)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("type-structure-declaration.galgas", 491)), var_functionLLVMName_18154, GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 493)), GALGAS_bool (false), extractedValue_17469_instructionList, extractedValue_17485_endOfInstructionList, temp_63.readProperty_mPropertyTypeName ()  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 484)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_20456 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (temp_11.readProperty_mPropertyKind ().unsafePointer ()) ;
      const GALGAS_instructionListAST extractedValue_18731_writeInstructionList = extractPtr_20456->mAssociatedValue0 ;
      const GALGAS_location extractedValue_18752_endOfWriteInstructionList = extractPtr_20456->mAssociatedValue1 ;
      enumGalgasBool test_64 = kBoolTrue ;
      if (kBoolTrue == test_64) {
        test_64 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12977.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 499)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 499)).boolEnum () ;
        if (kBoolTrue == test_64) {
          const GALGAS_structurePropertyListAST_2D_element temp_65 = inObject ;
          TC_Array <C_FixItDescription> fixItArray66 ;
          inCompiler->emitSemanticError (temp_65.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12977.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)), fixItArray66  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)) ;
        }
      }
      const GALGAS_structurePropertyListAST_2D_element temp_67 = inObject ;
      GALGAS_string var_llvmGetterRoutineName_18960 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_67.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 502)) ;
      GALGAS_routineLLVMNameDict var_getterModeDictionary_19057 = extensionGetter_routineLLVMDictionaryForFunction (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 503)), var_llvmGetterRoutineName_18960, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 503)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_68 = inObject ;
      GALGAS_string var_llvmSetterRoutineName_19160 = function_setterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_68.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 504)) ;
      GALGAS_routineLLVMNameDict var_setterModeDictionary_19257 = extensionGetter_routineLLVMDictionaryForFunction (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 505)), var_llvmSetterRoutineName_19160, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 505)) ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_69 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_70 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_71 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_69.readProperty_mPropertyName (), temp_70.readProperty_mVisibility (), GALGAS_propertySetterKind::constructor_computedProperty (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_71.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 511)), var_getterModeDictionary_19057, var_setterModeDictionary_19257  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 506)) ;
      }
      const GALGAS_structurePropertyListAST_2D_element temp_72 = inObject ;
      GALGAS_lstring var_functionLLVMName_19694 = GALGAS_lstring::constructor_new (var_llvmSetterRoutineName_19160, temp_72.readProperty_mPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 516)) ;
      GALGAS_routineFormalArgumentListAST temp_73 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 524)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_74 = inObject ;
      temp_73.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-structure-declaration.galgas", 521)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 522)), temp_74.readProperty_mPropertyTypeName (), GALGAS_lstring::constructor_new (GALGAS_string ("newValue"), extractedValue_18752_endOfWriteInstructionList  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 524))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 524)) ;
      GALGAS_routineFormalArgumentListAST var_formalArgumentList_19836 = temp_73 ;
      ioArgument_ioDecoratedRoutineList.addAssign_operation (constinArgument_inReceiverTypeName, GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 528)), GALGAS_bool (false), GALGAS_routineKind::constructor_function (SOURCE_FILE ("type-structure-declaration.galgas", 530)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineAttributes::constructor_mutatingRoutine (SOURCE_FILE ("type-structure-declaration.galgas", 533)), var_functionLLVMName_19694, var_formalArgumentList_19836, GALGAS_bool (false), extractedValue_18731_writeInstructionList, extractedValue_18752_endOfWriteInstructionList, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 539))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 526)) ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterDeclarationList-element buildControlRegisterMapForGroup'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_buildControlRegisterMapForGroup (const GALGAS_controlRegisterDeclarationList_2D_element inObject,
                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                      GALGAS_controlRegisterMap & ioArgument_ioControlRegisterMap,
                                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_registerType_20237 ;
  GALGAS_uint var_registerBitCount_20264 ;
  {
  const GALGAS_controlRegisterDeclarationList_2D_element temp_0 = inObject ;
  routine_controlRegisterType (temp_0.readProperty_mRegisterTypeName (), ioArgument_ioContext, var_registerType_20237, var_registerBitCount_20264, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 492)) ;
  }
  GALGAS_controlRegisterFieldMap var_registerFieldMap_20500 ;
  GALGAS_sliceMap var_registerBitSliceMap_20526 ;
  GALGAS_controlRegisterFieldList var_controlRegisterFieldList_20555 ;
  {
  const GALGAS_controlRegisterDeclarationList_2D_element temp_1 = inObject ;
  const GALGAS_controlRegisterDeclarationList_2D_element temp_2 = inObject ;
  routine_buildControlRegisterSliceMap (temp_1.readProperty_mRegisterBitSliceList (), temp_2.readProperty_mRegisterBitSliceListLocation (), ioArgument_ioContext, var_registerType_20237, var_registerBitCount_20264, var_registerFieldMap_20500, var_registerBitSliceMap_20526, var_controlRegisterFieldList_20555, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 494)) ;
  }
  const GALGAS_controlRegisterDeclarationList_2D_element temp_3 = inObject ;
  cEnumerator_controlRegisterNameListAST enumerator_20636 (temp_3.readProperty_mRegisterArrayList (), kENUMERATION_UP) ;
  while (enumerator_20636.hasCurrentObject ()) {
    GALGAS_objectIR var_addressOffsetExpressionResult_20973 ;
    {
    routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, enumerator_20636.current (HERE).readProperty_mRegisterOffset (), enumerator_20636.current (HERE).readProperty_mRegisterOffsetLocation (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 512)), var_addressOffsetExpressionResult_20973, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 507)) ;
    }
    GALGAS_bigint var_registerAddressOffset_21025 ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_addressOffsetExpressionResult_20973.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 516)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 516)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_20636.current (HERE).readProperty_mRegisterOffsetLocation (), GALGAS_string ("control register address offset is not a static integer expression"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 517)) ;
        var_registerAddressOffset_21025.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      GALGAS_omnibusType joker_21329_1 ; // Joker input parameter
      var_addressOffsetExpressionResult_20973.method_literalInteger (joker_21329_1, var_registerAddressOffset_21025, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 521)) ;
    }
    GALGAS_bigint var_arraySize_21387 ;
    GALGAS_uint var_elementArraySize_21411 ;
    switch (enumerator_20636.current (HERE).readProperty_mControlRegisterKind ().enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
        var_arraySize_21387 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 527)) ;
        var_elementArraySize_21411 = GALGAS_uint (uint32_t (0U)) ;
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_23272 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_20636.current (HERE).readProperty_mControlRegisterKind ().unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_21573_arraySizeExpression = extractPtr_23272->mAssociatedValue0 ;
        const GALGAS_location extractedValue_21603_arraySizeLocation = extractPtr_23272->mAssociatedValue1 ;
        const GALGAS_expressionAST extractedValue_21660_arrayElementSizeExpression = extractPtr_23272->mAssociatedValue2 ;
        const GALGAS_location extractedValue_21697_arrayElementSizeLocation = extractPtr_23272->mAssociatedValue3 ;
        GALGAS_objectIR var_sizeExpressionResult_22038 ;
        {
        routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_21573_arraySizeExpression, extractedValue_21603_arraySizeLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 537)), var_sizeExpressionResult_22038, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 532)) ;
        }
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_sizeExpressionResult_22038.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 540)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 540)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_21603_arraySizeLocation, GALGAS_string ("control register address is not a static integer expression"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 541)) ;
            var_arraySize_21387.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_6) {
          GALGAS_omnibusType joker_22289_1 ; // Joker input parameter
          var_sizeExpressionResult_22038.method_literalInteger (joker_22289_1, var_arraySize_21387, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 543)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictInf, var_arraySize_21387.objectCompare (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 544)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (extractedValue_21603_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 545)) ;
              var_arraySize_21387.drop () ; // Release error dropped variable
            }
          }
        }
        GALGAS_objectIR var_elementArraySizeExpressionResult_22857 ;
        {
        routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_21660_arrayElementSizeExpression, extractedValue_21697_arrayElementSizeLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 556)), var_elementArraySizeExpressionResult_22857, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 551)) ;
        }
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = var_elementArraySizeExpressionResult_22857.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 559)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 559)).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_21697_arrayElementSizeLocation, GALGAS_string ("element size is not a static integer expression"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 560)) ;
            var_elementArraySize_21411.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_10) {
          GALGAS_bigint var_elementArraySizeAsBigInt_23181 ;
          GALGAS_omnibusType joker_23166_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_22857.method_literalInteger (joker_23166_1, var_elementArraySizeAsBigInt_23181, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 564)) ;
          var_elementArraySize_21411 = var_elementArraySizeAsBigInt_23181.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 565)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioControlRegisterMap.setter_insertKey (enumerator_20636.current (HERE).readProperty_mRegisterName (), var_registerType_20237, enumerator_20636.current (HERE).readProperty_mIsReadOnly (), GALGAS_bool (false), var_registerBitSliceMap_20526, var_registerFieldMap_20500, var_registerAddressOffset_21025, var_controlRegisterFieldList_20555, var_registerBitCount_20264, var_arraySize_21387.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 578)), var_elementArraySize_21411, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 568)) ;
    }
    enumerator_20636.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@globalSyncInstanceMapIR-element generateLLVM'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVM (const GALGAS_globalSyncInstanceMapIR_2D_element inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_globalSyncInstanceMapIR_2D_element temp_0 = inObject ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalSyncInstance (temp_0.readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)) ;
  const GALGAS_globalSyncInstanceMapIR_2D_element temp_1 = inObject ;
  const GALGAS_globalSyncInstanceMapIR_2D_element temp_2 = inObject ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_1.readProperty_mInitialValue (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).add_operation (extensionGetter_llvmValue (temp_2.readProperty_mInitialValue (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@driverListIR-element generateLLVMDriverVariableDefinition'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverVariableDefinition (const GALGAS_driverListIR_2D_element inObject,
                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_driverListIR_2D_element temp_0 = inObject ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (temp_0.readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 426)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 426)) ;
  const GALGAS_driverListIR_2D_element temp_1 = inObject ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)).add_operation (GALGAS_string (" {"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)) ;
  const GALGAS_driverListIR_2D_element temp_2 = inObject ;
  cEnumerator_operandIRList enumerator_18464 (temp_2.readProperty_mInitialValueList (), kENUMERATION_UP) ;
  while (enumerator_18464.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18464.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)).add_operation (extensionGetter_llvmValue (enumerator_18464.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)) ;
    if (enumerator_18464.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 430)) ;
    }
    enumerator_18464.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 432)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedTaskList-element taskSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_taskSemanticAnalysis (const GALGAS_decoratedTaskList_2D_element inObject,
                                           const GALGAS_semanticContext constinArgument_inContext,
                                           const GALGAS_uint constinArgument_inPriority,
                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_taskType_14971 ;
  const GALGAS_decoratedTaskList_2D_element temp_0 = inObject ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTaskName (), var_taskType_14971, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 392)) ;
  const GALGAS_decoratedTaskList_2D_element temp_1 = inObject ;
  GALGAS_bigint var_stackSize_15079 = temp_1.readProperty_mStackSize ().readProperty_bigint () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = GALGAS_bool (kIsStrictInf, var_stackSize_15079.objectCompare (GALGAS_bigint ("64", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 395)))) ;
    if (kBoolTrue != test_3.boolEnum ()) {
      test_3 = GALGAS_bool (kIsNotEqual, var_stackSize_15079.modulo_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 395)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 395)))) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_decoratedTaskList_2D_element temp_4 = inObject ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mStackSize ().readProperty_location (), GALGAS_string ("stack size should be a multiple of 8, and >= 64"), fixItArray5  COMMA_SOURCE_FILE ("task-declaration.galgas", 396)) ;
    }
  }
  GALGAS_stringlist var_setupOrderedList_15394 ;
  {
  const GALGAS_decoratedTaskList_2D_element temp_6 = inObject ;
  routine_analyzeOrderedTaskRoutines (temp_6.readProperty_mTaskSetupListAST (), var_setupOrderedList_15394, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 399)) ;
  }
  GALGAS_stringlist var_activateOrderedList_15562 ;
  {
  const GALGAS_decoratedTaskList_2D_element temp_7 = inObject ;
  routine_analyzeOrderedTaskRoutines (temp_7.readProperty_mTaskActivateListAST (), var_activateOrderedList_15562, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 404)) ;
  }
  GALGAS_stringlist var_deactivateOrderedList_15737 ;
  {
  const GALGAS_decoratedTaskList_2D_element temp_8 = inObject ;
  routine_analyzeOrderedTaskRoutines (temp_8.readProperty_mTaskDeactivateListAST (), var_deactivateOrderedList_15737, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 409)) ;
  }
  GALGAS_uint var_taskNameStringIndex_15937 ;
  {
  const GALGAS_decoratedTaskList_2D_element temp_9 = inObject ;
  extensionSetter_findOrAddStaticString (ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, temp_9.readProperty_mTaskName ().readProperty_string (), var_taskNameStringIndex_15937, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 414)) ;
  }
  {
  const GALGAS_decoratedTaskList_2D_element temp_10 = inObject ;
  const GALGAS_decoratedTaskList_2D_element temp_11 = inObject ;
  const GALGAS_decoratedTaskList_2D_element temp_12 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mTaskMapIR.setter_insertKey (temp_10.readProperty_mTaskName (), var_taskType_14971, constinArgument_inPriority, temp_11.readProperty_mStackSize ().readProperty_bigint (), var_setupOrderedList_15394, var_activateOrderedList_15562, var_deactivateOrderedList_15737, var_taskNameStringIndex_15937, temp_12.readProperty_mAutoStart (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 416)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST-element enterExternProcInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const GALGAS_externFunctionDeclarationListAST_2D_element inObject,
                                               GALGAS_semanticContext & ioArgument_ioContext,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature var_signature_3624 ;
  {
  const GALGAS_externFunctionDeclarationListAST_2D_element temp_0 = inObject ;
  routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mProcFormalArgumentList (), var_signature_3624, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 87)) ;
  }
  GALGAS_unifiedTypeMapEntry var_returnTypeProxy_3721 ;
  {
  const GALGAS_externFunctionDeclarationListAST_2D_element temp_1 = inObject ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mReturnTypeName (), var_returnTypeProxy_3721, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 89)) ;
  }
  const GALGAS_externFunctionDeclarationListAST_2D_element temp_2 = inObject ;
  const GALGAS_externFunctionDeclarationListAST_2D_element temp_3 = inObject ;
  GALGAS_routineLLVMNameDict var_routineLLVMNameDict_3787 = extensionGetter_routineLLVMDictionaryForFunction (temp_2.readProperty_mMode (), temp_3.readProperty_mRoutineNameForGeneration ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 91)) ;
  const GALGAS_externFunctionDeclarationListAST_2D_element temp_4 = inObject ;
  GALGAS_lstring var_routineMangledName_3893 = extensionGetter_mangledName (var_signature_3624, GALGAS_string::makeEmptyString (), temp_4.readProperty_mExternProcedureName (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 92)) ;
  {
  const GALGAS_externFunctionDeclarationListAST_2D_element temp_5 = inObject ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_3893, GALGAS_bool (true), var_signature_3624, var_returnTypeProxy_3721, var_routineLLVMNameDict_3787, GALGAS_bool (false), temp_5.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 93)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@externProcedureMapIR-element llvmPrototypeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const GALGAS_externProcedureMapIR_2D_element inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureMapIR_2D_element temp_0 = inObject ;
  GALGAS_string var_procName_8683 = function_llvmNameForFunction (temp_0.readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 215)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_externProcedureMapIR_2D_element temp_2 = inObject ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mReturnType ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 216)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 217)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_externProcedureMapIR_2D_element temp_3 = inObject ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_3.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_procName_8683, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)) ;
  const GALGAS_externProcedureMapIR_2D_element temp_4 = inObject ;
  cEnumerator_routineFormalArgumentListIR enumerator_8986 (temp_4.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_8986.hasCurrentObject ()) {
    switch (enumerator_8986.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8986.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)).add_operation (enumerator_8986.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8986.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)).add_operation (function_llvmNameForLocalVariable (enumerator_8986.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8986.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)).add_operation (function_llvmNameForLocalVariable (enumerator_8986.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)) ;
      }
      break ;
    }
    if (enumerator_8986.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 233)) ;
    }
    enumerator_8986.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)).add_operation (GALGAS_string ("; declared by extern Omnibus function declaration\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@callInstructionAST baseGuardAnalyze'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_baseGuardAnalyze (cPtr_callInstructionAST * inObject,
                                           const GALGAS_omnibusType constin_inSelfType,
                                           const GALGAS_routineAttributes constin_inRoutineAttributes,
                                           const GALGAS_semanticContext constin_inContext,
                                           const GALGAS_mode constin_inMode,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                           GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                           GALGAS_guardKindGenerationIR & out_outConvenienceGuardGenerationIR,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outConvenienceGuardGenerationIR.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_callInstructionAST) ;
    inObject->method_baseGuardAnalyze (constin_inSelfType, constin_inRoutineAttributes, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, out_outConvenienceGuardGenerationIR, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedRegularRoutineList-element semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_semanticAnalysis (const GALGAS_decoratedRegularRoutineList_2D_element inObject,
                                       const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioTemporaries.setter_setMTemporaryIndex (GALGAS_uint (uint32_t (0U)) COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 45)) ;
  const GALGAS_decoratedRegularRoutineList_2D_element temp_0 = inObject ;
  GALGAS_omnibusType temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, temp_0.readProperty_receiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 48)) ;
  }else if (kBoolFalse == test_2) {
    const GALGAS_decoratedRegularRoutineList_2D_element temp_3 = inObject ;
    temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_receiverTypeName (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 49)) ;
  }
  GALGAS_omnibusType var_receiverType_2092 = temp_1 ;
  GALGAS_universalValuedObjectMap var_universalMap_2268 = constinArgument_inContext.readProperty_mValuedObjectMap () ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_2268, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 53)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_2268, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 54)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_decoratedRegularRoutineList_2D_element temp_5 = inObject ;
    test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_returnTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_decoratedRegularRoutineList_2D_element temp_6 = inObject ;
      GALGAS_lstring var_resultVarName_2457 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 57)), temp_6.readProperty_returnTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 57)) ;
      const GALGAS_decoratedRegularRoutineList_2D_element temp_7 = inObject ;
      GALGAS_omnibusType var_resultType_2557 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_7.readProperty_returnTypeName (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 58)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_2268, var_resultVarName_2457, var_resultType_2557, var_resultVarName_2457, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("regular-routine-analysis.galgas", 59)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 59)) ;
      }
    }
  }
  GALGAS_routineFormalArgumentListIR var_formalArguments_2799 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("regular-routine-analysis.galgas", 62)) ;
  {
  const GALGAS_decoratedRegularRoutineList_2D_element temp_8 = inObject ;
  const GALGAS_decoratedRegularRoutineList_2D_element temp_9 = inObject ;
  routine_enterFormalArguments (constinArgument_inContext, temp_8.readProperty_formalArgumentList (), var_universalMap_2268, var_formalArguments_2799, temp_9.readProperty_warningOnUnusedArgs (), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 63)) ;
  }
  GALGAS_allocaList var_allocaList_3041 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("regular-routine-analysis.galgas", 71)) ;
  GALGAS_instructionListIR var_instructionGenerationList_3082 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("regular-routine-analysis.galgas", 72)) ;
  const GALGAS_decoratedRegularRoutineList_2D_element temp_10 = inObject ;
  const GALGAS_decoratedRegularRoutineList_2D_element temp_11 = inObject ;
  const GALGAS_decoratedRegularRoutineList_2D_element temp_12 = inObject ;
  extensionMethod_analyzeRoutineInstructionList (temp_10.readProperty_mInstructionList (), var_receiverType_2092, temp_11.readProperty_routineAttributes (), constinArgument_inContext, temp_12.readProperty_mode (), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_2268, var_allocaList_3041, var_instructionGenerationList_3082, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 73)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_2268, var_instructionGenerationList_3082, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 85)) ;
  {
  const GALGAS_decoratedRegularRoutineList_2D_element temp_13 = inObject ;
  extensionSetter_closeBranch (var_universalMap_2268, temp_13.readProperty_mEndOfRoutineDeclaration (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 86)) ;
  }
  {
  const GALGAS_decoratedRegularRoutineList_2D_element temp_14 = inObject ;
  extensionSetter_closeOverride (var_universalMap_2268, temp_14.readProperty_mEndOfRoutineDeclaration (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 87)) ;
  }
  const GALGAS_decoratedRegularRoutineList_2D_element temp_15 = inObject ;
  GALGAS_omnibusType temp_16 ;
  const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, temp_15.readProperty_returnTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 90)) ;
  }else if (kBoolFalse == test_17) {
    const GALGAS_decoratedRegularRoutineList_2D_element temp_18 = inObject ;
    temp_16 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_18.readProperty_returnTypeName (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 92)) ;
  }
  GALGAS_omnibusType var_returnType_3731 = temp_16 ;
  const GALGAS_decoratedRegularRoutineList_2D_element temp_19 = inObject ;
  const GALGAS_decoratedRegularRoutineList_2D_element temp_20 = inObject ;
  const GALGAS_decoratedRegularRoutineList_2D_element temp_21 = inObject ;
  const GALGAS_decoratedRegularRoutineList_2D_element temp_22 = inObject ;
  const GALGAS_decoratedRegularRoutineList_2D_element temp_23 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_regularRoutineIR::constructor_new (temp_19.readProperty_routineMangledLLVMName (), temp_20.readProperty_isRequired (), temp_21.readProperty_warnIfUnused (), var_receiverType_2092, var_formalArguments_2799, var_allocaList_3041, var_instructionGenerationList_3082, temp_22.readProperty_exportedRoutine (), temp_23.readProperty_routineKind (), var_returnType_3731, GALGAS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 94))  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 94)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @addressofControlRegisterAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addressofControlRegisterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mControlRegisterLValue.printNonNullClassInstanceProperties ("mControlRegisterLValue") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_addressofControlRegisterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofControlRegisterAST * p = (const cPtr_addressofControlRegisterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofControlRegisterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterLValue.objectCompare (p->mProperty_mControlRegisterLValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_addressofControlRegisterAST::objectCompare (const GALGAS_addressofControlRegisterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addressofControlRegisterAST::GALGAS_addressofControlRegisterAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addressofControlRegisterAST::GALGAS_addressofControlRegisterAST (const cPtr_addressofControlRegisterAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofControlRegisterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_addressofControlRegisterAST GALGAS_addressofControlRegisterAST::constructor_new (const GALGAS_controlRegisterLValueAST & inAttribute_mControlRegisterLValue
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_addressofControlRegisterAST result ;
  if (inAttribute_mControlRegisterLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofControlRegisterAST (inAttribute_mControlRegisterLValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_addressofControlRegisterAST::setter_setMControlRegisterLValue (GALGAS_controlRegisterLValueAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_addressofControlRegisterAST * p = (cPtr_addressofControlRegisterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofControlRegisterAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controlRegisterLValueAST GALGAS_addressofControlRegisterAST::readProperty_mControlRegisterLValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_controlRegisterLValueAST () ;
  }else{
    cPtr_addressofControlRegisterAST * p = (cPtr_addressofControlRegisterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofControlRegisterAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @addressofControlRegisterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_addressofControlRegisterAST::cPtr_addressofControlRegisterAST (const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue
                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mControlRegisterLValue (in_mControlRegisterLValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addressofControlRegisterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST ;
}

void cPtr_addressofControlRegisterAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@addressofControlRegisterAST:" ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addressofControlRegisterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofControlRegisterAST (mProperty_mControlRegisterLValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @addressofControlRegisterAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofControlRegisterAST ("addressofControlRegisterAST",
                                                    & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_addressofControlRegisterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_addressofControlRegisterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofControlRegisterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addressofControlRegisterAST GALGAS_addressofControlRegisterAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_addressofControlRegisterAST result ;
  const GALGAS_addressofControlRegisterAST * p = (const GALGAS_addressofControlRegisterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addressofControlRegisterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofControlRegisterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @addressofExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addressofExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLValue.printNonNullClassInstanceProperties ("mLValue") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_addressofExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofExpressionAST * p = (const cPtr_addressofExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_addressofExpressionAST::objectCompare (const GALGAS_addressofExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addressofExpressionAST::GALGAS_addressofExpressionAST (void) :
GALGAS_expressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addressofExpressionAST::GALGAS_addressofExpressionAST (const cPtr_addressofExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_addressofExpressionAST GALGAS_addressofExpressionAST::constructor_new (const GALGAS_LValueAST & inAttribute_mLValue
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_addressofExpressionAST result ;
  if (inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofExpressionAST (inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_addressofExpressionAST::setter_setMLValue (GALGAS_LValueAST inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_addressofExpressionAST * p = (cPtr_addressofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
    p->mProperty_mLValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueAST GALGAS_addressofExpressionAST::readProperty_mLValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_LValueAST () ;
  }else{
    cPtr_addressofExpressionAST * p = (cPtr_addressofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
    return p->mProperty_mLValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @addressofExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_addressofExpressionAST::cPtr_addressofExpressionAST (const GALGAS_LValueAST & in_mLValue
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLValue (in_mLValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addressofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

void cPtr_addressofExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@addressofExpressionAST:" ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addressofExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofExpressionAST (mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @addressofExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofExpressionAST ("addressofExpressionAST",
                                               & kTypeDescriptor_GALGAS_expressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_addressofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_addressofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addressofExpressionAST GALGAS_addressofExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_addressofExpressionAST result ;
  const GALGAS_addressofExpressionAST * p = (const GALGAS_addressofExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addressofExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @addressofInstructionIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addressofInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mLValue.printNonNullClassInstanceProperties ("mLValue") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_addressofInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofInstructionIR * p = (const cPtr_addressofInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_addressofInstructionIR::objectCompare (const GALGAS_addressofInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addressofInstructionIR::GALGAS_addressofInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addressofInstructionIR::GALGAS_addressofInstructionIR (const cPtr_addressofInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofInstructionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_addressofInstructionIR GALGAS_addressofInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                              const GALGAS_LValueRepresentation & inAttribute_mLValue
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_addressofInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofInstructionIR (inAttribute_mTarget, inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_addressofInstructionIR::setter_setMTarget (GALGAS_objectIR inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_addressofInstructionIR::setter_setMLValue (GALGAS_LValueRepresentation inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    p->mProperty_mLValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_addressofInstructionIR::readProperty_mTarget (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    return p->mProperty_mTarget ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_LValueRepresentation GALGAS_addressofInstructionIR::readProperty_mLValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_LValueRepresentation () ;
  }else{
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    return p->mProperty_mLValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @addressofInstructionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_addressofInstructionIR::cPtr_addressofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                          const GALGAS_LValueRepresentation & in_mLValue
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mLValue (in_mLValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addressofInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

void cPtr_addressofInstructionIR::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@addressofInstructionIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addressofInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofInstructionIR (mProperty_mTarget, mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @addressofInstructionIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofInstructionIR ("addressofInstructionIR",
                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_addressofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_addressofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofInstructionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addressofInstructionIR GALGAS_addressofInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_addressofInstructionIR result ;
  const GALGAS_addressofInstructionIR * p = (const GALGAS_addressofInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addressofInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (void) :
mProperty_mStaticEntityMap (),
mProperty_mInterruptMapIR (),
mProperty_mExternProcedureMapIR (),
mProperty_mPanicSetupListIR (),
mProperty_mPanicLoopListIR (),
mProperty_mTaskMapIR (),
mProperty_mGlobalTaskVariableList (),
mProperty_mMaxBranchOfOnInstructions (),
mProperty_mTargetParameters (),
mProperty_mDriverList (),
mProperty_mStaticArrayMapForIntermediate (),
mProperty_mGlobalSyncInstanceMap (),
mProperty_mControlRegisterGroupArrayList (),
mProperty_mRoutineListIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_intermediateCodeStruct::~ GALGAS_intermediateCodeStruct (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (const GALGAS_staticEntityMap & inOperand0,
                                                              const GALGAS_interruptMapIR & inOperand1,
                                                              const GALGAS_externProcedureMapIR & inOperand2,
                                                              const GALGAS_panicSortedListIR & inOperand3,
                                                              const GALGAS_panicSortedListIR & inOperand4,
                                                              const GALGAS_taskMapIR & inOperand5,
                                                              const GALGAS_globalTaskVariableList & inOperand6,
                                                              const GALGAS_uint & inOperand7,
                                                              const GALGAS_targetParameters & inOperand8,
                                                              const GALGAS_driverListIR & inOperand9,
                                                              const GALGAS_staticListInvokedFunctionSetMap & inOperand10,
                                                              const GALGAS_globalSyncInstanceMapIR & inOperand11,
                                                              const GALGAS_controlRegisterGroupArrayList & inOperand12,
                                                              const GALGAS_routineListIR & inOperand13) :
mProperty_mStaticEntityMap (inOperand0),
mProperty_mInterruptMapIR (inOperand1),
mProperty_mExternProcedureMapIR (inOperand2),
mProperty_mPanicSetupListIR (inOperand3),
mProperty_mPanicLoopListIR (inOperand4),
mProperty_mTaskMapIR (inOperand5),
mProperty_mGlobalTaskVariableList (inOperand6),
mProperty_mMaxBranchOfOnInstructions (inOperand7),
mProperty_mTargetParameters (inOperand8),
mProperty_mDriverList (inOperand9),
mProperty_mStaticArrayMapForIntermediate (inOperand10),
mProperty_mGlobalSyncInstanceMap (inOperand11),
mProperty_mControlRegisterGroupArrayList (inOperand12),
mProperty_mRoutineListIR (inOperand13) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_intermediateCodeStruct (GALGAS_staticEntityMap::constructor_default (HERE),
                                        GALGAS_interruptMapIR::constructor_emptyMap (HERE),
                                        GALGAS_externProcedureMapIR::constructor_emptyMap (HERE),
                                        GALGAS_panicSortedListIR::constructor_emptySortedList (HERE),
                                        GALGAS_panicSortedListIR::constructor_emptySortedList (HERE),
                                        GALGAS_taskMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalTaskVariableList::constructor_emptyList (HERE),
                                        GALGAS_uint::constructor_default (HERE),
                                        GALGAS_targetParameters::constructor_default (HERE),
                                        GALGAS_driverListIR::constructor_emptyList (HERE),
                                        GALGAS_staticListInvokedFunctionSetMap::constructor_emptyMap (HERE),
                                        GALGAS_globalSyncInstanceMapIR::constructor_emptyMap (HERE),
                                        GALGAS_controlRegisterGroupArrayList::constructor_emptyList (HERE),
                                        GALGAS_routineListIR::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_new (const GALGAS_staticEntityMap & in_mStaticEntityMap,
                                                                              const GALGAS_interruptMapIR & in_mInterruptMapIR,
                                                                              const GALGAS_externProcedureMapIR & in_mExternProcedureMapIR,
                                                                              const GALGAS_panicSortedListIR & in_mPanicSetupListIR,
                                                                              const GALGAS_panicSortedListIR & in_mPanicLoopListIR,
                                                                              const GALGAS_taskMapIR & in_mTaskMapIR,
                                                                              const GALGAS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                                                              const GALGAS_uint & in_mMaxBranchOfOnInstructions,
                                                                              const GALGAS_targetParameters & in_mTargetParameters,
                                                                              const GALGAS_driverListIR & in_mDriverList,
                                                                              const GALGAS_staticListInvokedFunctionSetMap & in_mStaticArrayMapForIntermediate,
                                                                              const GALGAS_globalSyncInstanceMapIR & in_mGlobalSyncInstanceMap,
                                                                              const GALGAS_controlRegisterGroupArrayList & in_mControlRegisterGroupArrayList,
                                                                              const GALGAS_routineListIR & in_mRoutineListIR 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  if (in_mStaticEntityMap.isValid () && in_mInterruptMapIR.isValid () && in_mExternProcedureMapIR.isValid () && in_mPanicSetupListIR.isValid () && in_mPanicLoopListIR.isValid () && in_mTaskMapIR.isValid () && in_mGlobalTaskVariableList.isValid () && in_mMaxBranchOfOnInstructions.isValid () && in_mTargetParameters.isValid () && in_mDriverList.isValid () && in_mStaticArrayMapForIntermediate.isValid () && in_mGlobalSyncInstanceMap.isValid () && in_mControlRegisterGroupArrayList.isValid () && in_mRoutineListIR.isValid ()) {
    result = GALGAS_intermediateCodeStruct (in_mStaticEntityMap, in_mInterruptMapIR, in_mExternProcedureMapIR, in_mPanicSetupListIR, in_mPanicLoopListIR, in_mTaskMapIR, in_mGlobalTaskVariableList, in_mMaxBranchOfOnInstructions, in_mTargetParameters, in_mDriverList, in_mStaticArrayMapForIntermediate, in_mGlobalSyncInstanceMap, in_mControlRegisterGroupArrayList, in_mRoutineListIR) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_intermediateCodeStruct::objectCompare (const GALGAS_intermediateCodeStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mStaticEntityMap.objectCompare (inOperand.mProperty_mStaticEntityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptMapIR.objectCompare (inOperand.mProperty_mInterruptMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternProcedureMapIR.objectCompare (inOperand.mProperty_mExternProcedureMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicSetupListIR.objectCompare (inOperand.mProperty_mPanicSetupListIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLoopListIR.objectCompare (inOperand.mProperty_mPanicLoopListIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskMapIR.objectCompare (inOperand.mProperty_mTaskMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalTaskVariableList.objectCompare (inOperand.mProperty_mGlobalTaskVariableList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMaxBranchOfOnInstructions.objectCompare (inOperand.mProperty_mMaxBranchOfOnInstructions) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetParameters.objectCompare (inOperand.mProperty_mTargetParameters) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverList.objectCompare (inOperand.mProperty_mDriverList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticArrayMapForIntermediate.objectCompare (inOperand.mProperty_mStaticArrayMapForIntermediate) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalSyncInstanceMap.objectCompare (inOperand.mProperty_mGlobalSyncInstanceMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterGroupArrayList.objectCompare (inOperand.mProperty_mControlRegisterGroupArrayList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineListIR.objectCompare (inOperand.mProperty_mRoutineListIR) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_intermediateCodeStruct::isValid (void) const {
  return mProperty_mStaticEntityMap.isValid () && mProperty_mInterruptMapIR.isValid () && mProperty_mExternProcedureMapIR.isValid () && mProperty_mPanicSetupListIR.isValid () && mProperty_mPanicLoopListIR.isValid () && mProperty_mTaskMapIR.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mMaxBranchOfOnInstructions.isValid () && mProperty_mTargetParameters.isValid () && mProperty_mDriverList.isValid () && mProperty_mStaticArrayMapForIntermediate.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mControlRegisterGroupArrayList.isValid () && mProperty_mRoutineListIR.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_intermediateCodeStruct::drop (void) {
  mProperty_mStaticEntityMap.drop () ;
  mProperty_mInterruptMapIR.drop () ;
  mProperty_mExternProcedureMapIR.drop () ;
  mProperty_mPanicSetupListIR.drop () ;
  mProperty_mPanicLoopListIR.drop () ;
  mProperty_mTaskMapIR.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mMaxBranchOfOnInstructions.drop () ;
  mProperty_mTargetParameters.drop () ;
  mProperty_mDriverList.drop () ;
  mProperty_mStaticArrayMapForIntermediate.drop () ;
  mProperty_mGlobalSyncInstanceMap.drop () ;
  mProperty_mControlRegisterGroupArrayList.drop () ;
  mProperty_mRoutineListIR.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_intermediateCodeStruct::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @intermediateCodeStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mStaticEntityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInterruptMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternProcedureMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicSetupListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLoopListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTaskMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMaxBranchOfOnInstructions.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDriverList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticArrayMapForIntermediate.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterGroupArrayList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineListIR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @intermediateCodeStruct generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_intermediateCodeStruct ("intermediateCodeStruct",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_intermediateCodeStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_intermediateCodeStruct ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_intermediateCodeStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_intermediateCodeStruct (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  const GALGAS_intermediateCodeStruct * p = (const GALGAS_intermediateCodeStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_intermediateCodeStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("intermediateCodeStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

C_BoolCommandLineOption gOption_omnibus_5F_options_doNotDetectRecursiveCalls ("omnibus_options",
                                         "doNotDetectRecursiveCalls",
                                         114,
                                         "do-not-detect-recursive-calls",
                                         "Do not detect recursive calls") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile ("omnibus_options",
                                         "emitControlRegisterHTMLDumpFile",
                                         0,
                                         "emit-control-register-map",
                                         "Emit control register map in an HTML file") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile ("omnibus_options",
                                         "emitDeclarationDependencyGraphFile",
                                         100,
                                         "emit-declaration-dependency-graph",
                                         "Emit declaration dependency graph file") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile ("omnibus_options",
                                         "emitGlobalConstantHTMLDumpFile",
                                         0,
                                         "emit-global-constant-map",
                                         "Emit global constant map in an HTML file") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_emitRoutineInvocationGraphFile ("omnibus_options",
                                         "emitRoutineInvocationGraphFile",
                                         105,
                                         "emit-routine-invocation-graph",
                                         "Emit routine invocation graph file") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_emitTypeMap ("omnibus_options",
                                         "emitTypeMap",
                                         116,
                                         "emit-type-map",
                                         "Emit type map in an HTML file") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_listEmbeddedSampleFiles ("omnibus_options",
                                         "listEmbeddedSampleFiles",
                                         108,
                                         "list-embedded-samples",
                                         "List embedded sample files") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_listTargets ("omnibus_options",
                                         "listTargets",
                                         76,
                                         "list-targets",
                                         "List targets") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_noDeadCodeElimination ("omnibus_options",
                                         "noDeadCodeElimination",
                                         0,
                                         "no-deadcode-elimination",
                                         "No dead code elimination") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_noPanicGeneration ("omnibus_options",
                                         "noPanicGeneration",
                                         0,
                                         "no-panic-generation",
                                         "Do not generate panic code") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_optimization_31_ ("omnibus_options",
                                         "optimization1",
                                         0,
                                         "O1",
                                         "Optimization level 1") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_optimization_32_ ("omnibus_options",
                                         "optimization2",
                                         0,
                                         "O2",
                                         "Optimization level 2") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_optimizationS ("omnibus_options",
                                         "optimizationS",
                                         0,
                                         "Os",
                                         "Like previous option with extra optimizations for size") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ ("omnibus_options",
                                         "optimizationZ",
                                         0,
                                         "Oz",
                                         "Like previous option but reduces code size further") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ_33_ ("omnibus_options",
                                         "optimizationZ3",
                                         0,
                                         "O3",
                                         "Optimization level 3") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_printPasses ("omnibus_options",
                                         "printPasses",
                                         0,
                                         "print-passes",
                                         "Print pass information") ;

C_BoolCommandLineOption gOption_omnibus_5F_options_taskStrictPriorityOrder ("omnibus_options",
                                         "taskStrictPriorityOrder",
                                         0,
                                         "task-strict-priority-order",
                                         "Ensure task strict priority order") ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

C_StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedSampleFile ("omnibus_options",
                                         "extractEmbeddedSampleFile",
                                         120,
                                         "extract-embedded-sample-code",
                                         "Extract an embedded sample file",
                                         "") ;

C_StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedTargets ("omnibus_options",
                                         "extractEmbeddedTargets",
                                         88,
                                         "extract-embedded-targets",
                                         "Extract embedded targets",
                                         "") ;

C_StringCommandLineOption gOption_omnibus_5F_options_useDirAsTargetDir ("omnibus_options",
                                         "useDirAsTargetDir",
                                         84,
                                         "use-target-dir",
                                         "Use directory as target definition directory, instead of using embedded targets",
                                         "") ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

C_StringListCommandLineOption gOption_omnibus_5F_options_pathList ("omnibus_options",
                                         "pathList",
                                         0,
                                         "path",
                                         "Search pathes for source files") ;

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

C_BoolCommandLineOption gOption_omnibus_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing ("omnibus_option_not_appearing_in_cocoa",
                                         "performFlashing",
                                         102,
                                         "flash-target",
                                         "After successful compilation, flash target") ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'configurationNodeNameForPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_configurationNodeNameForPrecedenceGraph (C_Compiler *
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("config") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = false ;
static GALGAS_string gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_configurationNodeNameForPrecedenceGraph (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph) {
    gOnceFunctionResult_configurationNodeNameForPrecedenceGraph = onceFunction_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = true ;
  }
  return gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph (void) {
  gOnceFunctionResult_configurationNodeNameForPrecedenceGraph.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_configurationNodeNameForPrecedenceGraph (NULL,
                                                                                     releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_configurationNodeNameForPrecedenceGraph [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_configurationNodeNameForPrecedenceGraph (C_Compiler * inCompiler,
                                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                                        const GALGAS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  return function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_configurationNodeNameForPrecedenceGraph ("configurationNodeNameForPrecedenceGraph",
                                                                                         functionWithGenericHeader_configurationNodeNameForPrecedenceGraph,
                                                                                         & kTypeDescriptor_GALGAS_string,
                                                                                         0,
                                                                                         functionArgs_configurationNodeNameForPrecedenceGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'isrSlotTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_isrSlotTypeName (C_Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("ISRSlot") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_isrSlotTypeName = false ;
static GALGAS_string gOnceFunctionResult_isrSlotTypeName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_isrSlotTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_isrSlotTypeName) {
    gOnceFunctionResult_isrSlotTypeName = onceFunction_isrSlotTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_isrSlotTypeName = true ;
  }
  return gOnceFunctionResult_isrSlotTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_isrSlotTypeName (void) {
  gOnceFunctionResult_isrSlotTypeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_isrSlotTypeName (NULL,
                                                             releaseOnceFunctionResult_isrSlotTypeName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_isrSlotTypeName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_isrSlotTypeName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_isrSlotTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_isrSlotTypeName ("isrSlotTypeName",
                                                                 functionWithGenericHeader_isrSlotTypeName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_isrSlotTypeName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@configurationDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_configurationDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_configurationDeclarationAST temp_0 = this ;
  GALGAS_lstring var_rootNode_11619 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 312)), temp_0.readProperty_mPanicCodeTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("configuration.galgas", 312)) ;
  {
  const GALGAS_configurationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_11619, temp_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 313)) ;
  }
  {
  const GALGAS_configurationDeclarationAST temp_2 = this ;
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11619, temp_2.readProperty_mPanicCodeTypeName () COMMA_SOURCE_FILE ("configuration.galgas", 314)) ;
  }
  {
  const GALGAS_configurationDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11619, temp_3.readProperty_mPanicCodeTypeName () COMMA_SOURCE_FILE ("configuration.galgas", 315)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11619, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 316)).getter_nowhere (SOURCE_FILE ("configuration.galgas", 316)) COMMA_SOURCE_FILE ("configuration.galgas", 316)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@configurationDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_configurationDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_configurationDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPanicCodeTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@configurationDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_configurationDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 328)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@configurationDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_configurationDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
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
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_configurationDeclarationAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTargetParameters ().readProperty_mConfigurationLocation (), GALGAS_string ("duplicate configuration"), fixItArray2  COMMA_SOURCE_FILE ("configuration.galgas", 348)) ;
    }
  }
  const GALGAS_configurationDeclarationAST temp_3 = this ;
  ioArgument_ioContext.setter_setMTargetParameters (temp_3.readProperty_mTargetParameters () COMMA_SOURCE_FILE ("configuration.galgas", 350)) ;
  GALGAS_omnibusType var_panicCodeType_13849 ;
  const GALGAS_configurationDeclarationAST temp_4 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_4.readProperty_mPanicCodeTypeName (), var_panicCodeType_13849, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 352)) ;
  ioArgument_ioContext.setter_setMPanicCodeType (var_panicCodeType_13849 COMMA_SOURCE_FILE ("configuration.galgas", 356)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_kind ().getter_isInteger (SOURCE_FILE ("configuration.galgas", 357)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_bool var_unsigned_14023 ;
      GALGAS_bigint joker_14005_2 ; // Joker input parameter
      GALGAS_bigint joker_14005_1 ; // Joker input parameter
      GALGAS_uint joker_14032_1 ; // Joker input parameter
      ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_kind ().method_integer (joker_14005_2, joker_14005_1, var_unsigned_14023, joker_14032_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 358)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_unsigned_14023.operator_not (SOURCE_FILE ("configuration.galgas", 359)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_configurationDeclarationAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mPanicCodeTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray8  COMMA_SOURCE_FILE ("configuration.galgas", 360)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_configurationDeclarationAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mPanicCodeTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray10  COMMA_SOURCE_FILE ("configuration.galgas", 363)) ;
  }
  GALGAS_omnibusType var_panicLineType_14353 ;
  const GALGAS_configurationDeclarationAST temp_11 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_11.readProperty_mPanicLineTypeName (), var_panicLineType_14353, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 366)) ;
  ioArgument_ioContext.setter_setMPanicLineType (var_panicLineType_14353 COMMA_SOURCE_FILE ("configuration.galgas", 370)) ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_kind ().getter_isInteger (SOURCE_FILE ("configuration.galgas", 371)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_bool var_unsigned_14527 ;
      GALGAS_bigint joker_14509_2 ; // Joker input parameter
      GALGAS_bigint joker_14509_1 ; // Joker input parameter
      GALGAS_uint joker_14536_1 ; // Joker input parameter
      ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_kind ().method_integer (joker_14509_2, joker_14509_1, var_unsigned_14527, joker_14536_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 372)) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = var_unsigned_14527.operator_not (SOURCE_FILE ("configuration.galgas", 373)).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_configurationDeclarationAST temp_14 = this ;
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mPanicLineTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray15  COMMA_SOURCE_FILE ("configuration.galgas", 374)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_12) {
    const GALGAS_configurationDeclarationAST temp_16 = this ;
    TC_Array <C_FixItDescription> fixItArray17 ;
    inCompiler->emitSemanticError (temp_16.readProperty_mPanicLineTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray17  COMMA_SOURCE_FILE ("configuration.galgas", 377)) ;
  }
  GALGAS_stringset var_panicCodeSet_14829 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("configuration.galgas", 380)) ;
  const GALGAS_configurationDeclarationAST temp_18 = this ;
  cEnumerator_interruptionConfigurationList enumerator_14859 (temp_18.readProperty_mInterruptionConfigurationList (), kENUMERATION_UP) ;
  while (enumerator_14859.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_14859.current_mInterruptName (HERE), enumerator_14859.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 382)) ;
    }
    switch (enumerator_14859.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GALGAS_interruptionPanicCode::kNotBuilt:
      break ;
    case GALGAS_interruptionPanicCode::kEnum_noCode:
      {
      }
      break ;
    case GALGAS_interruptionPanicCode::kEnum_code:
      {
        const cEnumAssociatedValues_interruptionPanicCode_code * extractPtr_15200 = (const cEnumAssociatedValues_interruptionPanicCode_code *) (enumerator_14859.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_15034_value = extractPtr_15200->mAssociatedValue0 ;
        GALGAS_string var_s_15053 = extractedValue_15034_value.readProperty_bigint ().getter_string (SOURCE_FILE ("configuration.galgas", 386)) ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = var_panicCodeSet_14829.getter_hasKey (var_s_15053 COMMA_SOURCE_FILE ("configuration.galgas", 387)).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (extractedValue_15034_value.readProperty_location (), GALGAS_string ("duplicate interrupt code"), fixItArray20  COMMA_SOURCE_FILE ("configuration.galgas", 388)) ;
          }
        }
        var_panicCodeSet_14829.addAssign_operation (var_s_15053  COMMA_SOURCE_FILE ("configuration.galgas", 390)) ;
      }
      break ;
    }
    enumerator_14859.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromAST'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_routineMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                   const GALGAS_lstring & constinArgument_inRoutineName,
                                                   const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_559 = GALGAS_string ("func.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_559.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 18)) ;
    }
  }
  var_s_559.plusAssign_operation(constinArgument_inRoutineName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 20)) ;
  var_s_559.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 21)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_729 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_729.hasCurrentObject ()) {
    var_s_559.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_729.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (enumerator_729.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 23)) ;
    enumerator_729.gotoNextObject () ;
  }
  var_s_559.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 25)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_559, constinArgument_inRoutineName.readProperty_location ()  COMMA_SOURCE_FILE ("context-routines.galgas", 26)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_routineMangledNameFromAST (C_Compiler * inCompiler,
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
  return function_routineMangledNameFromAST (operand0,
                                             operand1,
                                             operand2,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromAST ("routineMangledNameFromAST",
                                                                           functionWithGenericHeader_routineMangledNameFromAST,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           3,
                                                                           functionArgs_routineMangledNameFromAST) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromCall'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_routineMangledNameFromCall (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                    const GALGAS_lstring & constinArgument_inRoutineName,
                                                    const GALGAS_effectiveArgumentListAST & constinArgument_inEffectiveParameterList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_1255 = GALGAS_string ("func.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_1255.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 37)) ;
    }
  }
  var_s_1255.plusAssign_operation(constinArgument_inRoutineName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 39)) ;
  var_s_1255.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 40)) ;
  cEnumerator_effectiveArgumentListAST enumerator_1400 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_1400.hasCurrentObject ()) {
    var_s_1255.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_1400.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (enumerator_1400.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 42)) ;
    enumerator_1400.gotoNextObject () ;
  }
  var_s_1255.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 44)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_1255, constinArgument_inRoutineName.readProperty_location ()  COMMA_SOURCE_FILE ("context-routines.galgas", 45)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromCall [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_effectiveArgumentListAST,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_routineMangledNameFromCall (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_effectiveArgumentListAST operand2 = GALGAS_effectiveArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                   inCompiler
                                                                                                   COMMA_THERE) ;
  return function_routineMangledNameFromCall (operand0,
                                              operand1,
                                              operand2,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromCall ("routineMangledNameFromCall",
                                                                            functionWithGenericHeader_routineMangledNameFromCall,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            3,
                                                                            functionArgs_routineMangledNameFromCall) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeDeclarationBarrierAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeDeclarationBarrierAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_compileTimeDeclarationBarrierAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)), temp_0, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeDeclarationBarrierAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_compileTimeDeclarationBarrierAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 44)).readProperty_string () ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeDeclarationBarrierAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_compileTimeDeclarationBarrierAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("ordered-declaration-list.galgas", 50)) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeDeclarationBarrierAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeDeclarationBarrierAST::method_enterInContext (GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                   GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                   GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                   GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                   GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                   GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendUnsignedOperatorsTo'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendUnsignedOperatorsTo (const GALGAS_string constinArgument_inTypeName,
                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_addOp (SOURCE_FILE ("ordered-declaration-list.galgas", 77)), GALGAS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_subOp (SOURCE_FILE ("ordered-declaration-list.galgas", 80)), GALGAS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 80)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas", 83)), GALGAS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_divOp (SOURCE_FILE ("ordered-declaration-list.galgas", 86)), GALGAS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 87)), GALGAS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_modOp (SOURCE_FILE ("ordered-declaration-list.galgas", 89)), GALGAS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 89)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 90)), GALGAS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 90)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 100)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendSignedOperatorsTo'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendSignedOperatorsTo (const GALGAS_string constinArgument_inTypeName,
                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_addOp (SOURCE_FILE ("ordered-declaration-list.galgas", 113)), GALGAS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 113)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_subOp (SOURCE_FILE ("ordered-declaration-list.galgas", 116)), GALGAS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 116)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas", 119)), GALGAS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 119)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_modOp (SOURCE_FILE ("ordered-declaration-list.galgas", 122)), GALGAS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 122)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 123)), GALGAS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 123)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_divOp (SOURCE_FILE ("ordered-declaration-list.galgas", 125)), GALGAS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 125)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 126)), GALGAS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 126)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_minus (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 136)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildOrderedDeclarationList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildOrderedDeclarationList (const GALGAS_ast constinArgument_inAST,
                                          const GALGAS_string constinArgument_inSourceFile,
                                          const GALGAS_location constinArgument_inEndOfSourceFile,
                                          GALGAS_declarationListAST & outArgument_outSortedDeclarationListAST,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSortedDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph_8122 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 148)) ;
  cEnumerator_declarationListAST enumerator_8159 (constinArgument_inAST.readProperty_mDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_8159.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) enumerator_8159.current_mDeclaration (HERE).ptr (), var_precedenceGraph_8122, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 150)) ;
    enumerator_8159.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.readProperty_mExternFunctionListAST (), var_precedenceGraph_8122, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 153)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.readProperty_mTaskListAST (), var_precedenceGraph_8122, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 154)) ;
  GALGAS_bigint var_addintegerTypeCount_8587 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 156)) ;
  cEnumerator_stringlist enumerator_8618 (var_precedenceGraph_8122.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 157)), kENUMERATION_UP) ;
  while (enumerator_8618.hasCurrentObject ()) {
    GALGAS_stringlist var_Uxx_8703 = enumerator_8618.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("u") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 159)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GALGAS_bool test_1 = GALGAS_bool (kIsEqual, var_Uxx_8703.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 160)).objectCompare (GALGAS_uint (uint32_t (2U)))) ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = GALGAS_bool (kIsEqual, var_Uxx_8703.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 160)).objectCompare (GALGAS_string::makeEmptyString ())) ;
      }
      GALGAS_bool test_2 = test_1 ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = var_Uxx_8703.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 160)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 160)) ;
      }
      test_0 = test_2.boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_uint var_n_8880 = var_Uxx_8703.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 161)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 161)) ;
        GALGAS_integerDeclarationAST var_declaration_8941 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (false), var_n_8880  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 162)) ;
        callExtensionMethod_enterInPrecedenceGraph ((cPtr_integerDeclarationAST *) var_declaration_8941.ptr (), var_precedenceGraph_8122, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 163)) ;
        {
        routine_appendUnsignedOperatorsTo (enumerator_8618.current_mValue (HERE), var_precedenceGraph_8122, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 165)) ;
        }
        var_addintegerTypeCount_8587.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 167)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_stringlist var_Ixx_9219 = enumerator_8618.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("i") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 169)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        GALGAS_bool test_4 = GALGAS_bool (kIsEqual, var_Ixx_9219.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 170)).objectCompare (GALGAS_uint (uint32_t (2U)))) ;
        if (kBoolTrue == test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsEqual, var_Ixx_9219.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 170)).objectCompare (GALGAS_string::makeEmptyString ())) ;
        }
        GALGAS_bool test_5 = test_4 ;
        if (kBoolTrue == test_5.boolEnum ()) {
          test_5 = var_Ixx_9219.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 170)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 170)) ;
        }
        test_3 = test_5.boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_uint var_n_9400 = var_Ixx_9219.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 171)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 171)) ;
          GALGAS_integerDeclarationAST var_declaration_9463 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (true), var_n_9400  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 172)) ;
          callExtensionMethod_enterInPrecedenceGraph ((cPtr_integerDeclarationAST *) var_declaration_9463.ptr (), var_precedenceGraph_8122, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 173)) ;
          {
          routine_appendSignedOperatorsTo (enumerator_8618.current_mValue (HERE), var_precedenceGraph_8122, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 175)) ;
          }
          var_addintegerTypeCount_8587.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 177)) ;
        }
      }
    }
    enumerator_8618.gotoNextObject () ;
  }
  GALGAS_compileTimeDeclarationBarrierAST var_compileTimeDeclarationBarrierAST_9829 = GALGAS_compileTimeDeclarationBarrierAST::constructor_new (SOURCE_FILE ("ordered-declaration-list.galgas", 182)) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_compileTimeDeclarationBarrierAST *) var_compileTimeDeclarationBarrierAST_9829.ptr (), var_precedenceGraph_8122, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 183)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    GALGAS_bool test_7 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 185)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_7.boolEnum ()) {
      test_7 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()) ;
    }
    test_6 = test_7.boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->printMessage (GALGAS_string ("    Added ").add_operation (var_addintegerTypeCount_8587.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 186)).add_operation (GALGAS_string (" integer types\n"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 186))  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 186)) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    GALGAS_bool test_9 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 189)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_9.boolEnum ()) {
      test_9 = GALGAS_bool (gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile.readProperty_value ()) ;
    }
    test_8 = test_9.boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_s_10375 = var_precedenceGraph_8122.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 190)) ;
      GALGAS_string var_filePath_10414 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 191)) ;
      GALGAS_bool joker_10519 ; // Joker input parameter
      var_s_10375.method_writeToFileWhenDifferentContents (var_filePath_10414, joker_10519, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 192)) ;
    }
  }
  outArgument_outSortedDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 195)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_8122.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 196)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      cEnumerator_lstringlist enumerator_10698 (var_precedenceGraph_8122.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 197)), kENUMERATION_UP) ;
      while (enumerator_10698.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_10698.current_mValue (HERE).readProperty_location (), enumerator_10698.current_mValue (HERE).readProperty_string ().add_operation (GALGAS_string (" is not defined in declaration dependency graph"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 198)), fixItArray11  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 198)) ;
        enumerator_10698.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_10) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_10972 ;
    GALGAS_lstringlist joker_10938 ; // Joker input parameter
    GALGAS_lstringlist joker_11013 ; // Joker input parameter
    var_precedenceGraph_8122.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_10938, var_unsortedSemanticDeclarationListAST_10972, joker_11013, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 201)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_10972.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 207)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_string var_s_11092 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_10972.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 209)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 208)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 209)) ;
        cEnumerator_declarationListAST enumerator_11268 (var_unsortedSemanticDeclarationListAST_10972, kENUMERATION_UP) ;
        while (enumerator_11268.hasCurrentObject ()) {
          var_s_11092.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11268.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 212)) ;
          enumerator_11268.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_11092, fixItArray13  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 214)) ;
        cEnumerator_declarationListAST enumerator_11451 (var_unsortedSemanticDeclarationListAST_10972, kENUMERATION_UP) ;
        while (enumerator_11451.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (callExtensionGetter_locationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11451.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11451.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)), fixItArray14  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)) ;
          enumerator_11451.gotoNextObject () ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildSemanticContext (const GALGAS_lstring constinArgument_inSourceFile,
                                   const GALGAS_ast constinArgument_inAST,
                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                   GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   GALGAS_declarationDecorationList & outArgument_outDecoratedDeclarationList,
                                   GALGAS_decoratedRegularRoutineList & outArgument_outDecoratedRoutineList,
                                   GALGAS_routineListIR & outArgument_outRoutineListIR,
                                   GALGAS_userLLVMTypeDefinitionListIR & outArgument_outUserLLVMTypeDefinitionListIR,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outDecoratedDeclarationList.drop () ; // Release 'out' argument
  outArgument_outDecoratedRoutineList.drop () ; // Release 'out' argument
  outArgument_outRoutineListIR.drop () ; // Release 'out' argument
  outArgument_outUserLLVMTypeDefinitionListIR.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 345)) ;
  outArgument_outDecoratedDeclarationList = GALGAS_declarationDecorationList::constructor_emptyList (SOURCE_FILE ("context.galgas", 346)) ;
  outArgument_outDecoratedRoutineList = GALGAS_decoratedRegularRoutineList::constructor_emptyList (SOURCE_FILE ("context.galgas", 347)) ;
  outArgument_outRoutineListIR = GALGAS_routineListIR::constructor_emptyList (SOURCE_FILE ("context.galgas", 348)) ;
  outArgument_outUserLLVMTypeDefinitionListIR = GALGAS_userLLVMTypeDefinitionListIR::constructor_emptyList (SOURCE_FILE ("context.galgas", 349)) ;
  cEnumerator_requiredFunctionDeclarationListAST enumerator_14791 (constinArgument_inAST.readProperty_mRequiredFunctionListAST (), kENUMERATION_UP) ;
  while (enumerator_14791.hasCurrentObject ()) {
    GALGAS_lstring var_procedureMangledName_14827 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_14791.current (HERE).readProperty_mName (), enumerator_14791.current (HERE).readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 352)) ;
    outArgument_outSemanticContext.mProperty_mRequiredRoutineSet.addAssign_operation (var_procedureMangledName_14827.readProperty_string ()  COMMA_SOURCE_FILE ("context.galgas", 357)) ;
    enumerator_14791.gotoNextObject () ;
  }
  extensionMethod_enterExternProcInContext (constinArgument_inAST.readProperty_mExternFunctionListAST (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 359)) ;
  GALGAS_controlRegisterUserAccesMapAST var_controlRegisterUserAccesMapAST_15148 = constinArgument_inAST.readProperty_mControlRegisterUserAccesMapAST () ;
  cEnumerator_declarationListAST enumerator_15226 (constinArgument_inAST.readProperty_mDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_15226.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((cPtr_abstractDeclarationAST *) enumerator_15226.current_mDeclaration (HERE).ptr (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticListValueMap, ioArgument_ioStaticEntityMap, var_controlRegisterUserAccesMapAST_15148, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 365)) ;
    enumerator_15226.gotoNextObject () ;
  }
  cEnumerator_controlRegisterUserAccesMapAST enumerator_15718 (var_controlRegisterUserAccesMapAST_15148, kENUMERATION_UP) ;
  while (enumerator_15718.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (enumerator_15718.current_lkey (HERE).readProperty_location (), GALGAS_string ("this control register is not defined"), fixItArray0  COMMA_SOURCE_FILE ("context.galgas", 378)) ;
    enumerator_15718.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.readProperty_mGlobalConstantMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 381)) ;
  }
  {
  routine_buildTypeMapHTMLFile (outArgument_outSemanticContext.readProperty_mTypeMap (), outArgument_outSemanticContext.readProperty_mRoutineMap (), outArgument_outSemanticContext.readProperty_mInfixOperatorMap (), outArgument_outSemanticContext.readProperty_mPrefixOperatorMap (), outArgument_outSemanticContext.readProperty_mAssignmentOperatorMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 386)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.readProperty_mControlRegisterGroupMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 395)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.readProperty_mTaskListAST (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticEntityMap, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 400)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'compileTimeIntegerType'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_omnibusType onceFunction_compileTimeIntegerType (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 132)), GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 133)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 134)), GALGAS_typeKind::constructor_compileTimeInteger (SOURCE_FILE ("types.galgas", 135)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 131)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeIntegerType = false ;
static GALGAS_omnibusType gOnceFunctionResult_compileTimeIntegerType ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType function_compileTimeIntegerType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeIntegerType) {
    gOnceFunctionResult_compileTimeIntegerType = onceFunction_compileTimeIntegerType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeIntegerType = true ;
  }
  return gOnceFunctionResult_compileTimeIntegerType ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compileTimeIntegerType (void) {
  gOnceFunctionResult_compileTimeIntegerType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_compileTimeIntegerType (NULL,
                                                                    releaseOnceFunctionResult_compileTimeIntegerType) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_compileTimeIntegerType [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_compileTimeIntegerType (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_compileTimeIntegerType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compileTimeIntegerType ("compileTimeIntegerType",
                                                                        functionWithGenericHeader_compileTimeIntegerType,
                                                                        & kTypeDescriptor_GALGAS_omnibusType,
                                                                        0,
                                                                        functionArgs_compileTimeIntegerType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'compileTimeBoolType'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_omnibusType onceFunction_compileTimeBoolType (C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 144)), GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 145)), function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 146)), GALGAS_typeKind::constructor_compileTimeBool (SOURCE_FILE ("types.galgas", 147)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 143)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeBoolType = false ;
static GALGAS_omnibusType gOnceFunctionResult_compileTimeBoolType ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType function_compileTimeBoolType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeBoolType) {
    gOnceFunctionResult_compileTimeBoolType = onceFunction_compileTimeBoolType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeBoolType = true ;
  }
  return gOnceFunctionResult_compileTimeBoolType ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compileTimeBoolType (void) {
  gOnceFunctionResult_compileTimeBoolType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_compileTimeBoolType (NULL,
                                                                 releaseOnceFunctionResult_compileTimeBoolType) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_compileTimeBoolType [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_compileTimeBoolType (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_compileTimeBoolType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compileTimeBoolType ("compileTimeBoolType",
                                                                     functionWithGenericHeader_compileTimeBoolType,
                                                                     & kTypeDescriptor_GALGAS_omnibusType,
                                                                     0,
                                                                     functionArgs_compileTimeBoolType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'boolType'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_omnibusType onceFunction_boolType (C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 156)), GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 157)).operator_or (GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("types.galgas", 157)) COMMA_SOURCE_FILE ("types.galgas", 157)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 158)), GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("types.galgas", 159)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 160))  COMMA_SOURCE_FILE ("types.galgas", 155)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_boolType = false ;
static GALGAS_omnibusType gOnceFunctionResult_boolType ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType function_boolType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolType) {
    gOnceFunctionResult_boolType = onceFunction_boolType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolType = true ;
  }
  return gOnceFunctionResult_boolType ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_boolType (void) {
  gOnceFunctionResult_boolType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_boolType (NULL,
                                                      releaseOnceFunctionResult_boolType) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_boolType [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_boolType (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_boolType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_boolType ("boolType",
                                                          functionWithGenericHeader_boolType,
                                                          & kTypeDescriptor_GALGAS_omnibusType,
                                                          0,
                                                          functionArgs_boolType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'literalStringType'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_omnibusType onceFunction_literalStringType (C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_literalString (SOURCE_FILE ("types.galgas", 168)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("types.galgas", 169)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 169)) COMMA_SOURCE_FILE ("types.galgas", 169)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 170)), GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("types.galgas", 171)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 172))  COMMA_SOURCE_FILE ("types.galgas", 167)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_literalStringType = false ;
static GALGAS_omnibusType gOnceFunctionResult_literalStringType ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType function_literalStringType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_literalStringType) {
    gOnceFunctionResult_literalStringType = onceFunction_literalStringType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_literalStringType = true ;
  }
  return gOnceFunctionResult_literalStringType ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_literalStringType (void) {
  gOnceFunctionResult_literalStringType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_literalStringType (NULL,
                                                               releaseOnceFunctionResult_literalStringType) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_literalStringType [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_literalStringType (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_literalStringType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalStringType ("literalStringType",
                                                                   functionWithGenericHeader_literalStringType,
                                                                   & kTypeDescriptor_GALGAS_omnibusType,
                                                                   0,
                                                                   functionArgs_literalStringType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'voidType'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_omnibusType onceFunction_voidType (C_Compiler *
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 180)), GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("types.galgas", 181)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_void (SOURCE_FILE ("types.galgas", 183)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 179)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_voidType = false ;
static GALGAS_omnibusType gOnceFunctionResult_voidType ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_omnibusType function_voidType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_voidType) {
    gOnceFunctionResult_voidType = onceFunction_voidType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_voidType = true ;
  }
  return gOnceFunctionResult_voidType ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_voidType (void) {
  gOnceFunctionResult_voidType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_voidType (NULL,
                                                      releaseOnceFunctionResult_voidType) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_voidType [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_voidType (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_voidType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_voidType ("voidType",
                                                          functionWithGenericHeader_voidType,
                                                          & kTypeDescriptor_GALGAS_omnibusType,
                                                          0,
                                                          functionArgs_voidType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildTypeMapHTMLFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildTypeMapHTMLFile (const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                                   const GALGAS_routineMapForContext constinArgument_inRoutineMap,
                                   const GALGAS_infixOperatorMap constinArgument_inTerminusInfixOperatorMap,
                                   const GALGAS_prefixOperatorMap constinArgument_inTerminusPrefixOperatorMap,
                                   const GALGAS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_16016 = constinArgument_inSourceFile.readProperty_string ().add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 398)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_emitTypeMap.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringset var_firstLetterSet_16143 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 400)) ;
      cEnumerator_unifiedTypeMap enumerator_16177 (constinArgument_inTypeMap, kENUMERATION_UP) ;
      while (enumerator_16177.hasCurrentObject ()) {
        var_firstLetterSet_16143.addAssign_operation (enumerator_16177.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 402)).getter_string (SOURCE_FILE ("types.galgas", 402))  COMMA_SOURCE_FILE ("types.galgas", 402)) ;
        enumerator_16177.gotoNextObject () ;
      }
      GALGAS_string var_tableOfTypeString_16287 = GALGAS_string::makeEmptyString () ;
      GALGAS_char var_currentFirstLetter_16324 = GALGAS_char (TO_UNICODE (32)) ;
      cEnumerator_unifiedTypeMap enumerator_16368 (constinArgument_inTypeMap, kENUMERATION_UP) ;
      while (enumerator_16368.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_16324.objectCompare (enumerator_16368.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 407)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_currentFirstLetter_16324 = enumerator_16368.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 408)) ;
            var_tableOfTypeString_16287.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_16324.getter_uint (SOURCE_FILE ("types.galgas", 409)).getter_string (SOURCE_FILE ("types.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 409)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 409)).add_operation (var_currentFirstLetter_16324.getter_string (SOURCE_FILE ("types.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 409)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 409)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 409)) ;
          }
        }
        var_tableOfTypeString_16287.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_16368.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 411)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 411)) ;
        enumerator_16368.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_16762 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("types.galgas", 414)), constinArgument_inTypeMap, var_firstLetterSet_16143, var_tableOfTypeString_16287, constinArgument_inRoutineMap, constinArgument_inTerminusInfixOperatorMap, constinArgument_inTerminusPrefixOperatorMap, constinArgument_inAssignmentOperatorMap COMMA_SOURCE_FILE ("types.galgas", 413))) ;
      GALGAS_bool joker_17125 ; // Joker input parameter
      var_typeDumpString_16762.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_16016, joker_17125, inCompiler COMMA_SOURCE_FILE ("types.galgas", 423)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_16016, inCompiler COMMA_SOURCE_FILE ("types.galgas", 425)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeDumpGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeDumpGenerationTemplate dump'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                   const GALGAS_string & in_PROJECT_5F_NAME,
                                                                   const GALGAS_unifiedTypeMap & in_GLOBAL_5F_TYPE_5F_MAP,
                                                                   const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                   const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING,
                                                                   const GALGAS_routineMapForContext & in_ALL_5F_ROUTINE_5F_MAP,
                                                                   const GALGAS_infixOperatorMap & in_INFIX_5F_OPERATOR_5F_MAP,
                                                                   const GALGAS_prefixOperatorMap & in_PREFIX_5F_OPERATOR_5F_MAP,
                                                                   const GALGAS_assignmentOperatorMap & in_ASSIGNMENT_5F_OPERATOR_5F_MAP
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n<html>\n<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n<title>Global constants of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</title>\n<style type=\"text/css\">body {\n  font-family: Georgia, sans-serif ;\n  font-size: small ;\n}\n\nh1 {\n  text-align: center ;\n}\n\n.selecteur {\n  color:green ;\n}\n\na.header_link {\n  background-color: #FFFFCC ;\n}\n\na:visited, a:link, a:active{\n  color: blue ;\n  text-decoration: underline ;\n}\n\na:hover {\n  color:green ;\n  background-color: #FFFF00 ;\n  text-decoration: none ;\n}\n\ntable.result {\n  border: 1px solid #666666 ;\n}\n\ntd.result_title {\n  font-weight: bold ;\n  text-align: center ;\n  background-color: yellow ;\n}\n\ntr.result_line {\n  background-color: #EEEEEE ;\n}\n\n</style>\n</head>\n<body>\n<div>\n<h1>Types defined by " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n<p>This document lists all " ;
  result << in_GLOBAL_5F_TYPE_5F_MAP.getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).stringValue () ;
  result << " defined types, sorted by name.</p>\n<p>" ;
  GALGAS_uint index_989_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_989 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_989.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_989.current_key (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).stringValue () ;
      result << "\">" ;
      result << enumerator_989.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_989.hasNextObject ()) {
        result << " - " ;
      }
      index_989_.increment () ;
      enumerator_989.gotoNextObject () ;
    }
  }
  result << "</p>\n<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n</p>\n" ;
  GALGAS_uint index_1174_ (0) ;
  if (in_GLOBAL_5F_TYPE_5F_MAP.isValid ()) {
    cEnumerator_unifiedTypeMap enumerator_1174 (in_GLOBAL_5F_TYPE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1174.hasCurrentObject ()) {
      result << "\n<h2>\n  <a name=\"" ;
      result << enumerator_1174.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "\">" ;
      result << enumerator_1174.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "</a>\n</h2>\n<p>\nKind: " ;
      result << callExtensionGetter_descriptionForHTMLFile ((const cPtr_omnibusType *) callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 68)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 68)).stringValue () ;
      result << "<br>\nDescription: " ;
      result << callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 69)).readProperty_omnibusTypeDescriptionName ().stringValue () ;
      result << "<br>\nLLVM Base Name: " ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).readProperty_llvmBaseTypeName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << GALGAS_string ("<i>none, compile time type</i>").stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).readProperty_llvmBaseTypeName ().stringValue () ;
      }
      result << "<br>\nLLVM Name: " ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << GALGAS_string ("<i>none, compile time type</i>").stringValue () ;
      }else if (kBoolFalse == test_1) {
        result << callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).stringValue () ;
      }
      result << "\n</p>\n" ;
      index_1174_.increment () ;
      enumerator_1174.gotoNextObject () ;
    }
  }
  result << "\n<p>\n<h2>\n  Routines\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Standalone routine Name</td>\n      <td class=\"result_title\">Visibility</td>\n      <td class=\"result_title\">Typed signature</td>\n      <td class=\"result_title\">Routine LLVM Name, by mode</td>\n    </tr>\n  " ;
  GALGAS_uint index_2119_ (0) ;
  if (in_ALL_5F_ROUTINE_5F_MAP.isValid ()) {
    cEnumerator_routineMapForContext enumerator_2119 (in_ALL_5F_ROUTINE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2119.hasCurrentObject ()) {
      result << "\n    <tr class=\"result_line\">\n      <td>" ;
      result << enumerator_2119.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "</td>\n      <td>" ;
      const enumGalgasBool test_2 = enumerator_2119.current_mIsPublic (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << GALGAS_string ("public").stringValue () ;
      }else if (kBoolFalse == test_2) {
        result << GALGAS_string ("private").stringValue () ;
      }
      result << "</td>\n      <td>" ;
      result << extensionGetter_typedString (enumerator_2119.current_mSignature (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).stringValue () ;
      const enumGalgasBool test_3 = enumerator_2119.current_mReturnTypeProxy (HERE).getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).boolEnum () ;
      if (kBoolTrue == test_3) {
      }else if (kBoolFalse == test_3) {
        result << " -> " ;
        result << extensionGetter_key (enumerator_2119.current_mReturnTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).stringValue () ;
      }
      result << "</td>\n      <td>" ;
      GALGAS_uint index_2478_ (0) ;
      if (enumerator_2119.current_mModeDictionary (HERE).isValid ()) {
        cEnumerator_routineLLVMNameDict enumerator_2478 (enumerator_2119.current_mModeDictionary (HERE), kENUMERATION_UP) ;
        while (enumerator_2478.hasCurrentObject ()) {
          result << extensionGetter_string (enumerator_2478.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 90)).stringValue () ;
          result << " : " ;
          result << enumerator_2478.current_llvmName (HERE).stringValue () ;
          if (enumerator_2478.hasNextObject ()) {
            result << "<br>" ;
          }
          index_2478_.increment () ;
          enumerator_2478.gotoNextObject () ;
        }
      }
      result << "</td>\n    </tr>\n  " ;
      index_2119_.increment () ;
      enumerator_2119.gotoNextObject () ;
    }
  }
  result << "\n  </table>\n</p>\n<p>\n<h2>\n  Infix Operators\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Infix operator</td>\n      <td class=\"result_title\">Result Type</td>\n    </tr>\n  " ;
  GALGAS_uint index_2836_ (0) ;
  if (in_INFIX_5F_OPERATOR_5F_MAP.isValid ()) {
    cEnumerator_infixOperatorMap enumerator_2836 (in_INFIX_5F_OPERATOR_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2836.hasCurrentObject ()) {
      result << "\n    <tr class=\"result_line\">\n      <td>" ;
      result << enumerator_2836.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "</td>\n      <td>" ;
      result << enumerator_2836.current_mResultType (HERE).readProperty_omnibusTypeDescriptionName ().stringValue () ;
      result << "</td>\n    </tr>\n  " ;
      index_2836_.increment () ;
      enumerator_2836.gotoNextObject () ;
    }
  }
  result << "\n  </table>\n</p>\n<p>\n<h2>\n  Prefix Operators\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Prefix operator</td>\n      <td class=\"result_title\">Result Type</td>\n    </tr>\n  " ;
  GALGAS_uint index_3259_ (0) ;
  if (in_PREFIX_5F_OPERATOR_5F_MAP.isValid ()) {
    cEnumerator_prefixOperatorMap enumerator_3259 (in_PREFIX_5F_OPERATOR_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3259.hasCurrentObject ()) {
      result << "\n    <tr class=\"result_line\">\n      <td>" ;
      result << enumerator_3259.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "</td>\n      <td>" ;
      result << enumerator_3259.current_mResultType (HERE).readProperty_omnibusTypeDescriptionName ().stringValue () ;
      result << "</td>\n    </tr>\n  " ;
      index_3259_.increment () ;
      enumerator_3259.gotoNextObject () ;
    }
  }
  result << "\n  </table>\n</p>\n<h2>\n  Assignment Operators\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Operator</td>\n    </tr>\n  " ;
  GALGAS_uint index_3604_ (0) ;
  if (in_ASSIGNMENT_5F_OPERATOR_5F_MAP.isValid ()) {
    cEnumerator_assignmentOperatorMap enumerator_3604 (in_ASSIGNMENT_5F_OPERATOR_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3604.hasCurrentObject ()) {
      result << "\n    <tr class=\"result_line\">\n      <td>" ;
      result << enumerator_3604.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "</td>\n    </tr>\n  " ;
      index_3604_.increment () ;
      enumerator_3604.gotoNextObject () ;
    }
  }
  result << "\n  </table>\n</p>\n</div>\n</body>\n</html>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'linkForHTMLTypeMap'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_linkForHTMLTypeMap (const GALGAS_string & constinArgument_inTypeName,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 448)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 448)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 448)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 448)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_linkForHTMLTypeMap [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_linkForHTMLTypeMap (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForHTMLTypeMap (operand0,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_linkForHTMLTypeMap ("linkForHTMLTypeMap",
                                                                    functionWithGenericHeader_linkForHTMLTypeMap,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    1,
                                                                    functionArgs_linkForHTMLTypeMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'declareLLVMTypes'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_declareLLVMTypes (const GALGAS_userLLVMTypeDefinitionListIR constinArgument_inUserLLVMTypeDefinitionListIR,
                               GALGAS_string & ioArgument_ioLLVMcode,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("User Defined Types"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 460)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 460)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%ptrtype = type i8* ; Generic pointer type for dynamic objects\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 461)) ;
  cEnumerator_userLLVMTypeDefinitionListIR enumerator_18744 (constinArgument_inUserLLVMTypeDefinitionListIR, kENUMERATION_UP) ;
  while (enumerator_18744.hasCurrentObject ()) {
    callExtensionMethod_generateLLVMType ((cPtr_userLLVMTypeDefinitionIR *) enumerator_18744.current_mType (HERE).ptr (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("types.galgas", 463)) ;
    enumerator_18744.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 465)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'checkAssignmentCompatibility'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR function_checkAssignmentCompatibility (const GALGAS_assignmentOperatorMap & constinArgument_inAssignmentOperatorMap,
                                                       const GALGAS_objectIR & constinArgument_inSourceValue,
                                                       const GALGAS_omnibusType & constinArgument_inOptionalTargetAnnotationType,
                                                       const GALGAS_location & constinArgument_inErrorLocation,
                                                       const GALGAS_bool & constinArgument_inStaticTypeAllowed,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inOptionalTargetAnnotationType.readProperty_kind ().getter_isVoid (SOURCE_FILE ("semantic-analysis.galgas", 15)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = constinArgument_inSourceValue ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = constinArgument_inStaticTypeAllowed.boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 18)) ;
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_lstring var_key_1119 = function_assignmentOperatorKey (constinArgument_inOptionalTargetAnnotationType, GALGAS_location::constructor_nowhere (SOURCE_FILE ("semantic-analysis.galgas", 20)), extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
      GALGAS_abstractAssignmentOperatorUsage joker_1257 ; // Joker input parameter
      constinArgument_inAssignmentOperatorMap.method_searchKey (var_key_1119, joker_1257, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
      result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 22)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 25)).boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, extensionGetter_omnibusTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 26)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 26)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)).add_operation (GALGAS_string (" compile time type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)), fixItArray4  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsEqual, extensionGetter_omnibusTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)).objectCompare (function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result_result = extensionGetter_withType (constinArgument_inSourceValue, function_boolType (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)) ;
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_checkAssignmentCompatibility [6] = {
  & kTypeDescriptor_GALGAS_assignmentOperatorMap,
  & kTypeDescriptor_GALGAS_objectIR,
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_checkAssignmentCompatibility (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_assignmentOperatorMap operand0 = GALGAS_assignmentOperatorMap::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  const GALGAS_objectIR operand1 = GALGAS_objectIR::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_omnibusType operand2 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_location operand3 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_bool operand4 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_checkAssignmentCompatibility (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                operand4,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_checkAssignmentCompatibility ("checkAssignmentCompatibility",
                                                                              functionWithGenericHeader_checkAssignmentCompatibility,
                                                                              & kTypeDescriptor_GALGAS_objectIR,
                                                                              5,
                                                                              functionArgs_checkAssignmentCompatibility) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'getNewTempValue'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_getNewTempValue (const GALGAS_omnibusType constinArgument_inType,
                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                              GALGAS_objectIR & outArgument_outTempVariable,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 65)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outTempVariable = GALGAS_objectIR::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 66)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_3129 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3129, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 68)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmNamedValue (constinArgument_inType, var_llvmName_3129  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 69)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'getNewTempReference'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_getNewTempReference (const GALGAS_omnibusType constinArgument_inType,
                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                  GALGAS_objectIR & outArgument_outTempVariable,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 80)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outTempVariable = GALGAS_objectIR::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 81)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_3578 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3578, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 83)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_reference (constinArgument_inType, var_llvmName_3578  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 84)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_semanticAnalysis (const GALGAS_string /* constinArgument_inSourceFile */,
                               const GALGAS_ast constinArgument_inAST,
                               const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                               const GALGAS_declarationDecorationList constinArgument_inDecoratedDeclarationList,
                               const GALGAS_decoratedRegularRoutineList constinArgument_inDecoratedRoutineList,
                               const GALGAS_routineListIR constinArgument_inRoutineListIR,
                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                               const GALGAS_location constinArgument_inEndOfSourceFile,
                               const GALGAS_staticEntityMap constinArgument_inStaticEntityMap,
                               GALGAS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 102)) ;
  outArgument_outIntermediateCodeStruct.setter_setMRoutineListIR (constinArgument_inRoutineListIR COMMA_SOURCE_FILE ("semantic-analysis.galgas", 103)) ;
  outArgument_outIntermediateCodeStruct.setter_setMTargetParameters (constinArgument_inSemanticContext.readProperty_mTargetParameters () COMMA_SOURCE_FILE ("semantic-analysis.galgas", 104)) ;
  outArgument_outIntermediateCodeStruct.setter_setMStaticEntityMap (constinArgument_inStaticEntityMap COMMA_SOURCE_FILE ("semantic-analysis.galgas", 105)) ;
  outArgument_outIntermediateCodeStruct.setter_setMGlobalTaskVariableList (constinArgument_inSemanticContext.readProperty_mGlobalTaskVariableList () COMMA_SOURCE_FILE ("semantic-analysis.galgas", 106)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_4775 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 108)) ;
  cEnumerator_declarationDecorationList enumerator_4805 (constinArgument_inDecoratedDeclarationList, kENUMERATION_UP) ;
  while (enumerator_4805.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((cPtr_abstractDecoratedDeclaration *) enumerator_4805.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_4775, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 110)) ;
    enumerator_4805.gotoNextObject () ;
  }
  extensionMethod_routineSemanticAnalysis (constinArgument_inDecoratedRoutineList, constinArgument_inSemanticContext, var_temporaries_4775, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 117)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.readProperty_mExternFunctionListAST (), constinArgument_inSemanticContext, var_temporaries_4775, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 122)) ;
  {
  routine_appendPanicRoutines (constinArgument_inSourceFileAbsolutePathSet, outArgument_outIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 128)) ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 133)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimeBoolAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_compiletimeBoolAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 11)) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compiletimeBoolAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compiletimeBoolAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_nodeName_1122 = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 21)).getter_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 21)) ;
  {
  const GALGAS_compiletimeBoolAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1122, temp_0, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 22)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimeBoolAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_compiletimeBoolAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 28)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'ctBoolTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_ctBoolTypeName (C_Compiler *
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("ctBool") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_ctBoolTypeName = false ;
static GALGAS_string gOnceFunctionResult_ctBoolTypeName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_ctBoolTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_ctBoolTypeName) {
    gOnceFunctionResult_ctBoolTypeName = onceFunction_ctBoolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_ctBoolTypeName = true ;
  }
  return gOnceFunctionResult_ctBoolTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_ctBoolTypeName (void) {
  gOnceFunctionResult_ctBoolTypeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_ctBoolTypeName (NULL,
                                                            releaseOnceFunctionResult_ctBoolTypeName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_ctBoolTypeName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_ctBoolTypeName (C_Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GALGAS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_ctBoolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_ctBoolTypeName ("ctBoolTypeName",
                                                                functionWithGenericHeader_ctBoolTypeName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                0,
                                                                functionArgs_ctBoolTypeName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compiletimeBoolAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compiletimeBoolAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                     GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                     GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                     GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                     GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                     GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                     GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_ctBoolTypeName_2608 = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 51)).getter_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 51)) ;
  GALGAS_omnibusType var_ctBoolType_2659 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 52)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_ctBoolTypeName_2608, var_ctBoolType_2659, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 54)) ;
  }
  GALGAS_lstring var_key_2821 = function_prefixOperatorMapKey (var_ctBoolType_2659, GALGAS_prefixOperator::constructor_notOp (SOURCE_FILE ("compile-time-type-bool.galgas", 56)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 56)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2821, var_ctBoolType_2659, var_ctBoolType_2659, GALGAS_compileTimeBoolNotOperator::constructor_new (SOURCE_FILE ("compile-time-type-bool.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 57)) ;
  }
  var_key_2821 = function_infixOperatorMapKey (var_ctBoolType_2659, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("compile-time-type-bool.galgas", 59)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 59)), var_ctBoolType_2659, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 59)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2821, var_ctBoolType_2659, GALGAS_compileTimeBoolOrOperator::constructor_new (SOURCE_FILE ("compile-time-type-bool.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 60)) ;
  }
  var_key_2821 = function_infixOperatorMapKey (var_ctBoolType_2659, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("compile-time-type-bool.galgas", 62)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 62)), var_ctBoolType_2659, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 62)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2821, var_ctBoolType_2659, GALGAS_compileTimeBoolXorOperator::constructor_new (SOURCE_FILE ("compile-time-type-bool.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 63)) ;
  }
  var_key_2821 = function_infixOperatorMapKey (var_ctBoolType_2659, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("compile-time-type-bool.galgas", 65)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 65)), var_ctBoolType_2659, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 65)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2821, var_ctBoolType_2659, GALGAS_compileTimeBoolEqualOperator::constructor_new (SOURCE_FILE ("compile-time-type-bool.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 66)) ;
  }
  var_key_2821 = GALGAS_lstring::constructor_new (var_ctBoolType_2659.readProperty_omnibusTypeDescriptionName (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 68))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 68)) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_2821, GALGAS_compileTimeBoolImplicitConverterToBoolean::constructor_new (SOURCE_FILE ("compile-time-type-bool.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 69)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeBoolImplicitConverterToBoolean generateConvertToBooleanCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                                          const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                          GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                          GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GALGAS_implicitBooleanConversionResult & outArgument_outResult,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_receiverValue_4730 ;
  GALGAS_omnibusType joker_4714_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_literalInteger (joker_4714_1, var_receiverValue_4730, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 89)) ;
  outArgument_outResult = GALGAS_implicitBooleanConversionResult::constructor_compileTime (GALGAS_bool (kIsNotEqual, var_receiverValue_4730.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 90))))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 90)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeBoolNotOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolNotOperator::method_generateCode (const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                           const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                           const GALGAS_omnibusType constinArgument_inResultType,
                                                           const GALGAS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                           const GALGAS_bool /* constinArgument_inSafeMode */,
                                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                           GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                           GALGAS_objectIR & outArgument_outResultValue,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_receiverValue_5725 ;
  GALGAS_omnibusType joker_5709_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_literalInteger (joker_5709_1, var_receiverValue_5725, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 112)) ;
  GALGAS_bigint temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_receiverValue_5725.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)) ;
  }
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, temp_0  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeBoolEqualOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolEqualOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                             const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                             const GALGAS_objectIR constinArgument_inRightOperand,
                                                             const GALGAS_omnibusType constinArgument_inResultType,
                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                             GALGAS_objectIR & outArgument_outResultValue,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_6740 ;
  GALGAS_omnibusType joker_6724_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_6724_1, var_leftValue_6740, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 135)) ;
  GALGAS_bigint var_rightValue_6800 ;
  GALGAS_omnibusType joker_6784_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_6784_1, var_rightValue_6800, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 136)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, GALGAS_bool (kIsEqual, var_leftValue_6740.objectCompare (var_rightValue_6800)).getter_bigint (SOURCE_FILE ("compile-time-type-bool.galgas", 137))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 137)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeBoolXorOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolXorOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                           const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                           const GALGAS_objectIR constinArgument_inRightOperand,
                                                           const GALGAS_omnibusType constinArgument_inResultType,
                                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                           GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                           GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                           GALGAS_objectIR & outArgument_outResultValue,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_7639 ;
  GALGAS_omnibusType joker_7623_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_7623_1, var_leftValue_7639, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 157)) ;
  GALGAS_bigint var_rightValue_7699 ;
  GALGAS_omnibusType joker_7683_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_7683_1, var_rightValue_7699, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 158)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_7639.operator_xor (var_rightValue_7699 COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 159))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 159)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeBoolOrOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolOrOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                          const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                          const GALGAS_objectIR constinArgument_inRightOperand,
                                                          const GALGAS_omnibusType constinArgument_inResultType,
                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                          GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                          GALGAS_objectIR & outArgument_outResultValue,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_8535 ;
  GALGAS_omnibusType joker_8519_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_8519_1, var_leftValue_8535, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 179)) ;
  GALGAS_bigint var_rightValue_8595 ;
  GALGAS_omnibusType joker_8579_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_8579_1, var_rightValue_8595, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 180)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_8535.operator_or (var_rightValue_8595 COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 181))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 181)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeIntAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_compileTimeIntAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 11)) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_nodeName_1119 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 21)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 21)) ;
  {
  const GALGAS_compileTimeIntAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1119, temp_0, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1119, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 23)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 23)) COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 23)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeIntAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_compileTimeIntAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'ctIntegerTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_ctIntegerTypeName (C_Compiler *
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("ctInt") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_ctIntegerTypeName = false ;
static GALGAS_string gOnceFunctionResult_ctIntegerTypeName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_ctIntegerTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_ctIntegerTypeName) {
    gOnceFunctionResult_ctIntegerTypeName = onceFunction_ctIntegerTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_ctIntegerTypeName = true ;
  }
  return gOnceFunctionResult_ctIntegerTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_ctIntegerTypeName (void) {
  gOnceFunctionResult_ctIntegerTypeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_ctIntegerTypeName (NULL,
                                                               releaseOnceFunctionResult_ctIntegerTypeName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_ctIntegerTypeName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_ctIntegerTypeName (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_ctIntegerTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_ctIntegerTypeName ("ctIntegerTypeName",
                                                                   functionWithGenericHeader_ctIntegerTypeName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_ctIntegerTypeName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                    GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                    GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                    GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                    GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                    GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                    GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_ctIntegerTypeName_2672 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 52)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 52)) ;
  GALGAS_omnibusType var_ctInt_2729 = function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 53)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_ctIntegerTypeName_2672, var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 55)) ;
  }
  GALGAS_lstring var_key_2885 = function_prefixOperatorMapKey (var_ctInt_2729, GALGAS_prefixOperator::constructor_bitWiseComplement (SOURCE_FILE ("compile-time-type-int.galgas", 57)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 57)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, var_ctInt_2729, GALGAS_compileTimeIntComplementOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 58)) ;
  }
  var_key_2885 = function_prefixOperatorMapKey (var_ctInt_2729, GALGAS_prefixOperator::constructor_minusOp (SOURCE_FILE ("compile-time-type-int.galgas", 60)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 60)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, var_ctInt_2729, GALGAS_compileTimeIntMinusOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 61)) ;
  }
  var_key_2885 = function_prefixOperatorMapKey (var_ctInt_2729, GALGAS_prefixOperator::constructor_minusNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 63)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 63)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, var_ctInt_2729, GALGAS_compileTimeIntMinusOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 64)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_bitWiseAndOp (SOURCE_FILE ("compile-time-type-int.galgas", 66)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 66)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 66)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntBitWiseAndOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 67)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("compile-time-type-int.galgas", 69)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 69)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 69)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntBitWiseOrOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 70)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("compile-time-type-int.galgas", 72)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 72)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 72)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntXorOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 73)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_addOp (SOURCE_FILE ("compile-time-type-int.galgas", 75)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 75)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 75)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntAddOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 76)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_addOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 78)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 78)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 78)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntAddOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 79)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_subOp (SOURCE_FILE ("compile-time-type-int.galgas", 81)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 81)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 81)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntSubtractOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 82)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_subOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 84)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 84)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 84)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntSubtractOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 85)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_mulOp (SOURCE_FILE ("compile-time-type-int.galgas", 87)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 87)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 87)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntMultiplyOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 88)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_divOp (SOURCE_FILE ("compile-time-type-int.galgas", 90)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 90)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 90)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntDivideOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 91)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_divOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 93)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 93)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 93)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntDivideZeroOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 94)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_modOp (SOURCE_FILE ("compile-time-type-int.galgas", 96)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 96)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 96)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntModuloOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 97)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_modOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 99)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 99)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 99)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntModuloZeroOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 100)) ;
  }
  GALGAS_omnibusType var_ctBoolType_5706 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 102)) ;
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("compile-time-type-int.galgas", 103)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 103)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 103)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctBoolType_5706, GALGAS_compileTimeIntEqualOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 104)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("compile-time-type-int.galgas", 106)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 106)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 106)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctBoolType_5706, GALGAS_compileTimeIntLessThanOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 107)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("compile-time-type-int.galgas", 109)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 109)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 109)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctBoolType_5706, GALGAS_compileTimeIntLowerOrEqualOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 110)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_leftShiftOp (SOURCE_FILE ("compile-time-type-int.galgas", 112)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 112)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 112)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntShiftLeftOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 113)) ;
  }
  var_key_2885 = function_infixOperatorMapKey (var_ctInt_2729, GALGAS_omnibusInfixOperator::constructor_rightShiftOp (SOURCE_FILE ("compile-time-type-int.galgas", 115)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 115)), var_ctInt_2729, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 115)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2885, var_ctInt_2729, GALGAS_compileTimeIntShiftRightOperator::constructor_new (SOURCE_FILE ("compile-time-type-int.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 116)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntModuloOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntModuloOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                             const GALGAS_location constinArgument_inOperatorLocation,
                                                             const GALGAS_objectIR constinArgument_inRightOperand,
                                                             const GALGAS_omnibusType constinArgument_inResultType,
                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                             GALGAS_objectIR & outArgument_outResultValue,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_rightValue_7650 ;
  GALGAS_omnibusType joker_7634_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_7634_1, var_rightValue_7650, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 140)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_rightValue_7650.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 141)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("compile time divide by zero"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 142)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bigint var_leftValue_7823 ;
    GALGAS_omnibusType joker_7807_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_7807_1, var_leftValue_7823, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 144)) ;
    outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_7823.modulo_operation (var_rightValue_7650, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 145))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 145)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntModuloZeroOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntModuloZeroOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                 const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                 const GALGAS_omnibusType constinArgument_inResultType,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GALGAS_objectIR & outArgument_outResultValue,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_rightValue_8683 ;
  GALGAS_omnibusType joker_8667_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_8667_1, var_rightValue_8683, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 166)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_rightValue_8683.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 167)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 168))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 168)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bigint var_leftValue_8847 ;
    GALGAS_omnibusType joker_8831_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_8831_1, var_leftValue_8847, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 170)) ;
    outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_8847.modulo_operation (var_rightValue_8683, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 171))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 171)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntDivideOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntDivideOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                             const GALGAS_location constinArgument_inOperatorLocation,
                                                             const GALGAS_objectIR constinArgument_inRightOperand,
                                                             const GALGAS_omnibusType constinArgument_inResultType,
                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                             GALGAS_objectIR & outArgument_outResultValue,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_rightValue_9692 ;
  GALGAS_omnibusType joker_9676_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_9676_1, var_rightValue_9692, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 192)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_rightValue_9692.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 193)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("compile time divide by zero"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 194)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bigint var_leftValue_9865 ;
    GALGAS_omnibusType joker_9849_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_9849_1, var_leftValue_9865, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 196)) ;
    outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_9865.divide_operation (var_rightValue_9692, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 197))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 197)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntDivideZeroOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntDivideZeroOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                 const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                 const GALGAS_omnibusType constinArgument_inResultType,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GALGAS_objectIR & outArgument_outResultValue,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_rightValue_10723 ;
  GALGAS_omnibusType joker_10707_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_10707_1, var_rightValue_10723, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 218)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_rightValue_10723.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 219)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 220))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 220)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bigint var_leftValue_10887 ;
    GALGAS_omnibusType joker_10871_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_10871_1, var_leftValue_10887, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 222)) ;
    outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_10887.divide_operation (var_rightValue_10723, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 223))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 223)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntMultiplyOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntMultiplyOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                               const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                               const GALGAS_objectIR constinArgument_inRightOperand,
                                                               const GALGAS_omnibusType constinArgument_inResultType,
                                                               GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                               GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GALGAS_objectIR & outArgument_outResultValue,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_11740 ;
  GALGAS_omnibusType joker_11724_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_11724_1, var_leftValue_11740, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 244)) ;
  GALGAS_bigint var_rightValue_11800 ;
  GALGAS_omnibusType joker_11784_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_11784_1, var_rightValue_11800, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 245)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_11740.multiply_operation (var_rightValue_11800, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 246))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 246)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntSubtractOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntSubtractOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                               const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                               const GALGAS_objectIR constinArgument_inRightOperand,
                                                               const GALGAS_omnibusType constinArgument_inResultType,
                                                               GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                               GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GALGAS_objectIR & outArgument_outResultValue,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_12646 ;
  GALGAS_omnibusType joker_12630_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_12630_1, var_leftValue_12646, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 266)) ;
  GALGAS_bigint var_rightValue_12706 ;
  GALGAS_omnibusType joker_12690_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_12690_1, var_rightValue_12706, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 267)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_12646.substract_operation (var_rightValue_12706, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 268))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 268)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntEqualOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntEqualOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                            const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                            const GALGAS_objectIR constinArgument_inRightOperand,
                                                            const GALGAS_omnibusType constinArgument_inResultType,
                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                            GALGAS_objectIR & outArgument_outResultValue,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_13546 ;
  GALGAS_omnibusType joker_13530_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_13530_1, var_leftValue_13546, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 288)) ;
  GALGAS_bigint var_rightValue_13606 ;
  GALGAS_omnibusType joker_13590_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_13590_1, var_rightValue_13606, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 289)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, GALGAS_bool (kIsEqual, var_leftValue_13546.objectCompare (var_rightValue_13606)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 290))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 290)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntAddOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAddOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                          const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                          const GALGAS_objectIR constinArgument_inRightOperand,
                                                          const GALGAS_omnibusType constinArgument_inResultType,
                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                          GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                          GALGAS_objectIR & outArgument_outResultValue,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_14443 ;
  GALGAS_omnibusType joker_14427_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_14427_1, var_leftValue_14443, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 310)) ;
  GALGAS_bigint var_rightValue_14503 ;
  GALGAS_omnibusType joker_14487_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_14487_1, var_rightValue_14503, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 311)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_14443.add_operation (var_rightValue_14503, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 312))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 312)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntBitWiseAndOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntBitWiseAndOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                 const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                 const GALGAS_omnibusType constinArgument_inResultType,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GALGAS_objectIR & outArgument_outResultValue,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_15353 ;
  GALGAS_omnibusType joker_15337_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_15337_1, var_leftValue_15353, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 332)) ;
  GALGAS_bigint var_rightValue_15413 ;
  GALGAS_omnibusType joker_15397_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_15397_1, var_rightValue_15413, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 333)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_15353.operator_and (var_rightValue_15413 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 334))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 334)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntShiftLeftOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntShiftLeftOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                const GALGAS_location constinArgument_inOperatorLocation,
                                                                const GALGAS_objectIR constinArgument_inRightOperand,
                                                                const GALGAS_omnibusType constinArgument_inResultType,
                                                                GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                GALGAS_objectIR & outArgument_outResultValue,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_rightValue_16255 ;
  GALGAS_omnibusType joker_16239_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_16239_1, var_rightValue_16255, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 354)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_rightValue_16255.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 355)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("compile time left shift right operand should be ≥ 0"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 356)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bigint var_leftValue_16451 ;
    GALGAS_omnibusType joker_16435_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_16435_1, var_leftValue_16451, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 358)) ;
    outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_16451.left_shift_operation (var_rightValue_16255, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 359))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 359)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntShiftRightOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntShiftRightOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                 const GALGAS_omnibusType constinArgument_inResultType,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GALGAS_objectIR & outArgument_outResultValue,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_rightValue_17303 ;
  GALGAS_omnibusType joker_17287_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_17287_1, var_rightValue_17303, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 380)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_rightValue_17303.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 381)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("compile time right shift right operand should be ≥ 0"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 382)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bigint var_leftValue_17500 ;
    GALGAS_omnibusType joker_17484_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_17484_1, var_leftValue_17500, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 384)) ;
    outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_17500.right_shift_operation (var_rightValue_17303, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 385))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 385)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntLessThanOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntLessThanOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                               const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                               const GALGAS_objectIR constinArgument_inRightOperand,
                                                               const GALGAS_omnibusType constinArgument_inResultType,
                                                               GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                               GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GALGAS_objectIR & outArgument_outResultValue,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_18354 ;
  GALGAS_omnibusType joker_18338_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_18338_1, var_leftValue_18354, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 406)) ;
  GALGAS_bigint var_rightValue_18414 ;
  GALGAS_omnibusType joker_18398_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_18398_1, var_rightValue_18414, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 407)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, GALGAS_bool (kIsStrictInf, var_leftValue_18354.objectCompare (var_rightValue_18414)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 408))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 408)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntLowerOrEqualOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntLowerOrEqualOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                   const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                   const GALGAS_objectIR constinArgument_inRightOperand,
                                                                   const GALGAS_omnibusType constinArgument_inResultType,
                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   GALGAS_objectIR & outArgument_outResultValue,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_19268 ;
  GALGAS_omnibusType joker_19252_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_19252_1, var_leftValue_19268, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 428)) ;
  GALGAS_bigint var_rightValue_19328 ;
  GALGAS_omnibusType joker_19312_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_19312_1, var_rightValue_19328, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 429)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, GALGAS_bool (kIsInfOrEqual, var_leftValue_19268.objectCompare (var_rightValue_19328)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 430))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 430)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntXorOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntXorOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                          const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                          const GALGAS_objectIR constinArgument_inRightOperand,
                                                          const GALGAS_omnibusType constinArgument_inResultType,
                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                          GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                          GALGAS_objectIR & outArgument_outResultValue,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_20165 ;
  GALGAS_omnibusType joker_20149_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_20149_1, var_leftValue_20165, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 450)) ;
  GALGAS_bigint var_rightValue_20225 ;
  GALGAS_omnibusType joker_20209_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_20209_1, var_rightValue_20225, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 451)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_20165.operator_xor (var_rightValue_20225 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 452))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 452)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntBitWiseOrOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntBitWiseOrOperator::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                const GALGAS_objectIR constinArgument_inRightOperand,
                                                                const GALGAS_omnibusType constinArgument_inResultType,
                                                                GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                GALGAS_objectIR & outArgument_outResultValue,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_leftValue_21073 ;
  GALGAS_omnibusType joker_21057_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_21057_1, var_leftValue_21073, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 472)) ;
  GALGAS_bigint var_rightValue_21133 ;
  GALGAS_omnibusType joker_21117_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_21117_1, var_rightValue_21133, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 473)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_leftValue_21073.operator_or (var_rightValue_21133 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 474))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 474)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntMinusOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntMinusOperator::method_generateCode (const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                            const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                            const GALGAS_omnibusType constinArgument_inResultType,
                                                            const GALGAS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                            const GALGAS_bool /* constinArgument_inSafeMode */,
                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                            GALGAS_objectIR & outArgument_outResultValue,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_receiverValue_22159 ;
  GALGAS_omnibusType joker_22143_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_literalInteger (joker_22143_1, var_receiverValue_22159, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 496)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_receiverValue_22159.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 497))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 497)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntComplementOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntComplementOperator::method_generateCode (const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                 const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                 const GALGAS_omnibusType constinArgument_inResultType,
                                                                 const GALGAS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                                 const GALGAS_bool /* constinArgument_inSafeMode */,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GALGAS_objectIR & outArgument_outResultValue,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_receiverValue_23038 ;
  GALGAS_omnibusType joker_23022_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_literalInteger (joker_23022_1, var_receiverValue_23038, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 517)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_receiverValue_23038.operator_tilde (SOURCE_FILE ("compile-time-type-int.galgas", 518))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 518)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'boolTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_boolTypeName (C_Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("bool") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_boolTypeName = false ;
static GALGAS_string gOnceFunctionResult_boolTypeName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolTypeName) {
    gOnceFunctionResult_boolTypeName = onceFunction_boolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolTypeName = true ;
  }
  return gOnceFunctionResult_boolTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_boolTypeName (void) {
  gOnceFunctionResult_boolTypeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_boolTypeName (NULL,
                                                          releaseOnceFunctionResult_boolTypeName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_boolTypeName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_boolTypeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_boolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolTypeAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_boolTypeAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 17)) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolTypeAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolTypeAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_nodeName_1281 = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 27)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 27)) ;
  {
  const GALGAS_boolTypeAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1281, temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 28)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1281, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 29)) COMMA_SOURCE_FILE ("type-bool.galgas", 29)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolTypeAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_boolTypeAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 35)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolTypeAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolTypeAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                              GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                              GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                              GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                              GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                              GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                              GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                              GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_boolTypeName_2620 = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 52)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 52)) ;
  GALGAS_omnibusType var_boolType_2667 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 53)) ;
  GALGAS_omnibusType var_ctBoolType_2696 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 54)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_boolTypeName_2620, var_boolType_2667, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 56)) ;
  }
  GALGAS_lstring var_key_2854 = function_prefixOperatorMapKey (var_boolType_2667, GALGAS_prefixOperator::constructor_notOp (SOURCE_FILE ("type-bool.galgas", 58)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 58)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2854, var_boolType_2667, var_boolType_2667, GALGAS_boolNotOperator::constructor_new (SOURCE_FILE ("type-bool.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 59)) ;
  }
  var_key_2854 = function_infixOperatorMapKey (var_boolType_2667, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 61)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 61)), var_boolType_2667, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 61)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2854, var_boolType_2667, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("or")  COMMA_SOURCE_FILE ("type-bool.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 62)) ;
  }
  var_key_2854 = function_infixOperatorMapKey (var_ctBoolType_2696, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 63)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 63)), var_boolType_2667, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 63)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2854, var_boolType_2667, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("or")  COMMA_SOURCE_FILE ("type-bool.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 64)) ;
  }
  var_key_2854 = function_infixOperatorMapKey (var_boolType_2667, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 65)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 65)), var_ctBoolType_2696, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 65)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2854, var_boolType_2667, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("or")  COMMA_SOURCE_FILE ("type-bool.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 66)) ;
  }
  var_key_2854 = function_infixOperatorMapKey (var_boolType_2667, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 68)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 68)), var_boolType_2667, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 68)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2854, var_boolType_2667, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("xor")  COMMA_SOURCE_FILE ("type-bool.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 69)) ;
  }
  var_key_2854 = function_infixOperatorMapKey (var_ctBoolType_2696, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 70)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 70)), var_boolType_2667, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 70)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2854, var_boolType_2667, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("xor")  COMMA_SOURCE_FILE ("type-bool.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 71)) ;
  }
  var_key_2854 = function_infixOperatorMapKey (var_boolType_2667, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 72)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 72)), var_ctBoolType_2696, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 72)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2854, var_boolType_2667, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("xor")  COMMA_SOURCE_FILE ("type-bool.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 73)) ;
  }
  var_key_2854 = function_infixOperatorMapKey (var_boolType_2667, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("type-bool.galgas", 75)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 75)), var_boolType_2667, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 75)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2854, var_boolType_2667, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("icmp eq")  COMMA_SOURCE_FILE ("type-bool.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 76)) ;
  }
  var_key_2854 = function_infixOperatorMapKey (var_ctBoolType_2696, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("type-bool.galgas", 77)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 77)), var_boolType_2667, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 77)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2854, var_boolType_2667, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("icmp eq")  COMMA_SOURCE_FILE ("type-bool.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 78)) ;
  }
  var_key_2854 = function_infixOperatorMapKey (var_boolType_2667, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("type-bool.galgas", 79)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 79)), var_ctBoolType_2696, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 79)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2854, var_boolType_2667, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("icmp eq")  COMMA_SOURCE_FILE ("type-bool.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 80)) ;
  }
  var_key_2854 = GALGAS_lstring::constructor_new (var_boolType_2667.readProperty_omnibusTypeDescriptionName (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 82))  COMMA_SOURCE_FILE ("type-bool.galgas", 82)) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_2854, GALGAS_boolImplicitConverterToBoolean::constructor_new (SOURCE_FILE ("type-bool.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 83)) ;
  }
  var_key_2854 = function_assignmentOperatorKey (var_boolType_2667, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 85)), var_boolType_2667, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 85)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2854, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-bool.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 86)) ;
  }
  var_key_2854 = function_assignmentOperatorKey (var_boolType_2667, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 87)), var_ctBoolType_2696, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 87)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2854, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-bool.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 88)) ;
  }
  GALGAS_string var_functionName_5281 = function_assignmentOperatorFuncName (var_boolType_2667, var_boolType_2667, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 90)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_simpleAssignmentCopyRoutineIR::constructor_new (var_functionName_5281.getter_nowhere (SOURCE_FILE ("type-bool.galgas", 92)), GALGAS_bool (false), GALGAS_bool (false), var_boolType_2667  COMMA_SOURCE_FILE ("type-bool.galgas", 91))  COMMA_SOURCE_FILE ("type-bool.galgas", 91)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolImplicitConverterToBoolean generateConvertToBooleanCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                               const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                               GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                               GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                               GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                               GALGAS_implicitBooleanConversionResult & outArgument_outResult,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult = GALGAS_implicitBooleanConversionResult::constructor_llvmVariable (extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 116))  COMMA_SOURCE_FILE ("type-bool.galgas", 116)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolNotOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolNotOperator::method_generateCode (const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                const GALGAS_omnibusType constinArgument_inResultType,
                                                const GALGAS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                const GALGAS_bool /* constinArgument_inSafeMode */,
                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                GALGAS_objectIR & outArgument_outResultValue,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_receiverOperand_7241 = constinArgument_inReceiverOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_receiverOperand_7241, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 139)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 140)) ;
  }
  GALGAS_string var_s_7441 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)).add_operation (GALGAS_string (" = xor i1 1, "), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)).add_operation (extensionGetter_llvmName (var_receiverOperand_7241, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_7441, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-bool.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 142)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeAliasDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_typeAliasDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_typeAliasDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mAliasTypeName ().readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeAliasDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typeAliasDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_typeAliasDeclarationAST temp_0 = this ;
  const GALGAS_typeAliasDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mAliasTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 49)) ;
  }
  {
  const GALGAS_typeAliasDeclarationAST temp_2 = this ;
  const GALGAS_typeAliasDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mAliasTypeName (), temp_3.readProperty_mOriginalTypeName () COMMA_SOURCE_FILE ("type-alias.galgas", 50)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeAliasDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typeAliasDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_typeAliasDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("typealias ").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeAliasDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typeAliasDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                          GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                          GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                          GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                          GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_type_3790 ;
  const GALGAS_typeAliasDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_0.readProperty_mOriginalTypeName (), var_type_3790, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 74)) ;
  {
  const GALGAS_typeAliasDeclarationAST temp_1 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mAliasTypeName (), var_type_3790, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 76)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fixedSizeArrayTypeDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayTypeDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mFixedSizeArrayType (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 46)) ;
  }
  {
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_2 = this ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mFixedSizeArrayType (), temp_3.readProperty_mElementTypeName () COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 47)) ;
  }
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_4 = this ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_5 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_4.readProperty_mSizeExpression ().ptr (), temp_5.readProperty_mFixedSizeArrayType (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 48)) ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_6 = this ;
  GALGAS_lstring var_rootNode_2477 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 49)), temp_6.readProperty_mFixedSizeArrayType ().readProperty_location ()  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 49)) ;
  {
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_7.readProperty_mFixedSizeArrayType (), var_rootNode_2477 COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 50)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@fixedSizeArrayTypeDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_fixedSizeArrayTypeDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("anonymous $").add_operation (temp_0.readProperty_mFixedSizeArrayType ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@fixedSizeArrayTypeDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_fixedSizeArrayTypeDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mFixedSizeArrayType ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fixedSizeArrayTypeDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayTypeDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                                   GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                   GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                   GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                   GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                   GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_elementType_4262 ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_0.readProperty_mElementTypeName (), var_elementType_4262, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 80)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4262.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 81)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 81)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_fixedSizeArrayTypeDeclarationAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mElementTypeName ().readProperty_location (), GALGAS_string ("an array element should be copyable"), fixItArray3  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 82)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4262.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 84)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 84)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_fixedSizeArrayTypeDeclarationAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mElementTypeName ().readProperty_location (), GALGAS_string ("an array element should be instanciable"), fixItArray6  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 85)) ;
    }
  }
  GALGAS_objectIR var_sizeExpressionIR_4786 ;
  {
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_7 = this ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_8 = this ;
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_7.readProperty_mSizeExpression (), temp_8.readProperty_mSizeExpressionLocation (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 93)), var_sizeExpressionIR_4786, inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 88)) ;
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_sizeExpressionIR_4786.getter_isLiteralInteger (SOURCE_FILE ("type-fixed-size-array.galgas", 96)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 96)).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_fixedSizeArrayTypeDeclarationAST temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mSizeExpressionLocation (), GALGAS_string ("array size expression is a literal interger expression"), fixItArray11  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 97)) ;
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_bigint var_arraySize_5014 ;
    GALGAS_omnibusType joker_4999_1 ; // Joker input parameter
    var_sizeExpressionIR_4786.method_literalInteger (joker_4999_1, var_arraySize_5014, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 99)) ;
    const GALGAS_fixedSizeArrayTypeDeclarationAST temp_12 = this ;
    GALGAS_lstring var_omnibusTypeDescriptionName_5100 = GALGAS_lstring::constructor_new (GALGAS_string ("[").add_operation (var_arraySize_5014.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (GALGAS_string (" • "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (var_elementType_4262.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)), temp_12.readProperty_mFixedSizeArrayType ().readProperty_location ()  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)) ;
    const GALGAS_fixedSizeArrayTypeDeclarationAST temp_13 = this ;
    GALGAS_lstring var_llvmBaseTypeName_5250 = GALGAS_lstring::constructor_new (var_elementType_4262.readProperty_llvmBaseTypeName ().add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)).add_operation (var_arraySize_5014.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)), temp_13.readProperty_mFixedSizeArrayType ().readProperty_location ()  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)) ;
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = ioArgument_ioContext.readProperty_mTypeMap ().getter_hasKey (var_omnibusTypeDescriptionName_5100.readProperty_string () COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 103)).boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_omnibusType var_type_5507 ;
        extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), var_omnibusTypeDescriptionName_5100, var_type_5507, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 104)) ;
        {
        const GALGAS_fixedSizeArrayTypeDeclarationAST temp_15 = this ;
        extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_15.readProperty_mFixedSizeArrayType (), var_type_5507, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 105)) ;
        }
      }
    }
    if (kBoolFalse == test_14) {
      GALGAS_constantMap var_constantMap_5738 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("type-fixed-size-array.galgas", 111)) ;
      {
      const GALGAS_fixedSizeArrayTypeDeclarationAST temp_16 = this ;
      var_constantMap_5738.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), temp_16.readProperty_mFixedSizeArrayType ().readProperty_location ()  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)), var_arraySize_5014, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)).getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (var_omnibusTypeDescriptionName_5100, var_constantMap_5738, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 113)) ;
      }
      {
      extensionSetter_insertGetter (ioArgument_ioContext, var_omnibusTypeDescriptionName_5100, GALGAS_lstring::constructor_new (GALGAS_string ("count"), var_omnibusTypeDescriptionName_5100.readProperty_location ()  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 120)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-fixed-size-array.galgas", 121)), GALGAS_propertyGetterKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122)), var_arraySize_5014  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 118)) ;
      }
      GALGAS_constructorMap var_constructorMap_6414 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-fixed-size-array.galgas", 125)) ;
      {
      var_constructorMap_6414.setter_insertKey (GALGAS_string ("(!repeated)").getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 127)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-fixed-size-array.galgas", 127)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_4262, var_arraySize_5014.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127)) ;
      }
      GALGAS_string var_constructorName_6625 = GALGAS_string ("(") ;
      cEnumerator_range enumerator_6683 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_arraySize_5014.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 130)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 130))), kENUMERATION_UP) ;
      while (enumerator_6683.hasCurrentObject ()) {
        var_constructorName_6625.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 131)) ;
        enumerator_6683.gotoNextObject () ;
      }
      var_constructorName_6625.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 133)) ;
      {
      var_constructorMap_6414.setter_insertKey (var_constructorName_6625.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 134)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-fixed-size-array.galgas", 134)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_4262, var_arraySize_5014.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_omnibusTypeDescriptionName_5100, var_constructorMap_6414, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 135)) ;
      }
      GALGAS_omnibusTypeAttributes var_typeAttributes_7073 = GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-fixed-size-array.galgas", 137)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-fixed-size-array.galgas", 137)) COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 137)) ;
      GALGAS_omnibusType var_arrayType_7194 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_staticSubscript (var_elementType_4262, var_arraySize_5014  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 140)), var_typeAttributes_7073, var_omnibusTypeDescriptionName_5100.readProperty_string (), GALGAS_typeKind::constructor_staticArrayType (var_elementType_4262, var_arraySize_5014  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 143)), var_llvmBaseTypeName_5250.readProperty_string ()  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 139)) ;
      {
      const GALGAS_fixedSizeArrayTypeDeclarationAST temp_17 = this ;
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_17.readProperty_mFixedSizeArrayType (), var_arrayType_7194, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 146)) ;
      }
      {
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusTypeDescriptionName_5100, var_arrayType_7194, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 150)) ;
      }
      ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMStaticArrayTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_7194.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 156)), var_elementType_4262, var_arraySize_5014  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 155))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 155)) ;
      GALGAS_string var_assignValueToElements_5F_functionName_8067 = function_assignValueToFixedSizeArrayElements_5F_functionName (var_arrayType_7194, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 161)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::constructor_new (var_assignValueToElements_5F_functionName_8067.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 163)), GALGAS_bool (false), GALGAS_bool (false), var_arrayType_7194, var_elementType_4262, var_arraySize_5014.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 168))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 162))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 162)) ;
      GALGAS_string var_assignmentFunctionLLVMName_8441 = function_assignmentOperatorFuncName (var_arrayType_7194, var_arrayType_7194, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 170)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_staticArrayTypeAssignFunctionIR::constructor_new (var_assignmentFunctionLLVMName_8441.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 172)), GALGAS_bool (false), GALGAS_bool (false), var_arrayType_7194  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 171))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 171)) ;
      const GALGAS_fixedSizeArrayTypeDeclarationAST temp_18 = this ;
      GALGAS_lstring var_key_8761 = function_assignmentOperatorKey (var_arrayType_7194, temp_18.readProperty_mFixedSizeArrayType ().readProperty_location (), var_arrayType_7194, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 178)) ;
      {
      ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8761, GALGAS_fixedSizeArrayAssignmentOperatorUsage::constructor_new (var_elementType_4262, var_arraySize_5014.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 179)), var_assignValueToElements_5F_functionName_8067  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 179)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Function 'assignValueToFixedSizeArrayElements_functionName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_assignValueToFixedSizeArrayElements_5F_functionName (const GALGAS_omnibusType & constinArgument_inFixedSizeArrayType,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("assign.value.to.fixed.size.array.").add_operation (constinArgument_inFixedSizeArrayType.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 187)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_assignValueToFixedSizeArrayElements_5F_functionName [2] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName (C_Compiler * inCompiler,
                                                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_assignValueToFixedSizeArrayElements_5F_functionName (operand0,
                                                                       inCompiler
                                                                       COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignValueToFixedSizeArrayElements_5F_functionName ("assignValueToFixedSizeArrayElements_functionName",
                                                                                                     functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName,
                                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                                     1,
                                                                                                     functionArgs_assignValueToFixedSizeArrayElements_5F_functionName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@userLLVMStaticArrayTypeDefinitionIR generateLLVMType'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_userLLVMStaticArrayTypeDefinitionIR::method_generateLLVMType (GALGAS_string & ioArgument_ioLLVMcode,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_userLLVMStaticArrayTypeDefinitionIR temp_0 = this ;
  const GALGAS_userLLVMStaticArrayTypeDefinitionIR temp_1 = this ;
  const GALGAS_userLLVMStaticArrayTypeDefinitionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0.readProperty_mLLVMDefinedTypeName ().add_operation (GALGAS_string (" = type ["), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (temp_1.readProperty_mSize ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fixedSizeArrayAssignmentOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayAssignmentOperatorUsage::method_generateCode (GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                      GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      const GALGAS_omnibusType constinArgument_inTargetType,
                                                                      const GALGAS_string constinArgument_inTargetLLVMName,
                                                                      const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                                      const GALGAS_location constinArgument_inErrorLocation,
                                                                      const GALGAS_bool /* constinArgument_inTargetIsInitialized */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_arrayTypeName_11143 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 227)) ;
  const GALGAS_fixedSizeArrayAssignmentOperatorUsage temp_0 = this ;
  GALGAS_string var_elementTypeName_11193 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 228)) ;
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * extractPtr_11829 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_11330_sourceValuePossibleReference = extractPtr_11829->mAssociatedValue2 ;
      GALGAS_objectIR var_sourceValue_11380 = extractedValue_11330_sourceValuePossibleReference ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_11380, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 232)) ;
      }
      const GALGAS_fixedSizeArrayAssignmentOperatorUsage temp_1 = this ;
      GALGAS_string var_s_11513 = GALGAS_string ("call void @").add_operation (temp_1.readProperty_mAssignValueToElements_5F_functionName ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 233)) ;
      var_s_11513.plusAssign_operation(GALGAS_string (" (").add_operation (var_arrayTypeName_11143, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)) ;
      var_s_11513.plusAssign_operation(GALGAS_string (", ").add_operation (var_elementTypeName_11193, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (extensionGetter_llvmName (var_sourceValue_11380, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)) ;
      {
      GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 236)) ;
      const GALGAS_fixedSizeArrayAssignmentOperatorUsage temp_3 = this ;
      temp_2.addAssign_operation (temp_3.readProperty_mAssignValueToElements_5F_functionName ()  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11513, temp_2, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * extractPtr_12567 = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_11880_values = extractPtr_12567->mAssociatedValue1 ;
      GALGAS_uint var_uniqueValue_11898 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 239)) ;
      cEnumerator_operandIRList enumerator_11990 (extractedValue_11880_values, kENUMERATION_UP) ;
      GALGAS_uint index_11985 ((uint32_t) 0) ;
      while (enumerator_11990.hasCurrentObject ()) {
        GALGAS_objectIR var_sourceValue_12036 = enumerator_11990.current_mOperand (HERE) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_12036, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 242)) ;
        }
        GALGAS_string var_ptr_12150 = GALGAS_string ("%ptr.").add_operation (var_uniqueValue_11898.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (index_11985.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)) ;
        GALGAS_string var_s_12200 = var_ptr_12150.add_operation (GALGAS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (var_arrayTypeName_11143, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (var_arrayTypeName_11143, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (index_11985.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12200, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)) ;
        }
        var_s_12200 = GALGAS_string ("store ").add_operation (var_elementTypeName_11193, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (extensionGetter_llvmName (var_sourceValue_12036, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (var_elementTypeName_11193, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (var_ptr_12150, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12200, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 247)) ;
        }
        enumerator_11990.gotoNextObject () ;
        index_11985.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 240)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * extractPtr_13179 = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_12619_values = extractPtr_13179->mAssociatedValue1 ;
      GALGAS_uint var_uniqueValue_12640 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 251)) ;
      cEnumerator_operandIRList enumerator_12732 (extractedValue_12619_values, kENUMERATION_UP) ;
      GALGAS_uint index_12727 ((uint32_t) 0) ;
      while (enumerator_12732.hasCurrentObject ()) {
        GALGAS_string var_ptr_12768 = GALGAS_string ("%ptr.").add_operation (var_uniqueValue_12640.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (index_12727.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)) ;
        GALGAS_string var_s_12818 = var_ptr_12768.add_operation (GALGAS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (var_arrayTypeName_11143, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (var_arrayTypeName_11143, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (index_12727.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12818, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)) ;
        }
        var_s_12818 = GALGAS_string ("store ").add_operation (var_elementTypeName_11193, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (extensionGetter_llvmName (enumerator_12732.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (var_elementTypeName_11193, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (var_ptr_12768, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12818, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 257)) ;
        }
        enumerator_12732.gotoNextObject () ;
        index_12727.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 252)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_13651 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_uint extractedValue_13229_idx = extractPtr_13651->mAssociatedValue3 ;
      GALGAS_string var_assignmentFunctionLLVMName_13244 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 260)) ;
      GALGAS_string var_s_13339 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_13244.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (GALGAS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (extractedValue_13229_idx.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)) ;
      {
      GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 264)) ;
      temp_4.addAssign_operation (var_assignmentFunctionLLVMName_13244  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_13339, temp_4, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      GALGAS_string var_assignmentFunctionLLVMName_13685 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 266)) ;
      GALGAS_string var_s_13780 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_13685.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)) ;
      {
      GALGAS_stringset temp_5 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 270)) ;
      temp_5.addAssign_operation (var_assignmentFunctionLLVMName_13685  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_13780, temp_5, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (literalInteger)"), fixItArray6  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 272)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (literalString)"), fixItArray7  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 274)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (llvmStructureValue)"), fixItArray8  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 276)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (llvmValue)"), fixItArray9  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 278)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (null)"), fixItArray10  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 280)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (void)"), fixItArray11  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 282)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (zero)"), fixItArray12  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 284)) ;
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignRepeatedValueToFixedSizeArrayElementsFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_0 = this ;
  GALGAS_string var_arrayTypeName_15527 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mFixedSizeArrayType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 303)) ;
  const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_1 = this ;
  GALGAS_string var_elementTypeName_15589 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 304)) ;
  const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_arrayTypeName_15527, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)).add_operation (var_elementTypeName_15589, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)).add_operation (GALGAS_string (" %inRepeatedValue) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %idx = alloca i32\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i32 0, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 309)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %idxValue = load i32, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 311)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr = getelementptr ").add_operation (var_arrayTypeName_15527, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (var_arrayTypeName_15527, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (GALGAS_string ("* %inTarget, i32 0, i32 %idxValue\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeName_15589, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (GALGAS_string (" %inRepeatedValue, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (var_elementTypeName_15589, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (GALGAS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %nextIdxValue = add i32 %idxValue, 1\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 314)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i32 %nextIdxValue, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 315)) ;
  const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %continue = icmp ult i32 %nextIdxValue, ").add_operation (temp_3.readProperty_mArraySize ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %continue, label %loop, label %exit\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 317)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("exit:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 318)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 320)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticArrayTypeAssignFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_staticArrayTypeAssignFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_staticArrayTypeAssignFunctionIR temp_0 = this ;
  GALGAS_string var_llvmTypeName_17173 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mFixedSizeArrayType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 336)) ;
  const GALGAS_staticArrayTypeAssignFunctionIR temp_1 = this ;
  GALGAS_arcAssignmentList var_arcAssignmentList_17234 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_1.readProperty_mFixedSizeArrayType ().ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-fixed-size-array.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 337)) ;
  const GALGAS_staticArrayTypeAssignFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)).add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)).add_operation (GALGAS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 340)) ;
  cEnumerator_arcAssignmentList enumerator_17575 (var_arcAssignmentList_17234, kENUMERATION_UP) ;
  while (enumerator_17575.hasCurrentObject ()) {
    GALGAS_string var_propertyTypeLLVMName_17618 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_17575.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 342)) ;
    GALGAS_string var_llvmVarName_17677 = GALGAS_string ("%arc.retain.").add_operation (enumerator_17575.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 343)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 343)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 344)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_17677, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (GALGAS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)) ;
    cEnumerator_uintlist enumerator_17955 (enumerator_17575.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_17955.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_17955.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 347)) ;
      enumerator_17955.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_17575.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 349)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 349)) ;
    GALGAS_string var_llvmLoadedVarName_18073 = var_llvmVarName_17677.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_18073, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (var_propertyTypeLLVMName_17618, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (var_propertyTypeLLVMName_17618, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (var_llvmVarName_17677, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_17618, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (var_llvmLoadedVarName_18073, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)) ;
    enumerator_17575.gotoNextObject () ;
  }
  cEnumerator_arcAssignmentList enumerator_18398 (var_arcAssignmentList_17234, kENUMERATION_UP) ;
  while (enumerator_18398.hasCurrentObject ()) {
    GALGAS_string var_llvmVarName_18441 = GALGAS_string ("%arc.release.").add_operation (enumerator_18398.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 355)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 355)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 356)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_18441, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (GALGAS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)) ;
    cEnumerator_uintlist enumerator_18720 (enumerator_18398.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_18720.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_18720.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 359)) ;
      enumerator_18720.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_18398.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 361)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 361)) ;
    GALGAS_string var_propertyTypeLLVMName_18838 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18398.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 362)) ;
    GALGAS_string var_llvmLoadedVarName_18897 = var_llvmVarName_18441.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_18897, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (var_propertyTypeLLVMName_18838, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (var_propertyTypeLLVMName_18838, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (var_llvmVarName_18441, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_18838, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (var_llvmLoadedVarName_18897, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)) ;
    enumerator_18398.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 367)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)).add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %v = load ").add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (GALGAS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (GALGAS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 380)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 381)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)).add_operation (GALGAS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 383)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 385)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 386)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)).add_operation (GALGAS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 388)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 389)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)).add_operation (GALGAS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %byteCount, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 397)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 399)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target8 = bitcast ").add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)).add_operation (GALGAS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source8 = bitcast ").add_operation (var_llvmTypeName_17173, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)).add_operation (GALGAS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 402)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 403)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 404)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 405)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 406)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeDynamicArrayDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = this ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mDynamicArrayTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 36)) ;
  }
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_2 = this ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mDynamicArrayTypeName (), temp_3.readProperty_mElementTypeName () COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 37)) ;
  }
  const GALGAS_typeDynamicArrayDeclarationAST temp_4 = this ;
  GALGAS_lstring var_rootNode_2117 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 38)), temp_4.readProperty_mDynamicArrayTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 38)) ;
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_5.readProperty_mDynamicArrayTypeName (), var_rootNode_2117 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 39)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeDynamicArrayDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typeDynamicArrayDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("anonymous ").add_operation (temp_0.readProperty_mDynamicArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 45)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeDynamicArrayDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_typeDynamicArrayDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mDynamicArrayTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeDynamicArrayDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                 GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                 GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                 GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                 GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioContext.readProperty_mTargetParameters ().readProperty_mHandleDynamicArray ().operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 68)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_typeDynamicArrayDeclarationAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mElementTypeName ().readProperty_location (), GALGAS_string ("this target does not handle dynamic array"), fixItArray2  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 69)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_arrayTypeProxy_4037 ;
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_3.readProperty_mDynamicArrayTypeName (), var_arrayTypeProxy_4037, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 71)) ;
  }
  GALGAS_omnibusType var_elementType_4187 ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_4 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_4.readProperty_mElementTypeName (), var_elementType_4187, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 73)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4187.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 74)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 74)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_typeDynamicArrayDeclarationAST temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mElementTypeName ().readProperty_location (), GALGAS_string ("an array element should be copyable"), fixItArray7  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 75)) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4187.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 77)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_typeDynamicArrayDeclarationAST temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mElementTypeName ().readProperty_location (), GALGAS_string ("an array element should be instanciable"), fixItArray10  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 78)) ;
    }
  }
  const GALGAS_typeDynamicArrayDeclarationAST temp_11 = this ;
  GALGAS_lstring var_omnibusTypeDescriptionName_4509 = GALGAS_lstring::constructor_new (GALGAS_string ("[").add_operation (var_elementType_4187.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)), temp_11.readProperty_mDynamicArrayTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)) ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_12 = this ;
  GALGAS_lstring var_llvmBaseTypeName_4639 = GALGAS_lstring::constructor_new (GALGAS_string ("dyn-").add_operation (var_elementType_4187.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 82)), temp_12.readProperty_mDynamicArrayTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 82)) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = ioArgument_ioContext.readProperty_mTypeMap ().getter_hasKey (var_omnibusTypeDescriptionName_4509.readProperty_string () COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 84)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_omnibusType var_type_4950 ;
      extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), var_omnibusTypeDescriptionName_4509, var_type_4950, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 85)) ;
      {
      const GALGAS_typeDynamicArrayDeclarationAST temp_14 = this ;
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_14.readProperty_mDynamicArrayTypeName (), var_type_4950, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 86)) ;
      }
    }
  }
  if (kBoolFalse == test_13) {
    GALGAS_unifiedTypeMapEntry var_uint_33__32_TypeProxy_5115 ;
    {
    extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_string ("u32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 91)), var_uint_33__32_TypeProxy_5115, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 91)) ;
    }
    GALGAS_unifiedTypeMapEntry var_elementTypeProxy_5196 ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_15 = this ;
    extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_15.readProperty_mElementTypeName (), var_elementTypeProxy_5196, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 92)) ;
    }
    GALGAS_lstring var_routineLLVMName_5610 ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_16 = this ;
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4509.readProperty_string (), var_llvmBaseTypeName_4639.readProperty_string (), GALGAS_lstring::constructor_new (GALGAS_string ("removeAll"), temp_16.readProperty_mDynamicArrayTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 98)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 99)), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 100)), var_routineLLVMName_5610, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 95)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayRemoveAllFunctionIR::constructor_new (var_routineLLVMName_5610, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 103))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 103)) ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_17 = this ;
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4509.readProperty_string (), var_llvmBaseTypeName_4639.readProperty_string (), GALGAS_lstring::constructor_new (GALGAS_string ("length"), temp_17.readProperty_mDynamicArrayTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 112)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 113)), var_uint_33__32_TypeProxy_5115, var_routineLLVMName_5610, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 109)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayLengthFunctionIR::constructor_new (var_routineLLVMName_5610, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 117))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 117)) ;
    GALGAS_lstring var_insertFunctionMangledName_6878 ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_18 = this ;
    extensionSetter_addFunctionWithTwoInputArguments (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4509.readProperty_string (), ioArgument_ioContext, var_llvmBaseTypeName_4639.readProperty_string (), GALGAS_lstring::constructor_new (GALGAS_string ("insert"), temp_18.readProperty_mDynamicArrayTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 127)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 128)), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5196, GALGAS_string ("inValue"), GALGAS_string ("atIndex"), var_uint_33__32_TypeProxy_5115, GALGAS_string ("inIndex"), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 135)), var_insertFunctionMangledName_6878, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 123)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayInsertFunctionIR::constructor_new (var_insertFunctionMangledName_6878, GALGAS_bool (false), GALGAS_bool (false), var_elementTypeProxy_5196  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 138))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 138)) ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_19 = this ;
    extensionSetter_addFunctionWithInputArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4509.readProperty_string (), ioArgument_ioContext, var_llvmBaseTypeName_4639.readProperty_string (), GALGAS_lstring::constructor_new (GALGAS_string ("append"), temp_19.readProperty_mDynamicArrayTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 149)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 150)), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5196, GALGAS_string ("inValue"), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 154)), var_routineLLVMName_5610, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 145)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayAppendFunctionIR::constructor_new (var_routineLLVMName_5610, GALGAS_bool (false), GALGAS_bool (false), var_arrayTypeProxy_4037, var_elementTypeProxy_5196, var_insertFunctionMangledName_6878.readProperty_string ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 157))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 157)) ;
    GALGAS_constructorMap var_constructorMap_7884 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 166)) ;
    {
    var_constructorMap_7884.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 167)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 167)), GALGAS_constructorValue::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 167)) ;
    }
    {
    ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_omnibusTypeDescriptionName_4509, var_constructorMap_7884, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 168)) ;
    }
    GALGAS_omnibusTypeAttributes var_typeAttributes_8151 = GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-dynamic-array.galgas", 170)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-dynamic-array.galgas", 170)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 170)) ;
    GALGAS_omnibusType var_dynamicArrayType_8268 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-dynamic-array.galgas", 173)), var_typeAttributes_8151, var_omnibusTypeDescriptionName_4509.readProperty_string (), GALGAS_typeKind::constructor_dynamicArrayType (var_elementType_4187  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 176)), var_llvmBaseTypeName_4639.readProperty_string ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 172)) ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_20 = this ;
    extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_20.readProperty_mDynamicArrayTypeName (), var_dynamicArrayType_8268, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 179)) ;
    }
    GALGAS_string var_assignmentFunctionName_8688 = function_assignmentOperatorFuncName (var_dynamicArrayType_8268, var_dynamicArrayType_8268, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 181)) ;
    const GALGAS_typeDynamicArrayDeclarationAST temp_21 = this ;
    GALGAS_dynamicArrayTypeAssignGenericFunctionIR var_routine_8785 = GALGAS_dynamicArrayTypeAssignGenericFunctionIR::constructor_new (GALGAS_lstring::constructor_new (var_assignmentFunctionName_8688, temp_21.readProperty_mDynamicArrayTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 183)), GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 182)) ;
    ioArgument_ioRoutineListIR.addAssign_operation (var_routine_8785  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 187)) ;
    GALGAS_dynamicArrayTypeAssignUsage var_operatorUsage_9017 = GALGAS_dynamicArrayTypeAssignUsage::constructor_new (var_dynamicArrayType_8268, var_assignmentFunctionName_8688  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 188)) ;
    const GALGAS_typeDynamicArrayDeclarationAST temp_22 = this ;
    GALGAS_lstring var_key_9135 = function_assignmentOperatorKey (var_dynamicArrayType_8268, temp_22.readProperty_mDynamicArrayTypeName ().readProperty_location (), var_dynamicArrayType_8268, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 192)) ;
    {
    ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_9135, var_operatorUsage_9017, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 193)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayRemoveAllFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dynArrayRemoveAllFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.setter_setMNeedsDynamicMemoryAllocation (GALGAS_bool (true) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 290)) ;
  const GALGAS_dynArrayRemoveAllFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 293)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 294)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype null, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 297)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayLengthFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dynArrayLengthFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.setter_setMNeedsDynamicMemoryAllocation (GALGAS_bool (true) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 314)) ;
  const GALGAS_dynArrayLengthFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal i32 @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 317)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %length = call i32 @arc.length (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 318)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i32 %length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 320)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayAppendFunctionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                    GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dynArrayAppendFunctionIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (temp_0.readProperty_mInsertFunctionMangledName ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 339)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayAppendFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.setter_setMNeedsDynamicMemoryAllocation (GALGAS_bool (true) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 349)) ;
  const GALGAS_dynArrayAppendFunctionIR temp_0 = this ;
  GALGAS_omnibusType var_elementType_16356 = extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 350)) ;
  GALGAS_routineFormalArgumentListAST temp_1 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 360)) ;
  temp_1.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 352)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 353)), var_elementType_16356.readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 354)), GALGAS_string ("inValue").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 355))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 355)) ;
  temp_1.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 357)), GALGAS_string ("atIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 358)), GALGAS_string ("u32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 359)), GALGAS_string ("inIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 360))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 360)) ;
  GALGAS_routineFormalArgumentListAST var_argumentList_16436 = temp_1 ;
  const GALGAS_dynArrayAppendFunctionIR temp_2 = this ;
  GALGAS_lstring var_insertRoutineMangledName_16649 = function_routineMangledNameFromAST (extensionGetter_type (temp_2.readProperty_mArrayTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 363)).readProperty_llvmBaseTypeName (), GALGAS_string ("insert").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 364)), var_argumentList_16436, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 362)) ;
  GALGAS_string var_insertRoutineLLVMName_16806 = function_llvmNameForFunction (var_insertRoutineMangledName_16649.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 367)) ;
  const GALGAS_dynArrayAppendFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 368)).add_operation (GALGAS_string (" (%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 368)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16356.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 369)).add_operation (GALGAS_string (" %inValue)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 369)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 369)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get buffer length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.length = call i32 @arc.length (%ptrtype %current.buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Insert\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_insertRoutineLLVMName_16806, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 374)).add_operation (GALGAS_string ("(%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 374)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16356.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 375)).add_operation (GALGAS_string (" %inValue, i32 %current.buffer.length)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayInsertFunctionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                    GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dynArrayInsertFunctionIR temp_0 = this ;
  const GALGAS_dynArrayInsertFunctionIR temp_1 = this ;
  GALGAS_string var_assignRoutineLLVMName_18282 = function_assignmentOperatorFuncName (extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 395)), extensionGetter_type (temp_1.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 395)) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (var_assignRoutineLLVMName_18282  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 396)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayInsertFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.setter_setMNeedsDynamicMemoryAllocation (GALGAS_bool (true) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 406)) ;
  const GALGAS_dynArrayInsertFunctionIR temp_0 = this ;
  GALGAS_string var_elementLLVMTypeName_18809 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 407)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 407)) ;
  const GALGAS_dynArrayInsertFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 408)).add_operation (GALGAS_string (" (%ptrtype* %ioArray"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 408)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 408)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_elementLLVMTypeName_18809, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 409)).add_operation (GALGAS_string (" %inValue, i32 %inIndex)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 409)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 409)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 409)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 409)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 410)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %insert.address = alloca %ptrtype\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 411)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- value pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.pointer = alloca ").add_operation (var_elementLLVMTypeName_18809, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 413)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 413)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementLLVMTypeName_18809, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 414)).add_operation (GALGAS_string (" %inValue, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 414)).add_operation (var_elementLLVMTypeName_18809, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 414)).add_operation (GALGAS_string ("* %value.pointer\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 414)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 414)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Size of element\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 415)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_elementLLVMTypeName_18809, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)).add_operation (var_elementLLVMTypeName_18809, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %element.byte.size = ptrtoint ").add_operation (var_elementLLVMTypeName_18809, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 418)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %new.buffer.pointer = call %ptrtype @arc.insert.at.index "), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%ptrtype %current.buffer.pointer, i32 %inIndex, i32 %element.byte.size, %ptrtype* %insert.address)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Perform copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 422)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %typed.insert.address = bitcast %ptrtype* %insert.address to ").add_operation (var_elementLLVMTypeName_18809, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)) ;
  const GALGAS_dynArrayInsertFunctionIR temp_2 = this ;
  const GALGAS_dynArrayInsertFunctionIR temp_3 = this ;
  GALGAS_string var_assignRoutineLLVMName_20189 = function_assignmentOperatorFuncName (extensionGetter_type (temp_2.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 424)), extensionGetter_type (temp_3.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 424)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_assignRoutineLLVMName_20189.getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 425)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_elementLLVMTypeName_18809, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)).add_operation (GALGAS_string ("* %typed.insert.address, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)).add_operation (var_elementLLVMTypeName_18809, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)).add_operation (GALGAS_string ("* %value.pointer)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Store new buffer pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %new.buffer.pointer, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 431)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynamicArrayTypeAssignUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignUsage::method_generateCode (GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                            GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                            const GALGAS_omnibusType constinArgument_inTargetType,
                                                            const GALGAS_string constinArgument_inTargetLLVMName,
                                                            const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                            const GALGAS_location /* constinArgument_inErrorLocation */,
                                                            const GALGAS_bool constinArgument_inTargetIsInitialized,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_targetTypeName_21703 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 455)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inTargetIsInitialized.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_dynamicArrayTypeAssignUsage temp_1 = this ;
      GALGAS_string var_s_21788 = GALGAS_string (" call void  @").add_operation (temp_1.readProperty_mAssignFunctionName ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 457)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 457)).add_operation (var_targetTypeName_21703, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 458)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 458)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 458)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 458)).add_operation (var_targetTypeName_21703, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 459)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 459)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 459)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 459)) ;
      {
      GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dynamic-array.galgas", 460)) ;
      const GALGAS_dynamicArrayTypeAssignUsage temp_3 = this ;
      temp_2.addAssign_operation (temp_3.readProperty_mAssignFunctionName ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 460)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_21788, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 460)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_objectIR var_sourceValue_22159 = constinArgument_inSourcePossibleReference ;
    {
    extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_22159, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)) ;
    }
    GALGAS_string var_s_22289 = GALGAS_string ("store ").add_operation (var_targetTypeName_21703, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 464)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 464)).add_operation (extensionGetter_llvmName (var_sourceValue_22159, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 464)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 464)).add_operation (var_targetTypeName_21703, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 464)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 464)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 464)) ;
    {
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_22289, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dynamic-array.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 465)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynamicArrayTypeAssignGenericFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignGenericFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                              const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                              GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.setter_setMNeedsDynamicMemoryAllocation (GALGAS_bool (true) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 481)) ;
  const GALGAS_dynamicArrayTypeAssignGenericFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 483)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype * %inTargetPtr, %ptrtype* %inSourcePtr) nounwind optsize {\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 484)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source = load %ptrtype, %ptrtype* %inSourcePtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 485)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (%ptrtype %source)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 486)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target = load %ptrtype, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 487)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (%ptrtype %target)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 488)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %source, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 489)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 490)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 491)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_enumerationDeclarationAST temp_0 = this ;
  const GALGAS_enumerationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mEnumerationName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 53)) ;
  }
  GALGAS_bigint var_maxValue_2402 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 55)) ;
  const GALGAS_enumerationDeclarationAST temp_2 = this ;
  cEnumerator_enumerationConstantList enumerator_2424 (temp_2.readProperty_mCaseNameList (), kENUMERATION_UP) ;
  while (enumerator_2424.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictInf, var_maxValue_2402.objectCompare (enumerator_2424.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_maxValue_2402 = enumerator_2424.current_mConstantValue (HERE) ;
      }
    }
    enumerator_2424.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_2534 = GALGAS_uint (uint32_t (0U)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).isValid ()) {
    uint32_t variant_2563 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).uintValue () ;
    bool loop_2563 = true ;
    while (loop_2563) {
      loop_2563 = GALGAS_bool (kIsStrictSup, var_maxValue_2402.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).isValid () ;
      if (loop_2563) {
        loop_2563 = GALGAS_bool (kIsStrictSup, var_maxValue_2402.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).boolValue () ;
      }
      if (loop_2563 && (0 == variant_2563)) {
        loop_2563 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)) ;
      }
      if (loop_2563) {
        variant_2563 -- ;
        var_representationBitCount_2534.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 63)) ;
        var_maxValue_2402 = var_maxValue_2402.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)) ;
      }
    }
  }
  {
  const GALGAS_enumerationDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mEnumerationName (), GALGAS_string ("u").add_operation (var_representationBitCount_2534.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_enumerationDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_enumerationDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mEnumerationName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_enumerationDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_enumerationDeclarationAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("enum ").add_operation (temp_0.readProperty_mEnumerationName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumerationDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                            GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                            GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                            GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                            GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                            GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                            GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                            GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap var_enumConstantMap_4322 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 96)) ;
  GALGAS_bigint var_maxValue_4357 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 97)) ;
  const GALGAS_enumerationDeclarationAST temp_0 = this ;
  cEnumerator_enumerationConstantList enumerator_4382 (temp_0.readProperty_mCaseNameList (), kENUMERATION_UP) ;
  while (enumerator_4382.hasCurrentObject ()) {
    {
    const GALGAS_enumerationDeclarationAST temp_1 = this ;
    var_enumConstantMap_4322.setter_insertKey (enumerator_4382.current_mConstantName (HERE), enumerator_4382.current_mConstantValue (HERE), temp_1.readProperty_mEnumerationName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 99)) ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictInf, var_maxValue_4357.objectCompare (enumerator_4382.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_maxValue_4357 = enumerator_4382.current_mConstantValue (HERE) ;
      }
    }
    enumerator_4382.gotoNextObject () ;
  }
  {
  const GALGAS_enumerationDeclarationAST temp_3 = this ;
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (temp_3.readProperty_mEnumerationName (), var_enumConstantMap_4322, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 104)) ;
  }
  GALGAS_uint var_representationBitCount_4707 = GALGAS_uint (uint32_t (0U)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)).isValid ()) {
    uint32_t variant_4736 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)).uintValue () ;
    bool loop_4736 = true ;
    while (loop_4736) {
      loop_4736 = GALGAS_bool (kIsStrictSup, var_maxValue_4357.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)))).isValid () ;
      if (loop_4736) {
        loop_4736 = GALGAS_bool (kIsStrictSup, var_maxValue_4357.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)))).boolValue () ;
      }
      if (loop_4736 && (0 == variant_4736)) {
        loop_4736 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)) ;
      }
      if (loop_4736) {
        variant_4736 -- ;
        var_representationBitCount_4707.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 111)) ;
        var_maxValue_4357 = var_maxValue_4357.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)) ;
      }
    }
  }
  const GALGAS_enumerationDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_integerTypeProxy_4902 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_representationBitCount_4707.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 116)), temp_4.readProperty_mEnumerationName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 115)) ;
  GALGAS_lstring var_conversionToUIntN_5342 ;
  {
  const GALGAS_enumerationDeclarationAST temp_5 = this ;
  const GALGAS_enumerationDeclarationAST temp_6 = this ;
  const GALGAS_enumerationDeclarationAST temp_7 = this ;
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, temp_5.readProperty_mEnumerationName (), temp_6.readProperty_mEnumerationName ().readProperty_string (), GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_representationBitCount_4707.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 121)), temp_7.readProperty_mEnumerationName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 121)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-enumeration-declaration.galgas", 122)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-enumeration-declaration.galgas", 123)), var_integerTypeProxy_4902, var_conversionToUIntN_5342, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 118)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_enumToUintRoutineIR::constructor_new (var_conversionToUIntN_5342, GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("i").add_operation (var_representationBitCount_4707.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 131))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 127))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 127)) ;
  const GALGAS_enumerationDeclarationAST temp_8 = this ;
  const GALGAS_enumerationDeclarationAST temp_9 = this ;
  GALGAS_omnibusType var_enumerationType_5608 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-enumeration-declaration.galgas", 135)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-enumeration-declaration.galgas", 136)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-enumeration-declaration.galgas", 136)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)), temp_8.readProperty_mEnumerationName ().readProperty_string (), GALGAS_typeKind::constructor_enumeration (var_representationBitCount_4707  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 138)), temp_9.readProperty_mEnumerationName ().readProperty_string ()  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 134)) ;
  {
  const GALGAS_enumerationDeclarationAST temp_10 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_10.readProperty_mEnumerationName (), var_enumerationType_5608, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 141)) ;
  }
  const GALGAS_enumerationDeclarationAST temp_11 = this ;
  GALGAS_lstring var_key_5995 = function_assignmentOperatorKey (var_enumerationType_5608, temp_11.readProperty_mEnumerationName ().readProperty_location (), var_enumerationType_5608, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 143)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_5995, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-enumeration-declaration.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 144)) ;
  }
  GALGAS_omnibusType var_boolType_6313 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 147)) ;
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("type-enumeration-declaration.galgas", 149)), var_enumerationType_5608, GALGAS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6313, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 149)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("type-enumeration-declaration.galgas", 152)), var_enumerationType_5608, GALGAS_string ("icmp ule"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6313, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 151)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("type-enumeration-declaration.galgas", 160)), var_enumerationType_5608, GALGAS_string ("icmp ult"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6313, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 159)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumToUintRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumToUintRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                          const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumToUintRoutineIR temp_0 = this ;
  GALGAS_string var_routineLLVMName_8369 = function_llvmNameForFunction (temp_0.readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 208)) ;
  const GALGAS_enumToUintRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (temp_1.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)).add_operation (var_routineLLVMName_8369, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)) ;
  const GALGAS_enumToUintRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (temp_2.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)).add_operation (GALGAS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)) ;
  const GALGAS_enumToUintRoutineIR temp_3 = this ;
  const GALGAS_enumToUintRoutineIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %r = load ").add_operation (temp_3.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (temp_4.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)) ;
  const GALGAS_enumToUintRoutineIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (temp_5.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)).add_operation (GALGAS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 213)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structureDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_structureDeclarationAST temp_0 = this ;
  const GALGAS_structureDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mReceiverTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 273)) ;
  }
  const GALGAS_structureDeclarationAST temp_2 = this ;
  cEnumerator_structurePropertyListAST enumerator_9501 (temp_2.readProperty_mStructurePropertyListAST (), kENUMERATION_UP) ;
  while (enumerator_9501.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, enumerator_9501.current_mPropertyTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        const GALGAS_structureDeclarationAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mReceiverTypeName (), enumerator_9501.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 277)) ;
        }
      }
    }
    switch (enumerator_9501.current_mPropertyKind (HERE).enumValue ()) {
    case GALGAS_propertyKindAST::kNotBuilt:
      break ;
    case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
      {
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_9904 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (enumerator_9501.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_9794_initExpression = extractPtr_9904->mAssociatedValue0 ;
        const GALGAS_structureDeclarationAST temp_5 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_9794_initExpression.ptr (), temp_5.readProperty_mReceiverTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_10054 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (enumerator_9501.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_9944_initExpression = extractPtr_10054->mAssociatedValue0 ;
        const GALGAS_structureDeclarationAST temp_6 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_9944_initExpression.ptr (), temp_6.readProperty_mReceiverTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_10186 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (enumerator_9501.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_10091_instructionList = extractPtr_10186->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_10091_instructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 286)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_10325 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (enumerator_9501.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_10220_writeInstructionList = extractPtr_10325->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_10220_writeInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 288)) ;
      }
      break ;
    }
    enumerator_9501.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_structureDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_structureDeclarationAST temp_0 = this ;
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string () ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structureDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_structureDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_structureDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mReceiverTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structureDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                          GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                          GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                          GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                          GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList var_propertyList_21225 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 556)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_21315 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 558)) ;
  GALGAS_constructorSignature var_constructorSignature_21368 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 559)) ;
  GALGAS_string var_constructorKey_21408 = GALGAS_string ("(") ;
  GALGAS_bool var_canBeCopied_21435 = GALGAS_bool (true) ;
  const GALGAS_structureDeclarationAST temp_0 = this ;
  cEnumerator_structurePropertyListAST enumerator_21477 (temp_0.readProperty_mStructurePropertyListAST (), kENUMERATION_UP) ;
  while (enumerator_21477.hasCurrentObject ()) {
    const GALGAS_structureDeclarationAST temp_1 = this ;
    const GALGAS_structureDeclarationAST temp_2 = this ;
    const GALGAS_structureDeclarationAST temp_3 = this ;
    extensionMethod_enterPropertyInContext (enumerator_21477.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_1.readProperty_mReceiverTypeName (), temp_2.readProperty_mOmnibusTypeSpecificName (), temp_3.readProperty_mLLVMBaseTypeName ().readProperty_string (), ioArgument_ioDecoratedRoutineList, var_propertyList_21225, var_sortedOperandIRList_21315, var_constructorSignature_21368, var_constructorKey_21408, var_canBeCopied_21435, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 563)) ;
    enumerator_21477.gotoNextObject () ;
  }
  var_constructorKey_21408.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 578)) ;
  GALGAS_constructorMap var_constructorMap_22063 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 580)) ;
  {
  const GALGAS_structureDeclarationAST temp_4 = this ;
  var_constructorMap_22063.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_21408, temp_4.readProperty_mReceiverTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 582)), var_constructorSignature_21368, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_21315  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 581)) ;
  }
  {
  const GALGAS_structureDeclarationAST temp_5 = this ;
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_5.readProperty_mOmnibusTypeSpecificName (), var_constructorMap_22063, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 586)) ;
  }
  GALGAS_omnibusTypeAttributes var_typeAttributes_22435 = GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 588)) ;
  const GALGAS_structureDeclarationAST temp_6 = this ;
  cEnumerator_lstringlist enumerator_22565 (temp_6.readProperty_mAttributeListAST (), kENUMERATION_UP) ;
  while (enumerator_22565.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsEqual, enumerator_22565.current_mValue (HERE).readProperty_string ().objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 591)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_typeAttributes_22435.getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 592)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_22565.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray9  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 593)) ;
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = var_canBeCopied_21435.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 594)).boolEnum () ;
            if (kBoolTrue == test_10) {
              const GALGAS_structureDeclarationAST temp_11 = this ;
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (temp_11.readProperty_mReceiverTypeName ().readProperty_location (), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray12  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 595)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_7) {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (enumerator_22565.current_mValue (HERE).readProperty_location (), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 598)) ;
    }
    enumerator_22565.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_structureDeclarationAST temp_15 = this ;
    test_14 = temp_15.readProperty_mGenerateAssignmentRoutine ().operator_and (var_canBeCopied_21435 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 601)).boolEnum () ;
    if (kBoolTrue == test_14) {
      var_typeAttributes_22435 = var_typeAttributes_22435.operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 602)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 602)) ;
    }
  }
  const GALGAS_structureDeclarationAST temp_16 = this ;
  const GALGAS_structureDeclarationAST temp_17 = this ;
  GALGAS_omnibusType var_structureType_23124 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-structure-declaration.galgas", 606)), var_typeAttributes_22435, temp_16.readProperty_mOmnibusTypeSpecificName ().readProperty_string (), GALGAS_typeKind::constructor_structure (var_propertyList_21225  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 609)), temp_17.readProperty_mLLVMBaseTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 605)) ;
  {
  const GALGAS_structureDeclarationAST temp_18 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_18.readProperty_mReceiverTypeName (), var_structureType_23124, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 612)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_23124.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 618)), var_propertyList_21225  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 617))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 617)) ;
  GALGAS_string var_assignmentFunctionLLVMName_23761 = function_assignmentOperatorFuncName (var_structureType_23124, var_structureType_23124, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 623)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_structureTypeAssignFunctionIR::constructor_new (var_assignmentFunctionLLVMName_23761.getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 625)), GALGAS_bool (false), GALGAS_bool (false), var_structureType_23124  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 624))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 624)) ;
  GALGAS_lstring var_key_24059 = function_assignmentOperatorKey (var_structureType_23124, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 631)), var_structureType_23124, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 631)) ;
  GALGAS_structureAssignmentOperatorUsage var_operatorUsage_24135 = GALGAS_structureAssignmentOperatorUsage::constructor_new (var_structureType_23124  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 632)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_24059, var_operatorUsage_24135, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 633)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@userLLVMSructureTypeDefinitionIR generateLLVMType'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_userLLVMSructureTypeDefinitionIR::method_generateLLVMType (GALGAS_string & ioArgument_ioLLVMcode,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_userLLVMSructureTypeDefinitionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0.readProperty_mLLVMDefinedTypeName ().add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 647)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 647)) ;
  const GALGAS_userLLVMSructureTypeDefinitionIR temp_1 = this ;
  cEnumerator_propertyList enumerator_24944 (temp_1.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_24944.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24944.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 649)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 649)) ;
    if (enumerator_24944.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 650)) ;
    }
    enumerator_24944.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 652)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureAssignmentOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structureAssignmentOperatorUsage::method_generateCode (GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                 GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 const GALGAS_omnibusType constinArgument_inTargetType,
                                                                 const GALGAS_string constinArgument_inTargetLLVMName,
                                                                 const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                                 const GALGAS_location constinArgument_inErrorLocation,
                                                                 const GALGAS_bool constinArgument_inTargetIsInitialized,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_structTypeName_25882 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 674)) ;
  GALGAS_arcAssignmentList var_arcAssignmentList_25933 = callExtensionGetter_arcList ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 675)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inTargetIsInitialized.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 676)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_arcAssignmentList enumerator_26050 (var_arcAssignmentList_25933, kENUMERATION_UP) ;
      while (enumerator_26050.hasCurrentObject ()) {
        GALGAS_string var_llvmPropertyPtrName_26096 = GALGAS_string ("%arc.init.").add_operation (constinArgument_inErrorLocation.getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 678)).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 678)) ;
        GALGAS_string var_s_26175 = GALGAS_string ("  ").add_operation (var_llvmPropertyPtrName_26096, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 679)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 679)).add_operation (var_structTypeName_25882, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 679)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 679)).add_operation (var_structTypeName_25882, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 679)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 679)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 679)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 679)) ;
        cEnumerator_uintlist enumerator_26327 (enumerator_26050.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
        while (enumerator_26327.hasCurrentObject ()) {
          var_s_26175.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_26327.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 681)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)) ;
          enumerator_26327.gotoNextObject () ;
        }
        var_s_26175.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_26050.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_26175, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 684)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 684)) ;
        }
        GALGAS_string var_propertyTypeLLVMName_26502 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_26050.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)) ;
        var_s_26175 = GALGAS_string ("store ").add_operation (var_propertyTypeLLVMName_26502, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)).add_operation (GALGAS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)).add_operation (var_propertyTypeLLVMName_26502, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)).add_operation (var_llvmPropertyPtrName_26096, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_26175, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 687)) ;
        }
        enumerator_26050.gotoNextObject () ;
      }
    }
  }
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «llvmArrayRepeatedDynamicValue»"), fixItArray1  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 692)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «llvmArrayDynamicValues»"), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 694)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «llvmArrayStaticValues»"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 696)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_27619 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_uint extractedValue_27197_idx = extractPtr_27619->mAssociatedValue3 ;
      GALGAS_string var_assignmentFunctionLLVMName_27212 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 698)) ;
      GALGAS_string var_s_27307 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_27212.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 699)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 699)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 700)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 700)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 700)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 700)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 700)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (GALGAS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (extractedValue_27197_idx.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)) ;
      {
      GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 702)) ;
      temp_4.addAssign_operation (var_assignmentFunctionLLVMName_27212  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27307, temp_4, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      GALGAS_string var_assignmentFunctionLLVMName_27653 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      GALGAS_string var_s_27747 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_27653.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 705)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 705)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 706)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 706)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 706)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 706)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)) ;
      {
      GALGAS_stringset temp_5 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 708)) ;
      temp_5.addAssign_operation (var_assignmentFunctionLLVMName_27653  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27747, temp_5, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureValue * extractPtr_28716 = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_28115_sortedOperandValues = extractPtr_28716->mAssociatedValue1 ;
      GALGAS_uint var_uniqueValue_28146 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 711)) ;
      cEnumerator_sortedOperandIRList enumerator_28246 (extractedValue_28115_sortedOperandValues, kENUMERATION_UP) ;
      while (enumerator_28246.hasCurrentObject ()) {
        GALGAS_string var_ptr_28287 = GALGAS_string ("%ptr.").add_operation (var_uniqueValue_28146.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)).add_operation (enumerator_28246.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)) ;
        GALGAS_string var_s_28337 = var_ptr_28287.add_operation (GALGAS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)).add_operation (var_structTypeName_25882, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)).add_operation (var_structTypeName_25882, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)).add_operation (enumerator_28246.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_28337, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)) ;
        }
        var_s_28337 = GALGAS_string ("store ").add_operation (extensionGetter_llvmTypeName (enumerator_28246.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (extensionGetter_llvmName (enumerator_28246.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (extensionGetter_llvmTypeName (enumerator_28246.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (var_ptr_28287, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_28337, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)) ;
        }
        enumerator_28246.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «literalInteger»"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 720)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «literalString»"), fixItArray7  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 722)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «llvmArrayStaticValues»"), fixItArray8  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 724)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «llvmValue»"), fixItArray9  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 726)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «void»"), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 728)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment «zero»"), fixItArray11  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 730)) ;
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureTypeAssignFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structureTypeAssignFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structureTypeAssignFunctionIR temp_0 = this ;
  GALGAS_arcAssignmentList var_arcAssignmentList_29840 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_0.readProperty_mStructureType ().ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 747)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 747)) ;
  const GALGAS_structureTypeAssignFunctionIR temp_1 = this ;
  GALGAS_string var_structureTypeLLVMTypeName_29900 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mStructureType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 748)) ;
  const GALGAS_structureTypeAssignFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 749)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 749)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_structureTypeLLVMTypeName_29900.add_operation (GALGAS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)) ;
  cEnumerator_arcAssignmentList enumerator_30285 (var_arcAssignmentList_29840, kENUMERATION_UP) ;
  while (enumerator_30285.hasCurrentObject ()) {
    GALGAS_string var_propertyTypeLLVMName_30328 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_30285.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 754)) ;
    GALGAS_string var_llvmVarName_30387 = GALGAS_string ("%arc.retain.").add_operation (enumerator_30285.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 755)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 755)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 755)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 755)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_30387, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)).add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)).add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)).add_operation (GALGAS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)) ;
    cEnumerator_uintlist enumerator_30691 (enumerator_30285.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_30691.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_30691.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 759)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)) ;
      enumerator_30691.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_30285.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)) ;
    GALGAS_string var_llvmLoadedVarName_30809 = var_llvmVarName_30387.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_30809, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)).add_operation (var_propertyTypeLLVMName_30328, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)).add_operation (var_propertyTypeLLVMName_30328, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)).add_operation (var_llvmVarName_30387, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_30328, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)).add_operation (var_llvmLoadedVarName_30809, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)) ;
    enumerator_30285.gotoNextObject () ;
  }
  cEnumerator_arcAssignmentList enumerator_31134 (var_arcAssignmentList_29840, kENUMERATION_UP) ;
  while (enumerator_31134.hasCurrentObject ()) {
    GALGAS_string var_llvmVarName_31177 = GALGAS_string ("%arc.release.").add_operation (enumerator_31134.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 768)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_31177, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)).add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)).add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)).add_operation (GALGAS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)) ;
    cEnumerator_uintlist enumerator_31482 (enumerator_31134.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_31482.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_31482.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 771)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)) ;
      enumerator_31482.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_31134.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 773)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 773)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 773)) ;
    GALGAS_string var_propertyTypeLLVMName_31600 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_31134.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)) ;
    GALGAS_string var_llvmLoadedVarName_31659 = var_llvmVarName_31177.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_31659, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)).add_operation (var_propertyTypeLLVMName_31600, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)).add_operation (var_propertyTypeLLVMName_31600, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)).add_operation (var_llvmVarName_31177, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_31600, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)).add_operation (var_llvmLoadedVarName_31659, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)) ;
    enumerator_31134.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)).add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 785)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %v = load ").add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)).add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)).add_operation (GALGAS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)).add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)).add_operation (GALGAS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 791)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 792)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 793)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 794)).add_operation (GALGAS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 794)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 794)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 795)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 797)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 798)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 799)).add_operation (GALGAS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 799)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 800)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 802)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 803)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 804)).add_operation (GALGAS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 804)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 804)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 805)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 805)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 805)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %temp = add i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 808)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 809)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 810)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 811)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 812)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 813)).add_operation (GALGAS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 813)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 813)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29900, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 814)).add_operation (GALGAS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 814)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 814)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 817)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 818)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 819)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_syncDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_syncDeclarationAST temp_0 = this ;
  const GALGAS_syncDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mSyncToolName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 50)) ;
  }
  const GALGAS_syncDeclarationAST temp_2 = this ;
  cEnumerator_structurePropertyListAST enumerator_2429 (temp_2.readProperty_mStructurePropertyListAST (), kENUMERATION_UP) ;
  while (enumerator_2429.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, enumerator_2429.current_mPropertyTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        const GALGAS_syncDeclarationAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mSyncToolName (), enumerator_2429.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 54)) ;
        }
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, enumerator_2429.current_mVisibility (HERE).objectCompare (GALGAS_propertyVisibility::constructor_isPrivate (SOURCE_FILE ("type-sync-declaration.galgas", 56)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_2429.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("a sync tool property should be private"), fixItArray6  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 57)) ;
      }
    }
    switch (enumerator_2429.current_mPropertyKind (HERE).enumValue ()) {
    case GALGAS_propertyKindAST::kNotBuilt:
      break ;
    case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
      {
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_2937 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (enumerator_2429.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_2831_initExpression = extractPtr_2937->mAssociatedValue0 ;
        const GALGAS_syncDeclarationAST temp_7 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2831_initExpression.ptr (), temp_7.readProperty_mSyncToolName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 62)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_3083 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (enumerator_2429.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_2977_initExpression = extractPtr_3083->mAssociatedValue0 ;
        const GALGAS_syncDeclarationAST temp_8 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2977_initExpression.ptr (), temp_8.readProperty_mSyncToolName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 64)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_3215 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (enumerator_2429.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_3120_instructionList = extractPtr_3215->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_3120_instructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 66)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_3354 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (enumerator_2429.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_3249_writeInstructionList = extractPtr_3354->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_3249_writeInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 68)) ;
      }
      break ;
    }
    enumerator_2429.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_syncDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_syncDeclarationAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("sync ").add_operation (temp_0.readProperty_mSyncToolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 76)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_syncDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_syncDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mSyncToolName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_syncDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                     GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                     GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                     GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                     GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                     GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList var_propertyList_4913 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 100)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_5003 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-sync-declaration.galgas", 102)) ;
  GALGAS_constructorSignature var_constructorSignature_5056 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 103)) ;
  GALGAS_string var_constructorKey_5096 = GALGAS_string ("(") ;
  const GALGAS_syncDeclarationAST temp_0 = this ;
  cEnumerator_structurePropertyListAST enumerator_5140 (temp_0.readProperty_mStructurePropertyListAST (), kENUMERATION_UP) ;
  while (enumerator_5140.hasCurrentObject ()) {
    GALGAS_bool joker_5578 = GALGAS_bool::constructor_default (SOURCE_FILE ("type-sync-declaration.galgas", 118)) ;
    const GALGAS_syncDeclarationAST temp_1 = this ;
    const GALGAS_syncDeclarationAST temp_2 = this ;
    const GALGAS_syncDeclarationAST temp_3 = this ;
    extensionMethod_enterPropertyInContext (enumerator_5140.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_1.readProperty_mSyncToolName (), temp_2.readProperty_mSyncToolName (), temp_3.readProperty_mSyncToolName ().readProperty_string (), ioArgument_ioDecoratedRoutineList, var_propertyList_4913, var_sortedOperandIRList_5003, var_constructorSignature_5056, var_constructorKey_5096, joker_5578, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 106)) ;
    enumerator_5140.gotoNextObject () ;
  }
  var_constructorKey_5096.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 121)) ;
  GALGAS_constructorMap var_constructorMap_5698 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 123)) ;
  {
  const GALGAS_syncDeclarationAST temp_4 = this ;
  var_constructorMap_5698.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_5096, temp_4.readProperty_mSyncToolName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 125)), var_constructorSignature_5056, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_5003  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 124)) ;
  }
  {
  const GALGAS_syncDeclarationAST temp_5 = this ;
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_5.readProperty_mSyncToolName (), var_constructorMap_5698, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 129)) ;
  }
  const GALGAS_syncDeclarationAST temp_6 = this ;
  const GALGAS_syncDeclarationAST temp_7 = this ;
  GALGAS_omnibusType var_structureType_6040 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-sync-declaration.galgas", 132)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-sync-declaration.galgas", 133)), temp_6.readProperty_mSyncToolName ().readProperty_string (), GALGAS_typeKind::constructor_syncTool (SOURCE_FILE ("type-sync-declaration.galgas", 135)), temp_7.readProperty_mSyncToolName ().readProperty_string ()  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 131)) ;
  {
  const GALGAS_syncDeclarationAST temp_8 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_8.readProperty_mSyncToolName (), var_structureType_6040, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 138)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_6040.ptr (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 141)), var_propertyList_4913  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 140))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 140)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@integerDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_integerDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_integerDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_integerDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nodeName_1448 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 29)) ;
  {
  const GALGAS_integerDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1448, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 30)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1448, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 31)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 31)) COMMA_SOURCE_FILE ("type-integer.galgas", 31)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1448, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 32)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 32)) COMMA_SOURCE_FILE ("type-integer.galgas", 32)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1448, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 33)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 33)) COMMA_SOURCE_FILE ("type-integer.galgas", 33)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@integerDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_integerDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_integerDeclarationAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 39)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'minValueForInteger'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_minValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 48)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 50)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_minValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_minValueForInteger (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_minValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_minValueForInteger ("minValueForInteger",
                                                                    functionWithGenericHeader_minValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_minValueForInteger) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'maxValueForInteger'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_maxValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)).left_shift_operation (constinArgument_inBitCount, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_maxValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_maxValueForInteger (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_maxValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_maxValueForInteger ("maxValueForInteger",
                                                                    functionWithGenericHeader_maxValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_maxValueForInteger) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_integerDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                        GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                        GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                        GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                        GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                        GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_integerDeclarationAST temp_0 = this ;
  GALGAS_lstring var_integerTypeName_3816 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 78)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 78)) ;
  GALGAS_unifiedTypeMapEntry var_selfTypeProxy_3916 ;
  {
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3816, var_selfTypeProxy_3916, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 79)) ;
  }
  const GALGAS_integerDeclarationAST temp_1 = this ;
  const GALGAS_integerDeclarationAST temp_2 = this ;
  GALGAS_bigint var_min_3994 = function_minValueForInteger (temp_1.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 81)), temp_2.readProperty_mSize (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 81)) ;
  const GALGAS_integerDeclarationAST temp_3 = this ;
  const GALGAS_integerDeclarationAST temp_4 = this ;
  GALGAS_bigint var_max_4059 = function_maxValueForInteger (temp_3.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 82)), temp_4.readProperty_mSize (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 82)) ;
  const GALGAS_integerDeclarationAST temp_5 = this ;
  GALGAS_string var_llvmTypeName_4178 = GALGAS_string ("i").add_operation (temp_5.readProperty_mSize ().getter_string (SOURCE_FILE ("type-integer.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 84)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_integerDeclarationAST temp_7 = this ;
    test_6 = GALGAS_bool (kIsEqual, temp_7.readProperty_mSize ().modulo_operation (GALGAS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 86)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_lstring var_routineLLVMName_4584 ;
      {
      extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3816, var_integerTypeName_3816.readProperty_string (), GALGAS_string ("byteSwapped").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 90)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 91)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-integer.galgas", 92)), var_selfTypeProxy_3916, var_routineLLVMName_4584, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 87)) ;
      }
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_4584, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4178, GALGAS_string ("bswap")  COMMA_SOURCE_FILE ("type-integer.galgas", 96))  COMMA_SOURCE_FILE ("type-integer.galgas", 96)) ;
    }
  }
  GALGAS_lstring var_routineLLVMName_5666 ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3816, var_integerTypeName_3816.readProperty_string (), GALGAS_string ("bitReversed").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 125)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 126)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-integer.galgas", 127)), var_selfTypeProxy_3916, var_routineLLVMName_5666, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 122)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5666, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4178, GALGAS_string ("bitreverse")  COMMA_SOURCE_FILE ("type-integer.galgas", 131))  COMMA_SOURCE_FILE ("type-integer.galgas", 131)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3816, var_integerTypeName_3816.readProperty_string (), GALGAS_string ("leadingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 142)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 143)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-integer.galgas", 144)), var_selfTypeProxy_3916, var_routineLLVMName_5666, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 139)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5666, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4178, GALGAS_string ("ctlz")  COMMA_SOURCE_FILE ("type-integer.galgas", 148))  COMMA_SOURCE_FILE ("type-integer.galgas", 148)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3816, var_integerTypeName_3816.readProperty_string (), GALGAS_string ("trainingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 159)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 160)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-integer.galgas", 161)), var_selfTypeProxy_3916, var_routineLLVMName_5666, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 156)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5666, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4178, GALGAS_string ("cttz")  COMMA_SOURCE_FILE ("type-integer.galgas", 165))  COMMA_SOURCE_FILE ("type-integer.galgas", 165)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3816, var_integerTypeName_3816.readProperty_string (), GALGAS_string ("setBitCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 176)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 177)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-integer.galgas", 178)), var_selfTypeProxy_3916, var_routineLLVMName_5666, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 173)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5666, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4178, GALGAS_string ("ctpop")  COMMA_SOURCE_FILE ("type-integer.galgas", 182))  COMMA_SOURCE_FILE ("type-integer.galgas", 182)) ;
  GALGAS_constantMap var_constantMap_7446 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 190)) ;
  {
  var_constantMap_7446.setter_insertKey (GALGAS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 191)), var_min_3994, var_integerTypeName_3816, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 191)) ;
  }
  {
  var_constantMap_7446.setter_insertKey (GALGAS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 192)), var_max_4059, var_integerTypeName_3816, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 192)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (var_integerTypeName_3816, var_constantMap_7446, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 193)) ;
  }
  GALGAS_constructorMap var_constructorMap_7760 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 198)) ;
  {
  var_constructorMap_7760.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 199)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 199)), GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 199))  COMMA_SOURCE_FILE ("type-integer.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 199)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_integerTypeName_3816, var_constructorMap_7760, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 200)) ;
  }
  const GALGAS_integerDeclarationAST temp_8 = this ;
  const GALGAS_integerDeclarationAST temp_9 = this ;
  GALGAS_omnibusType var_integerType_7996 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-integer.galgas", 203)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-integer.galgas", 204)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-integer.galgas", 204)) COMMA_SOURCE_FILE ("type-integer.galgas", 204)), var_integerTypeName_3816.readProperty_string (), GALGAS_typeKind::constructor_integer (var_min_3994, var_max_4059, temp_8.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 206)), temp_9.readProperty_mSize ()  COMMA_SOURCE_FILE ("type-integer.galgas", 206)), var_integerTypeName_3816.readProperty_string ()  COMMA_SOURCE_FILE ("type-integer.galgas", 202)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3816, var_integerType_7996, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 209)) ;
  }
  GALGAS_lstring var_key_9023 = function_assignmentOperatorKey (var_integerType_7996, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 229)), var_integerType_7996, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 229)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_9023, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-integer.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 230)) ;
  }
  var_key_9023 = function_assignmentOperatorKey (var_integerType_7996, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 231)), function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 231)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_9023, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-integer.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 232)) ;
  }
  GALGAS_string var_functionName_9419 = function_assignmentOperatorFuncName (var_integerType_7996, var_integerType_7996, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 234)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_simpleAssignmentCopyRoutineIR::constructor_new (var_functionName_9419.getter_nowhere (SOURCE_FILE ("type-integer.galgas", 236)), GALGAS_bool (false), GALGAS_bool (false), var_integerType_7996  COMMA_SOURCE_FILE ("type-integer.galgas", 235))  COMMA_SOURCE_FILE ("type-integer.galgas", 235)) ;
  GALGAS_omnibusType var_boolType_9725 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 242)) ;
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("type-integer.galgas", 244)), var_integerType_7996, GALGAS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9725, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 244)) ;
  }
  {
  const GALGAS_integerDeclarationAST temp_10 = this ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.readProperty_mIsSigned ().boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_string ("icmp sle") ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string ("icmp ule") ;
  }
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("type-integer.galgas", 247)), var_integerType_7996, temp_11, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9725, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 246)) ;
  }
  {
  const GALGAS_integerDeclarationAST temp_13 = this ;
  GALGAS_string temp_14 ;
  const enumGalgasBool test_15 = temp_13.readProperty_mIsSigned ().boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_string ("icmp slt") ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_string ("icmp ult") ;
  }
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("type-integer.galgas", 255)), var_integerType_7996, temp_14, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9725, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 254)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_leftShiftOp (SOURCE_FILE ("type-integer.galgas", 262)), var_integerType_7996, GALGAS_string ("shl"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7996, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 262)) ;
  }
  {
  const GALGAS_integerDeclarationAST temp_16 = this ;
  GALGAS_string temp_17 ;
  const enumGalgasBool test_18 = temp_16.readProperty_mIsSigned ().boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_string ("ashr") ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_string ("lshr") ;
  }
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_rightShiftOp (SOURCE_FILE ("type-integer.galgas", 265)), var_integerType_7996, temp_17, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7996, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 264)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("type-integer.galgas", 272)), var_integerType_7996, GALGAS_string ("or"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7996, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 272)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_bitWiseAndOp (SOURCE_FILE ("type-integer.galgas", 274)), var_integerType_7996, GALGAS_string ("and"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7996, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 274)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("type-integer.galgas", 276)), var_integerType_7996, GALGAS_string ("xor"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7996, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 276)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_addOpNoOvf (SOURCE_FILE ("type-integer.galgas", 278)), var_integerType_7996, GALGAS_string ("add"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7996, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 278)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_subOpNoOvf (SOURCE_FILE ("type-integer.galgas", 280)), var_integerType_7996, GALGAS_string ("sub"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7996, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 280)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_mulOpNoOvf (SOURCE_FILE ("type-integer.galgas", 282)), var_integerType_7996, GALGAS_string ("mul"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7996, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 282)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addIntegerInfixOperator'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addIntegerInfixOperator (const GALGAS_omnibusInfixOperator constinArgument_inInfixOperator,
                                      const GALGAS_omnibusType constinArgument_inIntegerType,
                                      const GALGAS_string constinArgument_inLLVMOp,
                                      GALGAS_infixOperatorMap & ioArgument_ioInfixOperatorMap,
                                      const GALGAS_omnibusType constinArgument_inResultType,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_ctIntType_11746 = function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 294)) ;
  GALGAS_lstring var_key_11790 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 295)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 295)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11790, constinArgument_inResultType, GALGAS_inlineInfixOperatorUsage::constructor_new (constinArgument_inLLVMOp  COMMA_SOURCE_FILE ("type-integer.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 296)) ;
  }
  var_key_11790 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 297)), var_ctIntType_11746, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 297)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11790, constinArgument_inResultType, GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::constructor_new (constinArgument_inLLVMOp  COMMA_SOURCE_FILE ("type-integer.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 298)) ;
  }
  var_key_11790 = function_infixOperatorMapKey (var_ctIntType_11746, constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 299)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 299)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11790, constinArgument_inResultType, GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::constructor_new (constinArgument_inLLVMOp  COMMA_SOURCE_FILE ("type-integer.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 300)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inlineInfix_integer_compileTimeInt_operatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                          const GALGAS_location constinArgument_inOperatorLocation,
                                                                                          const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                          const GALGAS_omnibusType constinArgument_inResultType,
                                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GALGAS_objectIR & outArgument_outResultValue,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_minValue_13403 ;
  GALGAS_bigint var_maxValue_13422 ;
  GALGAS_bool joker_13431_2 ; // Joker input parameter
  GALGAS_uint joker_13431_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 324)).readProperty_kind ().method_integer (var_minValue_13403, var_maxValue_13422, joker_13431_2, joker_13431_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 324)) ;
  GALGAS_bigint var_value_13484 ;
  GALGAS_omnibusType joker_13469_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_13469_1, var_value_13484, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 325)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_value_13484.objectCompare (var_minValue_13403)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("right operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 329)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 328)).add_operation (GALGAS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 329)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 327)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_value_13484.objectCompare (var_maxValue_13422)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("right operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 333)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 332)).add_operation (GALGAS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 333)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 331)) ;
      }
    }
  }
  GALGAS_objectIR var_leftOperand_13943 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_13943, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 337)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 338)) ;
  }
  const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage temp_4 = this ;
  GALGAS_string var_s_14131 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (temp_4.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13943, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (extensionGetter_llvmName (var_leftOperand_13943, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)).add_operation (extensionGetter_llvmName (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_14131, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-integer.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 341)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inlineInfix_compileTimeInt_integer_operatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::method_generateCode (const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                          const GALGAS_location constinArgument_inOperatorLocation,
                                                                                          const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                          const GALGAS_omnibusType constinArgument_inResultType,
                                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GALGAS_objectIR & outArgument_outResultValue,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_minValue_15402 ;
  GALGAS_bigint var_maxValue_15421 ;
  GALGAS_bool joker_15430_2 ; // Joker input parameter
  GALGAS_uint joker_15430_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)).readProperty_kind ().method_integer (var_minValue_15402, var_maxValue_15421, joker_15430_2, joker_15430_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)) ;
  GALGAS_bigint var_value_15482 ;
  GALGAS_omnibusType joker_15467_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_15467_1, var_value_15482, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 366)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_value_15482.objectCompare (var_minValue_15402)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("left operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)).add_operation (GALGAS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 368)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_value_15482.objectCompare (var_maxValue_15421)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("left operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 373)).add_operation (GALGAS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 372)) ;
      }
    }
  }
  GALGAS_objectIR var_rightOperand_15941 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_15941, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 378)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 379)) ;
  }
  const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage temp_4 = this ;
  GALGAS_string var_s_16132 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (temp_4.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_15941, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (extensionGetter_llvmName (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)).add_operation (extensionGetter_llvmName (var_rightOperand_15941, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_16132, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-integer.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 382)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerBuiltinFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_integerBuiltinFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_integerBuiltinFunctionIR temp_0 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (temp_0.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 401)) ;
  const GALGAS_integerBuiltinFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (temp_2.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 402)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 402)) ;
  const GALGAS_integerBuiltinFunctionIR temp_3 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (temp_3.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (temp_4.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 403)) ;
  const GALGAS_integerBuiltinFunctionIR temp_5 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_6 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (temp_5.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (temp_6.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (temp_7.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 404)) ;
  const GALGAS_integerBuiltinFunctionIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (temp_8.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)).add_operation (GALGAS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 405)) ;
  const GALGAS_integerBuiltinFunctionIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (temp_9.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 406)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 406)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 407)) ;
  const GALGAS_integerBuiltinFunctionIR temp_10 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_11 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_12 = this ;
  const GALGAS_integerBuiltinFunctionIR temp_13 = this ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (temp_10.readProperty_mLLVMTypeName ().add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_11.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_12.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_13.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409))  COMMA_SOURCE_FILE ("type-integer.galgas", 408)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@literalStringDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_literalStringDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-static-string.galgas", 11)) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalStringDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_literalStringTypeName_1162 = function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 21)) ;
  {
  const GALGAS_literalStringDeclarationAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1162, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1162, GALGAS_string ("u8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 23)) COMMA_SOURCE_FILE ("type-static-string.galgas", 23)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@literalStringDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_literalStringDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalStringDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                              GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_selfType_2626 = function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 47)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 49)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 49)), var_selfType_2626, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 48)) ;
  }
  GALGAS_lstring var_key_2793 = function_assignmentOperatorKey (var_selfType_2626, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-static-string.galgas", 53)), var_selfType_2626, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 53)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2793, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-static-string.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 54)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeOpaqueDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typeOpaqueDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_typeOpaqueDeclarationAST temp_0 = this ;
  const GALGAS_typeOpaqueDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mOpaqueTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 58)) ;
  }
  const GALGAS_typeOpaqueDeclarationAST temp_2 = this ;
  const GALGAS_typeOpaqueDeclarationAST temp_3 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_2.readProperty_mSizeExpression ().ptr (), temp_3.readProperty_mOpaqueTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 60)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeOpaqueDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typeOpaqueDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_typeOpaqueDeclarationAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("opaque ").add_operation (temp_0.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeOpaqueDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_typeOpaqueDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_typeOpaqueDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mOpaqueTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeOpaqueDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typeOpaqueDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                           GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                           GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                           GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                           GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                           GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                           GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                           GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusTypeAttributes var_opaqueTypeAttributes_4303 = GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 89)) ;
  GALGAS_bool var_copyable_4338 = GALGAS_bool (false) ;
  const GALGAS_typeOpaqueDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4362 (temp_0.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_4362.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, enumerator_4362.current_mValue (HERE).readProperty_string ().objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 92)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_opaqueTypeAttributes_4303.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 93)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4362.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 94)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_opaqueTypeAttributes_4303 = var_opaqueTypeAttributes_4303.operator_or (GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 96)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)) ;
        }
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_4362.current_mValue (HERE).readProperty_string ().objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 98)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_copyable_4338.boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_4362.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 100)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_copyable_4338 = GALGAS_bool (true) ;
            var_opaqueTypeAttributes_4303 = var_opaqueTypeAttributes_4303.operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 103)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 103)) ;
          }
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_4362.current_mValue (HERE).readProperty_location (), GALGAS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GALGAS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), fixItArray7  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)) ;
      }
    }
    enumerator_4362.gotoNextObject () ;
  }
  GALGAS_objectIR var_sizeExpressionIR_5324 ;
  {
  const GALGAS_typeOpaqueDeclarationAST temp_8 = this ;
  const GALGAS_typeOpaqueDeclarationAST temp_9 = this ;
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_8.readProperty_mSizeExpression (), temp_9.readProperty_mSizeExpressionLocation (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 117)), var_sizeExpressionIR_5324, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 112)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_sizeExpressionIR_5324.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_typeOpaqueDeclarationAST temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mSizeExpressionLocation (), GALGAS_string ("array size expression is not a literal integer"), fixItArray12  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_10) {
    GALGAS_constructorMap var_constructorMap_5516 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 123)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = var_opaqueTypeAttributes_4303.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 124)).boolEnum () ;
      if (kBoolTrue == test_13) {
        {
        var_constructorMap_5516.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
        }
        {
        const GALGAS_typeOpaqueDeclarationAST temp_14 = this ;
        ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_14.readProperty_mOpaqueTypeName (), var_constructorMap_5516, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126)) ;
        }
      }
    }
    GALGAS_bigint var_bitSize_5807 ;
    GALGAS_omnibusType joker_5792_1 ; // Joker input parameter
    var_sizeExpressionIR_5324.method_literalInteger (joker_5792_1, var_bitSize_5807, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)) ;
    const GALGAS_typeOpaqueDeclarationAST temp_15 = this ;
    const GALGAS_typeOpaqueDeclarationAST temp_16 = this ;
    GALGAS_omnibusType var_opaqueType_5824 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-opaque-declaration.galgas", 130)), var_opaqueTypeAttributes_4303, temp_15.readProperty_mOpaqueTypeName ().readProperty_string (), GALGAS_typeKind::constructor_opaque (var_bitSize_5807  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133)), temp_16.readProperty_mOpaqueTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 129)) ;
    {
    const GALGAS_typeOpaqueDeclarationAST temp_17 = this ;
    extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_17.readProperty_mOpaqueTypeName (), var_opaqueType_5824, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 136)) ;
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = var_copyable_4338.boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_typeOpaqueDeclarationAST temp_19 = this ;
      inCompiler->printMessage (GALGAS_string ("OPAQUE ").add_operation (temp_19.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)).add_operation (GALGAS_string (" is copyable\n"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@controlRegisterGroupDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_controlRegisterGroupDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = this ;
  result_outRepresentation = function_registerGroupNameFromOmnibusName (temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 305)).readProperty_string () ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@controlRegisterGroupDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_controlRegisterGroupDeclarationAST::getter_locationForErrorSignaling (C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 311)).readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterGroupDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nodeName_12620 = function_registerGroupNameFromOmnibusName (temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)) ;
  {
  const GALGAS_controlRegisterGroupDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_12620, temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)) ;
  }
  const GALGAS_controlRegisterGroupDeclarationAST temp_2 = this ;
  cEnumerator_controlRegisterDeclarationList enumerator_12824 (temp_2.readProperty_mRegisters (), kENUMERATION_UP) ;
  while (enumerator_12824.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12620, enumerator_12824.current (HERE).readProperty_mRegisterTypeName () COMMA_SOURCE_FILE ("declaration-control-register.galgas", 323)) ;
    }
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12620, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) ;
    }
    GALGAS_stringlist var_split_13087 = enumerator_12824.current (HERE).readProperty_mRegisterTypeName ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("u") COMMA_SOURCE_FILE ("declaration-control-register.galgas", 326)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_bool test_4 = GALGAS_bool (kIsEqual, var_split_13087.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GALGAS_uint (uint32_t (2U)))) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (kIsEqual, var_split_13087.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GALGAS_string::makeEmptyString ())) ;
      }
      GALGAS_bool test_5 = test_4 ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = var_split_13087.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas", 327)) ;
      }
      test_3 = test_5.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_uint var_n_13286 = var_split_13087.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsStrictSup, var_n_13286.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_lstring var_bitSizeTypeName_13371 = GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_n_13286.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)), enumerator_12824.current (HERE).readProperty_mRegisterTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)) ;
            {
            ioArgument_ioGraph.setter_addEdge (var_nodeName_12620, var_bitSizeTypeName_13371 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 331)) ;
            }
          }
        }
      }
    }
    cEnumerator_controlRegisterBitSliceList enumerator_13590 (enumerator_12824.current (HERE).readProperty_mRegisterBitSliceList (), kENUMERATION_UP) ;
    while (enumerator_13590.hasCurrentObject ()) {
      switch (enumerator_13590.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_13831 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_13590.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_13708_count = extractPtr_13831->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsSupOrEqual, extractedValue_13708_count.readProperty_bigint ().objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 339)))).boolEnum () ;
            if (kBoolTrue == test_7) {
              {
              extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_13708_count.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)), extractedValue_13708_count.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)) ;
              }
            }
          }
        }
        break ;
      }
      enumerator_13590.gotoNextObject () ;
    }
    GALGAS_lstring var_rootNode_13900 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 345)), var_nodeName_12620.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 345)) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12620, var_rootNode_13900 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 346)) ;
    }
    cEnumerator_controlRegisterNameListAST enumerator_14103 (enumerator_12824.current (HERE).readProperty_mRegisterArrayList (), kENUMERATION_UP) ;
    while (enumerator_14103.hasCurrentObject ()) {
      switch (enumerator_14103.current (HERE).readProperty_mControlRegisterKind ().enumValue ()) {
      case GALGAS_controlRegisterKind::kNotBuilt:
        break ;
      case GALGAS_controlRegisterKind::kEnum_scalar:
        {
        }
        break ;
      case GALGAS_controlRegisterKind::kEnum_registerArray:
        {
          const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_14437 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_14103.current (HERE).readProperty_mControlRegisterKind ().unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_14229_arraySize = extractPtr_14437->mAssociatedValue0 ;
          const GALGAS_expressionAST extractedValue_14256_arrayElementSize = extractPtr_14437->mAssociatedValue2 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_14229_arraySize.ptr (), var_nodeName_12620, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 352)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_14256_arrayElementSize.ptr (), var_nodeName_12620, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 353)) ;
        }
        break ;
      }
      enumerator_14103.gotoNextObject () ;
    }
    enumerator_12824.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'controlRegisterType'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_controlRegisterType (const GALGAS_lstring constinArgument_inRegisterTypeName,
                                  GALGAS_semanticContext & ioArgument_ioContext,
                                  GALGAS_omnibusType & outArgument_outRegisterType,
                                  GALGAS_uint & outArgument_outRegisterBitCount,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterBitCount.drop () ; // Release 'out' argument
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), constinArgument_inRegisterTypeName, outArgument_outRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 402)) ;
  switch (outArgument_outRegisterType.readProperty_kind ().enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_16501 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_uint extractedValue_16464_bitCount = extractPtr_16501->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_16464_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 407)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 409)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 411)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeBool:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 413)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeInteger:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 415)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 417)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 423)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 425)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 427)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_generic:
    {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 429)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_llvmType:
    {
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray12  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 431)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterSliceMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildControlRegisterSliceMap (const GALGAS_controlRegisterBitSliceList constinArgument_inRegisterBitSliceList,
                                           const GALGAS_location constinArgument_inEndOfBitSliceLocation,
                                           GALGAS_semanticContext & /* ioArgument_ioContext */,
                                           GALGAS_omnibusType & ioArgument_ioRegisterType,
                                           const GALGAS_uint constinArgument_inRegisterBitCount,
                                           GALGAS_controlRegisterFieldMap & outArgument_outRegisterFieldMap,
                                           GALGAS_sliceMap & outArgument_outRegisterBitSliceMap,
                                           GALGAS_controlRegisterFieldList & outArgument_outControlRegisterFieldList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterFieldMap.drop () ; // Release 'out' argument
  outArgument_outRegisterBitSliceMap.drop () ; // Release 'out' argument
  outArgument_outControlRegisterFieldList.drop () ; // Release 'out' argument
  outArgument_outRegisterFieldMap = GALGAS_controlRegisterFieldMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 448)) ;
  outArgument_outRegisterBitSliceMap = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 449)) ;
  outArgument_outControlRegisterFieldList = GALGAS_controlRegisterFieldList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 450)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inRegisterBitSliceList.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 451)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_shiftCount_18783 = GALGAS_uint (uint32_t (0U)) ;
      cEnumerator_controlRegisterBitSliceList enumerator_18809 (constinArgument_inRegisterBitSliceList, kENUMERATION_DOWN) ;
      while (enumerator_18809.hasCurrentObject ()) {
        switch (enumerator_18809.current_mRegisterBitSlice (HERE).enumValue ()) {
        case GALGAS_controlRegisterBitSlice::kNotBuilt:
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_19045 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_18809.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lbigint extractedValue_18920_count = extractPtr_19045->mAssociatedValue0 ;
            var_shiftCount_18783 = var_shiftCount_18783.add_operation (extractedValue_18920_count.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_18920_count.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)), GALGAS_string ("—")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)) ;
          }
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_19559 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_18809.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_19079_name = extractPtr_19559->mAssociatedValue0 ;
            const GALGAS_lbigint extractedValue_19093_count = extractPtr_19559->mAssociatedValue1 ;
            GALGAS_uint var_bitCount_19114 = extractedValue_19093_count.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_19114, extractedValue_19079_name.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 460)) ;
            {
            outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_19079_name, var_shiftCount_18783, var_bitCount_19114, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 461)) ;
            }
            GALGAS_bigint var_mask_19354 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_bitCount_19114, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_shiftCount_18783, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)) ;
            {
            outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_19079_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 470)), var_mask_19354, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 468)) ;
            }
            var_shiftCount_18783 = var_shiftCount_18783.add_operation (var_bitCount_19114, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 474)) ;
          }
          break ;
        }
        enumerator_18809.gotoNextObject () ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_18783)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_18783.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 479)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterGroupDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                     GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                     GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                     GALGAS_controlRegisterUserAccesMapAST & ioArgument_ioControlRegisterUserAccesMapAST,
                                                                     GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterMap var_regMap_24375 = GALGAS_controlRegisterMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 596)) ;
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = this ;
  cEnumerator_controlRegisterDeclarationList enumerator_24405 (temp_0.readProperty_mRegisters (), kENUMERATION_UP) ;
  while (enumerator_24405.hasCurrentObject ()) {
    extensionMethod_buildControlRegisterMapForGroup (enumerator_24405.current (HERE), ioArgument_ioContext, var_regMap_24375, ioArgument_ioStaticEntityMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 598)) ;
    enumerator_24405.gotoNextObject () ;
  }
  const GALGAS_controlRegisterGroupDeclarationAST temp_1 = this ;
  cEnumerator_registerGroupListAST enumerator_24575 (temp_1.readProperty_mRegisterGroupList (), kENUMERATION_UP) ;
  while (enumerator_24575.hasCurrentObject ()) {
    GALGAS_controlRegisterMap var_registerMap_24625 = var_regMap_24375 ;
    cEnumerator_controlRegisterMap enumerator_24701 (var_regMap_24375, kENUMERATION_UP) ;
    while (enumerator_24701.hasCurrentObject ()) {
      GALGAS_string var_key_24721 = GALGAS_string ("#").add_operation (enumerator_24575.current (HERE).readProperty_mRegisterGroupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (enumerator_24701.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = ioArgument_ioControlRegisterUserAccesMapAST.getter_hasKey (var_key_24721 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 609)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          var_registerMap_24625.setter_setMUserAccessForKey (GALGAS_bool (true), enumerator_24701.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 610)) ;
          }
          {
          ioArgument_ioControlRegisterUserAccesMapAST.setter_removeKey (var_key_24721.getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 611)) ;
          }
        }
      }
      enumerator_24701.gotoNextObject () ;
    }
    switch (enumerator_24575.current (HERE).readProperty_mControlRegisterGroupKind ().enumValue ()) {
    case GALGAS_controlRegisterGroupKindAST::kNotBuilt:
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_single:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_single * extractPtr_25257 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_single *) (enumerator_24575.current (HERE).readProperty_mControlRegisterGroupKind ().unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_25064_baseAddress = extractPtr_25257->mAssociatedValue0 ;
        GALGAS_registerGroupKind var_groupKind_25089 = GALGAS_registerGroupKind::constructor_single (extractedValue_25064_baseAddress.readProperty_bigint ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 617)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24575.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_25089, var_registerMap_24625, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 618)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_groupArray:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray * extractPtr_26555 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *) (enumerator_24575.current (HERE).readProperty_mControlRegisterGroupKind ().unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_25280_groupSizeExpression = extractPtr_26555->mAssociatedValue0 ;
        const GALGAS_location extractedValue_25300_groupSizeExpressionLocation = extractPtr_26555->mAssociatedValue1 ;
        const GALGAS_lbigintlist extractedValue_25328_baseAddresses = extractPtr_26555->mAssociatedValue2 ;
        GALGAS_objectIR var_groupArraySizeExpressionResult_25620 ;
        {
        routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_25280_groupSizeExpression, extractedValue_25300_groupSizeExpressionLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 625)), var_groupArraySizeExpressionResult_25620, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 620)) ;
        }
        GALGAS_bigint var_groupSize_25677 ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_groupArraySizeExpressionResult_25620.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 629)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 629)).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_25300_groupSizeExpressionLocation, GALGAS_string ("control register group size is not a static integer expression"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 630)) ;
            var_groupSize_25677.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_3) {
          GALGAS_omnibusType joker_25962_1 ; // Joker input parameter
          var_groupArraySizeExpressionResult_25620.method_literalInteger (joker_25962_1, var_groupSize_25677, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 634)) ;
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsNotEqual, var_groupSize_25677.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 636)).objectCompare (extractedValue_25328_baseAddresses.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 636)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_25300_groupSizeExpressionLocation, GALGAS_string ("the group size is ").add_operation (var_groupSize_25677.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GALGAS_string (", but "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (extractedValue_25328_baseAddresses.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 638)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GALGAS_string (" base addresses are defined"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 637)) ;
          }
        }
        GALGAS_registerGroupKind var_groupKind_26224 = GALGAS_registerGroupKind::constructor_arrayGroup (extractedValue_25328_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 640)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24575.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_26224, var_registerMap_24625, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 641)) ;
        }
        ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (enumerator_24575.current (HERE).readProperty_mRegisterGroupName (), extractedValue_25328_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 642))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 642)) ;
      }
      break ;
    }
    enumerator_24575.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedControlRegisterArrayGroupDeclaration semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_decoratedControlRegisterArrayGroupDeclaration::method_semanticAnalysis (const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                  GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                  GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_decoratedControlRegisterArrayGroupDeclaration temp_0 = this ;
  const GALGAS_decoratedControlRegisterArrayGroupDeclaration temp_1 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mControlRegisterGroupArrayList.addAssign_operation (temp_0.readProperty_mGroupName (), temp_1.readProperty_mBaseAddresses ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 666)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMapHTMLFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterGroupMap constinArgument_inControlRegisterGroupMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_byAddressFilePath_29907 = constinArgument_inSourceFile.readProperty_string ().add_operation (GALGAS_string (".control-registers-sorted-by-address.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 727)) ;
  GALGAS_string var_byNameFilePath_29999 = constinArgument_inSourceFile.readProperty_string ().add_operation (GALGAS_string (".control-registers-sorted-by-name.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 728)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_controlRegisterByAddress var_controlRegisterByAddress_30186 = GALGAS_controlRegisterByAddress::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 730)) ;
      GALGAS_controlRegisterByName var_controlRegisterByName_30247 = GALGAS_controlRegisterByName::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 731)) ;
      GALGAS_uint var_controlRegisterCount_30288 = GALGAS_uint (uint32_t (0U)) ;
      cEnumerator_controlRegisterGroupMap enumerator_30350 (constinArgument_inControlRegisterGroupMap, kENUMERATION_UP) ;
      while (enumerator_30350.hasCurrentObject ()) {
        switch (enumerator_30350.current_mGroupKind (HERE).enumValue ()) {
        case GALGAS_registerGroupKind::kNotBuilt:
          break ;
        case GALGAS_registerGroupKind::kEnum_single:
          {
            const cEnumAssociatedValues_registerGroupKind_single * extractPtr_30719 = (const cEnumAssociatedValues_registerGroupKind_single *) (enumerator_30350.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_bigint extractedValue_30458_groupBaseAddress = extractPtr_30719->mAssociatedValue0 ;
            {
            routine_buildControlRegisterMaps (enumerator_30350.current_mControlRegisterMap (HERE), extractedValue_30458_groupBaseAddress, enumerator_30350.current_lkey (HERE).readProperty_string (), var_controlRegisterByAddress_30186, var_controlRegisterByName_30247, var_controlRegisterCount_30288, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 736)) ;
            }
          }
          break ;
        case GALGAS_registerGroupKind::kEnum_arrayGroup:
          {
            const cEnumAssociatedValues_registerGroupKind_arrayGroup * extractPtr_31107 = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) (enumerator_30350.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_lbigintlist extractedValue_30757_baseAddresses = extractPtr_31107->mAssociatedValue0 ;
            cEnumerator_lbigintlist enumerator_30787 (extractedValue_30757_baseAddresses, kENUMERATION_UP) ;
            GALGAS_uint index_30782 ((uint32_t) 0) ;
            while (enumerator_30787.hasCurrentObject ()) {
              {
              routine_buildControlRegisterMaps (enumerator_30350.current_mControlRegisterMap (HERE), enumerator_30787.current_mValue (HERE).readProperty_bigint (), enumerator_30350.current_lkey (HERE).readProperty_string ().add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (index_30782.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)), var_controlRegisterByAddress_30186, var_controlRegisterByName_30247, var_controlRegisterCount_30288, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 746)) ;
              }
              enumerator_30787.gotoNextObject () ;
              index_30782.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 745)) ;
            }
          }
          break ;
        }
        enumerator_30350.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_31137 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 758)), var_controlRegisterCount_30288, var_controlRegisterByAddress_30186 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 757))) ;
      GALGAS_bool joker_31397 ; // Joker input parameter
      var_typeDumpString_31137.method_writeToFileWhenDifferentContents (var_byAddressFilePath_29907, joker_31397, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)) ;
      var_typeDumpString_31137 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 764)), var_controlRegisterCount_30288, var_controlRegisterByName_30247 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763))) ;
      GALGAS_bool joker_31656 ; // Joker input parameter
      var_typeDumpString_31137.method_writeToFileWhenDifferentContents (var_byNameFilePath_29999, joker_31656, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 768)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byAddressFilePath_29907, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 770)) ;
    }
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byNameFilePath_29999, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 771)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMaps'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMaps (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                       const GALGAS_bigint constinArgument_inGroupBaseAddress,
                                       const GALGAS_string constinArgument_inGroupName,
                                       GALGAS_controlRegisterByAddress & ioArgument_ioControlRegisterByAddress,
                                       GALGAS_controlRegisterByName & ioArgument_ioControlRegisterByName,
                                       GALGAS_uint & ioArgument_ioControlRegisterCount,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_controlRegisterMap enumerator_32309 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
  while (enumerator_32309.hasCurrentObject ()) {
    GALGAS_bigint var_registerAddress_32367 = constinArgument_inGroupBaseAddress.add_operation (enumerator_32309.current_mAddressOffset (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 786)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_32309.current_mArraySize (HERE).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 788)) ;
        GALGAS_string var_registerName_32525 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)).add_operation (enumerator_32309.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)) ;
        GALGAS_string var_s_32579 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_32525, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 790)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 791)).add_operation (enumerator_32309.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (var_registerAddress_32367.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsStrictSup, enumerator_32309.current_mControlRegisterFieldList (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 794)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_s_32579.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)).add_operation (function_fieldIndexColumns (enumerator_32309.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GALGAS_string ("</tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)) ;
            cEnumerator_controlRegisterFieldList enumerator_33054 (enumerator_32309.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
            while (enumerator_33054.hasCurrentObject ()) {
              var_s_32579.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_33054.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (enumerator_33054.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)) ;
              enumerator_33054.gotoNextObject () ;
            }
            var_s_32579.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 801)) ;
          }
        }
        var_s_32579.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 803)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_32367, var_s_32579  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 804)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_32367, var_s_32579, var_registerName_32525  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 805)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (enumerator_32309.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 807)) ;
      cEnumerator_uintlist enumerator_33501 (function_arrayIndexListFor (enumerator_32309.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 808)), kENUMERATION_UP) ;
      while (enumerator_33501.hasCurrentObject ()) {
        GALGAS_bigint var_address_33568 = var_registerAddress_32367.add_operation (enumerator_33501.current_mValue (HERE).multiply_operation (enumerator_32309.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)).getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 809)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)) ;
        GALGAS_string var_registerName_33639 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_32309.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_33501.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 810)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)) ;
        GALGAS_string var_s_33725 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_33639, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 811)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 812)).add_operation (enumerator_32309.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (var_address_33568.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsStrictSup, enumerator_32309.current_mControlRegisterFieldList (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 816)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_s_33725.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)).add_operation (function_fieldIndexColumns (enumerator_32309.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)).add_operation (GALGAS_string ("</tr><tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)) ;
            cEnumerator_controlRegisterFieldList enumerator_34199 (enumerator_32309.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
            while (enumerator_34199.hasCurrentObject ()) {
              var_s_33725.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_34199.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (enumerator_34199.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)) ;
              enumerator_34199.gotoNextObject () ;
            }
            var_s_33725.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 822)) ;
          }
        }
        var_s_33725.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 824)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_32367, var_s_33725  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 825)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_32367, var_s_33725, var_registerName_33639  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 826)) ;
        enumerator_33501.gotoNextObject () ;
      }
    }
    enumerator_32309.gotoNextObject () ;
  }
}


