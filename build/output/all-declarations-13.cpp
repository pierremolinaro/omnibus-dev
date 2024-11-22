#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------
//
//Optional @assignmentGenerationVarMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element_3F_::GGS_assignmentGenerationVarMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element_3F_::GGS_assignmentGenerationVarMap_2E_element_3F_ (const GGS_assignmentGenerationVarMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element_3F_ GGS_assignmentGenerationVarMap_2E_element_3F_::init_nil (void) {
  GGS_assignmentGenerationVarMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_assignmentGenerationVarMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_assignmentGenerationVarMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_assignmentGenerationVarMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentGenerationVarMap_2E_element_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentGenerationVarMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2E_element_3F_ ("assignmentGenerationVarMap.element?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_assignmentGenerationVarMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentGenerationVarMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentGenerationVarMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentGenerationVarMap_2E_element_3F_ GGS_assignmentGenerationVarMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_assignmentGenerationVarMap_2E_element_3F_ result ;
  const GGS_assignmentGenerationVarMap_2E_element_3F_ * p = (const GGS_assignmentGenerationVarMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentGenerationVarMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentGenerationVarMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_targetParameters::GGS_targetParameters (void) :
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

//--------------------------------------------------------------------------------------------------

GGS_targetParameters::~ GGS_targetParameters (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_targetParameters GGS_targetParameters::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mConfigurationLocation,
                                                                                                                                                                             const GGS__32_lstringlist & in_mPython_5F_utilityToolList,
                                                                                                                                                                             const GGS_lstring & in_mPython_5F_build,
                                                                                                                                                                             const GGS_lstring & in_mLinkerScript,
                                                                                                                                                                             const GGS_uint & in_mPointerSize,
                                                                                                                                                                             const GGS_bool & in_mHandleDynamicArray,
                                                                                                                                                                             const GGS_lbigint & in_mSystemStackSize,
                                                                                                                                                                             const GGS_lbigint & in_mStackedUserRegisterOnInterruptByteSize,
                                                                                                                                                                             const GGS_lstring & in_mNopInstructionStringInLLVM,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterBaseAddress,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterEndAddress,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterRelocationAddress,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterOffsetMultiplier,
                                                                                                                                                                             const GGS_lbigint & in_mBitbandRegisterBitMultiplier,
                                                                                                                                                                             const GGS_lstring & in_mSectionHandler,
                                                                                                                                                                             const GGS_lbigint & in_mSectionPushedRegisterByteSize,
                                                                                                                                                                             const GGS_lstring & in_mSectionDispatcherHeader,
                                                                                                                                                                             const GGS_lstring & in_mSectionDispatcherEntry,
                                                                                                                                                                             const GGS_lstring & in_mSectionDispatcherInvocationFromAnyMode,
                                                                                                                                                                             const GGS_lstring & in_mSectionDispatcherInvocationFromUserMode,
                                                                                                                                                                             const GGS_lstringlist & in_m_5F_C_5F_definitionFiles,
                                                                                                                                                                             const GGS_lstringlist & in_m_5F_S_5F_definitionFiles,
                                                                                                                                                                             const GGS_lstringlist & in_m_5F_LL_5F_definitionFiles,
                                                                                                                                                                             const GGS_lstring & in_mXtrInterruptHandler,
                                                                                                                                                                             const GGS_lstring & in_mUndefinedInterruptHandler,
                                                                                                                                                                             const GGS_lstring & in_mServiceHandler,
                                                                                                                                                                             const GGS_lbigint & in_mServicePushedRegisterByteSize,
                                                                                                                                                                             const GGS_lstring & in_mServiceDispatcherEntry,
                                                                                                                                                                             const GGS_lstring & in_mServiceDispatcherHeader,
                                                                                                                                                                             const GGS_lstring & in_mServiceEntryNoReturnedValue,
                                                                                                                                                                             const GGS_lstring & in_mServiceEntryWithReturnValue,
                                                                                                                                                                             Compiler * inCompiler
                                                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_targetParameters result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConfigurationLocation = in_mConfigurationLocation ;
  result.mProperty_mPython_5F_utilityToolList = in_mPython_5F_utilityToolList ;
  result.mProperty_mPython_5F_build = in_mPython_5F_build ;
  result.mProperty_mLinkerScript = in_mLinkerScript ;
  result.mProperty_mPointerSize = in_mPointerSize ;
  result.mProperty_mHandleDynamicArray = in_mHandleDynamicArray ;
  result.mProperty_mSystemStackSize = in_mSystemStackSize ;
  result.mProperty_mStackedUserRegisterOnInterruptByteSize = in_mStackedUserRegisterOnInterruptByteSize ;
  result.mProperty_mNopInstructionStringInLLVM = in_mNopInstructionStringInLLVM ;
  result.mProperty_mBitbandRegisterBaseAddress = in_mBitbandRegisterBaseAddress ;
  result.mProperty_mBitbandRegisterEndAddress = in_mBitbandRegisterEndAddress ;
  result.mProperty_mBitbandRegisterRelocationAddress = in_mBitbandRegisterRelocationAddress ;
  result.mProperty_mBitbandRegisterOffsetMultiplier = in_mBitbandRegisterOffsetMultiplier ;
  result.mProperty_mBitbandRegisterBitMultiplier = in_mBitbandRegisterBitMultiplier ;
  result.mProperty_mSectionHandler = in_mSectionHandler ;
  result.mProperty_mSectionPushedRegisterByteSize = in_mSectionPushedRegisterByteSize ;
  result.mProperty_mSectionDispatcherHeader = in_mSectionDispatcherHeader ;
  result.mProperty_mSectionDispatcherEntry = in_mSectionDispatcherEntry ;
  result.mProperty_mSectionDispatcherInvocationFromAnyMode = in_mSectionDispatcherInvocationFromAnyMode ;
  result.mProperty_mSectionDispatcherInvocationFromUserMode = in_mSectionDispatcherInvocationFromUserMode ;
  result.mProperty_m_5F_C_5F_definitionFiles = in_m_5F_C_5F_definitionFiles ;
  result.mProperty_m_5F_S_5F_definitionFiles = in_m_5F_S_5F_definitionFiles ;
  result.mProperty_m_5F_LL_5F_definitionFiles = in_m_5F_LL_5F_definitionFiles ;
  result.mProperty_mXtrInterruptHandler = in_mXtrInterruptHandler ;
  result.mProperty_mUndefinedInterruptHandler = in_mUndefinedInterruptHandler ;
  result.mProperty_mServiceHandler = in_mServiceHandler ;
  result.mProperty_mServicePushedRegisterByteSize = in_mServicePushedRegisterByteSize ;
  result.mProperty_mServiceDispatcherEntry = in_mServiceDispatcherEntry ;
  result.mProperty_mServiceDispatcherHeader = in_mServiceDispatcherHeader ;
  result.mProperty_mServiceEntryNoReturnedValue = in_mServiceEntryNoReturnedValue ;
  result.mProperty_mServiceEntryWithReturnValue = in_mServiceEntryWithReturnValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_targetParameters::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_targetParameters::GGS_targetParameters (const GGS_location & inOperand0,
                                            const GGS__32_lstringlist & inOperand1,
                                            const GGS_lstring & inOperand2,
                                            const GGS_lstring & inOperand3,
                                            const GGS_uint & inOperand4,
                                            const GGS_bool & inOperand5,
                                            const GGS_lbigint & inOperand6,
                                            const GGS_lbigint & inOperand7,
                                            const GGS_lstring & inOperand8,
                                            const GGS_lbigint & inOperand9,
                                            const GGS_lbigint & inOperand10,
                                            const GGS_lbigint & inOperand11,
                                            const GGS_lbigint & inOperand12,
                                            const GGS_lbigint & inOperand13,
                                            const GGS_lstring & inOperand14,
                                            const GGS_lbigint & inOperand15,
                                            const GGS_lstring & inOperand16,
                                            const GGS_lstring & inOperand17,
                                            const GGS_lstring & inOperand18,
                                            const GGS_lstring & inOperand19,
                                            const GGS_lstringlist & inOperand20,
                                            const GGS_lstringlist & inOperand21,
                                            const GGS_lstringlist & inOperand22,
                                            const GGS_lstring & inOperand23,
                                            const GGS_lstring & inOperand24,
                                            const GGS_lstring & inOperand25,
                                            const GGS_lbigint & inOperand26,
                                            const GGS_lstring & inOperand27,
                                            const GGS_lstring & inOperand28,
                                            const GGS_lstring & inOperand29,
                                            const GGS_lstring & inOperand30) :
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

//--------------------------------------------------------------------------------------------------

GGS_targetParameters GGS_targetParameters::class_func_new (const GGS_location & in_mConfigurationLocation,
                                                           const GGS__32_lstringlist & in_mPython_utilityToolList,
                                                           const GGS_lstring & in_mPython_build,
                                                           const GGS_lstring & in_mLinkerScript,
                                                           const GGS_uint & in_mPointerSize,
                                                           const GGS_bool & in_mHandleDynamicArray,
                                                           const GGS_lbigint & in_mSystemStackSize,
                                                           const GGS_lbigint & in_mStackedUserRegisterOnInterruptByteSize,
                                                           const GGS_lstring & in_mNopInstructionStringInLLVM,
                                                           const GGS_lbigint & in_mBitbandRegisterBaseAddress,
                                                           const GGS_lbigint & in_mBitbandRegisterEndAddress,
                                                           const GGS_lbigint & in_mBitbandRegisterRelocationAddress,
                                                           const GGS_lbigint & in_mBitbandRegisterOffsetMultiplier,
                                                           const GGS_lbigint & in_mBitbandRegisterBitMultiplier,
                                                           const GGS_lstring & in_mSectionHandler,
                                                           const GGS_lbigint & in_mSectionPushedRegisterByteSize,
                                                           const GGS_lstring & in_mSectionDispatcherHeader,
                                                           const GGS_lstring & in_mSectionDispatcherEntry,
                                                           const GGS_lstring & in_mSectionDispatcherInvocationFromAnyMode,
                                                           const GGS_lstring & in_mSectionDispatcherInvocationFromUserMode,
                                                           const GGS_lstringlist & in_m_C_definitionFiles,
                                                           const GGS_lstringlist & in_m_S_definitionFiles,
                                                           const GGS_lstringlist & in_m_LL_definitionFiles,
                                                           const GGS_lstring & in_mXtrInterruptHandler,
                                                           const GGS_lstring & in_mUndefinedInterruptHandler,
                                                           const GGS_lstring & in_mServiceHandler,
                                                           const GGS_lbigint & in_mServicePushedRegisterByteSize,
                                                           const GGS_lstring & in_mServiceDispatcherEntry,
                                                           const GGS_lstring & in_mServiceDispatcherHeader,
                                                           const GGS_lstring & in_mServiceEntryNoReturnedValue,
                                                           const GGS_lstring & in_mServiceEntryWithReturnValue,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_targetParameters result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConfigurationLocation = in_mConfigurationLocation ;
  result.mProperty_mPython_5F_utilityToolList = in_mPython_utilityToolList ;
  result.mProperty_mPython_5F_build = in_mPython_build ;
  result.mProperty_mLinkerScript = in_mLinkerScript ;
  result.mProperty_mPointerSize = in_mPointerSize ;
  result.mProperty_mHandleDynamicArray = in_mHandleDynamicArray ;
  result.mProperty_mSystemStackSize = in_mSystemStackSize ;
  result.mProperty_mStackedUserRegisterOnInterruptByteSize = in_mStackedUserRegisterOnInterruptByteSize ;
  result.mProperty_mNopInstructionStringInLLVM = in_mNopInstructionStringInLLVM ;
  result.mProperty_mBitbandRegisterBaseAddress = in_mBitbandRegisterBaseAddress ;
  result.mProperty_mBitbandRegisterEndAddress = in_mBitbandRegisterEndAddress ;
  result.mProperty_mBitbandRegisterRelocationAddress = in_mBitbandRegisterRelocationAddress ;
  result.mProperty_mBitbandRegisterOffsetMultiplier = in_mBitbandRegisterOffsetMultiplier ;
  result.mProperty_mBitbandRegisterBitMultiplier = in_mBitbandRegisterBitMultiplier ;
  result.mProperty_mSectionHandler = in_mSectionHandler ;
  result.mProperty_mSectionPushedRegisterByteSize = in_mSectionPushedRegisterByteSize ;
  result.mProperty_mSectionDispatcherHeader = in_mSectionDispatcherHeader ;
  result.mProperty_mSectionDispatcherEntry = in_mSectionDispatcherEntry ;
  result.mProperty_mSectionDispatcherInvocationFromAnyMode = in_mSectionDispatcherInvocationFromAnyMode ;
  result.mProperty_mSectionDispatcherInvocationFromUserMode = in_mSectionDispatcherInvocationFromUserMode ;
  result.mProperty_m_5F_C_5F_definitionFiles = in_m_C_definitionFiles ;
  result.mProperty_m_5F_S_5F_definitionFiles = in_m_S_definitionFiles ;
  result.mProperty_m_5F_LL_5F_definitionFiles = in_m_LL_definitionFiles ;
  result.mProperty_mXtrInterruptHandler = in_mXtrInterruptHandler ;
  result.mProperty_mUndefinedInterruptHandler = in_mUndefinedInterruptHandler ;
  result.mProperty_mServiceHandler = in_mServiceHandler ;
  result.mProperty_mServicePushedRegisterByteSize = in_mServicePushedRegisterByteSize ;
  result.mProperty_mServiceDispatcherEntry = in_mServiceDispatcherEntry ;
  result.mProperty_mServiceDispatcherHeader = in_mServiceDispatcherHeader ;
  result.mProperty_mServiceEntryNoReturnedValue = in_mServiceEntryNoReturnedValue ;
  result.mProperty_mServiceEntryWithReturnValue = in_mServiceEntryWithReturnValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_targetParameters::isValid (void) const {
  return mProperty_mConfigurationLocation.isValid () && mProperty_mPython_5F_utilityToolList.isValid () && mProperty_mPython_5F_build.isValid () && mProperty_mLinkerScript.isValid () && mProperty_mPointerSize.isValid () && mProperty_mHandleDynamicArray.isValid () && mProperty_mSystemStackSize.isValid () && mProperty_mStackedUserRegisterOnInterruptByteSize.isValid () && mProperty_mNopInstructionStringInLLVM.isValid () && mProperty_mBitbandRegisterBaseAddress.isValid () && mProperty_mBitbandRegisterEndAddress.isValid () && mProperty_mBitbandRegisterRelocationAddress.isValid () && mProperty_mBitbandRegisterOffsetMultiplier.isValid () && mProperty_mBitbandRegisterBitMultiplier.isValid () && mProperty_mSectionHandler.isValid () && mProperty_mSectionPushedRegisterByteSize.isValid () && mProperty_mSectionDispatcherHeader.isValid () && mProperty_mSectionDispatcherEntry.isValid () && mProperty_mSectionDispatcherInvocationFromAnyMode.isValid () && mProperty_mSectionDispatcherInvocationFromUserMode.isValid () && mProperty_m_5F_C_5F_definitionFiles.isValid () && mProperty_m_5F_S_5F_definitionFiles.isValid () && mProperty_m_5F_LL_5F_definitionFiles.isValid () && mProperty_mXtrInterruptHandler.isValid () && mProperty_mUndefinedInterruptHandler.isValid () && mProperty_mServiceHandler.isValid () && mProperty_mServicePushedRegisterByteSize.isValid () && mProperty_mServiceDispatcherEntry.isValid () && mProperty_mServiceDispatcherHeader.isValid () && mProperty_mServiceEntryNoReturnedValue.isValid () && mProperty_mServiceEntryWithReturnValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_targetParameters::drop (void) {
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

//--------------------------------------------------------------------------------------------------

void GGS_targetParameters::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @targetParameters:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mConfigurationLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPython_5F_utilityToolList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPython_5F_build.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLinkerScript.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPointerSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHandleDynamicArray.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSystemStackSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStackedUserRegisterOnInterruptByteSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNopInstructionStringInLLVM.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterBaseAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterEndAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterRelocationAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterOffsetMultiplier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitbandRegisterBitMultiplier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionHandler.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionPushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionDispatcherInvocationFromAnyMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSectionDispatcherInvocationFromUserMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_C_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_S_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_LL_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mXtrInterruptHandler.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUndefinedInterruptHandler.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceHandler.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServicePushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceEntryNoReturnedValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mServiceEntryWithReturnValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @targetParameters generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_targetParameters ("targetParameters",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_targetParameters::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetParameters ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_targetParameters::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_targetParameters (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_targetParameters GGS_targetParameters::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_targetParameters result ;
  const GGS_targetParameters * p = (const GGS_targetParameters *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_targetParameters *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("targetParameters", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @configurationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_configurationDeclarationAST::objectCompare (const GGS_configurationDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST::GGS_configurationDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_configurationDeclarationAST GGS_configurationDeclarationAST::
init_21__21__21__21_ (const GGS_lstring & in_mPanicCodeTypeName,
                      const GGS_lstring & in_mPanicLineTypeName,
                      const GGS_targetParameters & in_mTargetParameters,
                      const GGS_interruptionConfigurationList & in_mInterruptionConfigurationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_configurationDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_configurationDeclarationAST (inCompiler COMMA_THERE)) ;
  object->configurationDeclarationAST_init_21__21__21__21_ (in_mPanicCodeTypeName, in_mPanicLineTypeName, in_mTargetParameters, in_mInterruptionConfigurationList, inCompiler) ;
  const GGS_configurationDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_configurationDeclarationAST::
configurationDeclarationAST_init_21__21__21__21_ (const GGS_lstring & in_mPanicCodeTypeName,
                                                  const GGS_lstring & in_mPanicLineTypeName,
                                                  const GGS_targetParameters & in_mTargetParameters,
                                                  const GGS_interruptionConfigurationList & in_mInterruptionConfigurationList,
                                                  Compiler * /* inCompiler */) {
  mProperty_mPanicCodeTypeName = in_mPanicCodeTypeName ;
  mProperty_mPanicLineTypeName = in_mPanicLineTypeName ;
  mProperty_mTargetParameters = in_mTargetParameters ;
  mProperty_mInterruptionConfigurationList = in_mInterruptionConfigurationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST::GGS_configurationDeclarationAST (const cPtr_configurationDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_configurationDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST GGS_configurationDeclarationAST::class_func_new (const GGS_lstring & in_mPanicCodeTypeName,
                                                                                 const GGS_lstring & in_mPanicLineTypeName,
                                                                                 const GGS_targetParameters & in_mTargetParameters,
                                                                                 const GGS_interruptionConfigurationList & in_mInterruptionConfigurationList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_configurationDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_configurationDeclarationAST (in_mPanicCodeTypeName, in_mPanicLineTypeName, in_mTargetParameters, in_mInterruptionConfigurationList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_configurationDeclarationAST::readProperty_mPanicCodeTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mPanicCodeTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configurationDeclarationAST::setProperty_mPanicCodeTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mPanicCodeTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_configurationDeclarationAST::readProperty_mPanicLineTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mPanicLineTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configurationDeclarationAST::setProperty_mPanicLineTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mPanicLineTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_targetParameters GGS_configurationDeclarationAST::readProperty_mTargetParameters (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_targetParameters () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mTargetParameters ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configurationDeclarationAST::setProperty_mTargetParameters (const GGS_targetParameters & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mTargetParameters = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList GGS_configurationDeclarationAST::readProperty_mInterruptionConfigurationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_interruptionConfigurationList () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mInterruptionConfigurationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configurationDeclarationAST::setProperty_mInterruptionConfigurationList (const GGS_interruptionConfigurationList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mInterruptionConfigurationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @configurationDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_configurationDeclarationAST::cPtr_configurationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPanicCodeTypeName (),
mProperty_mPanicLineTypeName (),
mProperty_mTargetParameters (),
mProperty_mInterruptionConfigurationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_configurationDeclarationAST::cPtr_configurationDeclarationAST (const GGS_lstring & in_mPanicCodeTypeName,
                                                                    const GGS_lstring & in_mPanicLineTypeName,
                                                                    const GGS_targetParameters & in_mTargetParameters,
                                                                    const GGS_interruptionConfigurationList & in_mInterruptionConfigurationList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPanicCodeTypeName (),
mProperty_mPanicLineTypeName (),
mProperty_mTargetParameters (),
mProperty_mInterruptionConfigurationList () {
  mProperty_mPanicCodeTypeName = in_mPanicCodeTypeName ;
  mProperty_mPanicLineTypeName = in_mPanicLineTypeName ;
  mProperty_mTargetParameters = in_mTargetParameters ;
  mProperty_mInterruptionConfigurationList = in_mInterruptionConfigurationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_configurationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

void cPtr_configurationDeclarationAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@configurationDeclarationAST:") ;
  mProperty_mPanicCodeTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPanicLineTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInterruptionConfigurationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_configurationDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_configurationDeclarationAST (mProperty_mPanicCodeTypeName, mProperty_mPanicLineTypeName, mProperty_mTargetParameters, mProperty_mInterruptionConfigurationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_configurationDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPanicCodeTypeName.printNonNullClassInstanceProperties ("mPanicCodeTypeName") ;
    mProperty_mPanicLineTypeName.printNonNullClassInstanceProperties ("mPanicLineTypeName") ;
    mProperty_mTargetParameters.printNonNullClassInstanceProperties ("mTargetParameters") ;
    mProperty_mInterruptionConfigurationList.printNonNullClassInstanceProperties ("mInterruptionConfigurationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @configurationDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configurationDeclarationAST ("configurationDeclarationAST",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_configurationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configurationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configurationDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configurationDeclarationAST GGS_configurationDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_configurationDeclarationAST result ;
  const GGS_configurationDeclarationAST * p = (const GGS_configurationDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configurationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configurationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (void) :
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

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::~ GGS_semanticContext (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::init (Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::setInitializedProperties (Compiler * inCompiler) {
GGS__32_lstringlist temp_0 = GGS__32_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 10)) ;
GGS_lstringlist temp_1 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 29)) ;
GGS_lstringlist temp_2 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 30)) ;
GGS_lstringlist temp_3 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 31)) ;
  mProperty_mTargetParameters = GGS_targetParameters::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("context.galgas", 9)), temp_0, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 11)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 12)), GGS_uint (uint32_t (0U)), GGS_bool (false), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 15)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 15)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 16)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 16)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 17)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 18)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 18)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 19)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 19)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 20)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 20)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 21)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 21)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 22)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 22)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 23)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 24)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 24)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 25)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 26)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 27)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 28)), temp_1, temp_2, temp_3, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 32)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 33)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 34)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 35)), GGS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 35)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 36)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 37)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 38)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 39)), inCompiler COMMA_HERE) ;
  mProperty_mPanicCodeType = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("context.galgas", 43)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), GGS_string ("<<unknown>>"), GGS_typeKind::class_func_void (SOURCE_FILE ("context.galgas", 46)), GGS_string ("<<unknown>>"), inCompiler COMMA_HERE) ;
  mProperty_mPanicLineType = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("context.galgas", 50)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), GGS_string ("<<unknown>>"), GGS_typeKind::class_func_void (SOURCE_FILE ("context.galgas", 53)), GGS_string ("<<unknown>>"), inCompiler COMMA_HERE) ;
GGS_panicRoutinePriorityMap temp_4 = GGS_panicRoutinePriorityMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 56)) ;
  mProperty_mPanicSetupRoutinePriorityMap = temp_4 ;
GGS_panicRoutinePriorityMap temp_5 = GGS_panicRoutinePriorityMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 57)) ;
  mProperty_mPanicLoopRoutinePriorityMap = temp_5 ;
GGS_routineMapForContext temp_6 = GGS_routineMapForContext::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 59)) ;
  mProperty_mRoutineMap = temp_6 ;
GGS_guardMapForContext temp_7 = GGS_guardMapForContext::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 60)) ;
  mProperty_mGuardMap = temp_7 ;
GGS_controlRegisterGroupMap temp_8 = GGS_controlRegisterGroupMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 62)) ;
  mProperty_mControlRegisterGroupMap = temp_8 ;
GGS_globalConstantMap temp_9 = GGS_globalConstantMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 63)) ;
  mProperty_mGlobalConstantMap = temp_9 ;
GGS_globalSyncInstanceMap temp_10 = GGS_globalSyncInstanceMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 64)) ;
  mProperty_mGlobalSyncInstanceMap = temp_10 ;
GGS_staticlistMap temp_11 = GGS_staticlistMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 65)) ;
  mProperty_mStaticListMap = temp_11 ;
GGS_stringset temp_12 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 67)) ;
  mProperty_mRequiredRoutineSet = temp_12 ;
GGS_unifiedTypeMap temp_13 = GGS_unifiedTypeMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 70)) ;
  mProperty_mTypeMap = temp_13 ;
GGS_typeConstantMap temp_14 = GGS_typeConstantMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 71)) ;
  mProperty_mTypeConstantMap = temp_14 ;
GGS_typeConstructorMap temp_15 = GGS_typeConstructorMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 72)) ;
  mProperty_mTypeConstructorMap = temp_15 ;
GGS_typePropertySetterMap temp_16 = GGS_typePropertySetterMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 73)) ;
  mProperty_mTypePropertySetterMap = temp_16 ;
GGS_typePropertyGetterMap temp_17 = GGS_typePropertyGetterMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 74)) ;
  mProperty_mTypePropertyGetterMap = temp_17 ;
GGS_availableInterruptMap temp_18 = GGS_availableInterruptMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 77)) ;
  mProperty_mAvailableInterruptMap = temp_18 ;
GGS_infixOperatorMap temp_19 = GGS_infixOperatorMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 80)) ;
  mProperty_mInfixOperatorMap = temp_19 ;
GGS_prefixOperatorMap temp_20 = GGS_prefixOperatorMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 81)) ;
  mProperty_mPrefixOperatorMap = temp_20 ;
GGS_assignmentOperatorMap temp_21 = GGS_assignmentOperatorMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 82)) ;
  mProperty_mAssignmentOperatorMap = temp_21 ;
GGS_implicitConversionToBooleanMap temp_22 = GGS_implicitConversionToBooleanMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 84)) ;
  mProperty_mImplicitConversionToBooleanMap = temp_22 ;
GGS_taskMap temp_23 = GGS_taskMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 87)) ;
  mProperty_mTaskMap = temp_23 ;
GGS_globalTaskVariableList temp_24 = GGS_globalTaskVariableList::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 88)) ;
  mProperty_mGlobalTaskVariableList = temp_24 ;
  mProperty_mValuedObjectMap = GGS_universalValuedObjectMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_targetParameters & inOperand0,
                                          const GGS_omnibusType & inOperand1,
                                          const GGS_omnibusType & inOperand2,
                                          const GGS_panicRoutinePriorityMap & inOperand3,
                                          const GGS_panicRoutinePriorityMap & inOperand4,
                                          const GGS_routineMapForContext & inOperand5,
                                          const GGS_guardMapForContext & inOperand6,
                                          const GGS_controlRegisterGroupMap & inOperand7,
                                          const GGS_globalConstantMap & inOperand8,
                                          const GGS_globalSyncInstanceMap & inOperand9,
                                          const GGS_staticlistMap & inOperand10,
                                          const GGS_stringset & inOperand11,
                                          const GGS_unifiedTypeMap & inOperand12,
                                          const GGS_typeConstantMap & inOperand13,
                                          const GGS_typeConstructorMap & inOperand14,
                                          const GGS_typePropertySetterMap & inOperand15,
                                          const GGS_typePropertyGetterMap & inOperand16,
                                          const GGS_availableInterruptMap & inOperand17,
                                          const GGS_infixOperatorMap & inOperand18,
                                          const GGS_prefixOperatorMap & inOperand19,
                                          const GGS_assignmentOperatorMap & inOperand20,
                                          const GGS_implicitConversionToBooleanMap & inOperand21,
                                          const GGS_taskMap & inOperand22,
                                          const GGS_globalTaskVariableList & inOperand23,
                                          const GGS_universalValuedObjectMap & inOperand24) :
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

//--------------------------------------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::class_func_new (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticContext::isValid (void) const {
  return mProperty_mTargetParameters.isValid () && mProperty_mPanicCodeType.isValid () && mProperty_mPanicLineType.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mRoutineMap.isValid () && mProperty_mGuardMap.isValid () && mProperty_mControlRegisterGroupMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mStaticListMap.isValid () && mProperty_mRequiredRoutineSet.isValid () && mProperty_mTypeMap.isValid () && mProperty_mTypeConstantMap.isValid () && mProperty_mTypeConstructorMap.isValid () && mProperty_mTypePropertySetterMap.isValid () && mProperty_mTypePropertyGetterMap.isValid () && mProperty_mAvailableInterruptMap.isValid () && mProperty_mInfixOperatorMap.isValid () && mProperty_mPrefixOperatorMap.isValid () && mProperty_mAssignmentOperatorMap.isValid () && mProperty_mImplicitConversionToBooleanMap.isValid () && mProperty_mTaskMap.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mValuedObjectMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::drop (void) {
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

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicCodeType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicLineType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGuardMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterGroupMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStaticListMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredRoutineSet.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeConstantMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeConstructorMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypePropertySetterMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypePropertyGetterMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInfixOperatorMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPrefixOperatorMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssignmentOperatorMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mImplicitConversionToBooleanMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValuedObjectMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_semanticContext result ;
  const GGS_semanticContext * p = (const GGS_semanticContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext insertGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGetter (GGS_semanticContext & ioObject,
                                   const GGS_lstring constinArgument_inTypeName,
                                   const GGS_lstring constinArgument_inGetterName,
                                   const GGS_propertyVisibility constinArgument_inVisibility,
                                   const GGS_propertyGetterKind constinArgument_inAccess,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * objectArray_6607 = (cMapElement_typePropertyGetterMap *) ioObject.mProperty_mTypePropertyGetterMap.readWriteAccessForWithInstruction (inCompiler, constinArgument_inTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("context.galgas", 177)) ;
  if (nullptr != objectArray_6607) {
    macroValidSharedObject (objectArray_6607, cMapElement_typePropertyGetterMap) ;
    {
    objectArray_6607->mProperty_mGetterMap.setter_insertKey (constinArgument_inGetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 178)) ;
    }
  }else{
    GGS_propertyGetterMap temp_0 = GGS_propertyGetterMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 180)) ;
    GGS_propertyGetterMap var_getterMap_6767 = temp_0 ;
    {
    var_getterMap_6767.setter_insertKey (constinArgument_inGetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 181)) ;
    }
    {
    ioObject.mProperty_mTypePropertyGetterMap.setter_insertKey (constinArgument_inTypeName, var_getterMap_6767, inCompiler COMMA_SOURCE_FILE ("context.galgas", 182)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@semanticContext propertyGetterMap'
//
//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap extensionGetter_propertyGetterMap (const GGS_semanticContext & inObject,
                                                         const GGS_omnibusType & constinArgument_inType,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGetterMap result_result ; // Returned variable
  const GGS_semanticContext temp_0 = inObject ;
  const cMapElement_typePropertyGetterMap * objectArray_7141 = (const cMapElement_typePropertyGetterMap *) temp_0.readProperty_mTypePropertyGetterMap ().readAccessForWithInstruction (constinArgument_inType.readProperty_omnibusTypeDescriptionName ()) ;
  if (nullptr != objectArray_7141) {
      macroValidSharedObject (objectArray_7141, cMapElement_typePropertyGetterMap) ;
    result_result = objectArray_7141->mProperty_mGetterMap ;
  }else{
    GGS_propertyGetterMap temp_1 = GGS_propertyGetterMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 192)) ;
    result_result = temp_1 ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext addComputedPropertyGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addComputedPropertyGetter (GGS_semanticContext & ioObject,
                                                const GGS_lstring constinArgument_inTypeName,
                                                const GGS_string constinArgument_inLLVMBaseTypeName,
                                                const GGS_lstring constinArgument_inPropertyName,
                                                const GGS_mode constinArgument_inMode,
                                                const GGS_propertyVisibility constinArgument_inVisibility,
                                                const GGS_unifiedTypeMapEntry constinArgument_inResultTypeProxy,
                                                GGS_lstring & outArgument_outRoutineLLVMName,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  GGS_propertyGetterMap var_getterMap_7794 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_semanticContext temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mTypePropertyGetterMap ().getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("context.galgas", 208)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_semanticContext temp_2 = ioObject ;
      temp_2.readProperty_mTypePropertyGetterMap ().method_searchKey (constinArgument_inTypeName, var_getterMap_7794, inCompiler COMMA_SOURCE_FILE ("context.galgas", 209)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_propertyGetterMap temp_3 = GGS_propertyGetterMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 211)) ;
    var_getterMap_7794 = temp_3 ;
  }
  outArgument_outRoutineLLVMName = GGS_lstring::init_21__21_ (function_getterLLVMName (constinArgument_inLLVMBaseTypeName, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 213)), constinArgument_inPropertyName.readProperty_location (), inCompiler COMMA_HERE) ;
  GGS_routineLLVMNameDict var_modeDictionary_8077 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 214)) ;
  {
  var_getterMap_7794.setter_insertKey (constinArgument_inPropertyName, constinArgument_inVisibility, GGS_propertyGetterKind::class_func_computedProperty (constinArgument_inResultTypeProxy, var_modeDictionary_8077  COMMA_SOURCE_FILE ("context.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 215)) ;
  }
  {
  ioObject.mProperty_mTypePropertyGetterMap.setter_insertOrReplace (constinArgument_inTypeName, var_getterMap_7794 COMMA_SOURCE_FILE ("context.galgas", 220)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext insertPropertySetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertPropertySetter (GGS_semanticContext & ioObject,
                                           const GGS_lstring constinArgument_inTypeName,
                                           const GGS_lstring constinArgument_inSetterName,
                                           const GGS_propertyVisibility constinArgument_inVisibility,
                                           const GGS_propertySetterKind constinArgument_inAccess,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * objectArray_10161 = (cMapElement_typePropertySetterMap *) ioObject.mProperty_mTypePropertySetterMap.readWriteAccessForWithInstruction (inCompiler, constinArgument_inTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("context.galgas", 264)) ;
  if (nullptr != objectArray_10161) {
    macroValidSharedObject (objectArray_10161, cMapElement_typePropertySetterMap) ;
    {
    objectArray_10161->mProperty_mSetterMap.setter_insertKey (constinArgument_inSetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 265)) ;
    }
  }else{
    GGS_propertySetterMap temp_0 = GGS_propertySetterMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 267)) ;
    GGS_propertySetterMap var_setterMap_10321 = temp_0 ;
    {
    var_setterMap_10321.setter_insertKey (constinArgument_inSetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 268)) ;
    }
    {
    ioObject.mProperty_mTypePropertySetterMap.setter_insertKey (constinArgument_inTypeName, var_setterMap_10321, inCompiler COMMA_SOURCE_FILE ("context.galgas", 269)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@semanticContext propertySetterMap'
//
//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap extensionGetter_propertySetterMap (const GGS_semanticContext & inObject,
                                                         const GGS_omnibusType & constinArgument_inType,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterMap result_result ; // Returned variable
  const GGS_semanticContext temp_0 = inObject ;
  const cMapElement_typePropertySetterMap * objectArray_10695 = (const cMapElement_typePropertySetterMap *) temp_0.readProperty_mTypePropertySetterMap ().readAccessForWithInstruction (constinArgument_inType.readProperty_omnibusTypeDescriptionName ()) ;
  if (nullptr != objectArray_10695) {
      macroValidSharedObject (objectArray_10695, cMapElement_typePropertySetterMap) ;
    result_result = objectArray_10695->mProperty_mSetterMap ;
  }else{
    GGS_propertySetterMap temp_1 = GGS_propertySetterMap::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 279)) ;
    result_result = temp_1 ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@semanticContext booleanType'
//
//--------------------------------------------------------------------------------------------------

GGS_omnibusType extensionGetter_booleanType (const GGS_semanticContext & inObject,
                                             const GGS_location &,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  const GGS_semanticContext temp_0 = inObject ;
  extensionMethod_searchType (temp_0.readProperty_mTypeMap (), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 361)).getter_nowhere (SOURCE_FILE ("context.galgas", 361)), result_result, inCompiler COMMA_SOURCE_FILE ("context.galgas", 361)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @assignRepeatedValueToFixedSizeArrayElementsFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::objectCompare (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                     const GGS_bool & in_isRequired,
                                                     const GGS_bool & in_warnsIfUnused,
                                                     const GGS_omnibusType & in_mFixedSizeArrayType,
                                                     const GGS_omnibusType & in_mElementType,
                                                     const GGS_uint & in_mArraySize,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (inCompiler COMMA_THERE)) ;
  object->assignRepeatedValueToFixedSizeArrayElementsFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFixedSizeArrayType, in_mElementType, in_mArraySize, inCompiler) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::
assignRepeatedValueToFixedSizeArrayElementsFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                                           const GGS_bool & in_isRequired,
                                                                                                           const GGS_bool & in_warnsIfUnused,
                                                                                                           const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                                                           const GGS_omnibusType & in_mElementType,
                                                                                                           const GGS_uint & in_mArraySize,
                                                                                                           Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                                                                                     const GGS_bool & in_isRequired,
                                                                                                                                     const GGS_bool & in_warnsIfUnused,
                                                                                                                                     const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                                                                                     const GGS_omnibusType & in_mElementType,
                                                                                                                                     const GGS_uint & in_mArraySize,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFixedSizeArrayType, in_mElementType, in_mArraySize,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mFixedSizeArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mFixedSizeArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setProperty_mFixedSizeArrayType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mFixedSizeArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setProperty_mElementType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mArraySize (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mArraySize ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setProperty_mArraySize (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mArraySize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignRepeatedValueToFixedSizeArrayElementsFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType (),
mProperty_mElementType (),
mProperty_mArraySize () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                                                                                        const GGS_bool & in_isRequired,
                                                                                                                        const GGS_bool & in_warnsIfUnused,
                                                                                                                        const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                                                                        const GGS_omnibusType & in_mElementType,
                                                                                                                        const GGS_uint & in_mArraySize,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mFixedSizeArrayType (),
mProperty_mElementType (),
mProperty_mArraySize () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFixedSizeArrayType = in_mFixedSizeArrayType ;
  mProperty_mElementType = in_mElementType ;
  mProperty_mArraySize = in_mArraySize ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;
}

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@assignRepeatedValueToFixedSizeArrayElementsFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixedSizeArrayType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFixedSizeArrayType, mProperty_mElementType, mProperty_mArraySize, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mFixedSizeArrayType.printNonNullClassInstanceProperties ("mFixedSizeArrayType") ;
    mProperty_mElementType.printNonNullClassInstanceProperties ("mElementType") ;
    mProperty_mArraySize.printNonNullClassInstanceProperties ("mArraySize") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @assignRepeatedValueToFixedSizeArrayElementsFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR",
                                                                                                             & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@structurePropertyListAST.element enterPropertyInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterPropertyInContext (const GGS_structurePropertyListAST_2E_element inObject,
                                             GGS_semanticContext & ioArgument_ioContext,
                                             GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                             const GGS_lstring constinArgument_inReceiverTypeName,
                                             const GGS_lstring constinArgument_inOmnibusTypeSpecificName,
                                             const GGS_string constinArgument_inReceiverLLVMBaseTypeName,
                                             GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                             GGS_propertyList & ioArgument_ioPropertyList,
                                             GGS_sortedOperandIRList & ioArgument_sortedOperandIRList,
                                             GGS_constructorSignature & ioArgument_constructorSignature,
                                             GGS_string & ioArgument_ioConstructorKey,
                                             GGS_bool & ioArgument_canBeCopied,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lbigint var_explicitAlignment_12157 = GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 339)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 339)), inCompiler COMMA_HERE) ;
  GGS_bool var_alignmentDefined_12204 = GGS_bool (false) ;
  const GGS_structurePropertyListAST_2E_element temp_0 = inObject ;
  cEnumerator_propertyAttributeList enumerator_12246 (temp_0.readProperty_mPropertyAttributeList (), EnumerationOrder::up) ;
  while (enumerator_12246.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_12246.current_mAttributeName (HERE).readProperty_string ().objectCompare (GGS_string ("align"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_12246.current_mAttributeName (HERE).readProperty_location (), GGS_string ("only the @align attribute is allowed here"), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 343)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_alignmentDefined_12204.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_12246.current_mAttributeName (HERE).readProperty_location (), GGS_string ("@align attribute already defined"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 345)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::notEqual, enumerator_12246.current_mAttributeValue (HERE).readProperty_bigint ().objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)).left_shift_operation (enumerator_12246.current_mAttributeValue (HERE).readProperty_bigint ().substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_12246.current_mAttributeValue (HERE).readProperty_location (), GGS_string ("alignment should be a power of 2"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 349)) ;
          }
        }
        if (kBoolFalse == test_5) {
          var_explicitAlignment_12157 = enumerator_12246.current_mAttributeValue (HERE) ;
          var_alignmentDefined_12204 = GGS_bool (true) ;
        }
      }
    }
    enumerator_12246.gotoNextObject () ;
  }
  const GGS_structurePropertyListAST_2E_element temp_7 = inObject ;
  GGS_omnibusType temp_8 ;
  const enumGalgasBool test_9 = GGS_bool (ComparisonKind::equal, temp_7.readProperty_mPropertyTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 358)) ;
  }else if (kBoolFalse == test_9) {
    const GGS_structurePropertyListAST_2E_element temp_10 = inObject ;
    temp_8 = extensionGetter_type (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_10.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 359)) ;
  }
  GGS_omnibusType var_optionalPropertyType_12829 = temp_8 ;
  const GGS_structurePropertyListAST_2E_element temp_11 = inObject ;
  switch (temp_11.readProperty_mPropertyKind ().enumValue ()) {
  case GGS_propertyKindAST::Enumeration::invalid:
    break ;
  case GGS_propertyKindAST::Enumeration::enum_initializedConstantProperty:
    {
      GGS_expressionAST extractedValue_13081_initExpression_0 ;
      temp_11.readProperty_mPropertyKind ().getAssociatedValuesFor_initializedConstantProperty (extractedValue_13081_initExpression_0) ;
      GGS_objectIR var_expressionIR_13368 ;
      {
      const GGS_structurePropertyListAST_2E_element temp_12 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_13 = inObject ;
      routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_13081_initExpression_0, temp_12.readProperty_mPropertyName ().readProperty_location (), temp_13.readProperty_mPropertyTypeName (), var_expressionIR_13368, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 364)) ;
      }
      GGS_omnibusType var_actualPropertyType_13408 ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::notEqual, var_optionalPropertyType_12829.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("type-structure-declaration.galgas", 373)))).boolEnum () ;
        if (kBoolTrue == test_14) {
          var_actualPropertyType_13408 = var_optionalPropertyType_12829 ;
        }
      }
      if (kBoolFalse == test_14) {
        var_actualPropertyType_13408 = extensionGetter_type (var_expressionIR_13368, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 376)) ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_13408.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 378)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 378)).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GGS_structurePropertyListAST_2E_element temp_16 = inObject ;
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mPropertyName ().readProperty_location (), var_actualPropertyType_13408.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 379)), fixItArray17  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 379)) ;
        }
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_13408.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 381)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 381)).boolEnum () ;
        if (kBoolTrue == test_18) {
          ioArgument_canBeCopied = GGS_bool (false) ;
        }
      }
      {
      const GGS_structurePropertyListAST_2E_element temp_19 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_20 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_19.readProperty_mPropertyName (), temp_20.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_constantProperty (extensionGetter_withType (var_expressionIR_13368, var_actualPropertyType_13408, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 388))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 384)) ;
      }
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_initializedStoredProperty:
    {
      GGS_expressionAST extractedValue_14081_initExpression_0 ;
      temp_11.readProperty_mPropertyKind ().getAssociatedValuesFor_initializedStoredProperty (extractedValue_14081_initExpression_0) ;
      GGS_objectIR var_expressionIR_14368 ;
      {
      const GGS_structurePropertyListAST_2E_element temp_21 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_22 = inObject ;
      routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_14081_initExpression_0, temp_21.readProperty_mPropertyName ().readProperty_location (), temp_22.readProperty_mPropertyTypeName (), var_expressionIR_14368, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 391)) ;
      }
      GGS_omnibusType var_actualPropertyType_14408 ;
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        test_23 = GGS_bool (ComparisonKind::notEqual, var_optionalPropertyType_12829.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("type-structure-declaration.galgas", 400)))).boolEnum () ;
        if (kBoolTrue == test_23) {
          var_actualPropertyType_14408 = var_optionalPropertyType_12829 ;
        }
      }
      if (kBoolFalse == test_23) {
        var_actualPropertyType_14408 = extensionGetter_type (var_expressionIR_14368, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 403)) ;
      }
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = var_actualPropertyType_14408.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("type-structure-declaration.galgas", 405)).boolEnum () ;
        if (kBoolTrue == test_24) {
          var_actualPropertyType_14408 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 406)) ;
        }
      }
      if (kBoolFalse == test_24) {
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_actualPropertyType_14408.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("type-structure-declaration.galgas", 407)).boolEnum () ;
          if (kBoolTrue == test_25) {
            const GGS_structurePropertyListAST_2E_element temp_26 = inObject ;
            TC_Array <FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticError (temp_26.readProperty_mPropertyName ().readProperty_location (), GGS_string ("$").add_operation (var_actualPropertyType_14408.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 409)).add_operation (GGS_string (" type is a compile time type, and is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 409)), fixItArray27  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 408)) ;
          }
        }
        if (kBoolFalse == test_25) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_14408.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 410)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 410)).boolEnum () ;
            if (kBoolTrue == test_28) {
              const GGS_structurePropertyListAST_2E_element temp_29 = inObject ;
              TC_Array <FixItDescription> fixItArray30 ;
              inCompiler->emitSemanticError (temp_29.readProperty_mPropertyName ().readProperty_location (), var_actualPropertyType_14408.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)), fixItArray30  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)) ;
            }
          }
        }
      }
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        test_31 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_14408.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 413)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 413)).boolEnum () ;
        if (kBoolTrue == test_31) {
          ioArgument_canBeCopied = GGS_bool (false) ;
        }
      }
      GGS_uint var_propertyIndex_15150 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 416)) ;
      const GGS_structurePropertyListAST_2E_element temp_32 = inObject ;
      ioArgument_ioPropertyList.addAssign_operation (temp_32.readProperty_mPropertyName ().readProperty_string (), var_actualPropertyType_14408  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 417)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_33 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_34 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_33.readProperty_mPropertyName (), temp_34.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_storedProperty (var_actualPropertyType_14408, var_propertyIndex_15150  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 418)) ;
      }
      {
      const GGS_structurePropertyListAST_2E_element temp_35 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_36 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_35.readProperty_mPropertyName (), temp_36.readProperty_mVisibility (), GGS_propertySetterKind::class_func_storedProperty (var_actualPropertyType_14408, var_propertyIndex_15150  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 424)) ;
      }
      ioArgument_sortedOperandIRList.addAssign_operation (extensionGetter_withType (var_expressionIR_14368, var_actualPropertyType_14408, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 430)), var_propertyIndex_15150  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 430)) ;
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_uninitializedStoredProperty:
    {
      enumGalgasBool test_37 = kBoolTrue ;
      if (kBoolTrue == test_37) {
        test_37 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12829.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 432)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 432)).boolEnum () ;
        if (kBoolTrue == test_37) {
          const GGS_structurePropertyListAST_2E_element temp_38 = inObject ;
          TC_Array <FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (temp_38.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12829.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 433)), fixItArray39  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 433)) ;
        }
      }
      GGS_uint var_propertyIndex_15957 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 435)) ;
      const GGS_structurePropertyListAST_2E_element temp_40 = inObject ;
      ioArgument_ioPropertyList.addAssign_operation (temp_40.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12829  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_41 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_42 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_41.readProperty_mPropertyName (), temp_42.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_storedProperty (var_optionalPropertyType_12829, var_propertyIndex_15957  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 437)) ;
      }
      {
      const GGS_structurePropertyListAST_2E_element temp_43 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_44 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_43.readProperty_mPropertyName (), temp_44.readProperty_mVisibility (), GGS_propertySetterKind::class_func_storedProperty (var_optionalPropertyType_12829, var_propertyIndex_15957  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 443)) ;
      }
      const GGS_structurePropertyListAST_2E_element temp_45 = inObject ;
      ioArgument_constructorSignature.addAssign_operation (temp_45.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12829, var_propertyIndex_15957  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 449)) ;
      const GGS_structurePropertyListAST_2E_element temp_46 = inObject ;
      ioArgument_ioConstructorKey.plusAssign_operation(GGS_string ("!").add_operation (temp_46.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 450)) ;
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_uninitializedConstantProperty:
    {
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        test_47 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12829.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 452)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 452)).boolEnum () ;
        if (kBoolTrue == test_47) {
          const GGS_structurePropertyListAST_2E_element temp_48 = inObject ;
          TC_Array <FixItDescription> fixItArray49 ;
          inCompiler->emitSemanticError (temp_48.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12829.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 453)), fixItArray49  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 453)) ;
        }
      }
      GGS_uint var_propertyIndex_16826 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 455)) ;
      const GGS_structurePropertyListAST_2E_element temp_50 = inObject ;
      ioArgument_ioPropertyList.addAssign_operation (temp_50.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12829  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 456)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_51 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_52 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_51.readProperty_mPropertyName (), temp_52.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_storedProperty (var_optionalPropertyType_12829, var_propertyIndex_16826  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 457)) ;
      }
      const GGS_structurePropertyListAST_2E_element temp_53 = inObject ;
      ioArgument_constructorSignature.addAssign_operation (temp_53.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12829, var_propertyIndex_16826  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 463)) ;
      const GGS_structurePropertyListAST_2E_element temp_54 = inObject ;
      ioArgument_ioConstructorKey.plusAssign_operation(GGS_string ("!").add_operation (temp_54.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)) ;
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_readOnlyComputedProperty:
    {
      GGS_instructionListAST extractedValue_17318_instructionList_0 ;
      GGS_location extractedValue_17334_endOfInstructionList_1 ;
      temp_11.readProperty_mPropertyKind ().getAssociatedValuesFor_readOnlyComputedProperty (extractedValue_17318_instructionList_0, extractedValue_17334_endOfInstructionList_1) ;
      enumGalgasBool test_55 = kBoolTrue ;
      if (kBoolTrue == test_55) {
        test_55 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12829.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 466)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 466)).boolEnum () ;
        if (kBoolTrue == test_55) {
          const GGS_structurePropertyListAST_2E_element temp_56 = inObject ;
          TC_Array <FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (temp_56.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12829.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 467)), fixItArray57  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 467)) ;
        }
      }
      const GGS_structurePropertyListAST_2E_element temp_58 = inObject ;
      GGS_string var_llvmRoutineName_17537 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_58.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 469)) ;
      GGS_routineLLVMNameDict var_modeDictionary_17628 = extensionGetter_routineLLVMDictionaryForFunction (GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 470)), var_llvmRoutineName_17537, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 470)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_59 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_60 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_61 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_59.readProperty_mPropertyName (), temp_60.readProperty_mVisibility (), GGS_propertyGetterKind::class_func_computedProperty (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_61.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 476)), var_modeDictionary_17628  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 471)) ;
      }
      const GGS_structurePropertyListAST_2E_element temp_62 = inObject ;
      GGS_lstring var_functionLLVMName_18003 = GGS_lstring::init_21__21_ (var_llvmRoutineName_17537, temp_62.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_routineFormalArgumentListAST temp_63 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 493)) ;
      const GGS_structurePropertyListAST_2E_element temp_64 = inObject ;
      ioArgument_ioDecoratedRoutineList.addAssign_operation (constinArgument_inReceiverTypeName, GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 486)), GGS_bool (false), GGS_routineKind::class_func_function (SOURCE_FILE ("type-structure-declaration.galgas", 488)), GGS_bool (false), GGS_bool (false), GGS_routineAttributes::init (inCompiler COMMA_HERE), var_functionLLVMName_18003, temp_63, GGS_bool (false), extractedValue_17318_instructionList_0, extractedValue_17334_endOfInstructionList_1, temp_64.readProperty_mPropertyTypeName ()  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 484)) ;
    }
    break ;
  case GGS_propertyKindAST::Enumeration::enum_writeComputedProperty:
    {
      GGS_instructionListAST extractedValue_18579_writeInstructionList_0 ;
      GGS_location extractedValue_18600_endOfWriteInstructionList_1 ;
      temp_11.readProperty_mPropertyKind ().getAssociatedValuesFor_writeComputedProperty (extractedValue_18579_writeInstructionList_0, extractedValue_18600_endOfWriteInstructionList_1) ;
      enumGalgasBool test_65 = kBoolTrue ;
      if (kBoolTrue == test_65) {
        test_65 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12829.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 499)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 499)).boolEnum () ;
        if (kBoolTrue == test_65) {
          const GGS_structurePropertyListAST_2E_element temp_66 = inObject ;
          TC_Array <FixItDescription> fixItArray67 ;
          inCompiler->emitSemanticError (temp_66.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12829.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)), fixItArray67  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)) ;
        }
      }
      const GGS_structurePropertyListAST_2E_element temp_68 = inObject ;
      GGS_string var_llvmGetterRoutineName_18808 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_68.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 502)) ;
      GGS_routineLLVMNameDict var_getterModeDictionary_18905 = extensionGetter_routineLLVMDictionaryForFunction (GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 503)), var_llvmGetterRoutineName_18808, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 503)) ;
      const GGS_structurePropertyListAST_2E_element temp_69 = inObject ;
      GGS_string var_llvmSetterRoutineName_19008 = function_setterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_69.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 504)) ;
      GGS_routineLLVMNameDict var_setterModeDictionary_19105 = extensionGetter_routineLLVMDictionaryForFunction (GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 505)), var_llvmSetterRoutineName_19008, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 505)) ;
      {
      const GGS_structurePropertyListAST_2E_element temp_70 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_71 = inObject ;
      const GGS_structurePropertyListAST_2E_element temp_72 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_70.readProperty_mPropertyName (), temp_71.readProperty_mVisibility (), GGS_propertySetterKind::class_func_computedProperty (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_72.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 511)), var_getterModeDictionary_18905, var_setterModeDictionary_19105  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 506)) ;
      }
      const GGS_structurePropertyListAST_2E_element temp_73 = inObject ;
      GGS_lstring var_functionLLVMName_19542 = GGS_lstring::init_21__21_ (var_llvmSetterRoutineName_19008, temp_73.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_routineFormalArgumentListAST temp_74 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 526)) ;
      const GGS_structurePropertyListAST_2E_element temp_75 = inObject ;
      temp_74.enterElement (GGS_routineFormalArgumentListAST_2E_element::init_21__21__21__21_ (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("type-structure-declaration.galgas", 522)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 523)), temp_75.readProperty_mPropertyTypeName (), GGS_lstring::init_21__21_ (GGS_string ("newValue"), extractedValue_18600_endOfWriteInstructionList_1, inCompiler COMMA_HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 526)) ;
      GGS_routineFormalArgumentListAST var_formalArgumentList_19685 = temp_74 ;
      ioArgument_ioDecoratedRoutineList.addAssign_operation (constinArgument_inReceiverTypeName, GGS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 530)), GGS_bool (false), GGS_routineKind::class_func_function (SOURCE_FILE ("type-structure-declaration.galgas", 532)), GGS_bool (false), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("type-structure-declaration.galgas", 535)), var_functionLLVMName_19542, var_formalArgumentList_19685, GGS_bool (false), extractedValue_18579_writeInstructionList_0, extractedValue_18600_endOfWriteInstructionList_1, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 541))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 528)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterDeclarationList.element buildControlRegisterMapForGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildControlRegisterMapForGroup (const GGS_controlRegisterDeclarationList_2E_element inObject,
                                                      GGS_semanticContext & ioArgument_ioContext,
                                                      GGS_controlRegisterMap & ioArgument_ioControlRegisterMap,
                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_registerType_20026 ;
  GGS_uint var_registerBitCount_20053 ;
  {
  const GGS_controlRegisterDeclarationList_2E_element temp_0 = inObject ;
  routine_controlRegisterType_3F__26_context_21_type_21_bitCount (temp_0.readProperty_mRegisterTypeName (), ioArgument_ioContext, var_registerType_20026, var_registerBitCount_20053, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 492)) ;
  }
  GGS_controlRegisterFieldMap var_registerFieldMap_20289 ;
  GGS_sliceMap var_registerBitSliceMap_20315 ;
  GGS_controlRegisterFieldList var_controlRegisterFieldList_20344 ;
  {
  const GGS_controlRegisterDeclarationList_2E_element temp_1 = inObject ;
  const GGS_controlRegisterDeclarationList_2E_element temp_2 = inObject ;
  routine_buildControlRegisterSliceMap_3F__3F__26_context_26_type_3F_bitCount_21__21__21_ (temp_1.readProperty_mRegisterBitSliceList (), temp_2.readProperty_mRegisterBitSliceListLocation (), ioArgument_ioContext, var_registerType_20026, var_registerBitCount_20053, var_registerFieldMap_20289, var_registerBitSliceMap_20315, var_controlRegisterFieldList_20344, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 494)) ;
  }
  const GGS_controlRegisterDeclarationList_2E_element temp_3 = inObject ;
  cEnumerator_controlRegisterNameListAST enumerator_20425 (temp_3.readProperty_mRegisterArrayList (), EnumerationOrder::up) ;
  while (enumerator_20425.hasCurrentObject ()) {
    GGS_objectIR var_addressOffsetExpressionResult_20762 ;
    {
    routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, enumerator_20425.current (HERE).readProperty_mRegisterOffset (), enumerator_20425.current (HERE).readProperty_mRegisterOffsetLocation (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 512)), var_addressOffsetExpressionResult_20762, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 507)) ;
    }
    GGS_bigint var_registerAddressOffset_20814 ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_addressOffsetExpressionResult_20762.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 516)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 516)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_20425.current (HERE).readProperty_mRegisterOffsetLocation (), GGS_string ("control register address offset is not a static integer expression"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 517)) ;
        var_registerAddressOffset_20814.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      GGS_omnibusType joker_21125_1 ; // Joker input parameter
      var_addressOffsetExpressionResult_20762.method_extractLiteralInteger (joker_21125_1, var_registerAddressOffset_20814, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 521)) ;
    }
    GGS_bigint var_arraySize_21183 ;
    GGS_uint var_elementArraySize_21207 ;
    switch (enumerator_20425.current (HERE).readProperty_mControlRegisterKind ().enumValue ()) {
    case GGS_controlRegisterKind::Enumeration::invalid:
      break ;
    case GGS_controlRegisterKind::Enumeration::enum_scalar:
      {
        var_arraySize_21183 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 527)) ;
        var_elementArraySize_21207 = GGS_uint (uint32_t (0U)) ;
      }
      break ;
    case GGS_controlRegisterKind::Enumeration::enum_registerArray:
      {
        GGS_expressionAST extractedValue_21369_arraySizeExpression_0 ;
        GGS_location extractedValue_21399_arraySizeLocation_1 ;
        GGS_expressionAST extractedValue_21456_arrayElementSizeExpression_2 ;
        GGS_location extractedValue_21493_arrayElementSizeLocation_3 ;
        enumerator_20425.current (HERE).readProperty_mControlRegisterKind ().getAssociatedValuesFor_registerArray (extractedValue_21369_arraySizeExpression_0, extractedValue_21399_arraySizeLocation_1, extractedValue_21456_arrayElementSizeExpression_2, extractedValue_21493_arrayElementSizeLocation_3) ;
        GGS_objectIR var_sizeExpressionResult_21834 ;
        {
        routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_21369_arraySizeExpression_0, extractedValue_21399_arraySizeLocation_1, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 537)), var_sizeExpressionResult_21834, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 532)) ;
        }
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_sizeExpressionResult_21834.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 540)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 540)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_21399_arraySizeLocation_1, GGS_string ("control register address is not a static integer expression"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 541)) ;
            var_arraySize_21183.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_6) {
          GGS_omnibusType joker_22092_1 ; // Joker input parameter
          var_sizeExpressionResult_21834.method_extractLiteralInteger (joker_22092_1, var_arraySize_21183, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 543)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::lowerThan, var_arraySize_21183.objectCompare (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 544)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (extractedValue_21399_arraySizeLocation_1, GGS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 545)) ;
              var_arraySize_21183.drop () ; // Release error dropped variable
            }
          }
        }
        GGS_objectIR var_elementArraySizeExpressionResult_22660 ;
        {
        routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_21456_arrayElementSizeExpression_2, extractedValue_21493_arrayElementSizeLocation_3, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 556)), var_elementArraySizeExpressionResult_22660, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 551)) ;
        }
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = var_elementArraySizeExpressionResult_22660.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 559)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 559)).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_21493_arrayElementSizeLocation_3, GGS_string ("element size is not a static integer expression"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 560)) ;
            var_elementArraySize_21207.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_10) {
          GGS_bigint var_elementArraySizeAsBigInt_22991 ;
          GGS_omnibusType joker_22976_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_22660.method_extractLiteralInteger (joker_22976_1, var_elementArraySizeAsBigInt_22991, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 564)) ;
          var_elementArraySize_21207 = var_elementArraySizeAsBigInt_22991.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 565)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioControlRegisterMap.setter_insertKey (enumerator_20425.current (HERE).readProperty_mRegisterName (), var_registerType_20026, enumerator_20425.current (HERE).readProperty_mIsReadOnly (), GGS_bool (false), var_registerBitSliceMap_20315, var_registerFieldMap_20289, var_registerAddressOffset_20814, var_controlRegisterFieldList_20344, var_registerBitCount_20053, var_arraySize_21183.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 578)), var_elementArraySize_21207, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 568)) ;
    }
    enumerator_20425.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@globalSyncInstanceMapIR.element generateLLVM'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVM (const GGS_globalSyncInstanceMapIR_2E_element inObject,
                                   GGS_string & ioArgument_ioLLVMcode,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_globalSyncInstanceMapIR_2E_element temp_0 = inObject ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalSyncInstance (temp_0.readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)).add_operation (GGS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)) ;
  const GGS_globalSyncInstanceMapIR_2E_element temp_1 = inObject ;
  const GGS_globalSyncInstanceMapIR_2E_element temp_2 = inObject ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_1.readProperty_mInitialValue (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).add_operation (extensionGetter_llvmValue (temp_2.readProperty_mInitialValue (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 164)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@driverListIR.element generateLLVMDriverVariableDefinition'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverVariableDefinition (const GGS_driverListIR_2E_element inObject,
                                                           GGS_string & ioArgument_ioLLVMcode,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_driverListIR_2E_element temp_0 = inObject ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (temp_0.readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 426)).add_operation (GGS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 426)) ;
  const GGS_driverListIR_2E_element temp_1 = inObject ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)).add_operation (GGS_string (" {"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)) ;
  const GGS_driverListIR_2E_element temp_2 = inObject ;
  cEnumerator_operandIRList enumerator_18024 (temp_2.readProperty_mInitialValueList (), EnumerationOrder::up) ;
  while (enumerator_18024.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18024.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)).add_operation (extensionGetter_llvmValue (enumerator_18024.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 429)) ;
    if (enumerator_18024.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 430)) ;
    }
    enumerator_18024.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 432)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedTaskList.element taskSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_taskSemanticAnalysis (const GGS_decoratedTaskList_2E_element inObject,
                                           const GGS_semanticContext constinArgument_inContext,
                                           const GGS_uint constinArgument_inPriority,
                                           GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                           GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_taskType_14772 ;
  const GGS_decoratedTaskList_2E_element temp_0 = inObject ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTaskName (), var_taskType_14772, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 392)) ;
  const GGS_decoratedTaskList_2E_element temp_1 = inObject ;
  GGS_bigint var_stackSize_14880 = temp_1.readProperty_mStackSize ().readProperty_bigint () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::lowerThan, var_stackSize_14880.objectCompare (GGS_bigint ("64", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 395)))) ;
    if (kBoolTrue != test_3.boolEnum ()) {
      test_3 = GGS_bool (ComparisonKind::notEqual, var_stackSize_14880.modulo_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 395)).objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 395)))) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_decoratedTaskList_2E_element temp_4 = inObject ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mStackSize ().readProperty_location (), GGS_string ("stack size should be a multiple of 8, and >= 64"), fixItArray5  COMMA_SOURCE_FILE ("task-declaration.galgas", 396)) ;
    }
  }
  GGS_stringlist var_setupOrderedList_15195 ;
  {
  const GGS_decoratedTaskList_2E_element temp_6 = inObject ;
  routine_analyzeOrderedTaskRoutines_3F__21_ (temp_6.readProperty_mTaskSetupListAST (), var_setupOrderedList_15195, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 399)) ;
  }
  GGS_stringlist var_activateOrderedList_15363 ;
  {
  const GGS_decoratedTaskList_2E_element temp_7 = inObject ;
  routine_analyzeOrderedTaskRoutines_3F__21_ (temp_7.readProperty_mTaskActivateListAST (), var_activateOrderedList_15363, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 404)) ;
  }
  GGS_stringlist var_deactivateOrderedList_15538 ;
  {
  const GGS_decoratedTaskList_2E_element temp_8 = inObject ;
  routine_analyzeOrderedTaskRoutines_3F__21_ (temp_8.readProperty_mTaskDeactivateListAST (), var_deactivateOrderedList_15538, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 409)) ;
  }
  GGS_uint var_taskNameStringIndex_15738 ;
  {
  const GGS_decoratedTaskList_2E_element temp_9 = inObject ;
  extensionSetter_findOrAddStaticString (ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, temp_9.readProperty_mTaskName ().readProperty_string (), var_taskNameStringIndex_15738, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 414)) ;
  }
  {
  const GGS_decoratedTaskList_2E_element temp_10 = inObject ;
  const GGS_decoratedTaskList_2E_element temp_11 = inObject ;
  const GGS_decoratedTaskList_2E_element temp_12 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mTaskMapIR.setter_insertKey (temp_10.readProperty_mTaskName (), var_taskType_14772, constinArgument_inPriority, temp_11.readProperty_mStackSize ().readProperty_bigint (), var_setupOrderedList_15195, var_activateOrderedList_15363, var_deactivateOrderedList_15538, var_taskNameStringIndex_15738, temp_12.readProperty_mAutoStart (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 416)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST.element enterExternProcInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const GGS_externFunctionDeclarationListAST_2E_element inObject,
                                               GGS_semanticContext & ioArgument_ioContext,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineTypedSignature var_signature_3427 ;
  {
  const GGS_externFunctionDeclarationListAST_2E_element temp_0 = inObject ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mProcFormalArgumentList (), var_signature_3427, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 87)) ;
  }
  GGS_unifiedTypeMapEntry var_returnTypeProxy_3524 ;
  {
  const GGS_externFunctionDeclarationListAST_2E_element temp_1 = inObject ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mReturnTypeName (), var_returnTypeProxy_3524, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 89)) ;
  }
  const GGS_externFunctionDeclarationListAST_2E_element temp_2 = inObject ;
  const GGS_externFunctionDeclarationListAST_2E_element temp_3 = inObject ;
  GGS_routineLLVMNameDict var_routineLLVMNameDict_3590 = extensionGetter_routineLLVMDictionaryForFunction (temp_2.readProperty_mMode (), temp_3.readProperty_mRoutineNameForGeneration ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 91)) ;
  const GGS_externFunctionDeclarationListAST_2E_element temp_4 = inObject ;
  GGS_lstring var_routineMangledName_3696 = extensionGetter_mangledName (var_signature_3427, GGS_string::makeEmptyString (), temp_4.readProperty_mExternProcedureName (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 92)) ;
  {
  const GGS_externFunctionDeclarationListAST_2E_element temp_5 = inObject ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_3696, GGS_bool (true), var_signature_3427, var_returnTypeProxy_3524, var_routineLLVMNameDict_3590, GGS_bool (false), temp_5.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 93)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@externProcedureMapIR.element llvmPrototypeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const GGS_externProcedureMapIR_2E_element inObject,
                                              GGS_string & ioArgument_ioLLVMcode,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externProcedureMapIR_2E_element temp_0 = inObject ;
  GGS_string var_procName_8304 = function_llvmNameForFunction (temp_0.readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 215)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_externProcedureMapIR_2E_element temp_2 = inObject ;
    test_1 = temp_2.readProperty_mReturnType ().getter_isNull (SOURCE_FILE ("declaration-extern-proc.galgas", 216)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 217)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GGS_externProcedureMapIR_2E_element temp_3 = inObject ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_3.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" @").add_operation (var_procName_8304, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)) ;
  const GGS_externProcedureMapIR_2E_element temp_4 = inObject ;
  cEnumerator_routineFormalArgumentListIR enumerator_8607 (temp_4.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_8607.hasCurrentObject ()) {
    switch (enumerator_8607.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8607.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)).add_operation (enumerator_8607.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8607.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)).add_operation (function_llvmNameForLocalVariable (enumerator_8607.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8607.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)).add_operation (function_llvmNameForLocalVariable (enumerator_8607.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)) ;
      }
      break ;
    }
    if (enumerator_8607.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 233)) ;
    }
    enumerator_8607.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)).add_operation (GGS_string ("; declared by extern Omnibus function declaration\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@callInstructionAST baseGuardAnalyze'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_baseGuardAnalyze (cPtr_callInstructionAST * inObject,
                                           const GGS_omnibusType constin_inSelfType,
                                           const GGS_routineAttributes constin_inRoutineAttributes,
                                           const GGS_semanticContext constin_inContext,
                                           const GGS_mode constin_inMode,
                                           GGS_semanticTemporariesStruct & io_ioTemporaries,
                                           GGS_staticEntityMap & io_ioStaticEntityMap,
                                           GGS_universalValuedObjectMap & io_ioUniversalMap,
                                           GGS_guardKindGenerationIR & out_outConvenienceGuardGenerationIR,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outConvenienceGuardGenerationIR.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_callInstructionAST) ;
    inObject->method_baseGuardAnalyze (constin_inSelfType, constin_inRoutineAttributes, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, out_outConvenienceGuardGenerationIR, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedRegularRoutineList.element semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_semanticAnalysis (const GGS_decoratedRegularRoutineList_2E_element inObject,
                                       const GGS_semanticContext constinArgument_inContext,
                                       GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex = GGS_uint (uint32_t (0U)) ;
  const GGS_decoratedRegularRoutineList_2E_element temp_0 = inObject ;
  GGS_omnibusType temp_1 ;
  const enumGalgasBool test_2 = GGS_bool (ComparisonKind::equal, temp_0.readProperty_receiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 48)) ;
  }else if (kBoolFalse == test_2) {
    const GGS_decoratedRegularRoutineList_2E_element temp_3 = inObject ;
    temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_receiverTypeName (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 49)) ;
  }
  GGS_omnibusType var_receiverType_2049 = temp_1 ;
  GGS_universalValuedObjectMap var_universalMap_2225 = constinArgument_inContext.readProperty_mValuedObjectMap () ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_2225, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 53)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_2225, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 54)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GGS_decoratedRegularRoutineList_2E_element temp_5 = inObject ;
    test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_returnTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_decoratedRegularRoutineList_2E_element temp_6 = inObject ;
      GGS_lstring var_resultVarName_2414 = GGS_lstring::init_21__21_ (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 57)), temp_6.readProperty_returnTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
      const GGS_decoratedRegularRoutineList_2E_element temp_7 = inObject ;
      GGS_omnibusType var_resultType_2515 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_7.readProperty_returnTypeName (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 58)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_2225, var_resultVarName_2414, var_resultType_2515, var_resultVarName_2414, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("regular-routine-analysis.galgas", 59)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 59)) ;
      }
    }
  }
  GGS_routineFormalArgumentListIR temp_8 = GGS_routineFormalArgumentListIR::init (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 62)) ;
  GGS_routineFormalArgumentListIR var_formalArguments_2757 = temp_8 ;
  {
  const GGS_decoratedRegularRoutineList_2E_element temp_9 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_10 = inObject ;
  routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_9.readProperty_formalArgumentList (), var_universalMap_2225, var_formalArguments_2757, temp_10.readProperty_warningOnUnusedArgs (), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 63)) ;
  }
  GGS_allocaList temp_11 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 71)) ;
  GGS_allocaList var_allocaList_3000 = temp_11 ;
  GGS_instructionListIR temp_12 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 72)) ;
  GGS_instructionListIR var_instructionGenerationList_3042 = temp_12 ;
  const GGS_decoratedRegularRoutineList_2E_element temp_13 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_14 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_15 = inObject ;
  extensionMethod_analyzeRoutineInstructionList (temp_13.readProperty_mInstructionList (), var_receiverType_2049, temp_14.readProperty_routineAttributes (), constinArgument_inContext, temp_15.readProperty_mode (), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_2225, var_allocaList_3000, var_instructionGenerationList_3042, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 73)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_2225, var_instructionGenerationList_3042, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 85)) ;
  {
  const GGS_decoratedRegularRoutineList_2E_element temp_16 = inObject ;
  extensionSetter_closeBranch (var_universalMap_2225, temp_16.readProperty_mEndOfRoutineDeclaration (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 86)) ;
  }
  {
  const GGS_decoratedRegularRoutineList_2E_element temp_17 = inObject ;
  extensionSetter_closeOverride (var_universalMap_2225, temp_17.readProperty_mEndOfRoutineDeclaration (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 87)) ;
  }
  const GGS_decoratedRegularRoutineList_2E_element temp_18 = inObject ;
  GGS_omnibusType temp_19 ;
  const enumGalgasBool test_20 = GGS_bool (ComparisonKind::equal, temp_18.readProperty_returnTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 90)) ;
  }else if (kBoolFalse == test_20) {
    const GGS_decoratedRegularRoutineList_2E_element temp_21 = inObject ;
    temp_19 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_21.readProperty_returnTypeName (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 92)) ;
  }
  GGS_omnibusType var_returnType_3692 = temp_19 ;
  const GGS_decoratedRegularRoutineList_2E_element temp_22 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_23 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_24 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_25 = inObject ;
  const GGS_decoratedRegularRoutineList_2E_element temp_26 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GGS_regularRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (temp_22.readProperty_routineMangledLLVMName (), temp_23.readProperty_isRequired (), temp_24.readProperty_warnIfUnused (), var_receiverType_2049, var_formalArguments_2757, var_allocaList_3000, var_instructionGenerationList_3042, temp_25.readProperty_exportedRoutine (), temp_26.readProperty_routineKind (), var_returnType_3692, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 94)) ;
}


//--------------------------------------------------------------------------------------------------
// @addressofControlRegisterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addressofControlRegisterAST::objectCompare (const GGS_addressofControlRegisterAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST::GGS_addressofControlRegisterAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_addressofControlRegisterAST GGS_addressofControlRegisterAST::
init_21_ (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_addressofControlRegisterAST * object = nullptr ;
  macroMyNew (object, cPtr_addressofControlRegisterAST (inCompiler COMMA_THERE)) ;
  object->addressofControlRegisterAST_init_21_ (in_mControlRegisterLValue, inCompiler) ;
  const GGS_addressofControlRegisterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::
addressofControlRegisterAST_init_21_ (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                      Compiler * /* inCompiler */) {
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST::GGS_addressofControlRegisterAST (const cPtr_addressofControlRegisterAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofControlRegisterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST GGS_addressofControlRegisterAST::class_func_new (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_addressofControlRegisterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_addressofControlRegisterAST (in_mControlRegisterLValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_addressofControlRegisterAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_controlRegisterLValueAST () ;
  }else{
    cPtr_addressofControlRegisterAST * p = (cPtr_addressofControlRegisterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofControlRegisterAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_addressofControlRegisterAST::setProperty_mControlRegisterLValue (const GGS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_addressofControlRegisterAST * p = (cPtr_addressofControlRegisterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofControlRegisterAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @addressofControlRegisterAST class
//--------------------------------------------------------------------------------------------------

cPtr_addressofControlRegisterAST::cPtr_addressofControlRegisterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_addressofControlRegisterAST::cPtr_addressofControlRegisterAST (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue () {
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addressofControlRegisterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST ;
}

void cPtr_addressofControlRegisterAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@addressofControlRegisterAST:") ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addressofControlRegisterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_addressofControlRegisterAST (mProperty_mControlRegisterLValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addressofControlRegisterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mControlRegisterLValue.printNonNullClassInstanceProperties ("mControlRegisterLValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @addressofControlRegisterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofControlRegisterAST ("addressofControlRegisterAST",
                                                                                   & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_addressofControlRegisterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addressofControlRegisterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addressofControlRegisterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST GGS_addressofControlRegisterAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_addressofControlRegisterAST result ;
  const GGS_addressofControlRegisterAST * p = (const GGS_addressofControlRegisterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addressofControlRegisterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofControlRegisterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @addressofExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addressofExpressionAST::objectCompare (const GGS_addressofExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST::GGS_addressofExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_addressofExpressionAST GGS_addressofExpressionAST::
init_21_ (const GGS_LValueAST & in_mLValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_addressofExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_addressofExpressionAST (inCompiler COMMA_THERE)) ;
  object->addressofExpressionAST_init_21_ (in_mLValue, inCompiler) ;
  const GGS_addressofExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_addressofExpressionAST::
addressofExpressionAST_init_21_ (const GGS_LValueAST & in_mLValue,
                                 Compiler * /* inCompiler */) {
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST::GGS_addressofExpressionAST (const cPtr_addressofExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST GGS_addressofExpressionAST::class_func_new (const GGS_LValueAST & in_mLValue,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_addressofExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_addressofExpressionAST (in_mLValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST GGS_addressofExpressionAST::readProperty_mLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_LValueAST () ;
  }else{
    cPtr_addressofExpressionAST * p = (cPtr_addressofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
    return p->mProperty_mLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_addressofExpressionAST::setProperty_mLValue (const GGS_LValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_addressofExpressionAST * p = (cPtr_addressofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
    p->mProperty_mLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @addressofExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_addressofExpressionAST::cPtr_addressofExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_addressofExpressionAST::cPtr_addressofExpressionAST (const GGS_LValueAST & in_mLValue,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLValue () {
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addressofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

void cPtr_addressofExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@addressofExpressionAST:") ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addressofExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_addressofExpressionAST (mProperty_mLValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addressofExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLValue.printNonNullClassInstanceProperties ("mLValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @addressofExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofExpressionAST ("addressofExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_addressofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addressofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addressofExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST GGS_addressofExpressionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_addressofExpressionAST result ;
  const GGS_addressofExpressionAST * p = (const GGS_addressofExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addressofExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @addressofInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addressofInstructionIR::objectCompare (const GGS_addressofInstructionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR::GGS_addressofInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_addressofInstructionIR GGS_addressofInstructionIR::
init_21__21_ (const GGS_objectIR & in_mTarget,
              const GGS_LValueRepresentation & in_mLValue,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_addressofInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_addressofInstructionIR (inCompiler COMMA_THERE)) ;
  object->addressofInstructionIR_init_21__21_ (in_mTarget, in_mLValue, inCompiler) ;
  const GGS_addressofInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_addressofInstructionIR::
addressofInstructionIR_init_21__21_ (const GGS_objectIR & in_mTarget,
                                     const GGS_LValueRepresentation & in_mLValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR::GGS_addressofInstructionIR (const cPtr_addressofInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR GGS_addressofInstructionIR::class_func_new (const GGS_objectIR & in_mTarget,
                                                                       const GGS_LValueRepresentation & in_mLValue,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_addressofInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_addressofInstructionIR (in_mTarget, in_mLValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_addressofInstructionIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_addressofInstructionIR::setProperty_mTarget (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation GGS_addressofInstructionIR::readProperty_mLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_LValueRepresentation () ;
  }else{
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    return p->mProperty_mLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_addressofInstructionIR::setProperty_mLValue (const GGS_LValueRepresentation & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    p->mProperty_mLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @addressofInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_addressofInstructionIR::cPtr_addressofInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mLValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_addressofInstructionIR::cPtr_addressofInstructionIR (const GGS_objectIR & in_mTarget,
                                                          const GGS_LValueRepresentation & in_mLValue,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mLValue () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addressofInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

void cPtr_addressofInstructionIR::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@addressofInstructionIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addressofInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_addressofInstructionIR (mProperty_mTarget, mProperty_mLValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addressofInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mLValue.printNonNullClassInstanceProperties ("mLValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @addressofInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofInstructionIR ("addressofInstructionIR",
                                                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_addressofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addressofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addressofInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR GGS_addressofInstructionIR::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_addressofInstructionIR result ;
  const GGS_addressofInstructionIR * p = (const GGS_addressofInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addressofInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct::GGS_intermediateCodeStruct (void) :
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

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct::~ GGS_intermediateCodeStruct (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_intermediateCodeStruct GGS_intermediateCodeStruct::init (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_intermediateCodeStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_intermediateCodeStruct::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mStaticEntityMap = GGS_staticEntityMap::init (inCompiler COMMA_HERE) ;
GGS_interruptMapIR temp_0 = GGS_interruptMapIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 9)) ;
  mProperty_mInterruptMapIR = temp_0 ;
GGS_externProcedureMapIR temp_1 = GGS_externProcedureMapIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 10)) ;
  mProperty_mExternProcedureMapIR = temp_1 ;
GGS_panicSortedListIR temp_2 = GGS_panicSortedListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 11)) ;
  mProperty_mPanicSetupListIR = temp_2 ;
GGS_panicSortedListIR temp_3 = GGS_panicSortedListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 12)) ;
  mProperty_mPanicLoopListIR = temp_3 ;
GGS_taskMapIR temp_4 = GGS_taskMapIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 13)) ;
  mProperty_mTaskMapIR = temp_4 ;
GGS_globalTaskVariableList temp_5 = GGS_globalTaskVariableList::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 14)) ;
  mProperty_mGlobalTaskVariableList = temp_5 ;
  mProperty_mMaxBranchOfOnInstructions = GGS_uint (uint32_t (0U)) ;
GGS__32_lstringlist temp_6 = GGS__32_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 18)) ;
GGS_lstringlist temp_7 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 37)) ;
GGS_lstringlist temp_8 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 38)) ;
GGS_lstringlist temp_9 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 39)) ;
  mProperty_mTargetParameters = GGS_targetParameters::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 17)), temp_6, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 19)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 20)), GGS_uint (uint32_t (0U)), GGS_bool (false), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 23)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 23)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 24)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 24)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 25)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 26)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 26)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 27)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 27)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 28)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 28)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 29)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 29)), inCompiler COMMA_HERE), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 30)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 30)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 31)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 32)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 32)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 33)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 34)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 35)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 36)), temp_7, temp_8, temp_9, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 40)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 41)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 42)), GGS_lbigint::init_21__21_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 43)), GGS_location::class_func_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 43)), inCompiler COMMA_HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 44)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 45)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 46)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("intermediate-code-generation.galgas", 47)), inCompiler COMMA_HERE) ;
GGS_driverListIR temp_10 = GGS_driverListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 49)) ;
  mProperty_mDriverList = temp_10 ;
GGS_staticListInvokedFunctionSetMap temp_11 = GGS_staticListInvokedFunctionSetMap::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 50)) ;
  mProperty_mStaticArrayMapForIntermediate = temp_11 ;
GGS_globalSyncInstanceMapIR temp_12 = GGS_globalSyncInstanceMapIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 51)) ;
  mProperty_mGlobalSyncInstanceMap = temp_12 ;
GGS_controlRegisterGroupArrayList temp_13 = GGS_controlRegisterGroupArrayList::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 52)) ;
  mProperty_mControlRegisterGroupArrayList = temp_13 ;
GGS_routineListIR temp_14 = GGS_routineListIR::init (inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 53)) ;
  mProperty_mRoutineListIR = temp_14 ;
}

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct::GGS_intermediateCodeStruct (const GGS_staticEntityMap & inOperand0,
                                                        const GGS_interruptMapIR & inOperand1,
                                                        const GGS_externProcedureMapIR & inOperand2,
                                                        const GGS_panicSortedListIR & inOperand3,
                                                        const GGS_panicSortedListIR & inOperand4,
                                                        const GGS_taskMapIR & inOperand5,
                                                        const GGS_globalTaskVariableList & inOperand6,
                                                        const GGS_uint & inOperand7,
                                                        const GGS_targetParameters & inOperand8,
                                                        const GGS_driverListIR & inOperand9,
                                                        const GGS_staticListInvokedFunctionSetMap & inOperand10,
                                                        const GGS_globalSyncInstanceMapIR & inOperand11,
                                                        const GGS_controlRegisterGroupArrayList & inOperand12,
                                                        const GGS_routineListIR & inOperand13) :
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

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct GGS_intermediateCodeStruct::class_func_new (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_intermediateCodeStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_intermediateCodeStruct::isValid (void) const {
  return mProperty_mStaticEntityMap.isValid () && mProperty_mInterruptMapIR.isValid () && mProperty_mExternProcedureMapIR.isValid () && mProperty_mPanicSetupListIR.isValid () && mProperty_mPanicLoopListIR.isValid () && mProperty_mTaskMapIR.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mMaxBranchOfOnInstructions.isValid () && mProperty_mTargetParameters.isValid () && mProperty_mDriverList.isValid () && mProperty_mStaticArrayMapForIntermediate.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mControlRegisterGroupArrayList.isValid () && mProperty_mRoutineListIR.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_intermediateCodeStruct::drop (void) {
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

//--------------------------------------------------------------------------------------------------

void GGS_intermediateCodeStruct::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @intermediateCodeStruct:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mStaticEntityMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInterruptMapIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExternProcedureMapIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicSetupListIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPanicLoopListIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskMapIR.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMaxBranchOfOnInstructions.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDriverList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStaticArrayMapForIntermediate.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterGroupArrayList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineListIR.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @intermediateCodeStruct generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_intermediateCodeStruct ("intermediateCodeStruct",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_intermediateCodeStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_intermediateCodeStruct ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_intermediateCodeStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_intermediateCodeStruct (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_intermediateCodeStruct GGS_intermediateCodeStruct::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_intermediateCodeStruct result ;
  const GGS_intermediateCodeStruct * p = (const GGS_intermediateCodeStruct *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_intermediateCodeStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("intermediateCodeStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_omnibus_5F_options_doNotDetectRecursiveCalls ("omnibus_options",
                                         "doNotDetectRecursiveCalls",
                                         114,
                                         "do-not-detect-recursive-calls",
                                         "Do not detect recursive calls") ;

BoolCommandLineOption gOption_omnibus_5F_options_noPanicGeneration ("omnibus_options",
                                         "noPanicGeneration",
                                         0,
                                         "no-panic-generation",
                                         "Do not generate panic code") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile ("omnibus_options",
                                         "emitControlRegisterHTMLDumpFile",
                                         0,
                                         "emit-control-register-map",
                                         "Emit control register map in an HTML file") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile ("omnibus_options",
                                         "emitDeclarationDependencyGraphFile",
                                         100,
                                         "emit-declaration-dependency-graph",
                                         "Emit declaration dependency graph file") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile ("omnibus_options",
                                         "emitGlobalConstantHTMLDumpFile",
                                         0,
                                         "emit-global-constant-map",
                                         "Emit global constant map in an HTML file") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitRoutineInvocationGraphFile ("omnibus_options",
                                         "emitRoutineInvocationGraphFile",
                                         105,
                                         "emit-routine-invocation-graph",
                                         "Emit routine invocation graph file") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitTypeMap ("omnibus_options",
                                         "emitTypeMap",
                                         116,
                                         "emit-type-map",
                                         "Emit type map in an HTML file") ;

BoolCommandLineOption gOption_omnibus_5F_options_taskStrictPriorityOrder ("omnibus_options",
                                         "taskStrictPriorityOrder",
                                         0,
                                         "task-strict-priority-order",
                                         "Ensure task strict priority order") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ ("omnibus_options",
                                         "optimizationZ",
                                         0,
                                         "Oz",
                                         "Like previous option but reduces code size further") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimizationS ("omnibus_options",
                                         "optimizationS",
                                         0,
                                         "Os",
                                         "Like previous option with extra optimizations for size") ;

BoolCommandLineOption gOption_omnibus_5F_options_listEmbeddedSampleFiles ("omnibus_options",
                                         "listEmbeddedSampleFiles",
                                         108,
                                         "list-embedded-samples",
                                         "List embedded sample files") ;

BoolCommandLineOption gOption_omnibus_5F_options_listTargets ("omnibus_options",
                                         "listTargets",
                                         76,
                                         "list-targets",
                                         "List targets") ;

BoolCommandLineOption gOption_omnibus_5F_options_noDeadCodeElimination ("omnibus_options",
                                         "noDeadCodeElimination",
                                         0,
                                         "no-deadcode-elimination",
                                         "No dead code elimination") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimization_31_ ("omnibus_options",
                                         "optimization1",
                                         0,
                                         "O1",
                                         "Optimization level 1") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimization_32_ ("omnibus_options",
                                         "optimization2",
                                         0,
                                         "O2",
                                         "Optimization level 2") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ_33_ ("omnibus_options",
                                         "optimizationZ3",
                                         0,
                                         "O3",
                                         "Optimization level 3") ;

BoolCommandLineOption gOption_omnibus_5F_options_printPasses ("omnibus_options",
                                         "printPasses",
                                         0,
                                         "print-passes",
                                         "Print pass information") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedSampleFile ("omnibus_options",
                                         "extractEmbeddedSampleFile",
                                         120,
                                         "extract-embedded-sample-code",
                                         "Extract an embedded sample file",
                                         "") ;

StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedTargets ("omnibus_options",
                                         "extractEmbeddedTargets",
                                         88,
                                         "extract-embedded-targets",
                                         "Extract embedded targets",
                                         "") ;

StringCommandLineOption gOption_omnibus_5F_options_useDirAsTargetDir ("omnibus_options",
                                         "useDirAsTargetDir",
                                         84,
                                         "use-target-dir",
                                         "Use directory as target definition directory, instead of using embedded targets",
                                         "") ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

StringListCommandLineOption gOption_omnibus_5F_options_pathList ("omnibus_options",
                                         "pathList",
                                         0,
                                         "path",
                                         "Search pathes for source files") ;

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_omnibus_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing ("omnibus_option_not_appearing_in_cocoa",
                                         "performFlashing",
                                         102,
                                         "flash-target",
                                         "After successful compilation, flash target") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//Once function 'configurationNodeNameForPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_configurationNodeNameForPrecedenceGraph (Compiler *
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("config") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = false ;
static GGS_string gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;

//--------------------------------------------------------------------------------------------------

GGS_string function_configurationNodeNameForPrecedenceGraph (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph) {
    gOnceFunctionResult_configurationNodeNameForPrecedenceGraph = onceFunction_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = true ;
  }
  return gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph (void) {
  gOnceFunctionResult_configurationNodeNameForPrecedenceGraph.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_configurationNodeNameForPrecedenceGraph (nullptr,
                                                                                   releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_configurationNodeNameForPrecedenceGraph [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_configurationNodeNameForPrecedenceGraph (Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GGS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_configurationNodeNameForPrecedenceGraph ("configurationNodeNameForPrecedenceGraph",
                                                                                         functionWithGenericHeader_configurationNodeNameForPrecedenceGraph,
                                                                                         & kTypeDescriptor_GALGAS_string,
                                                                                         0,
                                                                                         functionArgs_configurationNodeNameForPrecedenceGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'isrSlotTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_isrSlotTypeName (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("ISRSlot") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_isrSlotTypeName = false ;
static GGS_string gOnceFunctionResult_isrSlotTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_isrSlotTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_isrSlotTypeName) {
    gOnceFunctionResult_isrSlotTypeName = onceFunction_isrSlotTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_isrSlotTypeName = true ;
  }
  return gOnceFunctionResult_isrSlotTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_isrSlotTypeName (void) {
  gOnceFunctionResult_isrSlotTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_isrSlotTypeName (nullptr,
                                                           releaseOnceFunctionResult_isrSlotTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_isrSlotTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_isrSlotTypeName (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_isrSlotTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_isrSlotTypeName ("isrSlotTypeName",
                                                                 functionWithGenericHeader_isrSlotTypeName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_isrSlotTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@configurationDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_configurationDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_configurationDeclarationAST temp_0 = this ;
  GGS_lstring var_rootNode_11498 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 312)), temp_0.readProperty_mPanicCodeTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_configurationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_11498, temp_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 313)) ;
  }
  {
  const GGS_configurationDeclarationAST temp_2 = this ;
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11498, temp_2.readProperty_mPanicCodeTypeName () COMMA_SOURCE_FILE ("configuration.galgas", 314)) ;
  }
  {
  const GGS_configurationDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11498, temp_3.readProperty_mPanicCodeTypeName () COMMA_SOURCE_FILE ("configuration.galgas", 315)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11498, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 316)).getter_nowhere (SOURCE_FILE ("configuration.galgas", 316)) COMMA_SOURCE_FILE ("configuration.galgas", 316)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@configurationDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_configurationDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_configurationDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPanicCodeTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@configurationDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_configurationDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 328)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@configurationDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_configurationDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                              GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                              GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_configurationDeclarationAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTargetParameters ().readProperty_mConfigurationLocation (), GGS_string ("duplicate configuration"), fixItArray2  COMMA_SOURCE_FILE ("configuration.galgas", 348)) ;
    }
  }
  const GGS_configurationDeclarationAST temp_3 = this ;
  ioArgument_ioContext.mProperty_mTargetParameters = temp_3.readProperty_mTargetParameters () ;
  GGS_omnibusType var_panicCodeType_13685 ;
  const GGS_configurationDeclarationAST temp_4 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_4.readProperty_mPanicCodeTypeName (), var_panicCodeType_13685, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 352)) ;
  ioArgument_ioContext.mProperty_mPanicCodeType = var_panicCodeType_13685 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_kind ().getter_isInteger (SOURCE_FILE ("configuration.galgas", 357)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GGS_bool var_unsigned_13866 ;
      GGS_bigint joker_13848_2 ; // Joker input parameter
      GGS_bigint joker_13848_1 ; // Joker input parameter
      GGS_uint joker_13875_1 ; // Joker input parameter
      ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_kind ().method_extractInteger (joker_13848_2, joker_13848_1, var_unsigned_13866, joker_13875_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 358)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_unsigned_13866.operator_not (SOURCE_FILE ("configuration.galgas", 359)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GGS_configurationDeclarationAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mPanicCodeTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray8  COMMA_SOURCE_FILE ("configuration.galgas", 360)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_5) {
    const GGS_configurationDeclarationAST temp_9 = this ;
    TC_Array <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mPanicCodeTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray10  COMMA_SOURCE_FILE ("configuration.galgas", 363)) ;
  }
  GGS_omnibusType var_panicLineType_14196 ;
  const GGS_configurationDeclarationAST temp_11 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_11.readProperty_mPanicLineTypeName (), var_panicLineType_14196, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 366)) ;
  ioArgument_ioContext.mProperty_mPanicLineType = var_panicLineType_14196 ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_kind ().getter_isInteger (SOURCE_FILE ("configuration.galgas", 371)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GGS_bool var_unsigned_14377 ;
      GGS_bigint joker_14359_2 ; // Joker input parameter
      GGS_bigint joker_14359_1 ; // Joker input parameter
      GGS_uint joker_14386_1 ; // Joker input parameter
      ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_kind ().method_extractInteger (joker_14359_2, joker_14359_1, var_unsigned_14377, joker_14386_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 372)) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = var_unsigned_14377.operator_not (SOURCE_FILE ("configuration.galgas", 373)).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GGS_configurationDeclarationAST temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mPanicLineTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray15  COMMA_SOURCE_FILE ("configuration.galgas", 374)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_12) {
    const GGS_configurationDeclarationAST temp_16 = this ;
    TC_Array <FixItDescription> fixItArray17 ;
    inCompiler->emitSemanticError (temp_16.readProperty_mPanicLineTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray17  COMMA_SOURCE_FILE ("configuration.galgas", 377)) ;
  }
  GGS_stringset temp_18 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 380)) ;
  GGS_stringset var_panicCodeSet_14679 = temp_18 ;
  const GGS_configurationDeclarationAST temp_19 = this ;
  cEnumerator_interruptionConfigurationList enumerator_14710 (temp_19.readProperty_mInterruptionConfigurationList (), EnumerationOrder::up) ;
  while (enumerator_14710.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_14710.current_mInterruptName (HERE), enumerator_14710.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 382)) ;
    }
    switch (enumerator_14710.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GGS_interruptionPanicCode::Enumeration::invalid:
      break ;
    case GGS_interruptionPanicCode::Enumeration::enum_noCode:
      break ;
    case GGS_interruptionPanicCode::Enumeration::enum_code:
      {
        GGS_lbigint extractedValue_14885_value_0 ;
        enumerator_14710.current_mInterruptionPanicCode (HERE).getAssociatedValuesFor_code (extractedValue_14885_value_0) ;
        GGS_string var_s_14904 = extractedValue_14885_value_0.readProperty_bigint ().getter_string (SOURCE_FILE ("configuration.galgas", 386)) ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_panicCodeSet_14679.getter_hasKey (var_s_14904 COMMA_SOURCE_FILE ("configuration.galgas", 387)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_14885_value_0.readProperty_location (), GGS_string ("duplicate interrupt code"), fixItArray21  COMMA_SOURCE_FILE ("configuration.galgas", 388)) ;
          }
        }
        var_panicCodeSet_14679.addAssign_operation (var_s_14904  COMMA_SOURCE_FILE ("configuration.galgas", 390)) ;
      }
      break ;
    }
    enumerator_14710.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_routineMangledNameFromAST (const GGS_string & constinArgument_inReceiverTypeName,
                                                const GGS_lstring & constinArgument_inRoutineName,
                                                const GGS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_548 = GGS_string ("func.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_548.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 18)) ;
    }
  }
  var_s_548.plusAssign_operation(constinArgument_inRoutineName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 20)) ;
  var_s_548.plusAssign_operation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 21)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_718 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_718.hasCurrentObject ()) {
    var_s_548.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_718.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (enumerator_718.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 23)) ;
    enumerator_718.gotoNextObject () ;
  }
  var_s_548.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 25)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_548, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineMangledNameFromAST (Compiler * inCompiler,
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
  return function_routineMangledNameFromAST (operand0,
                                             operand1,
                                             operand2,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromAST ("routineMangledNameFromAST",
                                                                           functionWithGenericHeader_routineMangledNameFromAST,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           3,
                                                                           functionArgs_routineMangledNameFromAST) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromCall'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_routineMangledNameFromCall (const GGS_string & constinArgument_inReceiverTypeName,
                                                 const GGS_lstring & constinArgument_inRoutineName,
                                                 const GGS_effectiveArgumentListAST & constinArgument_inEffectiveParameterList,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_1245 = GGS_string ("func.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_1245.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 37)) ;
    }
  }
  var_s_1245.plusAssign_operation(constinArgument_inRoutineName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 39)) ;
  var_s_1245.plusAssign_operation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 40)) ;
  cEnumerator_effectiveArgumentListAST enumerator_1390 (constinArgument_inEffectiveParameterList, EnumerationOrder::up) ;
  while (enumerator_1390.hasCurrentObject ()) {
    var_s_1245.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_1390.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (enumerator_1390.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 42)) ;
    enumerator_1390.gotoNextObject () ;
  }
  var_s_1245.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 44)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_1245, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromCall [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_effectiveArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineMangledNameFromCall (Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GGS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_effectiveArgumentListAST operand2 = GGS_effectiveArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_routineMangledNameFromCall (operand0,
                                              operand1,
                                              operand2,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromCall ("routineMangledNameFromCall",
                                                                            functionWithGenericHeader_routineMangledNameFromCall,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            3,
                                                                            functionArgs_routineMangledNameFromCall) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeDeclarationBarrierAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeDeclarationBarrierAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_compileTimeDeclarationBarrierAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)), temp_0, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeDeclarationBarrierAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compileTimeDeclarationBarrierAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 44)).readProperty_string () ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeDeclarationBarrierAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compileTimeDeclarationBarrierAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("ordered-declaration-list.galgas", 50)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeDeclarationBarrierAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeDeclarationBarrierAST::method_enterInContext (GGS_semanticContext & /* ioArgument_ioContext */,
                                                                   GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                   GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                   GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                   GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                   GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'appendUnsignedOperatorsTo?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendUnsignedOperatorsTo_3F__26_ (const GGS_string constinArgument_inTypeName,
                                                GGS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("ordered-declaration-list.galgas", 77)), GGS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("ordered-declaration-list.galgas", 80)), GGS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 80)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas", 83)), GGS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("ordered-declaration-list.galgas", 86)), GGS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 87)), GGS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("ordered-declaration-list.galgas", 89)), GGS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 89)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 90)), GGS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 90)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement_3F__26_ (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 100)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendSignedOperatorsTo?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendSignedOperatorsTo_3F__26_ (const GGS_string constinArgument_inTypeName,
                                              GGS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("ordered-declaration-list.galgas", 113)), GGS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 113)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("ordered-declaration-list.galgas", 116)), GGS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 116)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas", 119)), GGS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 119)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("ordered-declaration-list.galgas", 122)), GGS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 122)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 123)), GGS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 123)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("ordered-declaration-list.galgas", 125)), GGS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 125)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 126)), GGS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 126)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_minus_3F__26_ (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 136)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildOrderedDeclarationList?ast?sourceFile?endOfSourceFile!orderedDeclarationList'
//
//--------------------------------------------------------------------------------------------------

void routine_buildOrderedDeclarationList_3F_ast_3F_sourceFile_3F_endOfSourceFile_21_orderedDeclarationList (const GGS_ast constinArgument_inAST,
                                                                                                            const GGS_string constinArgument_inSourceFile,
                                                                                                            const GGS_location constinArgument_inEndOfSourceFile,
                                                                                                            GGS_declarationListAST & outArgument_outSortedDeclarationListAST,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSortedDeclarationListAST.drop () ; // Release 'out' argument
  GGS_semanticTypePrecedenceGraph var_precedenceGraph_7922 = GGS_semanticTypePrecedenceGraph::init (inCompiler COMMA_HERE) ;
  cEnumerator_declarationListAST enumerator_7953 (constinArgument_inAST.readProperty_mDeclarationListAST (), EnumerationOrder::up) ;
  while (enumerator_7953.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) enumerator_7953.current_mDeclaration (HERE).ptr (), var_precedenceGraph_7922, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 150)) ;
    enumerator_7953.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.readProperty_mExternFunctionListAST (), var_precedenceGraph_7922, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 153)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.readProperty_mTaskListAST (), var_precedenceGraph_7922, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 154)) ;
  GGS_bigint var_addintegerTypeCount_8381 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 156)) ;
  cEnumerator_stringlist enumerator_8412 (var_precedenceGraph_7922.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 157)), EnumerationOrder::up) ;
  while (enumerator_8412.hasCurrentObject ()) {
    GGS_stringlist var_Uxx_8497 = enumerator_8412.current_mValue (HERE).getter_componentsSeparatedByString (GGS_string ("u") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 159)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GGS_bool test_1 = GGS_bool (ComparisonKind::equal, var_Uxx_8497.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 160)).objectCompare (GGS_uint (uint32_t (2U)))) ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = GGS_bool (ComparisonKind::equal, var_Uxx_8497.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 160)).objectCompare (GGS_string::makeEmptyString ())) ;
      }
      GGS_bool test_2 = test_1 ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = var_Uxx_8497.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 160)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 160)) ;
      }
      test_0 = test_2.boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_uint var_n_8673 = var_Uxx_8497.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 161)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 161)) ;
        GGS_integerDeclarationAST var_declaration_8734 = GGS_integerDeclarationAST::init_21__21_ (GGS_bool (false), var_n_8673, inCompiler COMMA_HERE) ;
        callExtensionMethod_enterInPrecedenceGraph ((cPtr_integerDeclarationAST *) var_declaration_8734.ptr (), var_precedenceGraph_7922, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 163)) ;
        {
        routine_appendUnsignedOperatorsTo_3F__26_ (enumerator_8412.current_mValue (HERE), var_precedenceGraph_7922, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 165)) ;
        }
        var_addintegerTypeCount_8381.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 167)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GGS_stringlist var_Ixx_9013 = enumerator_8412.current_mValue (HERE).getter_componentsSeparatedByString (GGS_string ("i") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 169)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        GGS_bool test_4 = GGS_bool (ComparisonKind::equal, var_Ixx_9013.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 170)).objectCompare (GGS_uint (uint32_t (2U)))) ;
        if (kBoolTrue == test_4.boolEnum ()) {
          test_4 = GGS_bool (ComparisonKind::equal, var_Ixx_9013.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 170)).objectCompare (GGS_string::makeEmptyString ())) ;
        }
        GGS_bool test_5 = test_4 ;
        if (kBoolTrue == test_5.boolEnum ()) {
          test_5 = var_Ixx_9013.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 170)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 170)) ;
        }
        test_3 = test_5.boolEnum () ;
        if (kBoolTrue == test_3) {
          GGS_uint var_n_9193 = var_Ixx_9013.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 171)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 171)) ;
          GGS_integerDeclarationAST var_declaration_9256 = GGS_integerDeclarationAST::init_21__21_ (GGS_bool (true), var_n_9193, inCompiler COMMA_HERE) ;
          callExtensionMethod_enterInPrecedenceGraph ((cPtr_integerDeclarationAST *) var_declaration_9256.ptr (), var_precedenceGraph_7922, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 173)) ;
          {
          routine_appendSignedOperatorsTo_3F__26_ (enumerator_8412.current_mValue (HERE), var_precedenceGraph_7922, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 175)) ;
          }
          var_addintegerTypeCount_8381.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 177)) ;
        }
      }
    }
    enumerator_8412.gotoNextObject () ;
  }
  GGS_compileTimeDeclarationBarrierAST var_compileTimeDeclarationBarrierAST_9623 = GGS_compileTimeDeclarationBarrierAST::init (inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_compileTimeDeclarationBarrierAST *) var_compileTimeDeclarationBarrierAST_9623.ptr (), var_precedenceGraph_7922, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 183)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    GGS_bool test_7 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 185)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_7.boolEnum ()) {
      test_7 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()) ;
    }
    test_6 = test_7.boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      routine_print_3F_ (GGS_string ("    Added ").add_operation (var_addintegerTypeCount_8381.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 186)).add_operation (GGS_string (" integer types\n"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 186)) ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    GGS_bool test_9 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 189)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_9.boolEnum ()) {
      test_9 = GGS_bool (gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile.readProperty_value ()) ;
    }
    test_8 = test_9.boolEnum () ;
    if (kBoolTrue == test_8) {
      GGS_string var_s_10170 = var_precedenceGraph_7922.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 190)) ;
      GGS_string var_filePath_10209 = constinArgument_inSourceFile.add_operation (GGS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 191)) ;
      GGS_bool joker_10314 ; // Joker input parameter
      var_s_10170.method_writeToFileWhenDifferentContents (var_filePath_10209, joker_10314, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 192)) ;
    }
  }
  GGS_declarationListAST temp_10 = GGS_declarationListAST::init (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 195)) ;
  outArgument_outSortedDeclarationListAST = temp_10 ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::greaterThan, var_precedenceGraph_7922.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 196)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      cEnumerator_lstringlist enumerator_10494 (var_precedenceGraph_7922.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 197)), EnumerationOrder::up) ;
      while (enumerator_10494.hasCurrentObject ()) {
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_10494.current_mValue (HERE).readProperty_location (), enumerator_10494.current_mValue (HERE).readProperty_string ().add_operation (GGS_string (" is not defined in declaration dependency graph"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 198)), fixItArray12  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 198)) ;
        enumerator_10494.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_11) {
    GGS_declarationListAST var_unsortedSemanticDeclarationListAST_10768 ;
    GGS_lstringlist joker_10734 ; // Joker input parameter
    GGS_lstringlist joker_10809 ; // Joker input parameter
    var_precedenceGraph_7922.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_10734, var_unsortedSemanticDeclarationListAST_10768, joker_10809, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 201)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_10768.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 207)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_13) {
        GGS_string var_s_10887 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_10768.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 209)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 208)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 209)) ;
        cEnumerator_declarationListAST enumerator_11062 (var_unsortedSemanticDeclarationListAST_10768, EnumerationOrder::up) ;
        while (enumerator_11062.hasCurrentObject ()) {
          var_s_10887.plusAssign_operation(GGS_string ("\n-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11062.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 212)) ;
          enumerator_11062.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_10887, fixItArray14  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 214)) ;
        cEnumerator_declarationListAST enumerator_11245 (var_unsortedSemanticDeclarationListAST_10768, EnumerationOrder::up) ;
        while (enumerator_11245.hasCurrentObject ()) {
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (callExtensionGetter_locationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11245.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)), GGS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11245.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)).add_operation (GGS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)), fixItArray15  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)) ;
          enumerator_11245.gotoNextObject () ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildSemanticContext?sourceFile?ast&staticEntityMap&staticlistValues!context!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildSemanticContext_3F_sourceFile_3F_ast_26_staticEntityMap_26_staticlistValues_21_context_21__21__21__21_ (const GGS_lstring constinArgument_inSourceFile,
                                                                                                                          const GGS_ast constinArgument_inAST,
                                                                                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                          GGS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                                                                                          GGS_semanticContext & outArgument_outSemanticContext,
                                                                                                                          GGS_declarationDecorationList & outArgument_outDecoratedDeclarationList,
                                                                                                                          GGS_decoratedRegularRoutineList & outArgument_outDecoratedRoutineList,
                                                                                                                          GGS_routineListIR & outArgument_outRoutineListIR,
                                                                                                                          GGS_userLLVMTypeDefinitionListIR & outArgument_outUserLLVMTypeDefinitionListIR,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outDecoratedDeclarationList.drop () ; // Release 'out' argument
  outArgument_outDecoratedRoutineList.drop () ; // Release 'out' argument
  outArgument_outRoutineListIR.drop () ; // Release 'out' argument
  outArgument_outUserLLVMTypeDefinitionListIR.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GGS_semanticContext::init (inCompiler COMMA_HERE) ;
  GGS_declarationDecorationList temp_0 = GGS_declarationDecorationList::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 390)) ;
  outArgument_outDecoratedDeclarationList = temp_0 ;
  GGS_decoratedRegularRoutineList temp_1 = GGS_decoratedRegularRoutineList::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 391)) ;
  outArgument_outDecoratedRoutineList = temp_1 ;
  GGS_routineListIR temp_2 = GGS_routineListIR::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 392)) ;
  outArgument_outRoutineListIR = temp_2 ;
  GGS_userLLVMTypeDefinitionListIR temp_3 = GGS_userLLVMTypeDefinitionListIR::init (inCompiler COMMA_SOURCE_FILE ("context.galgas", 393)) ;
  outArgument_outUserLLVMTypeDefinitionListIR = temp_3 ;
  cEnumerator_requiredFunctionDeclarationListAST enumerator_15578 (constinArgument_inAST.readProperty_mRequiredFunctionListAST (), EnumerationOrder::up) ;
  while (enumerator_15578.hasCurrentObject ()) {
    GGS_lstring var_procedureMangledName_15614 = function_routineMangledNameFromAST (GGS_string::makeEmptyString (), enumerator_15578.current (HERE).readProperty_mName (), enumerator_15578.current (HERE).readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 396)) ;
    outArgument_outSemanticContext.mProperty_mRequiredRoutineSet.addAssign_operation (var_procedureMangledName_15614.readProperty_string ()  COMMA_SOURCE_FILE ("context.galgas", 401)) ;
    enumerator_15578.gotoNextObject () ;
  }
  extensionMethod_enterExternProcInContext (constinArgument_inAST.readProperty_mExternFunctionListAST (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 403)) ;
  GGS_controlRegisterUserAccesMapAST var_controlRegisterUserAccesMapAST_15935 = constinArgument_inAST.readProperty_mControlRegisterUserAccesMapAST () ;
  cEnumerator_declarationListAST enumerator_16013 (constinArgument_inAST.readProperty_mDeclarationListAST (), EnumerationOrder::up) ;
  while (enumerator_16013.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((cPtr_abstractDeclarationAST *) enumerator_16013.current_mDeclaration (HERE).ptr (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticListValueMap, ioArgument_ioStaticEntityMap, var_controlRegisterUserAccesMapAST_15935, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 409)) ;
    enumerator_16013.gotoNextObject () ;
  }
  cEnumerator_controlRegisterUserAccesMapAST enumerator_16505 (var_controlRegisterUserAccesMapAST_15935, EnumerationOrder::up) ;
  while (enumerator_16505.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (enumerator_16505.current_lkey (HERE).readProperty_location (), GGS_string ("this control register is not defined"), fixItArray4  COMMA_SOURCE_FILE ("context.galgas", 422)) ;
    enumerator_16505.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile_3F__3F_sourceFile (outArgument_outSemanticContext.readProperty_mGlobalConstantMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 425)) ;
  }
  {
  routine_buildTypeMapHTMLFile_3F__3F__3F__3F__3F__3F_sourceFile (outArgument_outSemanticContext.readProperty_mTypeMap (), outArgument_outSemanticContext.readProperty_mRoutineMap (), outArgument_outSemanticContext.readProperty_mInfixOperatorMap (), outArgument_outSemanticContext.readProperty_mPrefixOperatorMap (), outArgument_outSemanticContext.readProperty_mAssignmentOperatorMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 430)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile_3F__3F_sourceFile (outArgument_outSemanticContext.readProperty_mControlRegisterGroupMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 439)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.readProperty_mTaskListAST (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticEntityMap, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 444)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'compileTimeIntegerType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_compileTimeIntegerType (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("types.galgas", 130)), GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas", 131)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 132)), GGS_typeKind::class_func_compileTimeInteger (SOURCE_FILE ("types.galgas", 133)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeIntegerType = false ;
static GGS_omnibusType gOnceFunctionResult_compileTimeIntegerType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_compileTimeIntegerType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeIntegerType) {
    gOnceFunctionResult_compileTimeIntegerType = onceFunction_compileTimeIntegerType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeIntegerType = true ;
  }
  return gOnceFunctionResult_compileTimeIntegerType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compileTimeIntegerType (void) {
  gOnceFunctionResult_compileTimeIntegerType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_compileTimeIntegerType (nullptr,
                                                                  releaseOnceFunctionResult_compileTimeIntegerType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_compileTimeIntegerType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compileTimeIntegerType (Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_compileTimeIntegerType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compileTimeIntegerType ("compileTimeIntegerType",
                                                                        functionWithGenericHeader_compileTimeIntegerType,
                                                                        & kTypeDescriptor_GALGAS_omnibusType,
                                                                        0,
                                                                        functionArgs_compileTimeIntegerType) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'compileTimeBoolType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_compileTimeBoolType (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("types.galgas", 142)), GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas", 143)), function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 144)), GGS_typeKind::class_func_compileTimeBool (SOURCE_FILE ("types.galgas", 145)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeBoolType = false ;
static GGS_omnibusType gOnceFunctionResult_compileTimeBoolType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_compileTimeBoolType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeBoolType) {
    gOnceFunctionResult_compileTimeBoolType = onceFunction_compileTimeBoolType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeBoolType = true ;
  }
  return gOnceFunctionResult_compileTimeBoolType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compileTimeBoolType (void) {
  gOnceFunctionResult_compileTimeBoolType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_compileTimeBoolType (nullptr,
                                                               releaseOnceFunctionResult_compileTimeBoolType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_compileTimeBoolType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compileTimeBoolType (Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_compileTimeBoolType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compileTimeBoolType ("compileTimeBoolType",
                                                                     functionWithGenericHeader_compileTimeBoolType,
                                                                     & kTypeDescriptor_GALGAS_omnibusType,
                                                                     0,
                                                                     functionArgs_compileTimeBoolType) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'boolType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_boolType (Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("types.galgas", 154)), GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas", 155)).operator_or (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("types.galgas", 155)) COMMA_SOURCE_FILE ("types.galgas", 155)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 156)), GGS_typeKind::class_func_boolean (SOURCE_FILE ("types.galgas", 157)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 158)), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_boolType = false ;
static GGS_omnibusType gOnceFunctionResult_boolType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_boolType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolType) {
    gOnceFunctionResult_boolType = onceFunction_boolType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolType = true ;
  }
  return gOnceFunctionResult_boolType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_boolType (void) {
  gOnceFunctionResult_boolType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_boolType (nullptr,
                                                    releaseOnceFunctionResult_boolType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_boolType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_boolType (Compiler * inCompiler,
                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                      const GGS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_boolType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_boolType ("boolType",
                                                          functionWithGenericHeader_boolType,
                                                          & kTypeDescriptor_GALGAS_omnibusType,
                                                          0,
                                                          functionArgs_boolType) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'literalStringType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_literalStringType (Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_literalString (SOURCE_FILE ("types.galgas", 166)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("types.galgas", 167)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas", 167)) COMMA_SOURCE_FILE ("types.galgas", 167)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 168)), GGS_typeKind::class_func_literalString (SOURCE_FILE ("types.galgas", 169)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 170)), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_literalStringType = false ;
static GGS_omnibusType gOnceFunctionResult_literalStringType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_literalStringType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_literalStringType) {
    gOnceFunctionResult_literalStringType = onceFunction_literalStringType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_literalStringType = true ;
  }
  return gOnceFunctionResult_literalStringType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_literalStringType (void) {
  gOnceFunctionResult_literalStringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_literalStringType (nullptr,
                                                             releaseOnceFunctionResult_literalStringType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_literalStringType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_literalStringType (Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_literalStringType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalStringType ("literalStringType",
                                                                   functionWithGenericHeader_literalStringType,
                                                                   & kTypeDescriptor_GALGAS_omnibusType,
                                                                   0,
                                                                   functionArgs_literalStringType) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'voidType'
//
//--------------------------------------------------------------------------------------------------

static GGS_omnibusType onceFunction_voidType (Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType result_result ; // Returned variable
  result_result = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("types.galgas", 178)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), GGS_string::makeEmptyString (), GGS_typeKind::class_func_void (SOURCE_FILE ("types.galgas", 181)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_voidType = false ;
static GGS_omnibusType gOnceFunctionResult_voidType ;

//--------------------------------------------------------------------------------------------------

GGS_omnibusType function_voidType (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_voidType) {
    gOnceFunctionResult_voidType = onceFunction_voidType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_voidType = true ;
  }
  return gOnceFunctionResult_voidType ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_voidType (void) {
  gOnceFunctionResult_voidType.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_voidType (nullptr,
                                                    releaseOnceFunctionResult_voidType) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_voidType [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_voidType (Compiler * inCompiler,
                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                      const GGS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_voidType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_voidType ("voidType",
                                                          functionWithGenericHeader_voidType,
                                                          & kTypeDescriptor_GALGAS_omnibusType,
                                                          0,
                                                          functionArgs_voidType) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildTypeMapHTMLFile??????sourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_buildTypeMapHTMLFile_3F__3F__3F__3F__3F__3F_sourceFile (const GGS_unifiedTypeMap constinArgument_inTypeMap,
                                                                     const GGS_routineMapForContext constinArgument_inRoutineMap,
                                                                     const GGS_infixOperatorMap constinArgument_inTerminusInfixOperatorMap,
                                                                     const GGS_prefixOperatorMap constinArgument_inTerminusPrefixOperatorMap,
                                                                     const GGS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                                                     const GGS_lstring constinArgument_inSourceFile,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_typeDumpFilePath_15642 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 387)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_emitTypeMap.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("types.galgas", 389)) ;
      GGS_stringset var_firstLetterSet_15769 = temp_1 ;
      cEnumerator_unifiedTypeMap enumerator_15804 (constinArgument_inTypeMap, EnumerationOrder::up) ;
      while (enumerator_15804.hasCurrentObject ()) {
        var_firstLetterSet_15769.addAssign_operation (enumerator_15804.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 391)).getter_string (SOURCE_FILE ("types.galgas", 391))  COMMA_SOURCE_FILE ("types.galgas", 391)) ;
        enumerator_15804.gotoNextObject () ;
      }
      GGS_string var_tableOfTypeString_15914 = GGS_string::makeEmptyString () ;
      GGS_char var_currentFirstLetter_15951 = GGS_char (TO_UNICODE (32)) ;
      cEnumerator_unifiedTypeMap enumerator_15995 (constinArgument_inTypeMap, EnumerationOrder::up) ;
      while (enumerator_15995.hasCurrentObject ()) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, var_currentFirstLetter_15951.objectCompare (enumerator_15995.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 396)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_currentFirstLetter_15951 = enumerator_15995.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 397)) ;
            var_tableOfTypeString_15914.plusAssign_operation(GGS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_15951.getter_uint (SOURCE_FILE ("types.galgas", 398)).getter_string (SOURCE_FILE ("types.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 398)).add_operation (GGS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 398)).add_operation (var_currentFirstLetter_15951.getter_string (SOURCE_FILE ("types.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 398)).add_operation (GGS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 398)) ;
          }
        }
        var_tableOfTypeString_15914.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_15995.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 400)).add_operation (GGS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 400)) ;
        enumerator_15995.gotoNextObject () ;
      }
      GGS_string var_typeDumpString_16389 = GGS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("types.galgas", 403)), constinArgument_inTypeMap, var_firstLetterSet_15769, var_tableOfTypeString_15914, constinArgument_inRoutineMap, constinArgument_inTerminusInfixOperatorMap, constinArgument_inTerminusPrefixOperatorMap, constinArgument_inAssignmentOperatorMap COMMA_SOURCE_FILE ("types.galgas", 402))) ;
      GGS_bool joker_16752 ; // Joker input parameter
      var_typeDumpString_16389.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_15642, joker_16752, inCompiler COMMA_SOURCE_FILE ("types.galgas", 412)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GGS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_15642, inCompiler COMMA_SOURCE_FILE ("types.galgas", 414)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeDumpGenerationTemplate dump'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeDumpGenerationTemplate_dump (Compiler * inCompiler,
                                                                const GGS_string & in_PROJECT_5F_NAME,
                                                                const GGS_unifiedTypeMap & in_GLOBAL_5F_TYPE_5F_MAP,
                                                                const GGS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                const GGS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING,
                                                                const GGS_routineMapForContext & in_ALL_5F_ROUTINE_5F_MAP,
                                                                const GGS_infixOperatorMap & in_INFIX_5F_OPERATOR_5F_MAP,
                                                                const GGS_prefixOperatorMap & in_PREFIX_5F_OPERATOR_5F_MAP,
                                                                const GGS_assignmentOperatorMap & in_ASSIGNMENT_5F_OPERATOR_5F_MAP
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n<html>\n<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n<title>Global constants of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</title>\n<style type=\"text/css\">body {\n  font-family: Georgia, sans-serif ;\n  font-size: small ;\n}\n\nh1 {\n  text-align: center ;\n}\n\n.selecteur {\n  color:green ;\n}\n\na.header_link {\n  background-color: #FFFFCC ;\n}\n\na:visited, a:link, a:active{\n  color: blue ;\n  text-decoration: underline ;\n}\n\na:hover {\n  color:green ;\n  background-color: #FFFF00 ;\n  text-decoration: none ;\n}\n\ntable.result {\n  border: 1px solid #666666 ;\n}\n\ntd.result_title {\n  font-weight: bold ;\n  text-align: center ;\n  background-color: yellow ;\n}\n\ntr.result_line {\n  background-color: #EEEEEE ;\n}\n\n</style>\n</head>\n<body>\n<div>\n<h1>Types defined by ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</h1>\n<p>This document lists all ") ;
  result.appendString (in_GLOBAL_5F_TYPE_5F_MAP.getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (" defined types, sorted by name.</p>\n<p>") ;
  GGS_uint index_989_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_989 (in_FIRST_5F_LETTER_5F_SET, EnumerationOrder::up) ;
    while (enumerator_989.hasCurrentObject ()) {
      result.appendString ("<a class=\"header_link\" href=\"#") ;
      result.appendString (enumerator_989.current_key (HERE).getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).stringValue ()) ;
      result.appendString ("\">") ;
      result.appendString (enumerator_989.current_key (HERE).stringValue ()) ;
      result.appendString ("</a>") ;
      if (enumerator_989.hasNextObject ()) {
        result.appendString (" - ") ;
      }
      index_989_.increment () ;
      enumerator_989.gotoNextObject () ;
    }
  }
  result.appendString ("</p>\n<p>") ;
  result.appendString (in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue ()) ;
  result.appendString ("\n</p>\n") ;
  GGS_uint index_1174_ (0) ;
  if (in_GLOBAL_5F_TYPE_5F_MAP.isValid ()) {
    cEnumerator_unifiedTypeMap enumerator_1174 (in_GLOBAL_5F_TYPE_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_1174.hasCurrentObject ()) {
      result.appendString ("\n<h2>\n  <a name=\"") ;
      result.appendString (enumerator_1174.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\">") ;
      result.appendString (enumerator_1174.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</a>\n</h2>\n<p>\nKind: ") ;
      result.appendString (callExtensionGetter_descriptionForHTMLFile ((const cPtr_omnibusType *) callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 68)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 68)).stringValue ()) ;
      result.appendString ("<br>\nDescription: ") ;
      result.appendString (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 69)).readProperty_omnibusTypeDescriptionName ().stringValue ()) ;
      result.appendString ("<br>\nLLVM Base Name: ") ;
      const enumGalgasBool test_0 = GGS_bool (ComparisonKind::equal, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).readProperty_llvmBaseTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString (GGS_string ("<i>none, compile time type</i>").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).readProperty_llvmBaseTypeName ().stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString ("<br>\nLLVM Name: ") ;
      const enumGalgasBool test_1 = GGS_bool (ComparisonKind::equal, callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString (GGS_string ("<i>none, compile time type</i>").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1174.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString ("\n</p>\n") ;
      index_1174_.increment () ;
      enumerator_1174.gotoNextObject () ;
    }
  }
  result.appendString ("\n<p>\n<h2>\n  Routines\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Standalone routine Name</td>\n      <td class=\"result_title\">Visibility</td>\n      <td class=\"result_title\">Typed signature</td>\n      <td class=\"result_title\">Routine LLVM Name, by mode</td>\n    </tr>\n  ") ;
  GGS_uint index_2119_ (0) ;
  if (in_ALL_5F_ROUTINE_5F_MAP.isValid ()) {
    cEnumerator_routineMapForContext enumerator_2119 (in_ALL_5F_ROUTINE_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_2119.hasCurrentObject ()) {
      result.appendString ("\n    <tr class=\"result_line\">\n      <td>") ;
      result.appendString (enumerator_2119.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</td>\n      <td>") ;
      const enumGalgasBool test_2 = enumerator_2119.current_mIsPublic (HERE).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString (GGS_string ("public").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString (GGS_string ("private").stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString ("</td>\n      <td>") ;
      result.appendString (extensionGetter_typedString (enumerator_2119.current_mSignature (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).stringValue ()) ;
      const enumGalgasBool test_3 = enumerator_2119.current_mReturnTypeProxy (HERE).getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        } break ;
      case kBoolFalse : {
        result.appendString (" -> ") ;
        result.appendString (extensionGetter_key (enumerator_2119.current_mReturnTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString ("</td>\n      <td>") ;
      GGS_uint index_2478_ (0) ;
      if (enumerator_2119.current_mModeDictionary (HERE).isValid ()) {
        cEnumerator_routineLLVMNameDict enumerator_2478 (enumerator_2119.current_mModeDictionary (HERE), EnumerationOrder::up) ;
        while (enumerator_2478.hasCurrentObject ()) {
          result.appendString (extensionGetter_string (enumerator_2478.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 90)).stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (enumerator_2478.current_llvmName (HERE).stringValue ()) ;
          if (enumerator_2478.hasNextObject ()) {
            result.appendString ("<br>") ;
          }
          index_2478_.increment () ;
          enumerator_2478.gotoNextObject () ;
        }
      }
      result.appendString ("</td>\n    </tr>\n  ") ;
      index_2119_.increment () ;
      enumerator_2119.gotoNextObject () ;
    }
  }
  result.appendString ("\n  </table>\n</p>\n<p>\n<h2>\n  Infix Operators\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Infix operator</td>\n      <td class=\"result_title\">Result Type</td>\n    </tr>\n  ") ;
  GGS_uint index_2836_ (0) ;
  if (in_INFIX_5F_OPERATOR_5F_MAP.isValid ()) {
    cEnumerator_infixOperatorMap enumerator_2836 (in_INFIX_5F_OPERATOR_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_2836.hasCurrentObject ()) {
      result.appendString ("\n    <tr class=\"result_line\">\n      <td>") ;
      result.appendString (enumerator_2836.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</td>\n      <td>") ;
      result.appendString (enumerator_2836.current_mResultType (HERE).readProperty_omnibusTypeDescriptionName ().stringValue ()) ;
      result.appendString ("</td>\n    </tr>\n  ") ;
      index_2836_.increment () ;
      enumerator_2836.gotoNextObject () ;
    }
  }
  result.appendString ("\n  </table>\n</p>\n<p>\n<h2>\n  Prefix Operators\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Prefix operator</td>\n      <td class=\"result_title\">Result Type</td>\n    </tr>\n  ") ;
  GGS_uint index_3259_ (0) ;
  if (in_PREFIX_5F_OPERATOR_5F_MAP.isValid ()) {
    cEnumerator_prefixOperatorMap enumerator_3259 (in_PREFIX_5F_OPERATOR_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_3259.hasCurrentObject ()) {
      result.appendString ("\n    <tr class=\"result_line\">\n      <td>") ;
      result.appendString (enumerator_3259.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</td>\n      <td>") ;
      result.appendString (enumerator_3259.current_mResultType (HERE).readProperty_omnibusTypeDescriptionName ().stringValue ()) ;
      result.appendString ("</td>\n    </tr>\n  ") ;
      index_3259_.increment () ;
      enumerator_3259.gotoNextObject () ;
    }
  }
  result.appendString ("\n  </table>\n</p>\n<h2>\n  Assignment Operators\n</h2>\n  <table class=\"result\">\n    <tr>\n      <td class=\"result_title\">Operator</td>\n    </tr>\n  ") ;
  GGS_uint index_3604_ (0) ;
  if (in_ASSIGNMENT_5F_OPERATOR_5F_MAP.isValid ()) {
    cEnumerator_assignmentOperatorMap enumerator_3604 (in_ASSIGNMENT_5F_OPERATOR_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_3604.hasCurrentObject ()) {
      result.appendString ("\n    <tr class=\"result_line\">\n      <td>") ;
      result.appendString (enumerator_3604.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</td>\n    </tr>\n  ") ;
      index_3604_.increment () ;
      enumerator_3604.gotoNextObject () ;
    }
  }
  result.appendString ("\n  </table>\n</p>\n</div>\n</body>\n</html>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'linkForHTMLTypeMap'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_linkForHTMLTypeMap (const GGS_string & constinArgument_inTypeName,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 437)).add_operation (GGS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 437)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 437)).add_operation (GGS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 437)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_linkForHTMLTypeMap [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_linkForHTMLTypeMap (Compiler * inCompiler,
                                                                const cObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_linkForHTMLTypeMap (operand0,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_linkForHTMLTypeMap ("linkForHTMLTypeMap",
                                                                    functionWithGenericHeader_linkForHTMLTypeMap,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    1,
                                                                    functionArgs_linkForHTMLTypeMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'declareLLVMTypes?&'
//
//--------------------------------------------------------------------------------------------------

void routine_declareLLVMTypes_3F__26_ (const GGS_userLLVMTypeDefinitionListIR constinArgument_inUserLLVMTypeDefinitionListIR,
                                       GGS_string & ioArgument_ioLLVMcode,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GGS_string ("User Defined Types"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 449)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("%ptrtype = type i8* ; Generic pointer type for dynamic objects\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 450)) ;
  cEnumerator_userLLVMTypeDefinitionListIR enumerator_18327 (constinArgument_inUserLLVMTypeDefinitionListIR, EnumerationOrder::up) ;
  while (enumerator_18327.hasCurrentObject ()) {
    callExtensionMethod_generateLLVMType ((cPtr_userLLVMTypeDefinitionIR *) enumerator_18327.current_mType (HERE).ptr (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("types.galgas", 452)) ;
    enumerator_18327.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 454)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'checkAssignmentCompatibility'
//
//--------------------------------------------------------------------------------------------------

GGS_objectIR function_checkAssignmentCompatibility (const GGS_assignmentOperatorMap & constinArgument_inAssignmentOperatorMap,
                                                    const GGS_objectIR & constinArgument_inSourceValue,
                                                    const GGS_omnibusType & constinArgument_inOptionalTargetAnnotationType,
                                                    const GGS_location & constinArgument_inErrorLocation,
                                                    const GGS_bool & constinArgument_inStaticTypeAllowed,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result_result ; // Returned variable
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
      GGS_lstring var_key_1075 = function_assignmentOperatorKey (constinArgument_inOptionalTargetAnnotationType, GGS_location::class_func_nowhere (SOURCE_FILE ("semantic-analysis.galgas", 20)), extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
      GGS_abstractAssignmentOperatorUsage joker_1213 ; // Joker input parameter
      constinArgument_inAssignmentOperatorMap.method_searchKey (var_key_1075, joker_1213, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
      result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 22)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 25)).boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, extensionGetter_omnibusTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 26)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 26)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the ").add_operation (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)).add_operation (GGS_string (" compile time type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)), fixItArray4  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::equal, extensionGetter_omnibusTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)).objectCompare (function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)))).boolEnum () ;
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


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_checkAssignmentCompatibility [6] = {
  & kTypeDescriptor_GALGAS_assignmentOperatorMap,
  & kTypeDescriptor_GALGAS_objectIR,
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_bool,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_checkAssignmentCompatibility (Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GGS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_assignmentOperatorMap operand0 = GGS_assignmentOperatorMap::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                       inCompiler
                                                                                       COMMA_THERE) ;
  const GGS_objectIR operand1 = GGS_objectIR::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  const GGS_omnibusType operand2 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_location operand3 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  const GGS_bool operand4 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_checkAssignmentCompatibility ("checkAssignmentCompatibility",
                                                                              functionWithGenericHeader_checkAssignmentCompatibility,
                                                                              & kTypeDescriptor_GALGAS_objectIR,
                                                                              5,
                                                                              functionArgs_checkAssignmentCompatibility) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'getNewTempValue?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_getNewTempValue_3F__26__21_ (const GGS_omnibusType constinArgument_inType,
                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                          GGS_objectIR & outArgument_outTempVariable,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("semantic-analysis.galgas", 65)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outTempVariable = GGS_objectIR::class_func_void (SOURCE_FILE ("semantic-analysis.galgas", 66)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_string var_llvmName_3023 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3023, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 68)) ;
    }
    outArgument_outTempVariable = GGS_objectIR::class_func_llvmNamedValue (constinArgument_inType, var_llvmName_3023  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 69)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'getNewTempReference?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_getNewTempReference_3F__26__21_ (const GGS_omnibusType constinArgument_inType,
                                              GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GGS_objectIR & outArgument_outTempVariable,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("semantic-analysis.galgas", 80)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outTempVariable = GGS_objectIR::class_func_void (SOURCE_FILE ("semantic-analysis.galgas", 81)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_string var_llvmName_3450 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3450, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 83)) ;
    }
    outArgument_outTempVariable = GGS_objectIR::class_func_reference (constinArgument_inType, var_llvmName_3450  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 84)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysis?sourceFile?ast?allSourceFilePaths?decoratedDeclarationList?decoratedRoutineList?routineListIR?context?endOfSourceFile?staticEntityMap!intermediateCode'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysis_3F_sourceFile_3F_ast_3F_allSourceFilePaths_3F_decoratedDeclarationList_3F_decoratedRoutineList_3F_routineListIR_3F_context_3F_endOfSourceFile_3F_staticEntityMap_21_intermediateCode (const GGS_string /* constinArgument_inSourceFile */,
                                                                                                                                                                                                                    const GGS_ast constinArgument_inAST,
                                                                                                                                                                                                                    const GGS_stringset constinArgument_inSourceFileAbsolutePathSet,
                                                                                                                                                                                                                    const GGS_declarationDecorationList constinArgument_inDecoratedDeclarationList,
                                                                                                                                                                                                                    const GGS_decoratedRegularRoutineList constinArgument_inDecoratedRoutineList,
                                                                                                                                                                                                                    const GGS_routineListIR constinArgument_inRoutineListIR,
                                                                                                                                                                                                                    const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                                                                                                                                    const GGS_location constinArgument_inEndOfSourceFile,
                                                                                                                                                                                                                    const GGS_staticEntityMap constinArgument_inStaticEntityMap,
                                                                                                                                                                                                                    GGS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                                                                                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GGS_intermediateCodeStruct::init (inCompiler COMMA_HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mRoutineListIR = constinArgument_inRoutineListIR ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.readProperty_mTargetParameters () ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticEntityMap = constinArgument_inStaticEntityMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.readProperty_mGlobalTaskVariableList () ;
  GGS_semanticTemporariesStruct var_temporaries_4622 = GGS_semanticTemporariesStruct::init (inCompiler COMMA_HERE) ;
  cEnumerator_declarationDecorationList enumerator_4649 (constinArgument_inDecoratedDeclarationList, EnumerationOrder::up) ;
  while (enumerator_4649.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((cPtr_abstractDecoratedDeclaration *) enumerator_4649.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_4622, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 110)) ;
    enumerator_4649.gotoNextObject () ;
  }
  extensionMethod_routineSemanticAnalysis (constinArgument_inDecoratedRoutineList, constinArgument_inSemanticContext, var_temporaries_4622, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 117)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.readProperty_mExternFunctionListAST (), constinArgument_inSemanticContext, var_temporaries_4622, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 122)) ;
  {
  routine_appendPanicRoutines_3F_allSourceFilePaths_26_intermediateCode (constinArgument_inSourceFileAbsolutePathSet, outArgument_outIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 128)) ;
  }
  {
  routine_checkRequiredProcedures_3F_ast_3F_context_3F_endOfSourceFile (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 133)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimeBoolAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compiletimeBoolAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 11)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compiletimeBoolAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimeBoolAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_nodeName_1031 = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 21)).getter_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 21)) ;
  {
  const GGS_compiletimeBoolAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1031, temp_0, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 22)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimeBoolAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compiletimeBoolAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 28)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'ctBoolTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_ctBoolTypeName (Compiler *
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("ctBool") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_ctBoolTypeName = false ;
static GGS_string gOnceFunctionResult_ctBoolTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_ctBoolTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_ctBoolTypeName) {
    gOnceFunctionResult_ctBoolTypeName = onceFunction_ctBoolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_ctBoolTypeName = true ;
  }
  return gOnceFunctionResult_ctBoolTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_ctBoolTypeName (void) {
  gOnceFunctionResult_ctBoolTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_ctBoolTypeName (nullptr,
                                                          releaseOnceFunctionResult_ctBoolTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_ctBoolTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_ctBoolTypeName (Compiler * inCompiler,
                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                            const GGS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  return function_ctBoolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_ctBoolTypeName ("ctBoolTypeName",
                                                                functionWithGenericHeader_ctBoolTypeName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                0,
                                                                functionArgs_ctBoolTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compiletimeBoolAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimeBoolAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                     GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                     GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                     GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                     GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                     GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                     GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                     GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_ctBoolTypeName_2451 = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 51)).getter_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 51)) ;
  GGS_omnibusType var_ctBoolType_2502 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 52)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_ctBoolTypeName_2451, var_ctBoolType_2502, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 54)) ;
  }
  GGS_lstring var_key_2664 = function_prefixOperatorMapKey (var_ctBoolType_2502, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("compile-time-type-bool.galgas", 56)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 56)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2664, var_ctBoolType_2502, var_ctBoolType_2502, GGS_compileTimeBoolNotOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 57)) ;
  }
  var_key_2664 = function_infixOperatorMapKey (var_ctBoolType_2502, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-type-bool.galgas", 59)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 59)), var_ctBoolType_2502, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 59)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2664, var_ctBoolType_2502, GGS_compileTimeBoolOrOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 60)) ;
  }
  var_key_2664 = function_infixOperatorMapKey (var_ctBoolType_2502, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("compile-time-type-bool.galgas", 62)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 62)), var_ctBoolType_2502, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 62)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2664, var_ctBoolType_2502, GGS_compileTimeBoolXorOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 63)) ;
  }
  var_key_2664 = function_infixOperatorMapKey (var_ctBoolType_2502, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("compile-time-type-bool.galgas", 65)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 65)), var_ctBoolType_2502, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 65)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2664, var_ctBoolType_2502, GGS_compileTimeBoolEqualOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 66)) ;
  }
  var_key_2664 = GGS_lstring::init_21__21_ (var_ctBoolType_2502.readProperty_omnibusTypeDescriptionName (), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 68)), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_2664, GGS_compileTimeBoolImplicitConverterToBoolean::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 69)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeBoolImplicitConverterToBoolean generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                                                          const GGS_location /* constinArgument_inErrorLocation */,
                                                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                          GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GGS_implicitBooleanConversionResult & outArgument_outResult,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_4539 ;
  GGS_omnibusType joker_4523_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_4523_1, var_receiverValue_4539, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 89)) ;
  outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_compileTime (GGS_bool (ComparisonKind::notEqual, var_receiverValue_4539.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 90))))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 90)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeBoolNotOperator generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolNotOperator::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                           const GGS_location /* constinArgument_inOperatorLocation */,
                                                           const GGS_omnibusType constinArgument_inResultType,
                                                           const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                           const GGS_bool /* constinArgument_inSafeMode */,
                                                           GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                           GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                           GGS_objectIR & outArgument_outResultValue,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_5494 ;
  GGS_omnibusType joker_5478_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_5478_1, var_receiverValue_5494, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 112)) ;
  GGS_bigint temp_0 ;
  const enumGalgasBool test_1 = GGS_bool (ComparisonKind::equal, var_receiverValue_5494.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)) ;
  }
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, temp_0  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeBoolEqualOperator generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolEqualOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                             const GGS_location /* constinArgument_inOperatorLocation */,
                                                             const GGS_objectIR constinArgument_inRightOperand,
                                                             const GGS_omnibusType constinArgument_inResultType,
                                                             GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                             GGS_objectIR & outArgument_outResultValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_6469 ;
  GGS_omnibusType joker_6453_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_6453_1, var_leftValue_6469, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 135)) ;
  GGS_bigint var_rightValue_6536 ;
  GGS_omnibusType joker_6520_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_6520_1, var_rightValue_6536, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 136)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::equal, var_leftValue_6469.objectCompare (var_rightValue_6536)).getter_bigint (SOURCE_FILE ("compile-time-type-bool.galgas", 137))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 137)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeBoolXorOperator generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolXorOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                           const GGS_location /* constinArgument_inOperatorLocation */,
                                                           const GGS_objectIR constinArgument_inRightOperand,
                                                           const GGS_omnibusType constinArgument_inResultType,
                                                           GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                           GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                           GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                           GGS_objectIR & outArgument_outResultValue,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_7357 ;
  GGS_omnibusType joker_7341_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_7341_1, var_leftValue_7357, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 157)) ;
  GGS_bigint var_rightValue_7424 ;
  GGS_omnibusType joker_7408_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_7408_1, var_rightValue_7424, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 158)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_7357.operator_xor (var_rightValue_7424 COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 159))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 159)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeBoolOrOperator generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolOrOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                          const GGS_location /* constinArgument_inOperatorLocation */,
                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                          const GGS_omnibusType constinArgument_inResultType,
                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                          GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                          GGS_objectIR & outArgument_outResultValue,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_8242 ;
  GGS_omnibusType joker_8226_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_8226_1, var_leftValue_8242, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 179)) ;
  GGS_bigint var_rightValue_8309 ;
  GGS_omnibusType joker_8293_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_8293_1, var_rightValue_8309, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 180)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_8242.operator_or (var_rightValue_8309 COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 181))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 181)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeIntAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compileTimeIntAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 11)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_nodeName_1028 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 21)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 21)) ;
  {
  const GGS_compileTimeIntAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1028, temp_0, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1028, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 23)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 23)) COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 23)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeIntAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compileTimeIntAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 29)) ;
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

static const C_galgas_type_descriptor * functionArgs_ctIntegerTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_ctIntegerTypeName (Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
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
//
//Overriding extension method '@compileTimeIntAST enterInContext'
//
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
  GGS_lstring var_ctIntegerTypeName_2515 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 52)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 52)) ;
  GGS_omnibusType var_ctInt_2572 = function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 53)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_ctIntegerTypeName_2515, var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 55)) ;
  }
  GGS_lstring var_key_2728 = function_prefixOperatorMapKey (var_ctInt_2572, GGS_prefixOperator::class_func_bitWiseComplement (SOURCE_FILE ("compile-time-type-int.galgas", 57)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 57)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, var_ctInt_2572, GGS_compileTimeIntComplementOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 58)) ;
  }
  var_key_2728 = function_prefixOperatorMapKey (var_ctInt_2572, GGS_prefixOperator::class_func_minusOp (SOURCE_FILE ("compile-time-type-int.galgas", 60)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 60)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, var_ctInt_2572, GGS_compileTimeIntMinusOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 61)) ;
  }
  var_key_2728 = function_prefixOperatorMapKey (var_ctInt_2572, GGS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 63)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 63)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, var_ctInt_2572, GGS_compileTimeIntMinusOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 64)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("compile-time-type-int.galgas", 66)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 66)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 66)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntBitWiseAndOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 67)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-type-int.galgas", 69)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 69)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 69)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntBitWiseOrOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 70)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("compile-time-type-int.galgas", 72)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 72)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 72)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntXorOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 73)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("compile-time-type-int.galgas", 75)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 75)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 75)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntAddOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 76)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 78)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 78)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 78)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntAddOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 79)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("compile-time-type-int.galgas", 81)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 81)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 81)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntSubtractOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 82)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 84)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 84)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 84)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntSubtractOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 85)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("compile-time-type-int.galgas", 87)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 87)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 87)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntMultiplyOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 88)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("compile-time-type-int.galgas", 90)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 90)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 90)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntDivideOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 91)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 93)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 93)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 93)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntDivideZeroOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 94)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("compile-time-type-int.galgas", 96)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 96)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 96)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntModuloOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 97)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 99)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 99)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 99)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntModuloZeroOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 100)) ;
  }
  GGS_omnibusType var_ctBoolType_5564 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 102)) ;
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("compile-time-type-int.galgas", 103)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 103)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 103)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctBoolType_5564, GGS_compileTimeIntEqualOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 104)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("compile-time-type-int.galgas", 106)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 106)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 106)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctBoolType_5564, GGS_compileTimeIntLessThanOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 107)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("compile-time-type-int.galgas", 109)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 109)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 109)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctBoolType_5564, GGS_compileTimeIntLowerOrEqualOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 110)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("compile-time-type-int.galgas", 112)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 112)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 112)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntShiftLeftOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 113)) ;
  }
  var_key_2728 = function_infixOperatorMapKey (var_ctInt_2572, GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("compile-time-type-int.galgas", 115)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 115)), var_ctInt_2572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 115)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2728, var_ctInt_2572, GGS_compileTimeIntShiftRightOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 116)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntModuloOperator generateCode'
//
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
  GGS_bigint var_rightValue_7385 ;
  GGS_omnibusType joker_7369_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_7369_1, var_rightValue_7385, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 138)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_7385.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 139)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time divide by zero"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 140)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GGS_bigint var_leftValue_7565 ;
    GGS_omnibusType joker_7549_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_7549_1, var_leftValue_7565, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 142)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_7565.modulo_operation (var_rightValue_7385, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 143))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 143)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntModuloZeroOperator generateCode'
//
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
  GGS_bigint var_rightValue_8407 ;
  GGS_omnibusType joker_8391_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_8391_1, var_rightValue_8407, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 164)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_8407.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 165)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 166))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 166)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_bigint var_leftValue_8578 ;
    GGS_omnibusType joker_8562_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_8562_1, var_leftValue_8578, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 168)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_8578.modulo_operation (var_rightValue_8407, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 169))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 169)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntDivideOperator generateCode'
//
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
  GGS_bigint var_rightValue_9405 ;
  GGS_omnibusType joker_9389_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_9389_1, var_rightValue_9405, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 190)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_9405.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 191)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time divide by zero"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 192)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GGS_bigint var_leftValue_9585 ;
    GGS_omnibusType joker_9569_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_9569_1, var_leftValue_9585, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 194)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_9585.divide_operation (var_rightValue_9405, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 195))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 195)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntDivideZeroOperator generateCode'
//
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
  GGS_bigint var_rightValue_10425 ;
  GGS_omnibusType joker_10409_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_10409_1, var_rightValue_10425, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 216)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_10425.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 217)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 218))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 218)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_bigint var_leftValue_10596 ;
    GGS_omnibusType joker_10580_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_10580_1, var_leftValue_10596, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 220)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_10596.divide_operation (var_rightValue_10425, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 221))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 221)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntMultiplyOperator generateCode'
//
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
  GGS_bigint var_leftValue_11431 ;
  GGS_omnibusType joker_11415_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_11415_1, var_leftValue_11431, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 242)) ;
  GGS_bigint var_rightValue_11498 ;
  GGS_omnibusType joker_11482_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_11482_1, var_rightValue_11498, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 243)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_11431.multiply_operation (var_rightValue_11498, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 244))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 244)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntSubtractOperator generateCode'
//
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
  GGS_bigint var_leftValue_12326 ;
  GGS_omnibusType joker_12310_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_12310_1, var_leftValue_12326, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 264)) ;
  GGS_bigint var_rightValue_12393 ;
  GGS_omnibusType joker_12377_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_12377_1, var_rightValue_12393, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 265)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_12326.substract_operation (var_rightValue_12393, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 266))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 266)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntEqualOperator generateCode'
//
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
  GGS_bigint var_leftValue_13215 ;
  GGS_omnibusType joker_13199_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_13199_1, var_leftValue_13215, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 286)) ;
  GGS_bigint var_rightValue_13282 ;
  GGS_omnibusType joker_13266_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_13266_1, var_rightValue_13282, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 287)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::equal, var_leftValue_13215.objectCompare (var_rightValue_13282)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 288))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 288)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntAddOperator generateCode'
//
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
  GGS_bigint var_leftValue_14101 ;
  GGS_omnibusType joker_14085_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_14085_1, var_leftValue_14101, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 308)) ;
  GGS_bigint var_rightValue_14168 ;
  GGS_omnibusType joker_14152_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_14152_1, var_rightValue_14168, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 309)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_14101.add_operation (var_rightValue_14168, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 310))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 310)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntBitWiseAndOperator generateCode'
//
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
  GGS_bigint var_leftValue_15000 ;
  GGS_omnibusType joker_14984_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_14984_1, var_leftValue_15000, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 330)) ;
  GGS_bigint var_rightValue_15067 ;
  GGS_omnibusType joker_15051_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_15051_1, var_rightValue_15067, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 331)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_15000.operator_and (var_rightValue_15067 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 332))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 332)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntShiftLeftOperator generateCode'
//
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
  GGS_bigint var_rightValue_15891 ;
  GGS_omnibusType joker_15875_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_15875_1, var_rightValue_15891, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 352)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_rightValue_15891.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 353)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time left shift right operand should be ≥ 0"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 354)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GGS_bigint var_leftValue_16094 ;
    GGS_omnibusType joker_16078_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_16078_1, var_leftValue_16094, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 356)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_16094.left_shift_operation (var_rightValue_15891, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 357))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 357)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntShiftRightOperator generateCode'
//
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
  GGS_bigint var_rightValue_16928 ;
  GGS_omnibusType joker_16912_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_16912_1, var_rightValue_16928, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 378)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_rightValue_16928.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 379)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time right shift right operand should be ≥ 0"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 380)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GGS_bigint var_leftValue_17132 ;
    GGS_omnibusType joker_17116_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_17116_1, var_leftValue_17132, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 382)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_17132.right_shift_operation (var_rightValue_16928, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 383))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 383)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntLessThanOperator generateCode'
//
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
  GGS_bigint var_leftValue_17968 ;
  GGS_omnibusType joker_17952_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_17952_1, var_leftValue_17968, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 404)) ;
  GGS_bigint var_rightValue_18035 ;
  GGS_omnibusType joker_18019_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_18019_1, var_rightValue_18035, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 405)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::lowerThan, var_leftValue_17968.objectCompare (var_rightValue_18035)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 406))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 406)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntLowerOrEqualOperator generateCode'
//
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
  GGS_bigint var_leftValue_18871 ;
  GGS_omnibusType joker_18855_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_18855_1, var_leftValue_18871, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 426)) ;
  GGS_bigint var_rightValue_18938 ;
  GGS_omnibusType joker_18922_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_18922_1, var_rightValue_18938, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 427)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::lowerOrEqual, var_leftValue_18871.objectCompare (var_rightValue_18938)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 428))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 428)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntXorOperator generateCode'
//
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
  GGS_bigint var_leftValue_19757 ;
  GGS_omnibusType joker_19741_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_19741_1, var_leftValue_19757, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 448)) ;
  GGS_bigint var_rightValue_19824 ;
  GGS_omnibusType joker_19808_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_19808_1, var_rightValue_19824, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 449)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_19757.operator_xor (var_rightValue_19824 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 450))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 450)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntBitWiseOrOperator generateCode'
//
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
  GGS_bigint var_leftValue_20654 ;
  GGS_omnibusType joker_20638_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_20638_1, var_leftValue_20654, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 470)) ;
  GGS_bigint var_rightValue_20721 ;
  GGS_omnibusType joker_20705_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_20705_1, var_rightValue_20721, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 471)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_20654.operator_or (var_rightValue_20721 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 472))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 472)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntMinusOperator generateCode'
//
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
  GGS_bigint var_receiverValue_21707 ;
  GGS_omnibusType joker_21691_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_21691_1, var_receiverValue_21707, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 494)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_receiverValue_21707.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 495))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 495)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeIntComplementOperator generateCode'
//
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
  GGS_bigint var_receiverValue_22568 ;
  GGS_omnibusType joker_22552_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_22552_1, var_receiverValue_22568, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 515)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_receiverValue_22568.operator_tilde (SOURCE_FILE ("compile-time-type-int.galgas", 516))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 516)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Once function 'boolTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_boolTypeName (Compiler *
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("bool") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_boolTypeName = false ;
static GGS_string gOnceFunctionResult_boolTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_boolTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolTypeName) {
    gOnceFunctionResult_boolTypeName = onceFunction_boolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolTypeName = true ;
  }
  return gOnceFunctionResult_boolTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_boolTypeName (void) {
  gOnceFunctionResult_boolTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_boolTypeName (nullptr,
                                                        releaseOnceFunctionResult_boolTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_boolTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_boolTypeName (Compiler * inCompiler,
                                                          const cObjectArray & /* inEffectiveParameterArray */,
                                                          const GGS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  return function_boolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolTypeAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_boolTypeAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 17)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolTypeAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolTypeAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_nodeName_1168 = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 27)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 27)) ;
  {
  const GGS_boolTypeAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1168, temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 28)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1168, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 29)) COMMA_SOURCE_FILE ("type-bool.galgas", 29)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolTypeAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_boolTypeAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 35)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolTypeAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolTypeAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                              GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                              GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                              GGS_routineListIR & ioArgument_ioRoutineListIR,
                                              GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                              GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                              GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                              GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_boolTypeName_2463 = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 52)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 52)) ;
  GGS_omnibusType var_boolType_2510 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 53)) ;
  GGS_omnibusType var_ctBoolType_2539 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 54)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_boolTypeName_2463, var_boolType_2510, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 56)) ;
  }
  GGS_lstring var_key_2697 = function_prefixOperatorMapKey (var_boolType_2510, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("type-bool.galgas", 58)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 58)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2697, var_boolType_2510, var_boolType_2510, GGS_boolNotOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 59)) ;
  }
  var_key_2697 = function_infixOperatorMapKey (var_boolType_2510, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 61)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 61)), var_boolType_2510, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 61)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2697, var_boolType_2510, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("or"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 62)) ;
  }
  var_key_2697 = function_infixOperatorMapKey (var_ctBoolType_2539, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 63)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 63)), var_boolType_2510, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 63)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2697, var_boolType_2510, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("or"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 64)) ;
  }
  var_key_2697 = function_infixOperatorMapKey (var_boolType_2510, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 65)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 65)), var_ctBoolType_2539, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 65)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2697, var_boolType_2510, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("or"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 66)) ;
  }
  var_key_2697 = function_infixOperatorMapKey (var_boolType_2510, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 68)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 68)), var_boolType_2510, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 68)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2697, var_boolType_2510, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("xor"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 69)) ;
  }
  var_key_2697 = function_infixOperatorMapKey (var_ctBoolType_2539, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 70)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 70)), var_boolType_2510, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 70)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2697, var_boolType_2510, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("xor"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 71)) ;
  }
  var_key_2697 = function_infixOperatorMapKey (var_boolType_2510, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 72)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 72)), var_ctBoolType_2539, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 72)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2697, var_boolType_2510, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("xor"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 73)) ;
  }
  var_key_2697 = function_infixOperatorMapKey (var_boolType_2510, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-bool.galgas", 75)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 75)), var_boolType_2510, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 75)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2697, var_boolType_2510, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("icmp eq"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 76)) ;
  }
  var_key_2697 = function_infixOperatorMapKey (var_ctBoolType_2539, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-bool.galgas", 77)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 77)), var_boolType_2510, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 77)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2697, var_boolType_2510, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("icmp eq"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 78)) ;
  }
  var_key_2697 = function_infixOperatorMapKey (var_boolType_2510, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-bool.galgas", 79)), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 79)), var_ctBoolType_2539, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 79)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2697, var_boolType_2510, GGS_inlineInfixOperatorUsage::init_21_ (GGS_string ("icmp eq"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 80)) ;
  }
  var_key_2697 = GGS_lstring::init_21__21_ (var_boolType_2510.readProperty_omnibusTypeDescriptionName (), GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 82)), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_2697, GGS_boolImplicitConverterToBoolean::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 83)) ;
  }
  var_key_2697 = function_assignmentOperatorKey (var_boolType_2510, GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 85)), var_boolType_2510, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 85)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2697, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 86)) ;
  }
  var_key_2697 = function_assignmentOperatorKey (var_boolType_2510, GGS_location::class_func_nowhere (SOURCE_FILE ("type-bool.galgas", 87)), var_ctBoolType_2539, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 87)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2697, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 88)) ;
  }
  GGS_string var_functionName_5138 = function_assignmentOperatorFuncName (var_boolType_2510, var_boolType_2510, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 90)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GGS_simpleAssignmentCopyRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_functionName_5138.getter_nowhere (SOURCE_FILE ("type-bool.galgas", 92)), GGS_bool (false), GGS_bool (false), var_boolType_2510, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-bool.galgas", 91)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolImplicitConverterToBoolean generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                                               const GGS_location /* constinArgument_inErrorLocation */,
                                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                               GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                               GGS_implicitBooleanConversionResult & outArgument_outResult,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_llvmVariable (extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 116))  COMMA_SOURCE_FILE ("type-bool.galgas", 116)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolNotOperator generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolNotOperator::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                const GGS_location /* constinArgument_inOperatorLocation */,
                                                const GGS_omnibusType constinArgument_inResultType,
                                                const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                const GGS_bool /* constinArgument_inSafeMode */,
                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                GGS_objectIR & outArgument_outResultValue,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_receiverOperand_7005 = constinArgument_inReceiverOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_receiverOperand_7005, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 139)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 140)) ;
  }
  GGS_string var_s_7205 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)).add_operation (GGS_string (" = xor i1 1, "), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)).add_operation (extensionGetter_llvmName (var_receiverOperand_7005, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)) ;
  {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 142)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_7205, temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 142)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeAliasDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_typeAliasDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_typeAliasDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mAliasTypeName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeAliasDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeAliasDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_typeAliasDeclarationAST temp_0 = this ;
  const GGS_typeAliasDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mAliasTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 49)) ;
  }
  {
  const GGS_typeAliasDeclarationAST temp_2 = this ;
  const GGS_typeAliasDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mAliasTypeName (), temp_3.readProperty_mOriginalTypeName () COMMA_SOURCE_FILE ("type-alias.galgas", 50)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeAliasDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_typeAliasDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_typeAliasDeclarationAST temp_0 = this ;
  result_result = GGS_string ("typealias ").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeAliasDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeAliasDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                          GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                          GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                          GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                          GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_type_3612 ;
  const GGS_typeAliasDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_0.readProperty_mOriginalTypeName (), var_type_3612, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 74)) ;
  {
  const GGS_typeAliasDeclarationAST temp_1 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mAliasTypeName (), var_type_3612, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 76)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fixedSizeArrayTypeDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayTypeDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mFixedSizeArrayType (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 46)) ;
  }
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_2 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mFixedSizeArrayType (), temp_3.readProperty_mElementTypeName () COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 47)) ;
  }
  const GGS_fixedSizeArrayTypeDeclarationAST temp_4 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_5 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_4.readProperty_mSizeExpression ().ptr (), temp_5.readProperty_mFixedSizeArrayType (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 48)) ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_6 = this ;
  GGS_lstring var_rootNode_2343 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 49)), temp_6.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_7.readProperty_mFixedSizeArrayType (), var_rootNode_2343 COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 50)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@fixedSizeArrayTypeDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_fixedSizeArrayTypeDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("anonymous $").add_operation (temp_0.readProperty_mFixedSizeArrayType ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@fixedSizeArrayTypeDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_fixedSizeArrayTypeDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mFixedSizeArrayType ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fixedSizeArrayTypeDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayTypeDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                   GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                   GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                   GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                                   GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                   GGS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_elementType_4085 ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_0.readProperty_mElementTypeName (), var_elementType_4085, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 80)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4085.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 81)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 81)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be copyable"), fixItArray3  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 82)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4085.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 84)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 84)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be instanciable"), fixItArray6  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 85)) ;
    }
  }
  GGS_objectIR var_sizeExpressionIR_4609 ;
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_7 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_8 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_7.readProperty_mSizeExpression (), temp_8.readProperty_mSizeExpressionLocation (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 93)), var_sizeExpressionIR_4609, inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 88)) ;
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_sizeExpressionIR_4609.getter_isLiteralInteger (SOURCE_FILE ("type-fixed-size-array.galgas", 96)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 96)).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_10 = this ;
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mSizeExpressionLocation (), GGS_string ("array size expression is a literal interger expression"), fixItArray11  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 97)) ;
    }
  }
  if (kBoolFalse == test_9) {
    GGS_bigint var_arraySize_4844 ;
    GGS_omnibusType joker_4829_1 ; // Joker input parameter
    var_sizeExpressionIR_4609.method_extractLiteralInteger (joker_4829_1, var_arraySize_4844, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 99)) ;
    const GGS_fixedSizeArrayTypeDeclarationAST temp_12 = this ;
    GGS_lstring var_omnibusTypeDescriptionName_4930 = GGS_lstring::init_21__21_ (GGS_string ("[").add_operation (var_arraySize_4844.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (GGS_string (" • "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (var_elementType_4085.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)), temp_12.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE) ;
    const GGS_fixedSizeArrayTypeDeclarationAST temp_13 = this ;
    GGS_lstring var_llvmBaseTypeName_5081 = GGS_lstring::init_21__21_ (var_elementType_4085.readProperty_llvmBaseTypeName ().add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)).add_operation (var_arraySize_4844.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)), temp_13.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE) ;
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = ioArgument_ioContext.readProperty_mTypeMap ().getter_hasKey (var_omnibusTypeDescriptionName_4930.readProperty_string () COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 103)).boolEnum () ;
      if (kBoolTrue == test_14) {
        GGS_omnibusType var_type_5339 ;
        extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), var_omnibusTypeDescriptionName_4930, var_type_5339, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 104)) ;
        {
        const GGS_fixedSizeArrayTypeDeclarationAST temp_15 = this ;
        extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_15.readProperty_mFixedSizeArrayType (), var_type_5339, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 105)) ;
        }
      }
    }
    if (kBoolFalse == test_14) {
      GGS_constantMap temp_16 = GGS_constantMap::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 111)) ;
      GGS_constantMap var_constantMap_5570 = temp_16 ;
      {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_17 = this ;
      var_constantMap_5570.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("count"), temp_17.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE), var_arraySize_4844, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)).getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (var_omnibusTypeDescriptionName_4930, var_constantMap_5570, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 113)) ;
      }
      {
      extensionSetter_insertGetter (ioArgument_ioContext, var_omnibusTypeDescriptionName_4930, GGS_lstring::init_21__21_ (GGS_string ("count"), var_omnibusTypeDescriptionName_4930.readProperty_location (), inCompiler COMMA_HERE), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-fixed-size-array.galgas", 121)), GGS_propertyGetterKind::class_func_constantProperty (GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122)), var_arraySize_4844  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 118)) ;
      }
      GGS_constructorMap temp_18 = GGS_constructorMap::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 125)) ;
      GGS_constructorMap var_constructorMap_6249 = temp_18 ;
      {
      GGS_constructorSignature temp_19 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127)) ;
      var_constructorMap_6249.setter_insertKey (GGS_string ("(!repeated)").getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 127)), temp_19, GGS_constructorValue::class_func_arrayValue (var_elementType_4085, var_arraySize_4844.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127)) ;
      }
      GGS_string var_constructorName_6462 = GGS_string ("(") ;
      cEnumerator_range enumerator_6520 (GGS_range (GGS_uint (uint32_t (0U)), var_arraySize_4844.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 130)).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 130))), EnumerationOrder::up) ;
      while (enumerator_6520.hasCurrentObject ()) {
        var_constructorName_6462.plusAssign_operation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 131)) ;
        enumerator_6520.gotoNextObject () ;
      }
      var_constructorName_6462.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 133)) ;
      {
      GGS_constructorSignature temp_20 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134)) ;
      var_constructorMap_6249.setter_insertKey (var_constructorName_6462.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 134)), temp_20, GGS_constructorValue::class_func_arrayValue (var_elementType_4085, var_arraySize_4844.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_omnibusTypeDescriptionName_4930, var_constructorMap_6249, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 135)) ;
      }
      GGS_omnibusTypeAttributes var_typeAttributes_6911 = GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-fixed-size-array.galgas", 137)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-fixed-size-array.galgas", 137)) COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 137)) ;
      GGS_omnibusType var_arrayType_7032 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_staticSubscript (var_elementType_4085, var_arraySize_4844  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 140)), var_typeAttributes_6911, var_omnibusTypeDescriptionName_4930.readProperty_string (), GGS_typeKind::class_func_staticArrayType (var_elementType_4085, var_arraySize_4844  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 143)), var_llvmBaseTypeName_5081.readProperty_string (), inCompiler COMMA_HERE) ;
      {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_21 = this ;
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_21.readProperty_mFixedSizeArrayType (), var_arrayType_7032, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 146)) ;
      }
      {
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusTypeDescriptionName_4930, var_arrayType_7032, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 150)) ;
      }
      ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GGS_userLLVMStaticArrayTypeDefinitionIR::init_21__21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_7032.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 156)), var_elementType_4085, var_arraySize_4844, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 155)) ;
      GGS_string var_assignValueToElements_5F_functionName_7907 = function_assignValueToFixedSizeArrayElements_5F_functionName (var_arrayType_7032, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 161)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (var_assignValueToElements_5F_functionName_7907.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 163)), GGS_bool (false), GGS_bool (false), var_arrayType_7032, var_elementType_4085, var_arraySize_4844.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 168)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 162)) ;
      GGS_string var_assignmentFunctionLLVMName_8282 = function_assignmentOperatorFuncName (var_arrayType_7032, var_arrayType_7032, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 170)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (GGS_staticArrayTypeAssignFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_assignmentFunctionLLVMName_8282.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 172)), GGS_bool (false), GGS_bool (false), var_arrayType_7032, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 171)) ;
      const GGS_fixedSizeArrayTypeDeclarationAST temp_22 = this ;
      GGS_lstring var_key_8603 = function_assignmentOperatorKey (var_arrayType_7032, temp_22.readProperty_mFixedSizeArrayType ().readProperty_location (), var_arrayType_7032, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 178)) ;
      {
      ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8603, GGS_fixedSizeArrayAssignmentOperatorUsage::init_21__21__21_ (var_elementType_4085, var_arraySize_4844.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 179)), var_assignValueToElements_5F_functionName_7907, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 179)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Function 'assignValueToFixedSizeArrayElements_functionName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_assignValueToFixedSizeArrayElements_5F_functionName (const GGS_omnibusType & constinArgument_inFixedSizeArrayType,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("assign.value.to.fixed.size.array.").add_operation (constinArgument_inFixedSizeArrayType.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 187)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_assignValueToFixedSizeArrayElements_5F_functionName [2] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName (Compiler * inCompiler,
                                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                                 const GGS_location & /* inErrorLocation */
                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_assignValueToFixedSizeArrayElements_5F_functionName (operand0,
                                                                       inCompiler
                                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignValueToFixedSizeArrayElements_5F_functionName ("assignValueToFixedSizeArrayElements_functionName",
                                                                                                     functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName,
                                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                                     1,
                                                                                                     functionArgs_assignValueToFixedSizeArrayElements_5F_functionName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@userLLVMStaticArrayTypeDefinitionIR generateLLVMType'
//
//--------------------------------------------------------------------------------------------------

void cPtr_userLLVMStaticArrayTypeDefinitionIR::method_generateLLVMType (GGS_string & ioArgument_ioLLVMcode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_userLLVMStaticArrayTypeDefinitionIR temp_0 = this ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR temp_1 = this ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0.readProperty_mLLVMDefinedTypeName ().add_operation (GGS_string (" = type ["), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (temp_1.readProperty_mSize ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (GGS_string (" x "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fixedSizeArrayAssignmentOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayAssignmentOperatorUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                      GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      const GGS_omnibusType constinArgument_inTargetType,
                                                                      const GGS_string constinArgument_inTargetLLVMName,
                                                                      const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                                      const GGS_location constinArgument_inErrorLocation,
                                                                      const GGS_bool /* constinArgument_inTargetIsInitialized */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_arrayTypeName_10848 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 227)) ;
  const GGS_fixedSizeArrayAssignmentOperatorUsage temp_0 = this ;
  GGS_string var_elementTypeName_10898 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 228)) ;
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_11023__0 ;
      GGS_uint extractedValue_11023__1 ;
      GGS_objectIR extractedValue_11035_sourceValuePossibleReference_2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_11023__0, extractedValue_11023__1, extractedValue_11035_sourceValuePossibleReference_2) ;
      GGS_objectIR var_sourceValue_11085 = extractedValue_11035_sourceValuePossibleReference_2 ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_11085, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 232)) ;
      }
      const GGS_fixedSizeArrayAssignmentOperatorUsage temp_1 = this ;
      GGS_string var_s_11218 = GGS_string ("call void @").add_operation (temp_1.readProperty_mAssignValueToElements_5F_functionName ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 233)) ;
      var_s_11218.plusAssign_operation(GGS_string (" (").add_operation (var_arrayTypeName_10848, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)) ;
      var_s_11218.plusAssign_operation(GGS_string (", ").add_operation (var_elementTypeName_10898, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (extensionGetter_llvmName (var_sourceValue_11085, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)) ;
      {
      GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)) ;
      const GGS_fixedSizeArrayAssignmentOperatorUsage temp_3 = this ;
      temp_2.enterElement (temp_3.readProperty_mAssignValueToElements_5F_functionName (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11218, temp_2, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_11568__0 ;
      GGS_operandIRList extractedValue_11585_values_1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_11568__0, extractedValue_11585_values_1) ;
      GGS_uint var_uniqueValue_11603 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 239)) ;
      cEnumerator_operandIRList enumerator_11695 (extractedValue_11585_values_1, EnumerationOrder::up) ;
      GGS_uint index_11690 (uint32_t (0)) ;
      while (enumerator_11695.hasCurrentObject ()) {
        GGS_objectIR var_sourceValue_11741 = enumerator_11695.current_mOperand (HERE) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_11741, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 242)) ;
        }
        GGS_string var_ptr_11855 = GGS_string ("%ptr.").add_operation (var_uniqueValue_11603.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (index_11690.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)) ;
        GGS_string var_s_11905 = var_ptr_11855.add_operation (GGS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (var_arrayTypeName_10848, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (var_arrayTypeName_10848, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (index_11690.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)) ;
        {
        GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11905, temp_4, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)) ;
        }
        var_s_11905 = GGS_string ("store ").add_operation (var_elementTypeName_10898, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (extensionGetter_llvmName (var_sourceValue_11741, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (var_elementTypeName_10898, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (var_ptr_11855, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)) ;
        {
        GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 247)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11905, temp_5, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 247)) ;
        }
        enumerator_11695.gotoNextObject () ;
        index_11690.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 240)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_12309__0 ;
      GGS_operandIRList extractedValue_12326_values_1 ;
      GGS_uint extractedValue_12334__2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_12309__0, extractedValue_12326_values_1, extractedValue_12334__2) ;
      GGS_uint var_uniqueValue_12347 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 251)) ;
      cEnumerator_operandIRList enumerator_12439 (extractedValue_12326_values_1, EnumerationOrder::up) ;
      GGS_uint index_12434 (uint32_t (0)) ;
      while (enumerator_12439.hasCurrentObject ()) {
        GGS_string var_ptr_12475 = GGS_string ("%ptr.").add_operation (var_uniqueValue_12347.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (index_12434.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)) ;
        GGS_string var_s_12525 = var_ptr_12475.add_operation (GGS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (var_arrayTypeName_10848, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (var_arrayTypeName_10848, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (index_12434.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)) ;
        {
        GGS_stringset temp_6 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12525, temp_6, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)) ;
        }
        var_s_12525 = GGS_string ("store ").add_operation (var_elementTypeName_10898, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (extensionGetter_llvmName (enumerator_12439.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (var_elementTypeName_10898, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (var_ptr_12475, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)) ;
        {
        GGS_stringset temp_7 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 257)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12525, temp_7, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 257)) ;
        }
        enumerator_12439.gotoNextObject () ;
        index_12434.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 252)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_12930__0 ;
      GGS_uint extractedValue_12930__1 ;
      GGS_objectIR extractedValue_12930__2 ;
      GGS_uint extractedValue_12938_idx_3 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_12930__0, extractedValue_12930__1, extractedValue_12930__2, extractedValue_12938_idx_3) ;
      GGS_string var_assignmentFunctionLLVMName_12953 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 260)) ;
      GGS_string var_s_13048 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_12953.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (GGS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (extractedValue_12938_idx_3.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)) ;
      {
      GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)) ;
      temp_8.enterElement (var_assignmentFunctionLLVMName_12953, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_13048, temp_8, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_13381__0 ;
      GGS_string extractedValue_13381__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_reference (extractedValue_13381__0, extractedValue_13381__1) ;
      GGS_string var_assignmentFunctionLLVMName_13394 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 266)) ;
      GGS_string var_s_13489 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_13394.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)) ;
      {
      GGS_stringset temp_9 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)) ;
      temp_9.enterElement (var_assignmentFunctionLLVMName_13394, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_13489, temp_9, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_13852__0 ;
      GGS_bigint extractedValue_13852__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalInteger (extractedValue_13852__0, extractedValue_13852__1) ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (literalInteger)"), fixItArray10  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 272)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_13965__0 ;
      GGS_uint extractedValue_13965__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalString (extractedValue_13965__0, extractedValue_13965__1) ;
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (literalString)"), fixItArray11  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 274)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_14082__0 ;
      GGS_sortedOperandIRList extractedValue_14082__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmStructureValue (extractedValue_14082__0, extractedValue_14082__1) ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (llvmStructureValue)"), fixItArray12  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 276)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_14200__0 ;
      GGS_string extractedValue_14200__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmNamedValue (extractedValue_14200__0, extractedValue_14200__1) ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (llvmValue)"), fixItArray13  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 278)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_14298__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_null (extractedValue_14298__0) ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (null)"), fixItArray14  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 280)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (void)"), fixItArray15  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 282)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_14479__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_zero (extractedValue_14479__0) ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (zero)"), fixItArray16  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 284)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignRepeatedValueToFixedSizeArrayElementsFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                                            const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                                            GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_0 = this ;
  GGS_string var_arrayTypeName_15211 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mFixedSizeArrayType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 303)) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_1 = this ;
  GGS_string var_elementTypeName_15273 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 304)) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (").add_operation (var_arrayTypeName_15211, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)).add_operation (GGS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)).add_operation (var_elementTypeName_15273, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)).add_operation (GGS_string (" %inRepeatedValue) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %idx = alloca i32\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store i32 0, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 309)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %idxValue = load i32, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 311)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %ptr = getelementptr ").add_operation (var_arrayTypeName_15211, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (var_arrayTypeName_15211, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (GGS_string ("* %inTarget, i32 0, i32 %idxValue\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store ").add_operation (var_elementTypeName_15273, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (GGS_string (" %inRepeatedValue, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (var_elementTypeName_15273, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (GGS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %nextIdxValue = add i32 %idxValue, 1\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 314)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store i32 %nextIdxValue, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 315)) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %continue = icmp ult i32 %nextIdxValue, ").add_operation (temp_3.readProperty_mArraySize ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %continue, label %loop, label %exit\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 317)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("exit:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 318)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 320)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticArrayTypeAssignFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_staticArrayTypeAssignFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                      const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_staticArrayTypeAssignFunctionIR temp_0 = this ;
  GGS_string var_llvmTypeName_16832 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mFixedSizeArrayType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 336)) ;
  const GGS_staticArrayTypeAssignFunctionIR temp_1 = this ;
  GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 337)) ;
  GGS_arcAssignmentList var_arcAssignmentList_16893 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_1.readProperty_mFixedSizeArrayType ().ptr (), temp_2, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 337)) ;
  const GGS_staticArrayTypeAssignFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal void @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (").add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)).add_operation (GGS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)).add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)).add_operation (GGS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 340)) ;
  cEnumerator_arcAssignmentList enumerator_17235 (var_arcAssignmentList_16893, EnumerationOrder::up) ;
  while (enumerator_17235.hasCurrentObject ()) {
    GGS_string var_propertyTypeLLVMName_17278 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_17235.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 342)) ;
    GGS_string var_llvmVarName_17337 = GGS_string ("%arc.retain.").add_operation (enumerator_17235.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 343)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 343)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 344)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_llvmVarName_17337, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (GGS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)) ;
    cEnumerator_uintlist enumerator_17615 (enumerator_17235.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
    while (enumerator_17615.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", i32 ").add_operation (enumerator_17615.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 347)) ;
      enumerator_17615.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ; ").add_operation (enumerator_17235.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 349)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 349)) ;
    GGS_string var_llvmLoadedVarName_17733 = var_llvmVarName_17337.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_17733, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (var_propertyTypeLLVMName_17278, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (var_propertyTypeLLVMName_17278, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (var_llvmVarName_17337, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_17278, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (var_llvmLoadedVarName_17733, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)) ;
    enumerator_17235.gotoNextObject () ;
  }
  cEnumerator_arcAssignmentList enumerator_18058 (var_arcAssignmentList_16893, EnumerationOrder::up) ;
  while (enumerator_18058.hasCurrentObject ()) {
    GGS_string var_llvmVarName_18101 = GGS_string ("%arc.release.").add_operation (enumerator_18058.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 355)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 355)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 356)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_llvmVarName_18101, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (GGS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)) ;
    cEnumerator_uintlist enumerator_18380 (enumerator_18058.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
    while (enumerator_18380.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", i32 ").add_operation (enumerator_18380.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 359)) ;
      enumerator_18380.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ; ").add_operation (enumerator_18058.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 361)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 361)) ;
    GGS_string var_propertyTypeLLVMName_18498 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18058.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 362)) ;
    GGS_string var_llvmLoadedVarName_18557 = var_llvmVarName_18101.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_18557, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (var_propertyTypeLLVMName_18498, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (var_propertyTypeLLVMName_18498, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (var_llvmVarName_18101, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_18498, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (var_llvmLoadedVarName_18557, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)) ;
    enumerator_18058.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 367)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)).add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %byteCount = ptrtoint ").add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)).add_operation (GGS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %v = load ").add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (GGS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store ").add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (GGS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (GGS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 380)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 381)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)).add_operation (GGS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 383)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 385)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 386)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)).add_operation (GGS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 388)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 389)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %target32 = bitcast ").add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)).add_operation (GGS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %source32 = bitcast ").add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)).add_operation (GGS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %wordCount = udiv i32 %byteCount, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 397)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 399)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %target8 = bitcast ").add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)).add_operation (GGS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %source8 = bitcast ").add_operation (var_llvmTypeName_16832, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)).add_operation (GGS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 402)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 403)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 404)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 405)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 406)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeDynamicArrayDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_typeDynamicArrayDeclarationAST temp_0 = this ;
  const GGS_typeDynamicArrayDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mDynamicArrayTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 36)) ;
  }
  {
  const GGS_typeDynamicArrayDeclarationAST temp_2 = this ;
  const GGS_typeDynamicArrayDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mDynamicArrayTypeName (), temp_3.readProperty_mElementTypeName () COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 37)) ;
  }
  const GGS_typeDynamicArrayDeclarationAST temp_4 = this ;
  GGS_lstring var_rootNode_1983 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 38)), temp_4.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_typeDynamicArrayDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_5.readProperty_mDynamicArrayTypeName (), var_rootNode_1983 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 39)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeDynamicArrayDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_typeDynamicArrayDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_typeDynamicArrayDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("anonymous ").add_operation (temp_0.readProperty_mDynamicArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 45)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeDynamicArrayDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_typeDynamicArrayDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_typeDynamicArrayDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mDynamicArrayTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeDynamicArrayDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                 GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                 GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                 GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                                 GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                 GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioContext.readProperty_mTargetParameters ().readProperty_mHandleDynamicArray ().operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 68)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_typeDynamicArrayDeclarationAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("this target does not handle dynamic array"), fixItArray2  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 69)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_arrayTypeProxy_3860 ;
  {
  const GGS_typeDynamicArrayDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_3.readProperty_mDynamicArrayTypeName (), var_arrayTypeProxy_3860, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 71)) ;
  }
  GGS_omnibusType var_elementType_4010 ;
  const GGS_typeDynamicArrayDeclarationAST temp_4 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_4.readProperty_mElementTypeName (), var_elementType_4010, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 73)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4010.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 74)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 74)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GGS_typeDynamicArrayDeclarationAST temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be copyable"), fixItArray7  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 75)) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4010.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 77)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GGS_typeDynamicArrayDeclarationAST temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be instanciable"), fixItArray10  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 78)) ;
    }
  }
  const GGS_typeDynamicArrayDeclarationAST temp_11 = this ;
  GGS_lstring var_omnibusTypeDescriptionName_4332 = GGS_lstring::init_21__21_ (GGS_string ("[").add_operation (var_elementType_4010.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)), temp_11.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_typeDynamicArrayDeclarationAST temp_12 = this ;
  GGS_lstring var_llvmBaseTypeName_4463 = GGS_lstring::init_21__21_ (GGS_string ("dyn-").add_operation (var_elementType_4010.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 82)), temp_12.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = ioArgument_ioContext.readProperty_mTypeMap ().getter_hasKey (var_omnibusTypeDescriptionName_4332.readProperty_string () COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 84)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GGS_omnibusType var_type_4775 ;
      extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), var_omnibusTypeDescriptionName_4332, var_type_4775, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 85)) ;
      {
      const GGS_typeDynamicArrayDeclarationAST temp_14 = this ;
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_14.readProperty_mDynamicArrayTypeName (), var_type_4775, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 86)) ;
      }
    }
  }
  if (kBoolFalse == test_13) {
    GGS_unifiedTypeMapEntry var_uint_33__32_TypeProxy_4940 ;
    {
    extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, GGS_string ("u32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 91)), var_uint_33__32_TypeProxy_4940, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 91)) ;
    }
    GGS_unifiedTypeMapEntry var_elementTypeProxy_5021 ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_15 = this ;
    extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_15.readProperty_mElementTypeName (), var_elementTypeProxy_5021, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 92)) ;
    }
    GGS_lstring var_routineLLVMName_5436 ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_16 = this ;
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4332.readProperty_string (), var_llvmBaseTypeName_4463.readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("removeAll"), temp_16.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 99)), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas", 100)), var_routineLLVMName_5436, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 95)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GGS_dynArrayRemoveAllFunctionIR::init_21__21_isRequired_21_warnsIfUnused (var_routineLLVMName_5436, GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 103)) ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_17 = this ;
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4332.readProperty_string (), var_llvmBaseTypeName_4463.readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("length"), temp_17.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 113)), var_uint_33__32_TypeProxy_4940, var_routineLLVMName_5436, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 109)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GGS_dynArrayLengthFunctionIR::init_21__21_isRequired_21_warnsIfUnused (var_routineLLVMName_5436, GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 117)) ;
    GGS_lstring var_insertFunctionMangledName_6706 ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_18 = this ;
    extensionSetter_addFunctionWithTwoInputArguments (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4332.readProperty_string (), ioArgument_ioContext, var_llvmBaseTypeName_4463.readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("insert"), temp_18.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 128)), GGS_string::makeEmptyString (), var_elementTypeProxy_5021, GGS_string ("inValue"), GGS_string ("atIndex"), var_uint_33__32_TypeProxy_4940, GGS_string ("inIndex"), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas", 135)), var_insertFunctionMangledName_6706, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 123)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GGS_dynArrayInsertFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_insertFunctionMangledName_6706, GGS_bool (false), GGS_bool (false), var_elementTypeProxy_5021, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 138)) ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_19 = this ;
    extensionSetter_addFunctionWithInputArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4332.readProperty_string (), ioArgument_ioContext, var_llvmBaseTypeName_4463.readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("append"), temp_19.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 150)), GGS_string::makeEmptyString (), var_elementTypeProxy_5021, GGS_string ("inValue"), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas", 154)), var_routineLLVMName_5436, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 145)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GGS_dynArrayAppendFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (var_routineLLVMName_5436, GGS_bool (false), GGS_bool (false), var_arrayTypeProxy_3860, var_elementTypeProxy_5021, var_insertFunctionMangledName_6706.readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 157)) ;
    GGS_constructorMap temp_20 = GGS_constructorMap::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 166)) ;
    GGS_constructorMap var_constructorMap_7715 = temp_20 ;
    {
    GGS_constructorSignature temp_21 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 167)) ;
    var_constructorMap_7715.setter_insertKey (GGS_string ("()").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 167)), temp_21, GGS_constructorValue::class_func_null (SOURCE_FILE ("type-dynamic-array.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 167)) ;
    }
    {
    ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_omnibusTypeDescriptionName_4332, var_constructorMap_7715, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 168)) ;
    }
    GGS_omnibusTypeAttributes var_typeAttributes_7984 = GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-dynamic-array.galgas", 170)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-dynamic-array.galgas", 170)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 170)) ;
    GGS_omnibusType var_dynamicArrayType_8101 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-dynamic-array.galgas", 173)), var_typeAttributes_7984, var_omnibusTypeDescriptionName_4332.readProperty_string (), GGS_typeKind::class_func_dynamicArrayType (var_elementType_4010  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 176)), var_llvmBaseTypeName_4463.readProperty_string (), inCompiler COMMA_HERE) ;
    {
    const GGS_typeDynamicArrayDeclarationAST temp_22 = this ;
    extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_22.readProperty_mDynamicArrayTypeName (), var_dynamicArrayType_8101, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 179)) ;
    }
    GGS_string var_assignmentFunctionName_8522 = function_assignmentOperatorFuncName (var_dynamicArrayType_8101, var_dynamicArrayType_8101, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 181)) ;
    const GGS_typeDynamicArrayDeclarationAST temp_23 = this ;
    GGS_dynamicArrayTypeAssignGenericFunctionIR var_routine_8619 = GGS_dynamicArrayTypeAssignGenericFunctionIR::init_21__21_isRequired_21_warnsIfUnused (GGS_lstring::init_21__21_ (var_assignmentFunctionName_8522, temp_23.readProperty_mDynamicArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE) ;
    ioArgument_ioRoutineListIR.addAssign_operation (var_routine_8619  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 187)) ;
    GGS_dynamicArrayTypeAssignUsage var_operatorUsage_8853 = GGS_dynamicArrayTypeAssignUsage::init_21__21_ (var_dynamicArrayType_8101, var_assignmentFunctionName_8522, inCompiler COMMA_HERE) ;
    const GGS_typeDynamicArrayDeclarationAST temp_24 = this ;
    GGS_lstring var_key_8972 = function_assignmentOperatorKey (var_dynamicArrayType_8101, temp_24.readProperty_mDynamicArrayTypeName ().readProperty_location (), var_dynamicArrayType_8101, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 192)) ;
    {
    ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8972, var_operatorUsage_8853, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 193)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayRemoveAllFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayRemoveAllFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                  const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynArrayRemoveAllFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 292)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 293)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @arc.release (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 294)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store %ptrtype null, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 297)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayLengthFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayLengthFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynArrayLengthFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal i32 @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 317)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %length = call i32 @arc.length (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 318)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret i32 %length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 320)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayAppendFunctionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                    GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dynArrayAppendFunctionIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (temp_0.readProperty_mInsertFunctionMangledName ()  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 339)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayAppendFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynArrayAppendFunctionIR temp_0 = this ;
  GGS_omnibusType var_elementType_16064 = extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 350)) ;
  GGS_routineFormalArgumentListAST temp_1 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 363)) ;
  temp_1.enterElement (GGS_routineFormalArgumentListAST_2E_element::init_21__21__21__21_ (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("type-dynamic-array.galgas", 353)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 354)), var_elementType_16064.readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 355)), GGS_string ("inValue").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 356)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 357)) ;
  temp_1.enterElement (GGS_routineFormalArgumentListAST_2E_element::init_21__21__21__21_ (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("type-dynamic-array.galgas", 359)), GGS_string ("atIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 360)), GGS_string ("u32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 361)), GGS_string ("inIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 362)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 363)) ;
  GGS_routineFormalArgumentListAST var_argumentList_16144 = temp_1 ;
  const GGS_dynArrayAppendFunctionIR temp_2 = this ;
  GGS_lstring var_insertRoutineMangledName_16405 = function_routineMangledNameFromAST (extensionGetter_type (temp_2.readProperty_mArrayTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 366)).readProperty_llvmBaseTypeName (), GGS_string ("insert").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 367)), var_argumentList_16144, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 365)) ;
  GGS_string var_insertRoutineLLVMName_16562 = function_llvmNameForFunction (var_insertRoutineMangledName_16405.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 370)) ;
  const GGS_dynArrayAppendFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal void @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 371)).add_operation (GGS_string (" (%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 371)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16064.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)).add_operation (GGS_string (" %inValue)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Get buffer length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %current.buffer.length = call i32 @arc.length (%ptrtype %current.buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Insert\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @").add_operation (var_insertRoutineLLVMName_16562, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)).add_operation (GGS_string ("(%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16064.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)).add_operation (GGS_string (" %inValue, i32 %current.buffer.length)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 380)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 381)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayInsertFunctionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                    GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dynArrayInsertFunctionIR temp_0 = this ;
  const GGS_dynArrayInsertFunctionIR temp_1 = this ;
  GGS_string var_assignRoutineLLVMName_17991 = function_assignmentOperatorFuncName (extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 398)), extensionGetter_type (temp_1.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 398)) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (var_assignRoutineLLVMName_17991  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 399)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayInsertFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynArrayInsertFunctionIR temp_0 = this ;
  GGS_string var_elementLLVMTypeName_18518 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_0.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 410)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 410)) ;
  const GGS_dynArrayInsertFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal void @").add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 411)).add_operation (GGS_string (" (%ptrtype* %ioArray"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 411)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", ").add_operation (var_elementLLVMTypeName_18518, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)).add_operation (GGS_string (" %inValue, i32 %inIndex)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 413)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %insert.address = alloca %ptrtype\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 414)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- value pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 415)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %value.pointer = alloca ").add_operation (var_elementLLVMTypeName_18518, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store ").add_operation (var_elementLLVMTypeName_18518, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)).add_operation (GGS_string (" %inValue, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)).add_operation (var_elementLLVMTypeName_18518, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)).add_operation (GGS_string ("* %value.pointer\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Size of element\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 418)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_elementLLVMTypeName_18518, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)).add_operation (var_elementLLVMTypeName_18518, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %element.byte.size = ptrtoint ").add_operation (var_elementLLVMTypeName_18518, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)).add_operation (GGS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Get inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 422)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %new.buffer.pointer = call %ptrtype @arc.insert.at.index "), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("(%ptrtype %current.buffer.pointer, i32 %inIndex, i32 %element.byte.size, %ptrtype* %insert.address)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 424)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Perform copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 425)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %typed.insert.address = bitcast %ptrtype* %insert.address to ").add_operation (var_elementLLVMTypeName_18518, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)) ;
  const GGS_dynArrayInsertFunctionIR temp_2 = this ;
  const GGS_dynArrayInsertFunctionIR temp_3 = this ;
  GGS_string var_assignRoutineLLVMName_19898 = function_assignmentOperatorFuncName (extensionGetter_type (temp_2.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)), extensionGetter_type (temp_3.readProperty_mElementTypeProxy (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @").add_operation (var_assignRoutineLLVMName_19898.getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (").add_operation (var_elementLLVMTypeName_18518, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)).add_operation (GGS_string ("* %typed.insert.address, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)).add_operation (var_elementLLVMTypeName_18518, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)).add_operation (GGS_string ("* %value.pointer)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Store new buffer pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store %ptrtype %new.buffer.pointer, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 431)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 432)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 433)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 434)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynamicArrayTypeAssignUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                            GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                            const GGS_omnibusType constinArgument_inTargetType,
                                                            const GGS_string constinArgument_inTargetLLVMName,
                                                            const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                            const GGS_location /* constinArgument_inErrorLocation */,
                                                            const GGS_bool constinArgument_inTargetIsInitialized,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_targetTypeName_21365 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 458)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inTargetIsInitialized.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_dynamicArrayTypeAssignUsage temp_1 = this ;
      GGS_string var_s_21450 = GGS_string (" call void  @").add_operation (temp_1.readProperty_mAssignFunctionName ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 460)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 460)).add_operation (var_targetTypeName_21365, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (var_targetTypeName_21365, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)) ;
      {
      GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)) ;
      const GGS_dynamicArrayTypeAssignUsage temp_3 = this ;
      temp_2.enterElement (temp_3.readProperty_mAssignFunctionName (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_21450, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GGS_objectIR var_sourceValue_21821 = constinArgument_inSourcePossibleReference ;
    {
    extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_21821, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 466)) ;
    }
    GGS_string var_s_21951 = GGS_string ("store ").add_operation (var_targetTypeName_21365, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (extensionGetter_llvmName (var_sourceValue_21821, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (var_targetTypeName_21365, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)) ;
    {
    GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)) ;
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_21951, temp_4, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynamicArrayTypeAssignGenericFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignGenericFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                              const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                              GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GGS_bool (true) ;
  const GGS_dynamicArrayTypeAssignGenericFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 486)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (%ptrtype * %inTargetPtr, %ptrtype* %inSourcePtr) nounwind optsize {\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 487)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %source = load %ptrtype, %ptrtype* %inSourcePtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 488)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @arc.retain (%ptrtype %source)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 489)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %target = load %ptrtype, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 490)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @arc.release (%ptrtype %target)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 491)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store %ptrtype %source, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 492)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 493)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 494)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_enumerationDeclarationAST temp_0 = this ;
  const GGS_enumerationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mEnumerationName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 53)) ;
  }
  GGS_bigint var_maxValue_2269 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 55)) ;
  const GGS_enumerationDeclarationAST temp_2 = this ;
  cEnumerator_enumerationConstantList enumerator_2291 (temp_2.readProperty_mCaseNameList (), EnumerationOrder::up) ;
  while (enumerator_2291.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::lowerThan, var_maxValue_2269.objectCompare (enumerator_2291.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_maxValue_2269 = enumerator_2291.current_mConstantValue (HERE) ;
      }
    }
    enumerator_2291.gotoNextObject () ;
  }
  GGS_uint var_representationBitCount_2401 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).isValid ()) {
    uint32_t variant_2430 = GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).uintValue () ;
    bool loop_2430 = true ;
    while (loop_2430) {
      loop_2430 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_2269.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).isValid () ;
      if (loop_2430) {
        loop_2430 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_2269.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).boolValue () ;
      }
      if (loop_2430 && (0 == variant_2430)) {
        loop_2430 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)) ;
      }
      if (loop_2430) {
        variant_2430 -- ;
        var_representationBitCount_2401.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 63)) ;
        var_maxValue_2269 = var_maxValue_2269.divide_operation (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)) ;
      }
    }
  }
  {
  const GGS_enumerationDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mEnumerationName (), GGS_string ("u").add_operation (var_representationBitCount_2401.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_enumerationDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_enumerationDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mEnumerationName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_enumerationDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_enumerationDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("enum ").add_operation (temp_0.readProperty_mEnumerationName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumerationDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                            GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                            GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                            GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                            GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                            GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                            GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                            GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantMap temp_0 = GGS_constantMap::init (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 96)) ;
  GGS_constantMap var_enumConstantMap_4145 = temp_0 ;
  GGS_bigint var_maxValue_4181 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 97)) ;
  const GGS_enumerationDeclarationAST temp_1 = this ;
  cEnumerator_enumerationConstantList enumerator_4206 (temp_1.readProperty_mCaseNameList (), EnumerationOrder::up) ;
  while (enumerator_4206.hasCurrentObject ()) {
    {
    const GGS_enumerationDeclarationAST temp_2 = this ;
    var_enumConstantMap_4145.setter_insertKey (enumerator_4206.current_mConstantName (HERE), enumerator_4206.current_mConstantValue (HERE), temp_2.readProperty_mEnumerationName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 99)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::lowerThan, var_maxValue_4181.objectCompare (enumerator_4206.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_maxValue_4181 = enumerator_4206.current_mConstantValue (HERE) ;
      }
    }
    enumerator_4206.gotoNextObject () ;
  }
  {
  const GGS_enumerationDeclarationAST temp_4 = this ;
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (temp_4.readProperty_mEnumerationName (), var_enumConstantMap_4145, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 104)) ;
  }
  GGS_uint var_representationBitCount_4531 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)).isValid ()) {
    uint32_t variant_4560 = GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)).uintValue () ;
    bool loop_4560 = true ;
    while (loop_4560) {
      loop_4560 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_4181.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)))).isValid () ;
      if (loop_4560) {
        loop_4560 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_4181.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)))).boolValue () ;
      }
      if (loop_4560 && (0 == variant_4560)) {
        loop_4560 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)) ;
      }
      if (loop_4560) {
        variant_4560 -- ;
        var_representationBitCount_4531.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 111)) ;
        var_maxValue_4181 = var_maxValue_4181.divide_operation (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)) ;
      }
    }
  }
  const GGS_enumerationDeclarationAST temp_5 = this ;
  GGS_unifiedTypeMapEntry var_integerTypeProxy_4726 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_representationBitCount_4531.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 116)), temp_5.readProperty_mEnumerationName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 115)) ;
  GGS_lstring var_conversionToUIntN_5168 ;
  {
  const GGS_enumerationDeclarationAST temp_6 = this ;
  const GGS_enumerationDeclarationAST temp_7 = this ;
  const GGS_enumerationDeclarationAST temp_8 = this ;
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, temp_6.readProperty_mEnumerationName (), temp_7.readProperty_mEnumerationName ().readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_representationBitCount_4531.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 121)), temp_8.readProperty_mEnumerationName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-enumeration-declaration.galgas", 122)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-enumeration-declaration.galgas", 123)), var_integerTypeProxy_4726, var_conversionToUIntN_5168, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 118)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GGS_enumToUintRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_conversionToUIntN_5168, GGS_bool (false), GGS_bool (false), GGS_string ("i").add_operation (var_representationBitCount_4531.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 131)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 127)) ;
  const GGS_enumerationDeclarationAST temp_9 = this ;
  const GGS_enumerationDeclarationAST temp_10 = this ;
  GGS_omnibusType var_enumerationType_5435 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-enumeration-declaration.galgas", 135)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-enumeration-declaration.galgas", 136)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-enumeration-declaration.galgas", 136)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)), temp_9.readProperty_mEnumerationName ().readProperty_string (), GGS_typeKind::class_func_enumeration (var_representationBitCount_4531  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 138)), temp_10.readProperty_mEnumerationName ().readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GGS_enumerationDeclarationAST temp_11 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_11.readProperty_mEnumerationName (), var_enumerationType_5435, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 141)) ;
  }
  const GGS_enumerationDeclarationAST temp_12 = this ;
  GGS_lstring var_key_5823 = function_assignmentOperatorKey (var_enumerationType_5435, temp_12.readProperty_mEnumerationName ().readProperty_location (), var_enumerationType_5435, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 143)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_5823, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 144)) ;
  }
  GGS_omnibusType var_boolType_6142 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 147)) ;
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-enumeration-declaration.galgas", 149)), var_enumerationType_5435, GGS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6142, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 149)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("type-enumeration-declaration.galgas", 152)), var_enumerationType_5435, GGS_string ("icmp ule"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6142, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 151)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("type-enumeration-declaration.galgas", 160)), var_enumerationType_5435, GGS_string ("icmp ult"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6142, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 159)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumToUintRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumToUintRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                          GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumToUintRoutineIR temp_0 = this ;
  GGS_string var_routineLLVMName_8151 = function_llvmNameForFunction (temp_0.readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 208)) ;
  const GGS_enumToUintRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal ").add_operation (temp_1.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)).add_operation (var_routineLLVMName_8151, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)) ;
  const GGS_enumToUintRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (").add_operation (temp_2.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)).add_operation (GGS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)) ;
  const GGS_enumToUintRoutineIR temp_3 = this ;
  const GGS_enumToUintRoutineIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %r = load ").add_operation (temp_3.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (temp_4.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (GGS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)) ;
  const GGS_enumToUintRoutineIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret ").add_operation (temp_5.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)).add_operation (GGS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 213)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structureDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_structureDeclarationAST temp_0 = this ;
  const GGS_structureDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mReceiverTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 273)) ;
  }
  const GGS_structureDeclarationAST temp_2 = this ;
  cEnumerator_structurePropertyListAST enumerator_9373 (temp_2.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_9373.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_9373.current_mPropertyTypeName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        const GGS_structureDeclarationAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mReceiverTypeName (), enumerator_9373.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 277)) ;
        }
      }
    }
    switch (enumerator_9373.current_mPropertyKind (HERE).enumValue ()) {
    case GGS_propertyKindAST::Enumeration::invalid:
      break ;
    case GGS_propertyKindAST::Enumeration::enum_uninitializedStoredProperty:
    case GGS_propertyKindAST::Enumeration::enum_uninitializedConstantProperty:
      break ;
    case GGS_propertyKindAST::Enumeration::enum_initializedStoredProperty:
      {
        GGS_expressionAST extractedValue_9666_initExpression_0 ;
        enumerator_9373.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedStoredProperty (extractedValue_9666_initExpression_0) ;
        const GGS_structureDeclarationAST temp_5 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_9666_initExpression_0.ptr (), temp_5.readProperty_mReceiverTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_initializedConstantProperty:
      {
        GGS_expressionAST extractedValue_9816_initExpression_0 ;
        enumerator_9373.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedConstantProperty (extractedValue_9816_initExpression_0) ;
        const GGS_structureDeclarationAST temp_6 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_9816_initExpression_0.ptr (), temp_6.readProperty_mReceiverTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_readOnlyComputedProperty:
      {
        GGS_instructionListAST extractedValue_9963_instructionList_0 ;
        GGS_location extractedValue_9979__1 ;
        enumerator_9373.current_mPropertyKind (HERE).getAssociatedValuesFor_readOnlyComputedProperty (extractedValue_9963_instructionList_0, extractedValue_9979__1) ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_9963_instructionList_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 286)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_writeComputedProperty:
      {
        GGS_instructionListAST extractedValue_10092_writeInstructionList_0 ;
        GGS_location extractedValue_10113__1 ;
        enumerator_9373.current_mPropertyKind (HERE).getAssociatedValuesFor_writeComputedProperty (extractedValue_10092_writeInstructionList_0, extractedValue_10113__1) ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_10092_writeInstructionList_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 288)) ;
      }
      break ;
    }
    enumerator_9373.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_structureDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_structureDeclarationAST temp_0 = this ;
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string () ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structureDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_structureDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_structureDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mReceiverTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structureDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                          GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                          GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                          GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                          GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GGS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyList temp_0 = GGS_propertyList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 558)) ;
  GGS_propertyList var_propertyList_21105 = temp_0 ;
  GGS_sortedOperandIRList temp_1 = GGS_sortedOperandIRList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 560)) ;
  GGS_sortedOperandIRList var_sortedOperandIRList_21197 = temp_1 ;
  GGS_constructorSignature temp_2 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 561)) ;
  GGS_constructorSignature var_constructorSignature_21251 = temp_2 ;
  GGS_string var_constructorKey_21292 = GGS_string ("(") ;
  GGS_bool var_canBeCopied_21319 = GGS_bool (true) ;
  const GGS_structureDeclarationAST temp_3 = this ;
  cEnumerator_structurePropertyListAST enumerator_21361 (temp_3.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_21361.hasCurrentObject ()) {
    const GGS_structureDeclarationAST temp_4 = this ;
    const GGS_structureDeclarationAST temp_5 = this ;
    const GGS_structureDeclarationAST temp_6 = this ;
    extensionMethod_enterPropertyInContext (enumerator_21361.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_4.readProperty_mReceiverTypeName (), temp_5.readProperty_mOmnibusTypeSpecificName (), temp_6.readProperty_mLLVMBaseTypeName ().readProperty_string (), ioArgument_ioDecoratedRoutineList, var_propertyList_21105, var_sortedOperandIRList_21197, var_constructorSignature_21251, var_constructorKey_21292, var_canBeCopied_21319, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 565)) ;
    enumerator_21361.gotoNextObject () ;
  }
  var_constructorKey_21292.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 580)) ;
  GGS_constructorMap temp_7 = GGS_constructorMap::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 582)) ;
  GGS_constructorMap var_constructorMap_21947 = temp_7 ;
  {
  const GGS_structureDeclarationAST temp_8 = this ;
  var_constructorMap_21947.setter_insertKey (GGS_lstring::init_21__21_ (var_constructorKey_21292, temp_8.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorSignature_21251, GGS_constructorValue::class_func_structure (var_sortedOperandIRList_21197  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 583)) ;
  }
  {
  const GGS_structureDeclarationAST temp_9 = this ;
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_9.readProperty_mOmnibusTypeSpecificName (), var_constructorMap_21947, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 588)) ;
  }
  GGS_omnibusTypeAttributes var_typeAttributes_22321 = GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 590)) ;
  const GGS_structureDeclarationAST temp_10 = this ;
  cEnumerator_lstringlist enumerator_22451 (temp_10.readProperty_mAttributeListAST (), EnumerationOrder::up) ;
  while (enumerator_22451.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = GGS_bool (ComparisonKind::equal, enumerator_22451.current_mValue (HERE).readProperty_string ().objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 593)))).boolEnum () ;
      if (kBoolTrue == test_11) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = var_typeAttributes_22321.getter_contains (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 594)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 594)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_22451.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 595)) ;
          }
        }
        if (kBoolFalse == test_12) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_canBeCopied_21319.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 596)).boolEnum () ;
            if (kBoolTrue == test_14) {
              const GGS_structureDeclarationAST temp_15 = this ;
              TC_Array <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (temp_15.readProperty_mReceiverTypeName ().readProperty_location (), GGS_string ("this structure cannot be copied, one field is not copyable"), fixItArray16  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 597)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_11) {
      TC_Array <FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (enumerator_22451.current_mValue (HERE).readProperty_location (), GGS_string ("only @copyable attribute is allowed here"), fixItArray17  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 600)) ;
    }
    enumerator_22451.gotoNextObject () ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GGS_structureDeclarationAST temp_19 = this ;
    test_18 = temp_19.readProperty_mGenerateAssignmentRoutine ().operator_and (var_canBeCopied_21319 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 603)).boolEnum () ;
    if (kBoolTrue == test_18) {
      var_typeAttributes_22321 = var_typeAttributes_22321.operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 604)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 604)) ;
    }
  }
  const GGS_structureDeclarationAST temp_20 = this ;
  const GGS_structureDeclarationAST temp_21 = this ;
  GGS_omnibusType var_structureType_23021 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-structure-declaration.galgas", 608)), var_typeAttributes_22321, temp_20.readProperty_mOmnibusTypeSpecificName ().readProperty_string (), GGS_typeKind::class_func_structure (var_propertyList_21105  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 611)), temp_21.readProperty_mLLVMBaseTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GGS_structureDeclarationAST temp_22 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_22.readProperty_mReceiverTypeName (), var_structureType_23021, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 614)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GGS_userLLVMSructureTypeDefinitionIR::init_21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_23021.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 620)), var_propertyList_21105, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 619)) ;
  GGS_string var_assignmentFunctionLLVMName_23660 = function_assignmentOperatorFuncName (var_structureType_23021, var_structureType_23021, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 625)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GGS_structureTypeAssignFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_assignmentFunctionLLVMName_23660.getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 627)), GGS_bool (false), GGS_bool (false), var_structureType_23021, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 626)) ;
  GGS_lstring var_key_23959 = function_assignmentOperatorKey (var_structureType_23021, GGS_location::class_func_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 633)), var_structureType_23021, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 633)) ;
  GGS_structureAssignmentOperatorUsage var_operatorUsage_24035 = GGS_structureAssignmentOperatorUsage::init_21_ (var_structureType_23021, inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_23959, var_operatorUsage_24035, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 635)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@userLLVMSructureTypeDefinitionIR generateLLVMType'
//
//--------------------------------------------------------------------------------------------------

void cPtr_userLLVMSructureTypeDefinitionIR::method_generateLLVMType (GGS_string & ioArgument_ioLLVMcode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_userLLVMSructureTypeDefinitionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0.readProperty_mLLVMDefinedTypeName ().add_operation (GGS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 649)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 649)) ;
  const GGS_userLLVMSructureTypeDefinitionIR temp_1 = this ;
  cEnumerator_propertyList enumerator_24798 (temp_1.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_24798.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24798.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 651)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 651)) ;
    if (enumerator_24798.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 652)) ;
    }
    enumerator_24798.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 654)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureAssignmentOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structureAssignmentOperatorUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 const GGS_omnibusType constinArgument_inTargetType,
                                                                 const GGS_string constinArgument_inTargetLLVMName,
                                                                 const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                                 const GGS_location constinArgument_inErrorLocation,
                                                                 const GGS_bool constinArgument_inTargetIsInitialized,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_structTypeName_25711 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 676)) ;
  GGS_uintlist temp_0 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 677)) ;
  GGS_arcAssignmentList var_arcAssignmentList_25762 = callExtensionGetter_arcList ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 677)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inTargetIsInitialized.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 678)).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_arcAssignmentList enumerator_25880 (var_arcAssignmentList_25762, EnumerationOrder::up) ;
      while (enumerator_25880.hasCurrentObject ()) {
        GGS_string var_llvmPropertyPtrName_25926 = GGS_string ("%arc.init.").add_operation (constinArgument_inErrorLocation.getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)) ;
        GGS_string var_s_26008 = GGS_string ("  ").add_operation (var_llvmPropertyPtrName_25926, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (var_structTypeName_25711, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (var_structTypeName_25711, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GGS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)) ;
        cEnumerator_uintlist enumerator_26160 (enumerator_25880.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
        while (enumerator_26160.hasCurrentObject ()) {
          var_s_26008.plusAssign_operation(GGS_string (", i32 ").add_operation (enumerator_26160.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)) ;
          enumerator_26160.gotoNextObject () ;
        }
        var_s_26008.plusAssign_operation(GGS_string (" ; ").add_operation (enumerator_25880.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)) ;
        {
        GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_26008, temp_2, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)) ;
        }
        GGS_string var_propertyTypeLLVMName_26336 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25880.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 687)) ;
        var_s_26008 = GGS_string ("store ").add_operation (var_propertyTypeLLVMName_26336, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (GGS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (var_propertyTypeLLVMName_26336, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (var_llvmPropertyPtrName_25926, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)) ;
        {
        GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 689)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_26008, temp_3, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 689)) ;
        }
        enumerator_25880.gotoNextObject () ;
      }
    }
  }
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_26650__0 ;
      GGS_uint extractedValue_26650__1 ;
      GGS_objectIR extractedValue_26650__2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_26650__0, extractedValue_26650__1, extractedValue_26650__2) ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmArrayRepeatedDynamicValue»"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 694)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_26778__0 ;
      GGS_operandIRList extractedValue_26778__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_26778__0, extractedValue_26778__1) ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmArrayDynamicValues»"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 696)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_26898__0 ;
      GGS_operandIRList extractedValue_26898__1 ;
      GGS_uint extractedValue_26898__2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_26898__0, extractedValue_26898__1, extractedValue_26898__2) ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmArrayStaticValues»"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 698)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_27024__0 ;
      GGS_uint extractedValue_27024__1 ;
      GGS_objectIR extractedValue_27024__2 ;
      GGS_uint extractedValue_27032_idx_3 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_27024__0, extractedValue_27024__1, extractedValue_27024__2, extractedValue_27032_idx_3) ;
      GGS_string var_assignmentFunctionLLVMName_27047 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 700)) ;
      GGS_string var_s_27142 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_27047.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (GGS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (extractedValue_27032_idx_3.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)) ;
      {
      GGS_stringset temp_7 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      temp_7.enterElement (var_assignmentFunctionLLVMName_27047, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27142, temp_7, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_27475__0 ;
      GGS_string extractedValue_27475__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_reference (extractedValue_27475__0, extractedValue_27475__1) ;
      GGS_string var_assignmentFunctionLLVMName_27488 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 706)) ;
      GGS_string var_s_27582 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_27488.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)) ;
      {
      GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
      temp_8.enterElement (var_assignmentFunctionLLVMName_27488, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27582, temp_8, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_27948__0 ;
      GGS_sortedOperandIRList extractedValue_27950_sortedOperandValues_1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmStructureValue (extractedValue_27948__0, extractedValue_27950_sortedOperandValues_1) ;
      GGS_uint var_uniqueValue_27981 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)) ;
      cEnumerator_sortedOperandIRList enumerator_28081 (extractedValue_27950_sortedOperandValues_1, EnumerationOrder::up) ;
      while (enumerator_28081.hasCurrentObject ()) {
        GGS_string var_ptr_28122 = GGS_string ("%ptr.").add_operation (var_uniqueValue_27981.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (enumerator_28081.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)) ;
        GGS_string var_s_28172 = var_ptr_28122.add_operation (GGS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (var_structTypeName_25711, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (var_structTypeName_25711, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (enumerator_28081.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)) ;
        {
        GGS_stringset temp_9 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_28172, temp_9, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)) ;
        }
        var_s_28172 = GGS_string ("store ").add_operation (extensionGetter_llvmTypeName (enumerator_28081.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (extensionGetter_llvmName (enumerator_28081.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (extensionGetter_llvmTypeName (enumerator_28081.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (var_ptr_28122, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)) ;
        {
        GGS_stringset temp_10 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 719)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_28172, temp_10, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 719)) ;
        }
        enumerator_28081.gotoNextObject () ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_28581__0 ;
      GGS_bigint extractedValue_28581__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalInteger (extractedValue_28581__0, extractedValue_28581__1) ;
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «literalInteger»"), fixItArray11  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 722)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_28685__0 ;
      GGS_uint extractedValue_28685__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalString (extractedValue_28685__0, extractedValue_28685__1) ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «literalString»"), fixItArray12  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 724)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_28789__0 ;
      GGS_string extractedValue_28789__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmNamedValue (extractedValue_28789__0, extractedValue_28789__1) ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmArrayStaticValues»"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 726)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_28890__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_null (extractedValue_28890__0) ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmValue»"), fixItArray14  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 728)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «void»"), fixItArray15  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 730)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_29058__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_zero (extractedValue_29058__0) ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «zero»"), fixItArray16  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureTypeAssignFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structureTypeAssignFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                    const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structureTypeAssignFunctionIR temp_0 = this ;
  GGS_uintlist temp_1 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 749)) ;
  GGS_arcAssignmentList var_arcAssignmentList_29652 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_0.readProperty_mStructureType ().ptr (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 749)) ;
  const GGS_structureTypeAssignFunctionIR temp_2 = this ;
  GGS_string var_structureTypeLLVMTypeName_29713 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mStructureType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)) ;
  const GGS_structureTypeAssignFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal void @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (").add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)).add_operation (GGS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_structureTypeLLVMTypeName_29713.add_operation (GGS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 754)) ;
  cEnumerator_arcAssignmentList enumerator_30098 (var_arcAssignmentList_29652, EnumerationOrder::up) ;
  while (enumerator_30098.hasCurrentObject ()) {
    GGS_string var_propertyTypeLLVMName_30141 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_30098.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)) ;
    GGS_string var_llvmVarName_30200 = GGS_string ("%arc.retain.").add_operation (enumerator_30098.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_llvmVarName_30200, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (GGS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)) ;
    cEnumerator_uintlist enumerator_30504 (enumerator_30098.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
    while (enumerator_30504.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", i32 ").add_operation (enumerator_30504.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)) ;
      enumerator_30504.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ; ").add_operation (enumerator_30098.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)) ;
    GGS_string var_llvmLoadedVarName_30622 = var_llvmVarName_30200.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_30622, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (var_propertyTypeLLVMName_30141, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (var_propertyTypeLLVMName_30141, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (var_llvmVarName_30200, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_30141, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (var_llvmLoadedVarName_30622, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)) ;
    enumerator_30098.gotoNextObject () ;
  }
  cEnumerator_arcAssignmentList enumerator_30947 (var_arcAssignmentList_29652, EnumerationOrder::up) ;
  while (enumerator_30947.hasCurrentObject ()) {
    GGS_string var_llvmVarName_30990 = GGS_string ("%arc.release.").add_operation (enumerator_30947.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_llvmVarName_30990, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (GGS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)) ;
    cEnumerator_uintlist enumerator_31295 (enumerator_30947.current_mPropertyIndexPath (HERE), EnumerationOrder::up) ;
    while (enumerator_31295.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", i32 ").add_operation (enumerator_31295.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 773)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 773)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 773)) ;
      enumerator_31295.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ; ").add_operation (enumerator_30947.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)) ;
    GGS_string var_propertyTypeLLVMName_31413 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_30947.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)) ;
    GGS_string var_llvmLoadedVarName_31472 = var_llvmVarName_30990.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_31472, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (var_propertyTypeLLVMName_31413, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (var_propertyTypeLLVMName_31413, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (var_llvmVarName_30990, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_31413, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (var_llvmLoadedVarName_31472, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)) ;
    enumerator_30947.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)).add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %byteCount = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)).add_operation (GGS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 785)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %v = load ").add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (GGS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store ").add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (GGS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (GGS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 791)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 792)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 793)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 794)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 795)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)).add_operation (GGS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 797)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 798)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 799)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 800)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)).add_operation (GGS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 802)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 803)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 804)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 805)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %target32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)).add_operation (GGS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %source32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)).add_operation (GGS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %temp = add i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 808)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 809)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 810)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 811)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 812)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 813)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 814)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %target8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)).add_operation (GGS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %source8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29713, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)).add_operation (GGS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 817)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 818)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 819)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 820)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 821)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_syncDeclarationAST temp_0 = this ;
  const GGS_syncDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mSyncToolName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 50)) ;
  }
  const GGS_syncDeclarationAST temp_2 = this ;
  cEnumerator_structurePropertyListAST enumerator_2296 (temp_2.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_2296.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_2296.current_mPropertyTypeName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        const GGS_syncDeclarationAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mSyncToolName (), enumerator_2296.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 54)) ;
        }
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, enumerator_2296.current_mVisibility (HERE).objectCompare (GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("type-sync-declaration.galgas", 56)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_2296.current_mPropertyName (HERE).readProperty_location (), GGS_string ("a sync tool property should be private"), fixItArray6  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 57)) ;
      }
    }
    switch (enumerator_2296.current_mPropertyKind (HERE).enumValue ()) {
    case GGS_propertyKindAST::Enumeration::invalid:
      break ;
    case GGS_propertyKindAST::Enumeration::enum_uninitializedStoredProperty:
    case GGS_propertyKindAST::Enumeration::enum_uninitializedConstantProperty:
      break ;
    case GGS_propertyKindAST::Enumeration::enum_initializedStoredProperty:
      {
        GGS_expressionAST extractedValue_2698_initExpression_0 ;
        enumerator_2296.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedStoredProperty (extractedValue_2698_initExpression_0) ;
        const GGS_syncDeclarationAST temp_7 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2698_initExpression_0.ptr (), temp_7.readProperty_mSyncToolName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 62)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_initializedConstantProperty:
      {
        GGS_expressionAST extractedValue_2844_initExpression_0 ;
        enumerator_2296.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedConstantProperty (extractedValue_2844_initExpression_0) ;
        const GGS_syncDeclarationAST temp_8 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2844_initExpression_0.ptr (), temp_8.readProperty_mSyncToolName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 64)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_readOnlyComputedProperty:
      {
        GGS_instructionListAST extractedValue_2987_instructionList_0 ;
        GGS_location extractedValue_3003__1 ;
        enumerator_2296.current_mPropertyKind (HERE).getAssociatedValuesFor_readOnlyComputedProperty (extractedValue_2987_instructionList_0, extractedValue_3003__1) ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_2987_instructionList_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 66)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_writeComputedProperty:
      {
        GGS_instructionListAST extractedValue_3116_writeInstructionList_0 ;
        GGS_location extractedValue_3137__1 ;
        enumerator_2296.current_mPropertyKind (HERE).getAssociatedValuesFor_writeComputedProperty (extractedValue_3116_writeInstructionList_0, extractedValue_3137__1) ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_3116_writeInstructionList_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 68)) ;
      }
      break ;
    }
    enumerator_2296.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_syncDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_syncDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("sync ").add_operation (temp_0.readProperty_mSyncToolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 76)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_syncDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_syncDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mSyncToolName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                     GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                     GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                     GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                     GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                     GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                     GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                     GGS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyList temp_0 = GGS_propertyList::init (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 100)) ;
  GGS_propertyList var_propertyList_4736 = temp_0 ;
  GGS_sortedOperandIRList temp_1 = GGS_sortedOperandIRList::init (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 101)) ;
  GGS_sortedOperandIRList var_sortedOperandIRList_4782 = temp_1 ;
  GGS_constructorSignature temp_2 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 102)) ;
  GGS_constructorSignature var_constructorSignature_4836 = temp_2 ;
  GGS_string var_constructorKey_4877 = GGS_string ("(") ;
  const GGS_syncDeclarationAST temp_3 = this ;
  cEnumerator_structurePropertyListAST enumerator_4921 (temp_3.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_4921.hasCurrentObject ()) {
    GGS_bool joker_5332 = GGS_bool (true) ;
    const GGS_syncDeclarationAST temp_4 = this ;
    const GGS_syncDeclarationAST temp_5 = this ;
    const GGS_syncDeclarationAST temp_6 = this ;
    extensionMethod_enterPropertyInContext (enumerator_4921.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_4.readProperty_mSyncToolName (), temp_5.readProperty_mSyncToolName (), temp_6.readProperty_mSyncToolName ().readProperty_string (), ioArgument_ioDecoratedRoutineList, var_propertyList_4736, var_sortedOperandIRList_4782, var_constructorSignature_4836, var_constructorKey_4877, joker_5332, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 105)) ;
    enumerator_4921.gotoNextObject () ;
  }
  var_constructorKey_4877.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 119)) ;
  GGS_constructorMap temp_7 = GGS_constructorMap::init (inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 121)) ;
  GGS_constructorMap var_constructorMap_5462 = temp_7 ;
  {
  const GGS_syncDeclarationAST temp_8 = this ;
  var_constructorMap_5462.setter_insertKey (GGS_lstring::init_21__21_ (var_constructorKey_4877, temp_8.readProperty_mSyncToolName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorSignature_4836, GGS_constructorValue::class_func_structure (var_sortedOperandIRList_4782  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 122)) ;
  }
  {
  const GGS_syncDeclarationAST temp_9 = this ;
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_9.readProperty_mSyncToolName (), var_constructorMap_5462, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 127)) ;
  }
  const GGS_syncDeclarationAST temp_10 = this ;
  const GGS_syncDeclarationAST temp_11 = this ;
  GGS_omnibusType var_structureType_5806 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-sync-declaration.galgas", 130)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-sync-declaration.galgas", 131)), temp_10.readProperty_mSyncToolName ().readProperty_string (), GGS_typeKind::class_func_syncTool (SOURCE_FILE ("type-sync-declaration.galgas", 133)), temp_11.readProperty_mSyncToolName ().readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GGS_syncDeclarationAST temp_12 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_12.readProperty_mSyncToolName (), var_structureType_5806, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 136)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GGS_userLLVMSructureTypeDefinitionIR::init_21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_5806.ptr (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 139)), var_propertyList_4736, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 138)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@integerDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_integerDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_integerDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerDeclarationAST temp_0 = this ;
  GGS_lstring var_nodeName_1313 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 29)) ;
  {
  const GGS_integerDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1313, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 30)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1313, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 31)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 31)) COMMA_SOURCE_FILE ("type-integer.galgas", 31)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1313, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 32)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 32)) COMMA_SOURCE_FILE ("type-integer.galgas", 32)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1313, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 33)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 33)) COMMA_SOURCE_FILE ("type-integer.galgas", 33)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@integerDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_integerDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_integerDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("integer ").add_operation (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 39)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'minValueForInteger'
//
//--------------------------------------------------------------------------------------------------

GGS_bigint function_minValueForInteger (const GGS_bool & constinArgument_inIsUnsigned,
                                        const GGS_uint & constinArgument_inBitCount,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 48)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 50)).left_shift_operation (constinArgument_inBitCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_minValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_minValueForInteger (Compiler * inCompiler,
                                                                const cObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_bool operand0 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_minValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_minValueForInteger ("minValueForInteger",
                                                                    functionWithGenericHeader_minValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_minValueForInteger) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'maxValueForInteger'
//
//--------------------------------------------------------------------------------------------------

GGS_bigint function_maxValueForInteger (const GGS_bool & constinArgument_inIsUnsigned,
                                        const GGS_uint & constinArgument_inBitCount,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)).left_shift_operation (constinArgument_inBitCount, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)).left_shift_operation (constinArgument_inBitCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_maxValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_maxValueForInteger (Compiler * inCompiler,
                                                                const cObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_bool operand0 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_maxValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_maxValueForInteger ("maxValueForInteger",
                                                                    functionWithGenericHeader_maxValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_maxValueForInteger) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_integerDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                        GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                        GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                        GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                        GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                        GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                        GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                        GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerDeclarationAST temp_0 = this ;
  GGS_lstring var_integerTypeName_3571 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 78)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 78)) ;
  GGS_unifiedTypeMapEntry var_selfTypeProxy_3671 ;
  {
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3571, var_selfTypeProxy_3671, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 79)) ;
  }
  const GGS_integerDeclarationAST temp_1 = this ;
  const GGS_integerDeclarationAST temp_2 = this ;
  GGS_bigint var_min_3749 = function_minValueForInteger (temp_1.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 81)), temp_2.readProperty_mSize (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 81)) ;
  const GGS_integerDeclarationAST temp_3 = this ;
  const GGS_integerDeclarationAST temp_4 = this ;
  GGS_bigint var_max_3814 = function_maxValueForInteger (temp_3.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 82)), temp_4.readProperty_mSize (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 82)) ;
  const GGS_integerDeclarationAST temp_5 = this ;
  GGS_string var_llvmTypeName_3933 = GGS_string ("i").add_operation (temp_5.readProperty_mSize ().getter_string (SOURCE_FILE ("type-integer.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 84)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GGS_integerDeclarationAST temp_7 = this ;
    test_6 = GGS_bool (ComparisonKind::equal, temp_7.readProperty_mSize ().modulo_operation (GGS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 86)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      GGS_lstring var_routineLLVMName_4339 ;
      {
      extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3571, var_integerTypeName_3571.readProperty_string (), GGS_string ("byteSwapped").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 90)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 91)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 92)), var_selfTypeProxy_3671, var_routineLLVMName_4339, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 87)) ;
      }
      ioArgument_ioRoutineListIR.addAssign_operation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_4339, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3933, GGS_string ("bswap"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 96)) ;
    }
  }
  GGS_lstring var_routineLLVMName_5422 ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3571, var_integerTypeName_3571.readProperty_string (), GGS_string ("bitReversed").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 125)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 126)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 127)), var_selfTypeProxy_3671, var_routineLLVMName_5422, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 122)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_5422, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3933, GGS_string ("bitreverse"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 131)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3571, var_integerTypeName_3571.readProperty_string (), GGS_string ("leadingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 142)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 143)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 144)), var_selfTypeProxy_3671, var_routineLLVMName_5422, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 139)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_5422, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3933, GGS_string ("ctlz"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 148)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3571, var_integerTypeName_3571.readProperty_string (), GGS_string ("trainingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 159)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 160)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 161)), var_selfTypeProxy_3671, var_routineLLVMName_5422, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 156)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_5422, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3933, GGS_string ("cttz"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 165)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3571, var_integerTypeName_3571.readProperty_string (), GGS_string ("setBitCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 176)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 177)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 178)), var_selfTypeProxy_3671, var_routineLLVMName_5422, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 173)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_5422, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3933, GGS_string ("ctpop"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 182)) ;
  GGS_constantMap temp_8 = GGS_constantMap::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 190)) ;
  GGS_constantMap var_constantMap_7206 = temp_8 ;
  {
  var_constantMap_7206.setter_insertKey (GGS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 191)), var_min_3749, var_integerTypeName_3571, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 191)) ;
  }
  {
  var_constantMap_7206.setter_insertKey (GGS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 192)), var_max_3814, var_integerTypeName_3571, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 192)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (var_integerTypeName_3571, var_constantMap_7206, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 193)) ;
  }
  GGS_constructorMap temp_9 = GGS_constructorMap::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 198)) ;
  GGS_constructorMap var_constructorMap_7521 = temp_9 ;
  {
  GGS_constructorSignature temp_10 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 199)) ;
  var_constructorMap_7521.setter_insertKey (GGS_string ("()").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 199)), temp_10, GGS_constructorValue::class_func_simple (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 199))  COMMA_SOURCE_FILE ("type-integer.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 199)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_integerTypeName_3571, var_constructorMap_7521, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 200)) ;
  }
  const GGS_integerDeclarationAST temp_11 = this ;
  const GGS_integerDeclarationAST temp_12 = this ;
  GGS_omnibusType var_integerType_7759 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-integer.galgas", 203)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-integer.galgas", 204)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-integer.galgas", 204)) COMMA_SOURCE_FILE ("type-integer.galgas", 204)), var_integerTypeName_3571.readProperty_string (), GGS_typeKind::class_func_integer (var_min_3749, var_max_3814, temp_11.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 206)), temp_12.readProperty_mSize ()  COMMA_SOURCE_FILE ("type-integer.galgas", 206)), var_integerTypeName_3571.readProperty_string (), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3571, var_integerType_7759, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 209)) ;
  }
  GGS_lstring var_key_8787 = function_assignmentOperatorKey (var_integerType_7759, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 229)), var_integerType_7759, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 229)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8787, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 230)) ;
  }
  var_key_8787 = function_assignmentOperatorKey (var_integerType_7759, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 231)), function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 231)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8787, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 232)) ;
  }
  GGS_string var_functionName_9185 = function_assignmentOperatorFuncName (var_integerType_7759, var_integerType_7759, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 234)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GGS_simpleAssignmentCopyRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_functionName_9185.getter_nowhere (SOURCE_FILE ("type-integer.galgas", 236)), GGS_bool (false), GGS_bool (false), var_integerType_7759, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 235)) ;
  GGS_omnibusType var_boolType_9492 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 242)) ;
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-integer.galgas", 244)), var_integerType_7759, GGS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9492, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 244)) ;
  }
  {
  const GGS_integerDeclarationAST temp_13 = this ;
  GGS_string temp_14 ;
  const enumGalgasBool test_15 = temp_13.readProperty_mIsSigned ().boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GGS_string ("icmp sle") ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GGS_string ("icmp ule") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("type-integer.galgas", 247)), var_integerType_7759, temp_14, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9492, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 246)) ;
  }
  {
  const GGS_integerDeclarationAST temp_16 = this ;
  GGS_string temp_17 ;
  const enumGalgasBool test_18 = temp_16.readProperty_mIsSigned ().boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GGS_string ("icmp slt") ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GGS_string ("icmp ult") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("type-integer.galgas", 255)), var_integerType_7759, temp_17, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9492, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 254)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("type-integer.galgas", 262)), var_integerType_7759, GGS_string ("shl"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7759, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 262)) ;
  }
  {
  const GGS_integerDeclarationAST temp_19 = this ;
  GGS_string temp_20 ;
  const enumGalgasBool test_21 = temp_19.readProperty_mIsSigned ().boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GGS_string ("ashr") ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GGS_string ("lshr") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("type-integer.galgas", 265)), var_integerType_7759, temp_20, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7759, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 264)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-integer.galgas", 272)), var_integerType_7759, GGS_string ("or"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7759, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 272)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("type-integer.galgas", 274)), var_integerType_7759, GGS_string ("and"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7759, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 274)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-integer.galgas", 276)), var_integerType_7759, GGS_string ("xor"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7759, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 276)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("type-integer.galgas", 278)), var_integerType_7759, GGS_string ("add"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7759, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 278)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("type-integer.galgas", 280)), var_integerType_7759, GGS_string ("sub"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7759, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 280)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_mulOpNoOvf (SOURCE_FILE ("type-integer.galgas", 282)), var_integerType_7759, GGS_string ("mul"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7759, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 282)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'addIntegerInfixOperator???&?'
//
//--------------------------------------------------------------------------------------------------

void routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (const GGS_omnibusInfixOperator constinArgument_inInfixOperator,
                                                          const GGS_omnibusType constinArgument_inIntegerType,
                                                          const GGS_string constinArgument_inLLVMOp,
                                                          GGS_infixOperatorMap & ioArgument_ioInfixOperatorMap,
                                                          const GGS_omnibusType constinArgument_inResultType,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_ctIntType_11491 = function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 294)) ;
  GGS_lstring var_key_11535 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 295)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 295)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11535, constinArgument_inResultType, GGS_inlineInfixOperatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 296)) ;
  }
  var_key_11535 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 297)), var_ctIntType_11491, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 297)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11535, constinArgument_inResultType, GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 298)) ;
  }
  var_key_11535 = function_infixOperatorMapKey (var_ctIntType_11491, constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 299)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 299)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11535, constinArgument_inResultType, GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 300)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inlineInfix_integer_compileTimeInt_operatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                                          const GGS_location constinArgument_inOperatorLocation,
                                                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                                                          const GGS_omnibusType constinArgument_inResultType,
                                                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GGS_objectIR & outArgument_outResultValue,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_minValue_13111 ;
  GGS_bigint var_maxValue_13130 ;
  GGS_bool joker_13139_2 ; // Joker input parameter
  GGS_uint joker_13139_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 324)).readProperty_kind ().method_extractInteger (var_minValue_13111, var_maxValue_13130, joker_13139_2, joker_13139_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 324)) ;
  GGS_bigint var_value_13199 ;
  GGS_omnibusType joker_13184_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_13184_1, var_value_13199, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 325)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_value_13199.objectCompare (var_minValue_13111)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("right operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 329)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 328)).add_operation (GGS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 329)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 327)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_value_13199.objectCompare (var_maxValue_13130)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("right operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 333)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 332)).add_operation (GGS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 333)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 331)) ;
      }
    }
  }
  GGS_objectIR var_leftOperand_13658 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_13658, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 337)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 338)) ;
  }
  const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage temp_4 = this ;
  GGS_string var_s_13846 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (temp_4.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13658, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)).add_operation (extensionGetter_llvmName (var_leftOperand_13658, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)).add_operation (extensionGetter_llvmName (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 340)) ;
  {
  GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 341)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_13846, temp_5, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 341)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inlineInfix_compileTimeInt_integer_operatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                                          const GGS_location constinArgument_inOperatorLocation,
                                                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                                                          const GGS_omnibusType constinArgument_inResultType,
                                                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GGS_objectIR & outArgument_outResultValue,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_minValue_15078 ;
  GGS_bigint var_maxValue_15097 ;
  GGS_bool joker_15106_2 ; // Joker input parameter
  GGS_uint joker_15106_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)).readProperty_kind ().method_extractInteger (var_minValue_15078, var_maxValue_15097, joker_15106_2, joker_15106_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)) ;
  GGS_bigint var_value_15165 ;
  GGS_omnibusType joker_15150_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_15150_1, var_value_15165, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 366)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_value_15165.objectCompare (var_minValue_15078)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("left operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)).add_operation (GGS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 368)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_value_15165.objectCompare (var_maxValue_15097)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("left operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 373)).add_operation (GGS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 372)) ;
      }
    }
  }
  GGS_objectIR var_rightOperand_15624 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_15624, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 378)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 379)) ;
  }
  const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage temp_4 = this ;
  GGS_string var_s_15815 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (temp_4.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_15624, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (extensionGetter_llvmName (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)).add_operation (extensionGetter_llvmName (var_rightOperand_15624, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)) ;
  {
  GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 382)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_15815, temp_5, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 382)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerBuiltinFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_integerBuiltinFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerBuiltinFunctionIR temp_0 = this ;
  const GGS_integerBuiltinFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal ").add_operation (temp_0.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 401)) ;
  const GGS_integerBuiltinFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (").add_operation (temp_2.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 402)).add_operation (GGS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 402)) ;
  const GGS_integerBuiltinFunctionIR temp_3 = this ;
  const GGS_integerBuiltinFunctionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %value = load ").add_operation (temp_3.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (temp_4.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (GGS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 403)) ;
  const GGS_integerBuiltinFunctionIR temp_5 = this ;
  const GGS_integerBuiltinFunctionIR temp_6 = this ;
  const GGS_integerBuiltinFunctionIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %result = call ").add_operation (temp_5.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (GGS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (temp_6.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (temp_7.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 404)) ;
  const GGS_integerBuiltinFunctionIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (").add_operation (temp_8.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)).add_operation (GGS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 405)) ;
  const GGS_integerBuiltinFunctionIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret ").add_operation (temp_9.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 406)).add_operation (GGS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 406)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 407)) ;
  const GGS_integerBuiltinFunctionIR temp_10 = this ;
  const GGS_integerBuiltinFunctionIR temp_11 = this ;
  const GGS_integerBuiltinFunctionIR temp_12 = this ;
  const GGS_integerBuiltinFunctionIR temp_13 = this ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (temp_10.readProperty_mLLVMTypeName ().add_operation (GGS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_11.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_12.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_13.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409))  COMMA_SOURCE_FILE ("type-integer.galgas", 408)) ;
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
//
//Overriding extension method '@literalStringDeclarationAST enterInPrecedenceGraph'
//
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
//
//Overriding extension method '@literalStringDeclarationAST enterInContext'
//
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
  GGS_omnibusType var_selfType_2447 = function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 47)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 49)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 49)), var_selfType_2447, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 48)) ;
  }
  GGS_lstring var_key_2614 = function_assignmentOperatorKey (var_selfType_2447, GGS_location::class_func_nowhere (SOURCE_FILE ("type-static-string.galgas", 53)), var_selfType_2447, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 53)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2614, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 54)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeOpaqueDeclarationAST enterInPrecedenceGraph'
//
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
//
//Overriding extension method '@typeOpaqueDeclarationAST enterInContext'
//
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
  GGS_omnibusTypeAttributes var_opaqueTypeAttributes_4126 = GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE) ;
  GGS_bool var_copyable_4158 = GGS_bool (false) ;
  const GGS_typeOpaqueDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4182 (temp_0.readProperty_mAttributeList (), EnumerationOrder::up) ;
  while (enumerator_4182.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_4182.current_mValue (HERE).readProperty_string ().objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 92)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_opaqueTypeAttributes_4126.getter_contains (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 93)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4182.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 94)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_opaqueTypeAttributes_4126 = var_opaqueTypeAttributes_4126.operator_or (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 96)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)) ;
        }
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, enumerator_4182.current_mValue (HERE).readProperty_string ().objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 98)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_copyable_4158.boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_4182.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 100)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_copyable_4158 = GGS_bool (true) ;
            var_opaqueTypeAttributes_4126 = var_opaqueTypeAttributes_4126.operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 103)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 103)) ;
          }
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_4182.current_mValue (HERE).readProperty_location (), GGS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GGS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GGS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), fixItArray7  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)) ;
      }
    }
    enumerator_4182.gotoNextObject () ;
  }
  GGS_objectIR var_sizeExpressionIR_5155 ;
  {
  const GGS_typeOpaqueDeclarationAST temp_8 = this ;
  const GGS_typeOpaqueDeclarationAST temp_9 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_8.readProperty_mSizeExpression (), temp_9.readProperty_mSizeExpressionLocation (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 117)), var_sizeExpressionIR_5155, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 112)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_sizeExpressionIR_5155.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GGS_typeOpaqueDeclarationAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mSizeExpressionLocation (), GGS_string ("array size expression is not a literal integer"), fixItArray12  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_10) {
    GGS_constructorMap temp_13 = GGS_constructorMap::init (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 123)) ;
    GGS_constructorMap var_constructorMap_5347 = temp_13 ;
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = var_opaqueTypeAttributes_4126.getter_contains (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 124)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 124)).boolEnum () ;
      if (kBoolTrue == test_14) {
        {
        GGS_constructorSignature temp_15 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
        var_constructorMap_5347.setter_insertKey (GGS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), temp_15, GGS_constructorValue::class_func_simple (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
        }
        {
        const GGS_typeOpaqueDeclarationAST temp_16 = this ;
        ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_16.readProperty_mOpaqueTypeName (), var_constructorMap_5347, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126)) ;
        }
      }
    }
    GGS_bigint var_bitSize_5658 ;
    GGS_omnibusType joker_5643_1 ; // Joker input parameter
    var_sizeExpressionIR_5155.method_extractLiteralInteger (joker_5643_1, var_bitSize_5658, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)) ;
    const GGS_typeOpaqueDeclarationAST temp_17 = this ;
    const GGS_typeOpaqueDeclarationAST temp_18 = this ;
    GGS_omnibusType var_opaqueType_5675 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-opaque-declaration.galgas", 130)), var_opaqueTypeAttributes_4126, temp_17.readProperty_mOpaqueTypeName ().readProperty_string (), GGS_typeKind::class_func_opaque (var_bitSize_5658  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133)), temp_18.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    {
    const GGS_typeOpaqueDeclarationAST temp_19 = this ;
    extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_19.readProperty_mOpaqueTypeName (), var_opaqueType_5675, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 136)) ;
    }
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = var_copyable_4158.boolEnum () ;
    if (kBoolTrue == test_20) {
      {
      const GGS_typeOpaqueDeclarationAST temp_21 = this ;
      routine_print_3F_ (GGS_string ("OPAQUE ").add_operation (temp_21.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)).add_operation (GGS_string (" is copyable\n"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)) ;
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
//
//Overriding extension method '@controlRegisterGroupDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_controlRegisterGroupDeclarationAST temp_0 = this ;
  GGS_lstring var_nodeName_12449 = function_registerGroupNameFromOmnibusName (temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)) ;
  {
  const GGS_controlRegisterGroupDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_12449, temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)) ;
  }
  const GGS_controlRegisterGroupDeclarationAST temp_2 = this ;
  cEnumerator_controlRegisterDeclarationList enumerator_12653 (temp_2.readProperty_mRegisters (), EnumerationOrder::up) ;
  while (enumerator_12653.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12449, enumerator_12653.current (HERE).readProperty_mRegisterTypeName () COMMA_SOURCE_FILE ("declaration-control-register.galgas", 323)) ;
    }
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12449, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) ;
    }
    GGS_stringlist var_split_12916 = enumerator_12653.current (HERE).readProperty_mRegisterTypeName ().readProperty_string ().getter_componentsSeparatedByString (GGS_string ("u") COMMA_SOURCE_FILE ("declaration-control-register.galgas", 326)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GGS_bool test_4 = GGS_bool (ComparisonKind::equal, var_split_12916.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GGS_uint (uint32_t (2U)))) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GGS_bool (ComparisonKind::equal, var_split_12916.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GGS_string::makeEmptyString ())) ;
      }
      GGS_bool test_5 = test_4 ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = var_split_12916.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas", 327)) ;
      }
      test_3 = test_5.boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_uint var_n_13114 = var_split_12916.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::greaterThan, var_n_13114.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            GGS_lstring var_bitSizeTypeName_13199 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_n_13114.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)), enumerator_12653.current (HERE).readProperty_mRegisterTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
            {
            ioArgument_ioGraph.setter_addEdge (var_nodeName_12449, var_bitSizeTypeName_13199 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 331)) ;
            }
          }
        }
      }
    }
    cEnumerator_controlRegisterBitSliceList enumerator_13419 (enumerator_12653.current (HERE).readProperty_mRegisterBitSliceList (), EnumerationOrder::up) ;
    while (enumerator_13419.hasCurrentObject ()) {
      switch (enumerator_13419.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GGS_controlRegisterBitSlice::Enumeration::invalid:
        break ;
      case GGS_controlRegisterBitSlice::Enumeration::enum_unusedBits:
        break ;
      case GGS_controlRegisterBitSlice::Enumeration::enum_namedBit:
        {
          GGS_lstring extractedValue_13526__0 ;
          GGS_lbigint extractedValue_13537_count_1 ;
          enumerator_13419.current_mRegisterBitSlice (HERE).getAssociatedValuesFor_namedBit (extractedValue_13526__0, extractedValue_13537_count_1) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::greaterOrEqual, extractedValue_13537_count_1.readProperty_bigint ().objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 339)))).boolEnum () ;
            if (kBoolTrue == test_7) {
              {
              extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_13537_count_1.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)), extractedValue_13537_count_1.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)) ;
              }
            }
          }
        }
        break ;
      }
      enumerator_13419.gotoNextObject () ;
    }
    GGS_lstring var_rootNode_13729 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 345)), var_nodeName_12449.readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12449, var_rootNode_13729 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 346)) ;
    }
    cEnumerator_controlRegisterNameListAST enumerator_13933 (enumerator_12653.current (HERE).readProperty_mRegisterArrayList (), EnumerationOrder::up) ;
    while (enumerator_13933.hasCurrentObject ()) {
      switch (enumerator_13933.current (HERE).readProperty_mControlRegisterKind ().enumValue ()) {
      case GGS_controlRegisterKind::Enumeration::invalid:
        break ;
      case GGS_controlRegisterKind::Enumeration::enum_scalar:
        break ;
      case GGS_controlRegisterKind::Enumeration::enum_registerArray:
        {
          GGS_expressionAST extractedValue_14059_arraySize_0 ;
          GGS_location extractedValue_14069__1 ;
          GGS_expressionAST extractedValue_14086_arrayElementSize_2 ;
          GGS_location extractedValue_14103__3 ;
          enumerator_13933.current (HERE).readProperty_mControlRegisterKind ().getAssociatedValuesFor_registerArray (extractedValue_14059_arraySize_0, extractedValue_14069__1, extractedValue_14086_arrayElementSize_2, extractedValue_14103__3) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_14059_arraySize_0.ptr (), var_nodeName_12449, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 352)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_14086_arrayElementSize_2.ptr (), var_nodeName_12449, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 353)) ;
        }
        break ;
      }
      enumerator_13933.gotoNextObject () ;
    }
    enumerator_12653.gotoNextObject () ;
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
      GGS_bigint extractedValue_16244__0 ;
      GGS_bigint extractedValue_16246__1 ;
      GGS_bool extractedValue_16248__2 ;
      GGS_uint extractedValue_16250_bitCount_3 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_16244__0, extractedValue_16246__1, extractedValue_16248__2, extractedValue_16250_bitCount_3) ;
      outArgument_outRegisterBitCount = extractedValue_16250_bitCount_3 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_boolean:
  case GGS_typeKind::Enumeration::enum_void:
    {
      TC_Array <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 407)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumeration:
    {
      GGS_uint extractedValue_16433__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_16433__0) ;
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 409)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_literalString:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 411)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeBool:
    {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 413)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeInteger:
    {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 415)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_structure:
    {
      GGS_propertyList extractedValue_16908__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_16908__0) ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 417)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_syncTool:
    {
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_opaque:
    {
      GGS_bigint extractedValue_17134__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_17134__0) ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_staticArrayType:
    {
      GGS_omnibusType extractedValue_17257__0 ;
      GGS_bigint extractedValue_17259__1 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_17257__0, extractedValue_17259__1) ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 423)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GGS_omnibusType extractedValue_17383__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_17383__0) ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 425)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_function:
    {
      GGS_mode extractedValue_17500__0 ;
      GGS_routineTypedSignature extractedValue_17500__1 ;
      GGS_unifiedTypeMapEntry extractedValue_17500__2 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_17500__0, extractedValue_17500__1, extractedValue_17500__2) ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 427)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_generic:
    {
      GGS_genericFormalParameterList extractedValue_17616__0 ;
      GGS_ctExpressionAST extractedValue_17616__1 ;
      GGS_llvmStringDefinition extractedValue_17616__2 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_17616__0, extractedValue_17616__1, extractedValue_17616__2) ;
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 429)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_llvmType:
    {
      GGS_bigint extractedValue_17732__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_17732__0) ;
      TC_Array <FixItDescription> fixItArray12 ;
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
  GGS_controlRegisterFieldMap temp_0 = GGS_controlRegisterFieldMap::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 448)) ;
  outArgument_outRegisterFieldMap = temp_0 ;
  GGS_sliceMap temp_1 = GGS_sliceMap::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)) ;
  outArgument_outRegisterBitSliceMap = temp_1 ;
  GGS_controlRegisterFieldList temp_2 = GGS_controlRegisterFieldList::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 450)) ;
  outArgument_outControlRegisterFieldList = temp_2 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inRegisterBitSliceList.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 451)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GGS_uint var_shiftCount_18571 = GGS_uint (uint32_t (0U)) ;
      cEnumerator_controlRegisterBitSliceList enumerator_18597 (constinArgument_inRegisterBitSliceList, EnumerationOrder::down) ;
      while (enumerator_18597.hasCurrentObject ()) {
        switch (enumerator_18597.current_mRegisterBitSlice (HERE).enumValue ()) {
        case GGS_controlRegisterBitSlice::Enumeration::invalid:
          break ;
        case GGS_controlRegisterBitSlice::Enumeration::enum_unusedBits:
          {
            GGS_lbigint extractedValue_18708_count_0 ;
            enumerator_18597.current_mRegisterBitSlice (HERE).getAssociatedValuesFor_unusedBits (extractedValue_18708_count_0) ;
            var_shiftCount_18571 = var_shiftCount_18571.add_operation (extractedValue_18708_count_0.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_18708_count_0.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)), GGS_string ("—")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)) ;
          }
          break ;
        case GGS_controlRegisterBitSlice::Enumeration::enum_namedBit:
          {
            GGS_lstring extractedValue_18867_name_0 ;
            GGS_lbigint extractedValue_18881_count_1 ;
            enumerator_18597.current_mRegisterBitSlice (HERE).getAssociatedValuesFor_namedBit (extractedValue_18867_name_0, extractedValue_18881_count_1) ;
            GGS_uint var_bitCount_18902 = extractedValue_18881_count_1.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_18902, extractedValue_18867_name_0.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 460)) ;
            {
            outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_18867_name_0, var_shiftCount_18571, var_bitCount_18902, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 461)) ;
            }
            GGS_bigint var_mask_19142 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_bitCount_18902, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_shiftCount_18571, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)) ;
            {
            outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_18867_name_0, GGS_llvmBinaryOperation::class_func_and (SOURCE_FILE ("declaration-control-register.galgas", 470)), var_mask_19142, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 468)) ;
            }
            var_shiftCount_18571 = var_shiftCount_18571.add_operation (var_bitCount_18902, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 474)) ;
          }
          break ;
        }
        enumerator_18597.gotoNextObject () ;
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_18571)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GGS_string ("total bit slice count is ").add_operation (var_shiftCount_18571.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GGS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 479)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterGroupDeclarationAST enterInContext'
//
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
  GGS_controlRegisterMap temp_0 = GGS_controlRegisterMap::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 596)) ;
  GGS_controlRegisterMap var_regMap_24185 = temp_0 ;
  const GGS_controlRegisterGroupDeclarationAST temp_1 = this ;
  cEnumerator_controlRegisterDeclarationList enumerator_24216 (temp_1.readProperty_mRegisters (), EnumerationOrder::up) ;
  while (enumerator_24216.hasCurrentObject ()) {
    extensionMethod_buildControlRegisterMapForGroup (enumerator_24216.current (HERE), ioArgument_ioContext, var_regMap_24185, ioArgument_ioStaticEntityMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 598)) ;
    enumerator_24216.gotoNextObject () ;
  }
  const GGS_controlRegisterGroupDeclarationAST temp_2 = this ;
  cEnumerator_registerGroupListAST enumerator_24386 (temp_2.readProperty_mRegisterGroupList (), EnumerationOrder::up) ;
  while (enumerator_24386.hasCurrentObject ()) {
    GGS_controlRegisterMap var_registerMap_24436 = var_regMap_24185 ;
    cEnumerator_controlRegisterMap enumerator_24513 (var_regMap_24185, EnumerationOrder::up) ;
    while (enumerator_24513.hasCurrentObject ()) {
      GGS_string var_key_24533 = GGS_string ("#").add_operation (enumerator_24386.current (HERE).readProperty_mRegisterGroupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (enumerator_24513.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = ioArgument_ioControlRegisterUserAccesMapAST.getter_hasKey (var_key_24533 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 609)).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_registerMap_24436.setter_setMUserAccessForKey (GGS_bool (true), enumerator_24513.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 610)) ;
          }
          {
          ioArgument_ioControlRegisterUserAccesMapAST.setter_removeKey (var_key_24533.getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 611)) ;
          }
        }
      }
      enumerator_24513.gotoNextObject () ;
    }
    switch (enumerator_24386.current (HERE).readProperty_mControlRegisterGroupKind ().enumValue ()) {
    case GGS_controlRegisterGroupKindAST::Enumeration::invalid:
      break ;
    case GGS_controlRegisterGroupKindAST::Enumeration::enum_single:
      {
        GGS_lbigint extractedValue_24876_baseAddress_0 ;
        enumerator_24386.current (HERE).readProperty_mControlRegisterGroupKind ().getAssociatedValuesFor_single (extractedValue_24876_baseAddress_0) ;
        GGS_registerGroupKind var_groupKind_24901 = GGS_registerGroupKind::class_func_single (extractedValue_24876_baseAddress_0.readProperty_bigint ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 617)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24386.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_24901, var_registerMap_24436, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 618)) ;
        }
      }
      break ;
    case GGS_controlRegisterGroupKindAST::Enumeration::enum_groupArray:
      {
        GGS_expressionAST extractedValue_25092_groupSizeExpression_0 ;
        GGS_location extractedValue_25112_groupSizeExpressionLocation_1 ;
        GGS_lbigintlist extractedValue_25140_baseAddresses_2 ;
        enumerator_24386.current (HERE).readProperty_mControlRegisterGroupKind ().getAssociatedValuesFor_groupArray (extractedValue_25092_groupSizeExpression_0, extractedValue_25112_groupSizeExpressionLocation_1, extractedValue_25140_baseAddresses_2) ;
        GGS_objectIR var_groupArraySizeExpressionResult_25432 ;
        {
        routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_25092_groupSizeExpression_0, extractedValue_25112_groupSizeExpressionLocation_1, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 625)), var_groupArraySizeExpressionResult_25432, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 620)) ;
        }
        GGS_bigint var_groupSize_25489 ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_groupArraySizeExpressionResult_25432.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 629)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 629)).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_25112_groupSizeExpressionLocation_1, GGS_string ("control register group size is not a static integer expression"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 630)) ;
            var_groupSize_25489.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_4) {
          GGS_omnibusType joker_25781_1 ; // Joker input parameter
          var_groupArraySizeExpressionResult_25432.method_extractLiteralInteger (joker_25781_1, var_groupSize_25489, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 634)) ;
        }
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::notEqual, var_groupSize_25489.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 636)).objectCompare (extractedValue_25140_baseAddresses_2.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 636)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_25112_groupSizeExpressionLocation_1, GGS_string ("the group size is ").add_operation (var_groupSize_25489.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GGS_string (", but "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (extractedValue_25140_baseAddresses_2.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 638)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GGS_string (" base addresses are defined"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 637)) ;
          }
        }
        GGS_registerGroupKind var_groupKind_26041 = GGS_registerGroupKind::class_func_arrayGroup (extractedValue_25140_baseAddresses_2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 640)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24386.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_26041, var_registerMap_24436, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 641)) ;
        }
        ioArgument_ioDecoratedDeclarationList.addAssign_operation (GGS_decoratedControlRegisterArrayGroupDeclaration::init_21__21_ (enumerator_24386.current (HERE).readProperty_mRegisterGroupName (), extractedValue_25140_baseAddresses_2, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 642)) ;
      }
      break ;
    }
    enumerator_24386.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedControlRegisterArrayGroupDeclaration semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedControlRegisterArrayGroupDeclaration::method_semanticAnalysis (const GGS_semanticContext /* constinArgument_inContext */,
                                                                                  GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                  GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_decoratedControlRegisterArrayGroupDeclaration temp_0 = this ;
  const GGS_decoratedControlRegisterArrayGroupDeclaration temp_1 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mControlRegisterGroupArrayList.addAssign_operation (temp_0.readProperty_mGroupName (), temp_1.readProperty_mBaseAddresses ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 666)) ;
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
  GGS_string var_byAddressFilePath_29588 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".control-registers-sorted-by-address.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 727)) ;
  GGS_string var_byNameFilePath_29680 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".control-registers-sorted-by-name.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 728)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_controlRegisterByAddress temp_1 = GGS_controlRegisterByAddress::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 730)) ;
      GGS_controlRegisterByAddress var_controlRegisterByAddress_29867 = temp_1 ;
      GGS_controlRegisterByName temp_2 = GGS_controlRegisterByName::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 731)) ;
      GGS_controlRegisterByName var_controlRegisterByName_29929 = temp_2 ;
      GGS_uint var_controlRegisterCount_29971 = GGS_uint (uint32_t (0U)) ;
      cEnumerator_controlRegisterGroupMap enumerator_30033 (constinArgument_inControlRegisterGroupMap, EnumerationOrder::up) ;
      while (enumerator_30033.hasCurrentObject ()) {
        switch (enumerator_30033.current_mGroupKind (HERE).enumValue ()) {
        case GGS_registerGroupKind::Enumeration::invalid:
          break ;
        case GGS_registerGroupKind::Enumeration::enum_single:
          {
            GGS_bigint extractedValue_30141_groupBaseAddress_0 ;
            enumerator_30033.current_mGroupKind (HERE).getAssociatedValuesFor_single (extractedValue_30141_groupBaseAddress_0) ;
            {
            routine_buildControlRegisterMaps_3F__3F__3F__26__26__26_ (enumerator_30033.current_mControlRegisterMap (HERE), extractedValue_30141_groupBaseAddress_0, enumerator_30033.current_lkey (HERE).readProperty_string (), var_controlRegisterByAddress_29867, var_controlRegisterByName_29929, var_controlRegisterCount_29971, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 736)) ;
            }
          }
          break ;
        case GGS_registerGroupKind::Enumeration::enum_arrayGroup:
          {
            GGS_lbigintlist extractedValue_30440_baseAddresses_0 ;
            enumerator_30033.current_mGroupKind (HERE).getAssociatedValuesFor_arrayGroup (extractedValue_30440_baseAddresses_0) ;
            cEnumerator_lbigintlist enumerator_30470 (extractedValue_30440_baseAddresses_0, EnumerationOrder::up) ;
            GGS_uint index_30465 (uint32_t (0)) ;
            while (enumerator_30470.hasCurrentObject ()) {
              {
              routine_buildControlRegisterMaps_3F__3F__3F__26__26__26_ (enumerator_30033.current_mControlRegisterMap (HERE), enumerator_30470.current_mValue (HERE).readProperty_bigint (), enumerator_30033.current_lkey (HERE).readProperty_string ().add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (index_30465.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)), var_controlRegisterByAddress_29867, var_controlRegisterByName_29929, var_controlRegisterCount_29971, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 746)) ;
              }
              enumerator_30470.gotoNextObject () ;
              index_30465.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 745)) ;
            }
          }
          break ;
        }
        enumerator_30033.gotoNextObject () ;
      }
      GGS_string var_typeDumpString_30820 = GGS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 758)), var_controlRegisterCount_29971, var_controlRegisterByAddress_29867 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 757))) ;
      GGS_bool joker_31080 ; // Joker input parameter
      var_typeDumpString_30820.method_writeToFileWhenDifferentContents (var_byAddressFilePath_29588, joker_31080, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)) ;
      var_typeDumpString_30820 = GGS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 764)), var_controlRegisterCount_29971, var_controlRegisterByName_29929 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763))) ;
      GGS_bool joker_31339 ; // Joker input parameter
      var_typeDumpString_30820.method_writeToFileWhenDifferentContents (var_byNameFilePath_29680, joker_31339, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 768)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GGS_string::class_method_deleteFileIfExists (var_byAddressFilePath_29588, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 770)) ;
    }
    {
    GGS_string::class_method_deleteFileIfExists (var_byNameFilePath_29680, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 771)) ;
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
  cEnumerator_controlRegisterMap enumerator_31992 (constinArgument_inControlRegisterMap, EnumerationOrder::up) ;
  while (enumerator_31992.hasCurrentObject ()) {
    GGS_bigint var_registerAddress_32050 = constinArgument_inGroupBaseAddress.add_operation (enumerator_31992.current_mAddressOffset (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 786)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_31992.current_mArraySize (HERE).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 788)) ;
        GGS_string var_registerName_32208 = constinArgument_inGroupName.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)).add_operation (enumerator_31992.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)) ;
        GGS_string var_s_32262 = GGS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_32208, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 790)).add_operation (GGS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 791)).add_operation (enumerator_31992.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GGS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (var_registerAddress_32050.getter_hexStringSeparatedBy (GGS_char (TO_UNICODE (95)), GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GGS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_31992.current_mControlRegisterFieldList (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 794)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_s_32262.plusAssign_operation(GGS_string ("<table class=\"fields\">").add_operation (GGS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)).add_operation (function_fieldIndexColumns (enumerator_31992.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GGS_string ("</tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GGS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)) ;
            cEnumerator_controlRegisterFieldList enumerator_32736 (enumerator_31992.current_mControlRegisterFieldList (HERE), EnumerationOrder::down) ;
            while (enumerator_32736.hasCurrentObject ()) {
              var_s_32262.plusAssign_operation(GGS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_32736.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GGS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (enumerator_32736.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GGS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)) ;
              enumerator_32736.gotoNextObject () ;
            }
            var_s_32262.plusAssign_operation(GGS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 801)) ;
          }
        }
        var_s_32262.plusAssign_operation(GGS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 803)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_32050, var_s_32262  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 804)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_32050, var_s_32262, var_registerName_32208  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 805)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (enumerator_31992.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 807)) ;
      cEnumerator_uintlist enumerator_33183 (function_arrayIndexListFor (enumerator_31992.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 808)), EnumerationOrder::up) ;
      while (enumerator_33183.hasCurrentObject ()) {
        GGS_bigint var_address_33250 = var_registerAddress_32050.add_operation (enumerator_33183.current_mValue (HERE).multiply_operation (enumerator_31992.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)).getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 809)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)) ;
        GGS_string var_registerName_33321 = constinArgument_inGroupName.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_31992.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_33183.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 810)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)) ;
        GGS_string var_s_33407 = GGS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_33321, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 811)).add_operation (GGS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 812)).add_operation (enumerator_31992.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GGS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (var_address_33250.getter_hexStringSeparatedBy (GGS_char (TO_UNICODE (95)), GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GGS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_31992.current_mControlRegisterFieldList (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 816)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_s_33407.plusAssign_operation(GGS_string ("<table class=\"fields\">").add_operation (GGS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)).add_operation (function_fieldIndexColumns (enumerator_31992.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)).add_operation (GGS_string ("</tr><tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)) ;
            cEnumerator_controlRegisterFieldList enumerator_33880 (enumerator_31992.current_mControlRegisterFieldList (HERE), EnumerationOrder::down) ;
            while (enumerator_33880.hasCurrentObject ()) {
              var_s_33407.plusAssign_operation(GGS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_33880.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GGS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (enumerator_33880.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GGS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)) ;
              enumerator_33880.gotoNextObject () ;
            }
            var_s_33407.plusAssign_operation(GGS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 822)) ;
          }
        }
        var_s_33407.plusAssign_operation(GGS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 824)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_32050, var_s_33407  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 825)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_32050, var_s_33407, var_registerName_33321  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 826)) ;
        enumerator_33183.gotoNextObject () ;
      }
    }
    enumerator_31992.gotoNextObject () ;
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
    cEnumerator_controlRegisterByName enumerator_1560 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME, EnumerationOrder::up) ;
    while (enumerator_1560.hasCurrentObject ()) {
      result.appendString (enumerator_1560.current_mHTML (HERE).stringValue ()) ;
      index_1560_.increment () ;
      enumerator_1560.gotoNextObject () ;
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
    cEnumerator_controlRegisterByAddress enumerator_1566 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS, EnumerationOrder::up) ;
    while (enumerator_1566.hasCurrentObject ()) {
      result.appendString (enumerator_1566.current_mHTML (HERE).stringValue ()) ;
      index_1566_.increment () ;
      enumerator_1566.gotoNextObject () ;
    }
  }
  result.appendString ("\n</table>\n</div>\n</body>\n</html>\n") ;
  return GGS_string (result) ;
}

