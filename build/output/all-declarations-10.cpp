#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-10.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_configurationDeclarationAST::objectCompare (const GALGAS_configurationDeclarationAST & inOperand) const {
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

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_configurationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_targetParameters::constructor_default (HERE),
                                                              GALGAS_interruptionConfigurationList::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (const cPtr_configurationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_configurationDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_configurationDeclarationAST::getter_mPanicCodeTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mPanicCodeTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_configurationDeclarationAST::getter_mPanicCodeTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicCodeTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_configurationDeclarationAST::getter_mPanicLineTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mPanicLineTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_configurationDeclarationAST::getter_mPanicLineTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLineTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters GALGAS_configurationDeclarationAST::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  GALGAS_targetParameters result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mTargetParameters ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters cPtr_configurationDeclarationAST::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList GALGAS_configurationDeclarationAST::getter_mInterruptionConfigurationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mProperty_mInterruptionConfigurationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList cPtr_configurationDeclarationAST::getter_mInterruptionConfigurationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptionConfigurationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @configurationDeclarationAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_configurationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_configurationDeclarationAST (mProperty_mPanicCodeTypeName, mProperty_mPanicLineTypeName, mProperty_mTargetParameters, mProperty_mInterruptionConfigurationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @configurationDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configurationDeclarationAST ("configurationDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_configurationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_configurationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configurationDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
mProperty_mAvailableInterruptMap (),
mProperty_mEqualOperatorMap (),
mProperty_mStrictInfOperatorMap (),
mProperty_mInfEqualOperatorMap (),
mProperty_mAndOperatorMap (),
mProperty_mOrOperatorMap (),
mProperty_mXorOperatorMap (),
mProperty_mBooleanXorOperatorMap (),
mProperty_mAddOperatorMap (),
mProperty_mAddNoOvfOperatorMap (),
mProperty_mSubOperatorMap (),
mProperty_mSubNoOvfOperatorMap (),
mProperty_mMulOperatorMap (),
mProperty_mMulNoOvfOperatorMap (),
mProperty_mDivOperatorMap (),
mProperty_mDivNoOvfOperatorMap (),
mProperty_mModOperatorMap (),
mProperty_mModNoOvfOperatorMap (),
mProperty_mLeftShiftOperatorMap (),
mProperty_mRightShiftOperatorMap (),
mProperty_mUnaryMinusOperatorMap (),
mProperty_mNotOperatorMap (),
mProperty_mUnsignedComplementOperatorMap (),
mProperty_mInfixOperatorMap (),
mProperty_mPrefixOperatorMap (),
mProperty_mAssignmentOperatorMap (),
mProperty_mImplicitConversionToBooleanMap (),
mProperty_mTaskMap (),
mProperty_mGlobalTaskVariableList (),
mProperty_mValuedObjectMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
                                                const GALGAS_availableInterruptMap & inOperand13,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand14,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand15,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand16,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand17,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand18,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand19,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand20,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand21,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand22,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand23,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand24,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand25,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand26,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand27,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand28,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand29,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand30,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand31,
                                                const GALGAS_infixOperatorMap_5F_EX & inOperand32,
                                                const GALGAS_prefixOperatorMap_5F_EX & inOperand33,
                                                const GALGAS_prefixOperatorMap_5F_EX & inOperand34,
                                                const GALGAS_prefixOperatorMap_5F_EX & inOperand35,
                                                const GALGAS_infixOperatorMap & inOperand36,
                                                const GALGAS_prefixOperatorMap & inOperand37,
                                                const GALGAS_assignmentOperatorMap & inOperand38,
                                                const GALGAS_implicitConversionToBooleanMap & inOperand39,
                                                const GALGAS_taskMap & inOperand40,
                                                const GALGAS_globalTaskVariableList & inOperand41,
                                                const GALGAS_universalValuedObjectMap & inOperand42) :
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
mProperty_mAvailableInterruptMap (inOperand13),
mProperty_mEqualOperatorMap (inOperand14),
mProperty_mStrictInfOperatorMap (inOperand15),
mProperty_mInfEqualOperatorMap (inOperand16),
mProperty_mAndOperatorMap (inOperand17),
mProperty_mOrOperatorMap (inOperand18),
mProperty_mXorOperatorMap (inOperand19),
mProperty_mBooleanXorOperatorMap (inOperand20),
mProperty_mAddOperatorMap (inOperand21),
mProperty_mAddNoOvfOperatorMap (inOperand22),
mProperty_mSubOperatorMap (inOperand23),
mProperty_mSubNoOvfOperatorMap (inOperand24),
mProperty_mMulOperatorMap (inOperand25),
mProperty_mMulNoOvfOperatorMap (inOperand26),
mProperty_mDivOperatorMap (inOperand27),
mProperty_mDivNoOvfOperatorMap (inOperand28),
mProperty_mModOperatorMap (inOperand29),
mProperty_mModNoOvfOperatorMap (inOperand30),
mProperty_mLeftShiftOperatorMap (inOperand31),
mProperty_mRightShiftOperatorMap (inOperand32),
mProperty_mUnaryMinusOperatorMap (inOperand33),
mProperty_mNotOperatorMap (inOperand34),
mProperty_mUnsignedComplementOperatorMap (inOperand35),
mProperty_mInfixOperatorMap (inOperand36),
mProperty_mPrefixOperatorMap (inOperand37),
mProperty_mAssignmentOperatorMap (inOperand38),
mProperty_mImplicitConversionToBooleanMap (inOperand39),
mProperty_mTaskMap (inOperand40),
mProperty_mGlobalTaskVariableList (inOperand41),
mProperty_mValuedObjectMap (inOperand42) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
                                 GALGAS_availableInterruptMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap_5F_EX::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_assignmentOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_implicitConversionToBooleanMap::constructor_emptyMap (HERE),
                                 GALGAS_taskMap::constructor_emptyMap (HERE),
                                 GALGAS_globalTaskVariableList::constructor_emptyList (HERE),
                                 GALGAS_universalValuedObjectMap::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_targetParameters & inOperand0,
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
                                                                const GALGAS_availableInterruptMap & inOperand13,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand14,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand15,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand16,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand17,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand18,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand19,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand20,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand21,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand22,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand23,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand24,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand25,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand26,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand27,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand28,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand29,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand30,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand31,
                                                                const GALGAS_infixOperatorMap_5F_EX & inOperand32,
                                                                const GALGAS_prefixOperatorMap_5F_EX & inOperand33,
                                                                const GALGAS_prefixOperatorMap_5F_EX & inOperand34,
                                                                const GALGAS_prefixOperatorMap_5F_EX & inOperand35,
                                                                const GALGAS_infixOperatorMap & inOperand36,
                                                                const GALGAS_prefixOperatorMap & inOperand37,
                                                                const GALGAS_assignmentOperatorMap & inOperand38,
                                                                const GALGAS_implicitConversionToBooleanMap & inOperand39,
                                                                const GALGAS_taskMap & inOperand40,
                                                                const GALGAS_globalTaskVariableList & inOperand41,
                                                                const GALGAS_universalValuedObjectMap & inOperand42 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid () && inOperand22.isValid () && inOperand23.isValid () && inOperand24.isValid () && inOperand25.isValid () && inOperand26.isValid () && inOperand27.isValid () && inOperand28.isValid () && inOperand29.isValid () && inOperand30.isValid () && inOperand31.isValid () && inOperand32.isValid () && inOperand33.isValid () && inOperand34.isValid () && inOperand35.isValid () && inOperand36.isValid () && inOperand37.isValid () && inOperand38.isValid () && inOperand39.isValid () && inOperand40.isValid () && inOperand41.isValid () && inOperand42.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21, inOperand22, inOperand23, inOperand24, inOperand25, inOperand26, inOperand27, inOperand28, inOperand29, inOperand30, inOperand31, inOperand32, inOperand33, inOperand34, inOperand35, inOperand36, inOperand37, inOperand38, inOperand39, inOperand40, inOperand41, inOperand42) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mAvailableInterruptMap.objectCompare (inOperand.mProperty_mAvailableInterruptMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEqualOperatorMap.objectCompare (inOperand.mProperty_mEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStrictInfOperatorMap.objectCompare (inOperand.mProperty_mStrictInfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInfEqualOperatorMap.objectCompare (inOperand.mProperty_mInfEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAndOperatorMap.objectCompare (inOperand.mProperty_mAndOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOrOperatorMap.objectCompare (inOperand.mProperty_mOrOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mXorOperatorMap.objectCompare (inOperand.mProperty_mXorOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBooleanXorOperatorMap.objectCompare (inOperand.mProperty_mBooleanXorOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAddOperatorMap.objectCompare (inOperand.mProperty_mAddOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAddNoOvfOperatorMap.objectCompare (inOperand.mProperty_mAddNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSubOperatorMap.objectCompare (inOperand.mProperty_mSubOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSubNoOvfOperatorMap.objectCompare (inOperand.mProperty_mSubNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMulOperatorMap.objectCompare (inOperand.mProperty_mMulOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMulNoOvfOperatorMap.objectCompare (inOperand.mProperty_mMulNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDivOperatorMap.objectCompare (inOperand.mProperty_mDivOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDivNoOvfOperatorMap.objectCompare (inOperand.mProperty_mDivNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModOperatorMap.objectCompare (inOperand.mProperty_mModOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModNoOvfOperatorMap.objectCompare (inOperand.mProperty_mModNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLeftShiftOperatorMap.objectCompare (inOperand.mProperty_mLeftShiftOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRightShiftOperatorMap.objectCompare (inOperand.mProperty_mRightShiftOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnaryMinusOperatorMap.objectCompare (inOperand.mProperty_mUnaryMinusOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNotOperatorMap.objectCompare (inOperand.mProperty_mNotOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnsignedComplementOperatorMap.objectCompare (inOperand.mProperty_mUnsignedComplementOperatorMap) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mTargetParameters.isValid () && mProperty_mPanicCodeType.isValid () && mProperty_mPanicLineType.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mRoutineMap.isValid () && mProperty_mGuardMap.isValid () && mProperty_mControlRegisterGroupMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mStaticListMap.isValid () && mProperty_mRequiredRoutineSet.isValid () && mProperty_mTypeMap.isValid () && mProperty_mAvailableInterruptMap.isValid () && mProperty_mEqualOperatorMap.isValid () && mProperty_mStrictInfOperatorMap.isValid () && mProperty_mInfEqualOperatorMap.isValid () && mProperty_mAndOperatorMap.isValid () && mProperty_mOrOperatorMap.isValid () && mProperty_mXorOperatorMap.isValid () && mProperty_mBooleanXorOperatorMap.isValid () && mProperty_mAddOperatorMap.isValid () && mProperty_mAddNoOvfOperatorMap.isValid () && mProperty_mSubOperatorMap.isValid () && mProperty_mSubNoOvfOperatorMap.isValid () && mProperty_mMulOperatorMap.isValid () && mProperty_mMulNoOvfOperatorMap.isValid () && mProperty_mDivOperatorMap.isValid () && mProperty_mDivNoOvfOperatorMap.isValid () && mProperty_mModOperatorMap.isValid () && mProperty_mModNoOvfOperatorMap.isValid () && mProperty_mLeftShiftOperatorMap.isValid () && mProperty_mRightShiftOperatorMap.isValid () && mProperty_mUnaryMinusOperatorMap.isValid () && mProperty_mNotOperatorMap.isValid () && mProperty_mUnsignedComplementOperatorMap.isValid () && mProperty_mInfixOperatorMap.isValid () && mProperty_mPrefixOperatorMap.isValid () && mProperty_mAssignmentOperatorMap.isValid () && mProperty_mImplicitConversionToBooleanMap.isValid () && mProperty_mTaskMap.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mValuedObjectMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mAvailableInterruptMap.drop () ;
  mProperty_mEqualOperatorMap.drop () ;
  mProperty_mStrictInfOperatorMap.drop () ;
  mProperty_mInfEqualOperatorMap.drop () ;
  mProperty_mAndOperatorMap.drop () ;
  mProperty_mOrOperatorMap.drop () ;
  mProperty_mXorOperatorMap.drop () ;
  mProperty_mBooleanXorOperatorMap.drop () ;
  mProperty_mAddOperatorMap.drop () ;
  mProperty_mAddNoOvfOperatorMap.drop () ;
  mProperty_mSubOperatorMap.drop () ;
  mProperty_mSubNoOvfOperatorMap.drop () ;
  mProperty_mMulOperatorMap.drop () ;
  mProperty_mMulNoOvfOperatorMap.drop () ;
  mProperty_mDivOperatorMap.drop () ;
  mProperty_mDivNoOvfOperatorMap.drop () ;
  mProperty_mModOperatorMap.drop () ;
  mProperty_mModNoOvfOperatorMap.drop () ;
  mProperty_mLeftShiftOperatorMap.drop () ;
  mProperty_mRightShiftOperatorMap.drop () ;
  mProperty_mUnaryMinusOperatorMap.drop () ;
  mProperty_mNotOperatorMap.drop () ;
  mProperty_mUnsignedComplementOperatorMap.drop () ;
  mProperty_mInfixOperatorMap.drop () ;
  mProperty_mPrefixOperatorMap.drop () ;
  mProperty_mAssignmentOperatorMap.drop () ;
  mProperty_mImplicitConversionToBooleanMap.drop () ;
  mProperty_mTaskMap.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mValuedObjectMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    mProperty_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStrictInfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInfEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAndOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOrOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mXorOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBooleanXorOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAddOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAddNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSubOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSubNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMulOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMulNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDivOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDivNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLeftShiftOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRightShiftOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnaryMinusOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNotOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnsignedComplementOperatorMap.description (ioString, inIndentation+1) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters GALGAS_semanticContext::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType GALGAS_semanticContext::getter_mPanicCodeType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicCodeType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType GALGAS_semanticContext::getter_mPanicLineType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLineType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap GALGAS_semanticContext::getter_mPanicSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupRoutinePriorityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicRoutinePriorityMap GALGAS_semanticContext::getter_mPanicLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLoopRoutinePriorityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineMapForContext GALGAS_semanticContext::getter_mRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_guardMapForContext GALGAS_semanticContext::getter_mGuardMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap GALGAS_semanticContext::getter_mControlRegisterGroupMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterGroupMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalConstantMap GALGAS_semanticContext::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMap GALGAS_semanticContext::getter_mGlobalSyncInstanceMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalSyncInstanceMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticlistMap GALGAS_semanticContext::getter_mStaticListMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticListMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_semanticContext::getter_mRequiredRoutineSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRequiredRoutineSet ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_unifiedTypeMap GALGAS_semanticContext::getter_mTypeMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap GALGAS_semanticContext::getter_mAvailableInterruptMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAvailableInterruptMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEqualOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mStrictInfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStrictInfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mInfEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInfEqualOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mAndOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAndOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mOrOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOrOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mXorOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mBooleanXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBooleanXorOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mAddOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mAddNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mSubOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mSubNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSubNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mMulOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMulOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mMulNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMulNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mDivOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDivOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mDivNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDivNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mModOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mModNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModNoOvfOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mLeftShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftShiftOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap_5F_EX GALGAS_semanticContext::getter_mRightShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightShiftOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap_5F_EX GALGAS_semanticContext::getter_mUnaryMinusOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnaryMinusOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap_5F_EX GALGAS_semanticContext::getter_mNotOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNotOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap_5F_EX GALGAS_semanticContext::getter_mUnsignedComplementOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnsignedComplementOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mInfixOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInfixOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mPrefixOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPrefixOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentOperatorMap GALGAS_semanticContext::getter_mAssignmentOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssignmentOperatorMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_implicitConversionToBooleanMap GALGAS_semanticContext::getter_mImplicitConversionToBooleanMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mImplicitConversionToBooleanMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMap GALGAS_semanticContext::getter_mTaskMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_semanticContext::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalTaskVariableList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_universalValuedObjectMap GALGAS_semanticContext::getter_mValuedObjectMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValuedObjectMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Extension Getter '@semanticContext booleanType'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType extensionGetter_booleanType (const GALGAS_semanticContext & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  inObject.mProperty_mTypeMap.method_searchKey (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 157)).getter_nowhere (SOURCE_FILE ("context.galgas", 157)), result_result, inCompiler COMMA_SOURCE_FILE ("context.galgas", 157)) ;
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_staticArrayTypeAssignFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_staticArrayTypeAssignFunctionIR * p = (const cPtr_staticArrayTypeAssignFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_staticArrayTypeAssignFunctionIR) ;
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
    result = mProperty_mStaticArrayType.objectCompare (p->mProperty_mStaticArrayType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_staticArrayTypeAssignFunctionIR::objectCompare (const GALGAS_staticArrayTypeAssignFunctionIR & inOperand) const {
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

GALGAS_staticArrayTypeAssignFunctionIR::GALGAS_staticArrayTypeAssignFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticArrayTypeAssignFunctionIR GALGAS_staticArrayTypeAssignFunctionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_staticArrayTypeAssignFunctionIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_bool::constructor_default (HERE),
                                                                  GALGAS_bool::constructor_default (HERE),
                                                                  GALGAS_omnibusType::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticArrayTypeAssignFunctionIR::GALGAS_staticArrayTypeAssignFunctionIR (const cPtr_staticArrayTypeAssignFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticArrayTypeAssignFunctionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticArrayTypeAssignFunctionIR GALGAS_staticArrayTypeAssignFunctionIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                                const GALGAS_bool & inAttribute_isRequired,
                                                                                                const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                                const GALGAS_omnibusType & inAttribute_mStaticArrayType
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayTypeAssignFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mStaticArrayType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_staticArrayTypeAssignFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mStaticArrayType COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType GALGAS_staticArrayTypeAssignFunctionIR::getter_mStaticArrayType (UNUSED_LOCATION_ARGS) const {
  GALGAS_omnibusType result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticArrayTypeAssignFunctionIR * p = (const cPtr_staticArrayTypeAssignFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayTypeAssignFunctionIR) ;
    result = p->mProperty_mStaticArrayType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType cPtr_staticArrayTypeAssignFunctionIR::getter_mStaticArrayType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticArrayType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @staticArrayTypeAssignFunctionIR class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_staticArrayTypeAssignFunctionIR::cPtr_staticArrayTypeAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                            const GALGAS_bool & in_isRequired,
                                                                            const GALGAS_bool & in_warnsIfUnused,
                                                                            const GALGAS_omnibusType & in_mStaticArrayType
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mStaticArrayType (in_mStaticArrayType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_staticArrayTypeAssignFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ;
}

void cPtr_staticArrayTypeAssignFunctionIR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@staticArrayTypeAssignFunctionIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStaticArrayType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_staticArrayTypeAssignFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_staticArrayTypeAssignFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mStaticArrayType COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @staticArrayTypeAssignFunctionIR type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ("staticArrayTypeAssignFunctionIR",
                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticArrayTypeAssignFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticArrayTypeAssignFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticArrayTypeAssignFunctionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticArrayTypeAssignFunctionIR GALGAS_staticArrayTypeAssignFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayTypeAssignFunctionIR result ;
  const GALGAS_staticArrayTypeAssignFunctionIR * p = (const GALGAS_staticArrayTypeAssignFunctionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticArrayTypeAssignFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayTypeAssignFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Extension method '@structurePropertyListAST-element enterPropertyInContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterPropertyInContext (const GALGAS_structurePropertyListAST_2D_element inObject,
                                             GALGAS_semanticContext & ioArgument_ioContext,
                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                             const GALGAS_lstring constinArgument_inReceiverTypeName,
                                             const GALGAS_string constinArgument_inReceiverLLVMBaseTypeName,
                                             GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                             GALGAS_propertyList & ioArgument_ioPropertyList,
                                             GALGAS_propertyGetterMap & ioArgument_ioPropertyGetterMap,
                                             GALGAS_propertySetterMap & ioArgument_ioPropertySetterMap,
                                             GALGAS_sortedOperandIRList & ioArgument_sortedOperandIRList,
                                             GALGAS_constructorSignature & ioArgument_constructorSignature,
                                             GALGAS_string & ioArgument_ioConstructorKey,
                                             GALGAS_bool & ioArgument_canBeCopied,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lbigint var_explicitAlignment_15274 = GALGAS_lbigint::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 425)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 425))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 425)) ;
  GALGAS_bool var_alignmentDefined_15320 = GALGAS_bool (false) ;
  cEnumerator_propertyAttributeList enumerator_15378 (inObject.mProperty_mPropertyAttributeList, kENUMERATION_UP) ;
  while (enumerator_15378.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_15378.current_mAttributeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("align"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_15378.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 429)), GALGAS_string ("only the @align attribute is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 429)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_alignmentDefined_15320.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_15378.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 431)), GALGAS_string ("@align attribute already defined"), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 431)) ;
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsNotEqual, enumerator_15378.current_mAttributeValue (HERE).getter_bigint (HERE).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)).left_shift_operation (enumerator_15378.current_mAttributeValue (HERE).getter_bigint (HERE).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 434)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_15378.current_mAttributeValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 435)), GALGAS_string ("alignment should be a power of 2"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)) ;
          }
        }
        if (kBoolFalse == test_4) {
          var_explicitAlignment_15274 = enumerator_15378.current_mAttributeValue (HERE) ;
          var_alignmentDefined_15320 = GALGAS_bool (true) ;
        }
      }
    }
    enumerator_15378.gotoNextObject () ;
  }
  GALGAS_omnibusType temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, inObject.mProperty_mPropertyTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 444)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mPropertyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)) ;
  }
  GALGAS_omnibusType var_optionalPropertyType_15946 = temp_6 ;
  switch (inObject.mProperty_mPropertyKind.enumValue ()) {
  case GALGAS_propertyKindAST::kNotBuilt:
    break ;
  case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_17076 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (inObject.mProperty_mPropertyKind.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_initExpression = extractPtr_17076->mAssociatedValue0 ;
      GALGAS_objectIR var_expressionIR_16475 ;
      {
      routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_initExpression, inObject.mProperty_mPropertyName.getter_location (HERE), inObject.mProperty_mPropertyTypeName, var_expressionIR_16475, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 450)) ;
      }
      GALGAS_omnibusType var_actualPropertyType_16517 ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_15946.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("type-structure-declaration.galgas", 459)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_actualPropertyType_16517 = var_optionalPropertyType_15946 ;
        }
      }
      if (kBoolFalse == test_8) {
        var_actualPropertyType_16517 = extensionGetter_type (var_expressionIR_16475, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 462)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_16517.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 464)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 465)), var_actualPropertyType_16517.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 465)), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 465)) ;
        }
      }
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_16517.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 467)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 467)).boolEnum () ;
        if (kBoolTrue == test_11) {
          ioArgument_canBeCopied = GALGAS_bool (false) ;
        }
      }
      {
      ioArgument_ioPropertyGetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyGetterKind::constructor_constantProperty (extensionGetter_withType (var_expressionIR_16475, var_actualPropertyType_16517, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 473))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 470)) ;
      }
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_18344 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (inObject.mProperty_mPropertyKind.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_initExpression = extractPtr_18344->mAssociatedValue0 ;
      GALGAS_objectIR var_expressionIR_17400 ;
      {
      routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_initExpression, inObject.mProperty_mPropertyName.getter_location (HERE), inObject.mProperty_mPropertyTypeName, var_expressionIR_17400, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 476)) ;
      }
      GALGAS_omnibusType var_actualPropertyType_17442 ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_15946.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("type-structure-declaration.galgas", 485)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          var_actualPropertyType_17442 = var_optionalPropertyType_15946 ;
        }
      }
      if (kBoolFalse == test_12) {
        var_actualPropertyType_17442 = extensionGetter_type (var_expressionIR_17400, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 488)) ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_17442.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 490)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 490)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 491)), var_actualPropertyType_17442.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 491)), fixItArray14  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 491)) ;
        }
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_17442.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 493)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 493)).boolEnum () ;
        if (kBoolTrue == test_15) {
          ioArgument_canBeCopied = GALGAS_bool (false) ;
        }
      }
      GALGAS_uint var_propertyIndex_17865 = ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 496)) ;
      ioArgument_ioPropertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_actualPropertyType_17442  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 497)) ;
      {
      ioArgument_ioPropertyGetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyGetterKind::constructor_storedProperty (var_actualPropertyType_17442, var_propertyIndex_17865  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 498)) ;
      }
      {
      ioArgument_ioPropertySetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertySetterKind::constructor_storedProperty (var_actualPropertyType_17442, var_propertyIndex_17865  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 503)) ;
      }
      ioArgument_sortedOperandIRList.addAssign_operation (extensionGetter_withType (var_expressionIR_17400, var_actualPropertyType_17442, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 508)), var_propertyIndex_17865  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 508)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    {
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_15946.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 510)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 510)).boolEnum () ;
        if (kBoolTrue == test_16) {
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 511)), var_optionalPropertyType_15946.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 511)), fixItArray17  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 511)) ;
        }
      }
      GALGAS_uint var_propertyIndex_18569 = ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 513)) ;
      ioArgument_ioPropertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_15946  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 514)) ;
      {
      ioArgument_ioPropertyGetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyGetterKind::constructor_storedProperty (var_optionalPropertyType_15946, var_propertyIndex_18569  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 515)) ;
      }
      {
      ioArgument_ioPropertySetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertySetterKind::constructor_storedProperty (var_optionalPropertyType_15946, var_propertyIndex_18569  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 520)) ;
      }
      ioArgument_constructorSignature.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_15946, var_propertyIndex_18569  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 525)) ;
      ioArgument_ioConstructorKey.plusAssign_operation(GALGAS_string ("!").add_operation (inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 526)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
    {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_15946.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 528)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 528)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 529)), var_optionalPropertyType_15946.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 529)), fixItArray19  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 529)) ;
        }
      }
      GALGAS_uint var_propertyIndex_19325 = ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("type-structure-declaration.galgas", 531)) ;
      ioArgument_ioPropertyList.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_15946  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 532)) ;
      {
      ioArgument_ioPropertyGetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyGetterKind::constructor_storedProperty (var_optionalPropertyType_15946, var_propertyIndex_19325  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 533)) ;
      }
      ioArgument_constructorSignature.addAssign_operation (inObject.mProperty_mPropertyName.getter_string (HERE), var_optionalPropertyType_15946, var_propertyIndex_19325  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 538)) ;
      ioArgument_ioConstructorKey.plusAssign_operation(GALGAS_string ("!").add_operation (inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 539)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_20909 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (inObject.mProperty_mPropertyKind.unsafePointer ()) ;
      const GALGAS_instructionListAST extractedValue_instructionList = extractPtr_20909->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfInstructionList = extractPtr_20909->mAssociatedValue1 ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_15946.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 541)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 541)).boolEnum () ;
        if (kBoolTrue == test_20) {
          TC_Array <C_FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 542)), var_optionalPropertyType_15946.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 542)), fixItArray21  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 542)) ;
        }
      }
      GALGAS_string var_llvmRoutineName_19964 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 544)) ;
      GALGAS_routineLLVMNameDict var_modeDictionary_20049 = extensionGetter_routineLLVMDictionaryForFunction (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 545)), var_llvmRoutineName_19964, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 545)) ;
      {
      ioArgument_ioPropertyGetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertyGetterKind::constructor_computedProperty (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mPropertyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 550)), var_modeDictionary_20049  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 546)) ;
      }
      GALGAS_lstring var_functionLLVMName_20389 = GALGAS_lstring::constructor_new (var_llvmRoutineName_19964, inObject.mProperty_mPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 554)) ;
      ioArgument_ioDecoratedRoutineList.addAssign_operation (constinArgument_inReceiverTypeName, GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 560)), GALGAS_bool (false), GALGAS_routineKind::constructor_function (SOURCE_FILE ("type-structure-declaration.galgas", 562)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("type-structure-declaration.galgas", 565)), var_functionLLVMName_20389, GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 567)), GALGAS_bool (false), extractedValue_instructionList, extractedValue_endOfInstructionList, inObject.mProperty_mPropertyTypeName  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 558)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_22613 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (inObject.mProperty_mPropertyKind.unsafePointer ()) ;
      const GALGAS_instructionListAST extractedValue_writeInstructionList = extractPtr_22613->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfWriteInstructionList = extractPtr_22613->mAssociatedValue1 ;
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        test_22 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_15946.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 573)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 573)).boolEnum () ;
        if (kBoolTrue == test_22) {
          TC_Array <C_FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (inObject.mProperty_mPropertyName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 574)), var_optionalPropertyType_15946.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 574)), fixItArray23  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 574)) ;
        }
      }
      GALGAS_string var_llvmGetterRoutineName_21185 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 576)) ;
      GALGAS_routineLLVMNameDict var_getterModeDictionary_21276 = extensionGetter_routineLLVMDictionaryForFunction (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 577)), var_llvmGetterRoutineName_21185, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 577)) ;
      GALGAS_string var_llvmSetterRoutineName_21380 = function_setterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, inObject.mProperty_mPropertyName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 578)) ;
      GALGAS_routineLLVMNameDict var_setterModeDictionary_21471 = extensionGetter_routineLLVMDictionaryForFunction (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 579)), var_llvmSetterRoutineName_21380, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 579)) ;
      {
      ioArgument_ioPropertySetterMap.setter_insertKey (inObject.mProperty_mPropertyName, inObject.mProperty_mIsPublic, GALGAS_propertySetterKind::constructor_computedProperty (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), inObject.mProperty_mPropertyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 584)), var_getterModeDictionary_21276, var_setterModeDictionary_21471  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 580)) ;
      }
      GALGAS_lstring var_functionLLVMName_21883 = GALGAS_lstring::constructor_new (var_llvmSetterRoutineName_21380, inObject.mProperty_mPropertyName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 589)) ;
      GALGAS_routineFormalArgumentListAST temp_24 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 597)) ;
      temp_24.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-structure-declaration.galgas", 594)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 595)), inObject.mProperty_mPropertyTypeName, GALGAS_lstring::constructor_new (GALGAS_string ("newValue"), extractedValue_endOfWriteInstructionList  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 597))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 597)) ;
      GALGAS_routineFormalArgumentListAST var_formalArgumentList_22022 = temp_24 ;
      ioArgument_ioDecoratedRoutineList.addAssign_operation (constinArgument_inReceiverTypeName, GALGAS_mode::constructor_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 601)), GALGAS_bool (false), GALGAS_routineKind::constructor_function (SOURCE_FILE ("type-structure-declaration.galgas", 603)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("type-structure-declaration.galgas", 606)), var_functionLLVMName_21883, var_formalArgumentList_22022, GALGAS_bool (false), extractedValue_writeInstructionList, extractedValue_endOfWriteInstructionList, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 612))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 599)) ;
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Extension method '@controlRegisterDeclarationList-element buildControlRegisterMapForGroup'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildControlRegisterMapForGroup (const GALGAS_controlRegisterDeclarationList_2D_element inObject,
                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                      GALGAS_controlRegisterMap & ioArgument_ioControlRegisterMap,
                                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_registerType_19848 ;
  GALGAS_uint var_registerBitCount_19879 ;
  {
  routine_controlRegisterType (inObject.mProperty_mRegisterTypeName, ioArgument_ioContext, var_registerType_19848, var_registerBitCount_19879, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 492)) ;
  }
  GALGAS_controlRegisterFieldMap var_registerFieldMap_20105 ;
  GALGAS_sliceMap var_registerBitSliceMap_20134 ;
  GALGAS_controlRegisterFieldList var_controlRegisterFieldList_20168 ;
  {
  routine_buildControlRegisterSliceMap (inObject.mProperty_mRegisterBitSliceList, inObject.mProperty_mRegisterBitSliceListLocation, ioArgument_ioContext, var_registerType_19848, var_registerBitCount_19879, var_registerFieldMap_20105, var_registerBitSliceMap_20134, var_controlRegisterFieldList_20168, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 494)) ;
  }
  cEnumerator_controlRegisterNameListAST enumerator_20238 (inObject.mProperty_mRegisterArrayList, kENUMERATION_UP) ;
  while (enumerator_20238.hasCurrentObject ()) {
    GALGAS_objectIR var_addressOffsetExpressionResult_20586 ;
    {
    routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, enumerator_20238.current (HERE).getter_mRegisterOffset (HERE), enumerator_20238.current (HERE).getter_mRegisterOffsetLocation (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 512)), var_addressOffsetExpressionResult_20586, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 507)) ;
    }
    GALGAS_bigint var_registerAddressOffset_20626 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_addressOffsetExpressionResult_20586.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 516)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 516)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_20238.current (HERE).getter_mRegisterOffsetLocation (HERE), GALGAS_string ("control register address offset is not a static integer expression"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 517)) ;
        var_registerAddressOffset_20626.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_omnibusType joker_20910_1 ; // Joker input parameter
      var_addressOffsetExpressionResult_20586.method_literalInteger (joker_20910_1, var_registerAddressOffset_20626, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 521)) ;
    }
    GALGAS_bigint var_arraySize_20972 ;
    GALGAS_uint var_elementArraySize_20999 ;
    switch (enumerator_20238.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
        var_arraySize_20972 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 527)) ;
        var_elementArraySize_20999 = GALGAS_uint ((uint32_t) 0U) ;
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_22849 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_20238.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_arraySizeExpression = extractPtr_22849->mAssociatedValue0 ;
        const GALGAS_location extractedValue_arraySizeLocation = extractPtr_22849->mAssociatedValue1 ;
        const GALGAS_expressionAST extractedValue_arrayElementSizeExpression = extractPtr_22849->mAssociatedValue2 ;
        const GALGAS_location extractedValue_arrayElementSizeLocation = extractPtr_22849->mAssociatedValue3 ;
        GALGAS_objectIR var_sizeExpressionResult_21631 ;
        {
        routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_arraySizeExpression, extractedValue_arraySizeLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 537)), var_sizeExpressionResult_21631, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 532)) ;
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_sizeExpressionResult_21631.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 540)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 540)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register address is not a static integer expression"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 541)) ;
            var_arraySize_20972.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_2) {
          GALGAS_omnibusType joker_21863_1 ; // Joker input parameter
          var_sizeExpressionResult_21631.method_literalInteger (joker_21863_1, var_arraySize_20972, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 543)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsStrictInf, var_arraySize_20972.objectCompare (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 544)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 545)) ;
              var_arraySize_20972.drop () ; // Release error dropped variable
            }
          }
        }
        GALGAS_objectIR var_elementArraySizeExpressionResult_22463 ;
        {
        routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_arrayElementSizeExpression, extractedValue_arrayElementSizeLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 556)), var_elementArraySizeExpressionResult_22463, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 551)) ;
        }
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_elementArraySizeExpressionResult_22463.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 559)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 559)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_arrayElementSizeLocation, GALGAS_string ("element size is not a static integer expression"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 560)) ;
            var_elementArraySize_20999.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_6) {
          GALGAS_bigint var_elementArraySizeAsBigInt_22779 ;
          GALGAS_omnibusType joker_22741_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_22463.method_literalInteger (joker_22741_1, var_elementArraySizeAsBigInt_22779, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 564)) ;
          var_elementArraySize_20999 = var_elementArraySizeAsBigInt_22779.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 565)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioControlRegisterMap.setter_insertKey (enumerator_20238.current (HERE).getter_mRegisterName (HERE), var_registerType_19848, enumerator_20238.current (HERE).getter_mIsReadOnly (HERE), GALGAS_bool (false), var_registerBitSliceMap_20134, var_registerFieldMap_20105, var_registerAddressOffset_20626, var_controlRegisterFieldList_20168, var_registerBitCount_19879, var_arraySize_20972.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 578)), var_elementArraySize_20999, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 568)) ;
    }
    enumerator_20238.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension method '@globalSyncInstanceMapIR-element generateLLVM'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateLLVM (const GALGAS_globalSyncInstanceMapIR_2D_element inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalSyncInstance (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 162)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 162)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (inObject.mProperty_mInitialValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)).add_operation (extensionGetter_llvmValue (inObject.mProperty_mInitialValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 163)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Extension method '@driverListIR-element generateLLVMDriverVariableDefinition'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateLLVMDriverVariableDefinition (const GALGAS_driverListIR_2D_element inObject,
                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (inObject.mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 424)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 424)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 424)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) inObject.mProperty_mType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 425)).add_operation (GALGAS_string (" {"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 425)) ;
  cEnumerator_operandIRList enumerator_17773 (inObject.mProperty_mInitialValueList, kENUMERATION_UP) ;
  while (enumerator_17773.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_17773.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)).add_operation (extensionGetter_llvmValue (enumerator_17773.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 427)) ;
    if (enumerator_17773.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 428)) ;
    }
    enumerator_17773.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 430)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Extension method '@decoratedTaskList-element taskSemanticAnalysis'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_taskSemanticAnalysis (const GALGAS_decoratedTaskList_2D_element inObject,
                                           const GALGAS_semanticContext constinArgument_inContext,
                                           const GALGAS_uint constinArgument_inPriority,
                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_taskType_16396 ;
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (inObject.mProperty_mTaskName, var_taskType_16396, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 454)) ;
  GALGAS_bigint var_stackSize_16505 = inObject.mProperty_mStackSize.getter_bigint (HERE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_stackSize_16505.objectCompare (GALGAS_bigint ("64", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 457)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsNotEqual, var_stackSize_16505.modulo_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 457)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 457)))) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (inObject.mProperty_mStackSize.getter_location (SOURCE_FILE ("task-declaration.galgas", 458)), GALGAS_string ("stack size should be a multiple of 8, and >= 64"), fixItArray2  COMMA_SOURCE_FILE ("task-declaration.galgas", 458)) ;
    }
  }
  GALGAS_stringlist var_setupOrderedList_16815 ;
  {
  routine_analyzeOrderedTaskRoutines (inObject.mProperty_mTaskSetupListAST, var_setupOrderedList_16815, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 461)) ;
  }
  GALGAS_stringlist var_activateOrderedList_16981 ;
  {
  routine_analyzeOrderedTaskRoutines (inObject.mProperty_mTaskActivateListAST, var_activateOrderedList_16981, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 466)) ;
  }
  GALGAS_stringlist var_deactivateOrderedList_17153 ;
  {
  routine_analyzeOrderedTaskRoutines (inObject.mProperty_mTaskDeactivateListAST, var_deactivateOrderedList_17153, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 471)) ;
  }
  GALGAS_uint var_taskNameStringIndex_17346 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, inObject.mProperty_mTaskName.getter_string (HERE), var_taskNameStringIndex_17346, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 476)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mTaskMapIR.setter_insertKey (inObject.mProperty_mTaskName, var_taskType_16396, constinArgument_inPriority, inObject.mProperty_mStackSize.getter_bigint (HERE), var_setupOrderedList_16815, var_activateOrderedList_16981, var_deactivateOrderedList_17153, var_taskNameStringIndex_17346, inObject.mProperty_mAutoStart, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 478)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Extension method '@externFunctionDeclarationListAST-element enterExternProcInContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterExternProcInContext (const GALGAS_externFunctionDeclarationListAST_2D_element inObject,
                                               GALGAS_semanticContext & ioArgument_ioContext,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature var_signature_3497 ;
  {
  routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mProcFormalArgumentList, var_signature_3497, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 87)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_3617 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, inObject.mProperty_mReturnTypeName, var_returnTypeProxy_3617 COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 89)) ;
  }
  GALGAS_routineLLVMNameDict var_routineLLVMNameDict_3687 = extensionGetter_routineLLVMDictionaryForFunction (inObject.mProperty_mMode, inObject.mProperty_mRoutineNameForGeneration.getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 91)) ;
  GALGAS_lstring var_routineMangledName_3782 = extensionGetter_mangledName (var_signature_3497, GALGAS_string::makeEmptyString (), inObject.mProperty_mExternProcedureName, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 92)) ;
  {
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_3782, GALGAS_bool (true), var_signature_3497, var_returnTypeProxy_3617, var_routineLLVMNameDict_3687, GALGAS_bool (false), inObject.mProperty_mMode, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 93)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension method '@externProcedureMapIR-element llvmPrototypeGeneration'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_llvmPrototypeGeneration (const GALGAS_externProcedureMapIR_2D_element inObject,
                                              GALGAS_string & ioArgument_ioLLVMcode,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_procName_8423 = function_llvmNameForFunction (inObject.mProperty_lkey.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 215)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 216)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 217)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) inObject.mProperty_mReturnType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 219)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (var_procName_8423, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 221)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_8700 (inObject.mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8700.hasCurrentObject ()) {
    switch (enumerator_8700.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8700.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)).add_operation (enumerator_8700.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 226)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8700.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)).add_operation (function_llvmNameForLocalVariable (enumerator_8700.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 228)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8700.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)).add_operation (function_llvmNameForLocalVariable (enumerator_8700.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 230)) ;
      }
      break ;
    }
    if (enumerator_8700.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 233)) ;
    }
    enumerator_8700.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)).add_operation (GALGAS_string ("; declared by extern Omnibus function declaration\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 235)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Abstract extension method '@callInstructionAST baseGuardAnalyze'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_callInstructionAST_baseGuardAnalyze> gExtensionMethodTable_callInstructionAST_baseGuardAnalyze ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_baseGuardAnalyze (const int32_t inClassIndex,
                                            extensionMethodSignature_callInstructionAST_baseGuardAnalyze inMethod) {
  gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_callInstructionAST_baseGuardAnalyze (void) {
  gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_callInstructionAST_baseGuardAnalyze (NULL,
                                                                freeExtensionMethod_callInstructionAST_baseGuardAnalyze) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
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
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_callInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_callInstructionAST_baseGuardAnalyze f = NULL ;
    if (classIndex < gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.count ()) {
      f = gExtensionMethodTable_callInstructionAST_baseGuardAnalyze (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.count ()) {
          f = gExtensionMethodTable_callInstructionAST_baseGuardAnalyze (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_callInstructionAST_baseGuardAnalyze.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSelfType, constin_inRoutineAttributes, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, out_outConvenienceGuardGenerationIR, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension method '@decoratedRegularRoutineList-element semanticAnalysis'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_semanticAnalysis (const GALGAS_decoratedRegularRoutineList_2D_element inObject,
                                       const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_omnibusType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mProperty_receiverTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 49)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_receiverTypeName, inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 50)).getter_type (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 50)) ;
  }
  GALGAS_omnibusType var_receiverType_2012 = temp_0 ;
  GALGAS_universalValuedObjectMap var_universalMap_2201 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_2201, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 54)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_2201, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 55)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, inObject.mProperty_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_resultVarName_2386 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 58)), inObject.mProperty_returnTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 58)) ;
      GALGAS_omnibusType var_resultType_2478 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 59)).getter_type (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 59)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_2201, var_resultVarName_2386, var_resultType_2478, var_resultVarName_2386, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("regular-routine-analysis.galgas", 60)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 60)) ;
      }
    }
  }
  GALGAS_routineFormalArgumentListIR var_formalArguments_2739 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("regular-routine-analysis.galgas", 63)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, inObject.mProperty_formalArgumentList, var_universalMap_2201, var_formalArguments_2739, inObject.mProperty_warningOnUnusedArgs, inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 64)) ;
  }
  GALGAS_allocaList var_allocaList_2962 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("regular-routine-analysis.galgas", 72)) ;
  GALGAS_instructionListIR var_instructionGenerationList_3014 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("regular-routine-analysis.galgas", 73)) ;
  extensionMethod_analyzeRoutineInstructionList (inObject.mProperty_mInstructionList, var_receiverType_2012, inObject.mProperty_routineAttributes, constinArgument_inContext, inObject.mProperty_mode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_2201, var_allocaList_2962, var_instructionGenerationList_3014, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 74)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_2201, var_instructionGenerationList_3014, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 86)) ;
  {
  extensionSetter_closeBranch (var_universalMap_2201, inObject.mProperty_mEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 87)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_2201, inObject.mProperty_mEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 88)) ;
  }
  GALGAS_omnibusType temp_3 ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, inObject.mProperty_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = function_voidType (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 91)) ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 93)).getter_type (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 93)) ;
  }
  GALGAS_omnibusType var_returnType_3623 = temp_3 ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_regularRoutineIR::constructor_new (inObject.mProperty_routineMangledLLVMName, inObject.mProperty_isRequired, inObject.mProperty_warnIfUnused, var_receiverType_2012, var_formalArguments_2739, var_allocaList_2962, var_instructionGenerationList_3014, inObject.mProperty_exportedRoutine, inObject.mProperty_routineKind, var_returnType_3623, GALGAS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 95))  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 95)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_addressofControlRegisterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofControlRegisterAST * p = (const cPtr_addressofControlRegisterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofControlRegisterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterLValue.objectCompare (p->mProperty_mControlRegisterLValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_addressofControlRegisterAST::objectCompare (const GALGAS_addressofControlRegisterAST & inOperand) const {
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

GALGAS_addressofControlRegisterAST::GALGAS_addressofControlRegisterAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofControlRegisterAST::GALGAS_addressofControlRegisterAST (const cPtr_addressofControlRegisterAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofControlRegisterAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofControlRegisterAST GALGAS_addressofControlRegisterAST::constructor_new (const GALGAS_controlRegisterLValueAST & inAttribute_mControlRegisterLValue
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_addressofControlRegisterAST result ;
  if (inAttribute_mControlRegisterLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofControlRegisterAST (inAttribute_mControlRegisterLValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST GALGAS_addressofControlRegisterAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterLValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofControlRegisterAST * p = (const cPtr_addressofControlRegisterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofControlRegisterAST) ;
    result = p->mProperty_mControlRegisterLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST cPtr_addressofControlRegisterAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @addressofControlRegisterAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_addressofControlRegisterAST::cPtr_addressofControlRegisterAST (const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue
                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mControlRegisterLValue (in_mControlRegisterLValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_addressofControlRegisterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST ;
}

void cPtr_addressofControlRegisterAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@addressofControlRegisterAST:" ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_addressofControlRegisterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofControlRegisterAST (mProperty_mControlRegisterLValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @addressofControlRegisterAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofControlRegisterAST ("addressofControlRegisterAST",
                                                    & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_addressofControlRegisterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_addressofControlRegisterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofControlRegisterAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_addressofExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofExpressionAST * p = (const cPtr_addressofExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_addressofExpressionAST::objectCompare (const GALGAS_addressofExpressionAST & inOperand) const {
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

GALGAS_addressofExpressionAST::GALGAS_addressofExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofExpressionAST::GALGAS_addressofExpressionAST (const cPtr_addressofExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofExpressionAST GALGAS_addressofExpressionAST::constructor_new (const GALGAS_LValueAST & inAttribute_mLValue
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_addressofExpressionAST result ;
  if (inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofExpressionAST (inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST GALGAS_addressofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofExpressionAST * p = (const cPtr_addressofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofExpressionAST) ;
    result = p->mProperty_mLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST cPtr_addressofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @addressofExpressionAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_addressofExpressionAST::cPtr_addressofExpressionAST (const GALGAS_LValueAST & in_mLValue
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLValue (in_mLValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_addressofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

void cPtr_addressofExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@addressofExpressionAST:" ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_addressofExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofExpressionAST (mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @addressofExpressionAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofExpressionAST ("addressofExpressionAST",
                                               & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_addressofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_addressofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_addressofInstructionIR::objectCompare (const GALGAS_addressofInstructionIR & inOperand) const {
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

GALGAS_addressofInstructionIR::GALGAS_addressofInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofInstructionIR::GALGAS_addressofInstructionIR (const cPtr_addressofInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofInstructionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_addressofInstructionIR GALGAS_addressofInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                              const GALGAS_LValueRepresentation & inAttribute_mLValue
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_addressofInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofInstructionIR (inAttribute_mTarget, inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_addressofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofInstructionIR * p = (const cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_addressofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation GALGAS_addressofInstructionIR::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueRepresentation result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofInstructionIR * p = (const cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    result = p->mProperty_mLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation cPtr_addressofInstructionIR::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @addressofInstructionIR class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_addressofInstructionIR::cPtr_addressofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                          const GALGAS_LValueRepresentation & in_mLValue
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mLValue (in_mLValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_addressofInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofInstructionIR (mProperty_mTarget, mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @addressofInstructionIR type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofInstructionIR ("addressofInstructionIR",
                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_addressofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_addressofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofInstructionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_intermediateCodeStruct::~ GALGAS_intermediateCodeStruct (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_new (const GALGAS_staticEntityMap & inOperand0,
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
                                                                              const GALGAS_routineListIR & inOperand13 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    result = GALGAS_intermediateCodeStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_intermediateCodeStruct::isValid (void) const {
  return mProperty_mStaticEntityMap.isValid () && mProperty_mInterruptMapIR.isValid () && mProperty_mExternProcedureMapIR.isValid () && mProperty_mPanicSetupListIR.isValid () && mProperty_mPanicLoopListIR.isValid () && mProperty_mTaskMapIR.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mMaxBranchOfOnInstructions.isValid () && mProperty_mTargetParameters.isValid () && mProperty_mDriverList.isValid () && mProperty_mStaticArrayMapForIntermediate.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mControlRegisterGroupArrayList.isValid () && mProperty_mRoutineListIR.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticEntityMap GALGAS_intermediateCodeStruct::getter_mStaticEntityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticEntityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptMapIR GALGAS_intermediateCodeStruct::getter_mInterruptMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externProcedureMapIR GALGAS_intermediateCodeStruct::getter_mExternProcedureMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternProcedureMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicSortedListIR GALGAS_intermediateCodeStruct::getter_mPanicSetupListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicSortedListIR GALGAS_intermediateCodeStruct::getter_mPanicLoopListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLoopListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_taskMapIR GALGAS_intermediateCodeStruct::getter_mTaskMapIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_intermediateCodeStruct::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalTaskVariableList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_intermediateCodeStruct::getter_mMaxBranchOfOnInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMaxBranchOfOnInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_targetParameters GALGAS_intermediateCodeStruct::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetParameters ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR GALGAS_intermediateCodeStruct::getter_mDriverList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDriverList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListInvokedFunctionSetMap GALGAS_intermediateCodeStruct::getter_mStaticArrayMapForIntermediate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticArrayMapForIntermediate ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR GALGAS_intermediateCodeStruct::getter_mGlobalSyncInstanceMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalSyncInstanceMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList GALGAS_intermediateCodeStruct::getter_mControlRegisterGroupArrayList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterGroupArrayList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_routineListIR GALGAS_intermediateCodeStruct::getter_mRoutineListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineListIR ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @intermediateCodeStruct type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_intermediateCodeStruct ("intermediateCodeStruct",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_intermediateCodeStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_intermediateCodeStruct ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_intermediateCodeStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_intermediateCodeStruct (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_StringListCommandLineOption gOption_omnibus_5F_options_pathList ("omnibus_options",
                                         "pathList",
                                         0,
                                         "path",
                                         "Search pathes for source files") ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_BoolCommandLineOption gOption_omnibus_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing ("omnibus_option_not_appearing_in_cocoa",
                                         "performFlashing",
                                         102,
                                         "flash-target",
                                         "After successful compilation, flash target") ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Once function 'configurationNodeNameForPrecedenceGraph'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_configurationNodeNameForPrecedenceGraph (C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("config") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = false ;
static GALGAS_string gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_configurationNodeNameForPrecedenceGraph (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph) {
    gOnceFunctionResult_configurationNodeNameForPrecedenceGraph = onceFunction_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = true ;
  }
  return gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph (void) {
  gOnceFunctionResult_configurationNodeNameForPrecedenceGraph.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_configurationNodeNameForPrecedenceGraph (NULL,
                                                                                     releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_configurationNodeNameForPrecedenceGraph [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_configurationNodeNameForPrecedenceGraph (C_Compiler * inCompiler,
                                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                                        const GALGAS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  return function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_configurationNodeNameForPrecedenceGraph ("configurationNodeNameForPrecedenceGraph",
                                                                                         functionWithGenericHeader_configurationNodeNameForPrecedenceGraph,
                                                                                         & kTypeDescriptor_GALGAS_string,
                                                                                         0,
                                                                                         functionArgs_configurationNodeNameForPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Once function 'isrSlotTypeName'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_isrSlotTypeName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("ISRSlot") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_isrSlotTypeName = false ;
static GALGAS_string gOnceFunctionResult_isrSlotTypeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_isrSlotTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_isrSlotTypeName) {
    gOnceFunctionResult_isrSlotTypeName = onceFunction_isrSlotTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_isrSlotTypeName = true ;
  }
  return gOnceFunctionResult_isrSlotTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_isrSlotTypeName (void) {
  gOnceFunctionResult_isrSlotTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_isrSlotTypeName (NULL,
                                                             releaseOnceFunctionResult_isrSlotTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_isrSlotTypeName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_isrSlotTypeName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_isrSlotTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_isrSlotTypeName ("isrSlotTypeName",
                                                                 functionWithGenericHeader_isrSlotTypeName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_isrSlotTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@configurationDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  GALGAS_lstring var_rootNode_11178 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 312)), object->mProperty_mPanicCodeTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 312)) ;
  {
  const GALGAS_configurationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_11178, temp_0, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 313)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11178, object->mProperty_mPanicCodeTypeName COMMA_SOURCE_FILE ("configuration.galgas", 314)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11178, object->mProperty_mPanicLineTypeName COMMA_SOURCE_FILE ("configuration.galgas", 315)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                               extensionMethod_configurationDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_configurationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@configurationDeclarationAST locationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_configurationDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  result_outLocation = object->mProperty_mPanicCodeTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_configurationDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                                  extensionGetter_configurationDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_configurationDeclarationAST_locationForErrorSignaling (defineExtensionGetter_configurationDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension getter '@configurationDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 327)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                                           extensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_configurationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@configurationDeclarationAST enterInContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_configurationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  const cPtr_configurationDeclarationAST * object = (const cPtr_configurationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_configurationDeclarationAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTargetParameters.getter_mConfigurationLocation (HERE), GALGAS_string ("duplicate configuration"), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 346)) ;
    }
  }
  ioArgument_ioContext.mProperty_mTargetParameters = object->mProperty_mTargetParameters ;
  GALGAS_omnibusType var_panicCodeType_13311 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mPanicCodeTypeName, var_panicCodeType_13311, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 350)) ;
  ioArgument_ioContext.mProperty_mPanicCodeType = var_panicCodeType_13311 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("configuration.galgas", 355)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_bool var_unsigned_13480 ;
      GALGAS_bigint joker_13455_2 ; // Joker input parameter
      GALGAS_bigint joker_13455_1 ; // Joker input parameter
      GALGAS_uint joker_13482_1 ; // Joker input parameter
      ioArgument_ioContext.getter_mPanicCodeType (HERE).getter_kind (HERE).method_integer (joker_13455_2, joker_13455_1, var_unsigned_13480, joker_13482_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 356)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_unsigned_13480.operator_not (SOURCE_FILE ("configuration.galgas", 357)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 358)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray4  COMMA_SOURCE_FILE ("configuration.galgas", 358)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicCodeTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 361)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray5  COMMA_SOURCE_FILE ("configuration.galgas", 361)) ;
  }
  GALGAS_omnibusType var_panicLineType_13799 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mPanicLineTypeName, var_panicLineType_13799, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 364)) ;
  ioArgument_ioContext.mProperty_mPanicLineType = var_panicLineType_13799 ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = ioArgument_ioContext.getter_mPanicLineType (HERE).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("configuration.galgas", 369)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_bool var_unsigned_13968 ;
      GALGAS_bigint joker_13943_2 ; // Joker input parameter
      GALGAS_bigint joker_13943_1 ; // Joker input parameter
      GALGAS_uint joker_13970_1 ; // Joker input parameter
      ioArgument_ioContext.getter_mPanicLineType (HERE).getter_kind (HERE).method_integer (joker_13943_2, joker_13943_1, var_unsigned_13968, joker_13970_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 370)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_unsigned_13968.operator_not (SOURCE_FILE ("configuration.galgas", 371)).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 372)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray8  COMMA_SOURCE_FILE ("configuration.galgas", 372)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_6) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mPanicLineTypeName.getter_location (SOURCE_FILE ("configuration.galgas", 375)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray9  COMMA_SOURCE_FILE ("configuration.galgas", 375)) ;
  }
  GALGAS_stringset var_panicCodeSet_14260 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("configuration.galgas", 378)) ;
  cEnumerator_interruptionConfigurationList enumerator_14322 (object->mProperty_mInterruptionConfigurationList, kENUMERATION_UP) ;
  while (enumerator_14322.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_14322.current_mInterruptName (HERE), enumerator_14322.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 380)) ;
    }
    switch (enumerator_14322.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GALGAS_interruptionPanicCode::kNotBuilt:
      break ;
    case GALGAS_interruptionPanicCode::kEnum_noCode:
      {
      }
      break ;
    case GALGAS_interruptionPanicCode::kEnum_code:
      {
        const cEnumAssociatedValues_interruptionPanicCode_code * extractPtr_14615 = (const cEnumAssociatedValues_interruptionPanicCode_code *) (enumerator_14322.current_mInterruptionPanicCode (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_value = extractPtr_14615->mAssociatedValue0 ;
        GALGAS_string var_s_14468 = extractedValue_value.getter_bigint (HERE).getter_string (SOURCE_FILE ("configuration.galgas", 384)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = var_panicCodeSet_14260.getter_hasKey (var_s_14468 COMMA_SOURCE_FILE ("configuration.galgas", 385)).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_value.getter_location (SOURCE_FILE ("configuration.galgas", 386)), GALGAS_string ("duplicate interrupt code"), fixItArray11  COMMA_SOURCE_FILE ("configuration.galgas", 386)) ;
          }
        }
        var_panicCodeSet_14260.addAssign_operation (var_s_14468  COMMA_SOURCE_FILE ("configuration.galgas", 388)) ;
      }
      break ;
    }
    enumerator_14322.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_configurationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_configurationDeclarationAST.mSlotID,
                                       extensionMethod_configurationDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_configurationDeclarationAST_enterInContext (defineExtensionMethod_configurationDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromAST'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  var_s_559.plusAssign_operation(constinArgument_inRoutineName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 20)) ;
  var_s_559.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 21)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_775 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_775.hasCurrentObject ()) {
    var_s_559.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_775.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (enumerator_775.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 23)) ;
    enumerator_775.gotoNextObject () ;
  }
  var_s_559.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 25)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_559, constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 26)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromAST ("routineMangledNameFromAST",
                                                                           functionWithGenericHeader_routineMangledNameFromAST,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           3,
                                                                           functionArgs_routineMangledNameFromAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromCall'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_routineMangledNameFromCall (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                    const GALGAS_lstring & constinArgument_inRoutineName,
                                                    const GALGAS_effectiveArgumentListAST & constinArgument_inEffectiveParameterList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_1276 = GALGAS_string ("func.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_1276.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 37)) ;
    }
  }
  var_s_1276.plusAssign_operation(constinArgument_inRoutineName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 39)) ;
  var_s_1276.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 40)) ;
  cEnumerator_effectiveArgumentListAST enumerator_1457 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_1457.hasCurrentObject ()) {
    var_s_1276.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_1457.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (enumerator_1457.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 42)) ;
    enumerator_1457.gotoNextObject () ;
  }
  var_s_1276.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 44)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_1276, constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 45)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromCall [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_effectiveArgumentListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromCall ("routineMangledNameFromCall",
                                                                            functionWithGenericHeader_routineMangledNameFromCall,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            3,
                                                                            functionArgs_routineMangledNameFromCall) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@compileTimeDeclarationBarrierAST enterInPrecedenceGraph'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeDeclarationBarrierAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compileTimeDeclarationBarrierAST * object = (const cPtr_compileTimeDeclarationBarrierAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeDeclarationBarrierAST) ;
  {
  const GALGAS_compileTimeDeclarationBarrierAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)), temp_0, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeDeclarationBarrierAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST.mSlotID,
                                               extensionMethod_compileTimeDeclarationBarrierAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeDeclarationBarrierAST_enterInPrecedenceGraph (defineExtensionMethod_compileTimeDeclarationBarrierAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension getter '@compileTimeDeclarationBarrierAST keyRepresentationForErrorSignaling'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_compileTimeDeclarationBarrierAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 44)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 44)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_compileTimeDeclarationBarrierAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST.mSlotID,
                                                           extensionGetter_compileTimeDeclarationBarrierAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_compileTimeDeclarationBarrierAST_keyRepresentationForErrorSignaling (defineExtensionGetter_compileTimeDeclarationBarrierAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@compileTimeDeclarationBarrierAST locationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_compileTimeDeclarationBarrierAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("ordered-declaration-list.galgas", 50)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_compileTimeDeclarationBarrierAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST.mSlotID,
                                                  extensionGetter_compileTimeDeclarationBarrierAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_compileTimeDeclarationBarrierAST_locationForErrorSignaling (defineExtensionGetter_compileTimeDeclarationBarrierAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@compileTimeDeclarationBarrierAST enterInContext'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeDeclarationBarrierAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                             GALGAS_semanticContext & /* ioArgument_ioContext */,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeDeclarationBarrierAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST.mSlotID,
                                       extensionMethod_compileTimeDeclarationBarrierAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeDeclarationBarrierAST_enterInContext (defineExtensionMethod_compileTimeDeclarationBarrierAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'appendUnsignedOperatorsTo'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_appendUnsignedOperatorsTo (const GALGAS_string constinArgument_inTypeName,
                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractDeclarationAST var_declaration_3760 = function_buildAssignmentOperatorDeclaration (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 71)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_3760.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 72)) ;
  var_declaration_3760 = function_buildAssignmentOperatorFrom_5F_ctInt (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 74)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_3760.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 75)) ;
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("ordered-declaration-list.galgas", 77)), GALGAS_string ("icmp eq"), constinArgument_inTypeName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)), ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("ordered-declaration-list.galgas", 79)), GALGAS_string ("icmp ule"), constinArgument_inTypeName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 79)), ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 79)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("ordered-declaration-list.galgas", 81)), GALGAS_string ("icmp ult"), constinArgument_inTypeName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)), ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_addOp (SOURCE_FILE ("ordered-declaration-list.galgas", 83)), GALGAS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_addOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 84)), GALGAS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 84)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_subOp (SOURCE_FILE ("ordered-declaration-list.galgas", 86)), GALGAS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_subOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 87)), GALGAS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas", 89)), GALGAS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 89)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_mulOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 90)), GALGAS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 90)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_divOp (SOURCE_FILE ("ordered-declaration-list.galgas", 92)), GALGAS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 92)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 93)), GALGAS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 93)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_modOp (SOURCE_FILE ("ordered-declaration-list.galgas", 95)), GALGAS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 95)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 96)), GALGAS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 96)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("ordered-declaration-list.galgas", 98)), GALGAS_string ("or"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 98)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_bitWiseAndOp (SOURCE_FILE ("ordered-declaration-list.galgas", 100)), GALGAS_string ("and"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 100)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_leftShiftOp (SOURCE_FILE ("ordered-declaration-list.galgas", 102)), GALGAS_string ("shl"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 102)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_rightShiftOp (SOURCE_FILE ("ordered-declaration-list.galgas", 104)), GALGAS_string ("lshr"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 104)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 106)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'appendSignedOperatorsTo'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_appendSignedOperatorsTo (const GALGAS_string constinArgument_inTypeName,
                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractDeclarationAST var_declaration_6230 = function_buildAssignmentOperatorDeclaration (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 113)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_6230.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 114)) ;
  var_declaration_6230 = function_buildAssignmentOperatorFrom_5F_ctInt (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 116)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_6230.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 117)) ;
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("ordered-declaration-list.galgas", 119)), GALGAS_string ("icmp eq"), constinArgument_inTypeName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 119)), ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 119)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("ordered-declaration-list.galgas", 121)), GALGAS_string ("icmp sle"), constinArgument_inTypeName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 121)), ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 121)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("ordered-declaration-list.galgas", 123)), GALGAS_string ("icmp slt"), constinArgument_inTypeName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 123)), ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 123)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_addOp (SOURCE_FILE ("ordered-declaration-list.galgas", 125)), GALGAS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 125)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_addOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 126)), GALGAS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 126)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_subOp (SOURCE_FILE ("ordered-declaration-list.galgas", 128)), GALGAS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 128)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_subOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 129)), GALGAS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 129)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas", 131)), GALGAS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 131)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_mulOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 132)), GALGAS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 132)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_modOp (SOURCE_FILE ("ordered-declaration-list.galgas", 134)), GALGAS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 134)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 135)), GALGAS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 135)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_divOp (SOURCE_FILE ("ordered-declaration-list.galgas", 137)), GALGAS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 137)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 138)), GALGAS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 138)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("ordered-declaration-list.galgas", 140)), GALGAS_string ("or"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 140)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_bitWiseAndOp (SOURCE_FILE ("ordered-declaration-list.galgas", 142)), GALGAS_string ("and"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 142)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_leftShiftOp (SOURCE_FILE ("ordered-declaration-list.galgas", 144)), GALGAS_string ("shl"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 144)) ;
  }
  {
  routine_appendInfixOperatorDeclaration (GALGAS_omnibusInfixOperator::constructor_rightShiftOp (SOURCE_FILE ("ordered-declaration-list.galgas", 146)), GALGAS_string ("ashr"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 146)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_minus (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 148)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildOrderedDeclarationList (const GALGAS_ast constinArgument_inAST,
                                          const GALGAS_string constinArgument_inSourceFile,
                                          const GALGAS_location constinArgument_inEndOfSourceFile,
                                          GALGAS_declarationListAST & outArgument_outSortedDeclarationListAST,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSortedDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph_8840 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 160)) ;
  cEnumerator_declarationListAST enumerator_8892 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8892.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) enumerator_8892.current_mDeclaration (HERE).ptr (), var_precedenceGraph_8840, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 162)) ;
    enumerator_8892.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mExternFunctionListAST (HERE), var_precedenceGraph_8840, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 165)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mTaskListAST (HERE), var_precedenceGraph_8840, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 166)) ;
  GALGAS_uint var_addintegerTypeCount_9297 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_stringlist enumerator_9352 (var_precedenceGraph_8840.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 169)), kENUMERATION_UP) ;
  while (enumerator_9352.hasCurrentObject ()) {
    GALGAS_stringlist var_split_9369 = enumerator_9352.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 170)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GALGAS_bool test_1 = GALGAS_bool (kIsEqual, var_split_9369.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 171)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = var_split_9369.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 171)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 171)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, var_split_9369.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 172)).objectCompare (GALGAS_string ("u"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_uint var_n_9563 = var_split_9369.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 173)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 173)) ;
            GALGAS_integerDeclarationAST var_declaration_9638 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (false), var_n_9563  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 174)) ;
            callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_9638.ptr (), var_precedenceGraph_8840, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 175)) ;
            {
            routine_appendUnsignedOperatorsTo (enumerator_9352.current_mValue (HERE), var_precedenceGraph_8840, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 177)) ;
            }
            var_addintegerTypeCount_9297.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 179)) ;
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsEqual, var_split_9369.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 180)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_uint var_n_9956 = var_split_9369.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 181)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 181)) ;
              GALGAS_integerDeclarationAST var_declaration_10031 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (true), var_n_9956  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 182)) ;
              callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_10031.ptr (), var_precedenceGraph_8840, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 183)) ;
              {
              routine_appendSignedOperatorsTo (enumerator_9352.current_mValue (HERE), var_precedenceGraph_8840, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 185)) ;
              }
              var_addintegerTypeCount_9297.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 187)) ;
            }
          }
        }
      }
    }
    enumerator_9352.gotoNextObject () ;
  }
  GALGAS_compileTimeDeclarationBarrierAST var_compileTimeDeclarationBarrierAST_10416 = GALGAS_compileTimeDeclarationBarrierAST::constructor_new (SOURCE_FILE ("ordered-declaration-list.galgas", 192)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_compileTimeDeclarationBarrierAST *) var_compileTimeDeclarationBarrierAST_10416.ptr (), var_precedenceGraph_8840, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 193)) ;
  GALGAS_abstractDeclarationAST var_boolAssignmentOperatorDeclaration_10641 = function_buildAssignmentOperatorDeclaration (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 195)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_boolAssignmentOperatorDeclaration_10641.ptr (), var_precedenceGraph_8840, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 196)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool test_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 198)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.getter_value ()) ;
    }
    test_4 = test_5.boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->printMessage (GALGAS_string ("    Added ").add_operation (var_addintegerTypeCount_9297.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 199)).add_operation (GALGAS_string (" integer types\n"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 199))  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 199)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    GALGAS_bool test_7 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 202)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_7.boolEnum ()) {
      test_7 = GALGAS_bool (gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile.getter_value ()) ;
    }
    test_6 = test_7.boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string var_s_11173 = var_precedenceGraph_8840.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 203)) ;
      GALGAS_string var_filePath_11219 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 204)) ;
      GALGAS_bool joker_11317 ; // Joker input parameter
      var_s_11173.method_writeToFileWhenDifferentContents (var_filePath_11219, joker_11317, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 205)) ;
    }
  }
  outArgument_outSortedDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 208)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_8840.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 209)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      cEnumerator_lstringlist enumerator_11545 (var_precedenceGraph_8840.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 210)), kENUMERATION_UP) ;
      while (enumerator_11545.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_11545.current_mValue (HERE).getter_location (SOURCE_FILE ("ordered-declaration-list.galgas", 211)), enumerator_11545.current_mValue (HERE).getter_string (HERE).add_operation (GALGAS_string (" is not defined in declaration dependency graph"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 211)), fixItArray9  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 211)) ;
        enumerator_11545.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_11797 ;
    GALGAS_lstringlist joker_11730 ; // Joker input parameter
    GALGAS_lstringlist joker_11805 ; // Joker input parameter
    var_precedenceGraph_8840.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_11730, var_unsortedSemanticDeclarationListAST_11797, joker_11805, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 214)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_11797.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 220)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string var_s_11884 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_11797.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 222)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 221)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 222)) ;
        cEnumerator_declarationListAST enumerator_12098 (var_unsortedSemanticDeclarationListAST_11797, kENUMERATION_UP) ;
        while (enumerator_12098.hasCurrentObject ()) {
          var_s_11884.plusAssign_operation(GALGAS_string ("\n"
            "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_12098.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 225)) ;
          enumerator_12098.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_11884, fixItArray11  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 227)) ;
        cEnumerator_declarationListAST enumerator_12270 (var_unsortedSemanticDeclarationListAST_11797, kENUMERATION_UP) ;
        while (enumerator_12270.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (callExtensionGetter_locationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_12270.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 229)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_12270.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 229)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 229)), fixItArray12  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 229)) ;
          enumerator_12270.gotoNextObject () ;
        }
      }
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 185)) ;
  outArgument_outDecoratedDeclarationList = GALGAS_declarationDecorationList::constructor_emptyList (SOURCE_FILE ("context.galgas", 186)) ;
  outArgument_outDecoratedRoutineList = GALGAS_decoratedRegularRoutineList::constructor_emptyList (SOURCE_FILE ("context.galgas", 187)) ;
  outArgument_outRoutineListIR = GALGAS_routineListIR::constructor_emptyList (SOURCE_FILE ("context.galgas", 188)) ;
  outArgument_outUserLLVMTypeDefinitionListIR = GALGAS_userLLVMTypeDefinitionListIR::constructor_emptyList (SOURCE_FILE ("context.galgas", 189)) ;
  cEnumerator_requiredFunctionDeclarationListAST enumerator_7691 (constinArgument_inAST.getter_mRequiredFunctionListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_7691.hasCurrentObject ()) {
    GALGAS_lstring var_procedureMangledName_7723 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_7691.current (HERE).getter_mName (HERE), enumerator_7691.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 192)) ;
    outArgument_outSemanticContext.mProperty_mRequiredRoutineSet.addAssign_operation (var_procedureMangledName_7723.getter_string (HERE)  COMMA_SOURCE_FILE ("context.galgas", 197)) ;
    enumerator_7691.gotoNextObject () ;
  }
  extensionMethod_enterExternProcInContext (constinArgument_inAST.getter_mExternFunctionListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 199)) ;
  GALGAS_controlRegisterUserAccesMapAST var_controlRegisterUserAccesMapAST_8054 = constinArgument_inAST.getter_mControlRegisterUserAccesMapAST (HERE) ;
  cEnumerator_declarationListAST enumerator_8143 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8143.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclarationAST *) enumerator_8143.current_mDeclaration (HERE).ptr (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticListValueMap, ioArgument_ioStaticEntityMap, var_controlRegisterUserAccesMapAST_8054, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 205)) ;
    enumerator_8143.gotoNextObject () ;
  }
  cEnumerator_controlRegisterUserAccesMapAST enumerator_8633 (var_controlRegisterUserAccesMapAST_8054, kENUMERATION_UP) ;
  while (enumerator_8633.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (enumerator_8633.current_lkey (HERE).getter_location (SOURCE_FILE ("context.galgas", 218)), GALGAS_string ("this control register is not defined"), fixItArray0  COMMA_SOURCE_FILE ("context.galgas", 218)) ;
    enumerator_8633.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.getter_mGlobalConstantMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 221)) ;
  }
  {
  routine_buildTypeMapHTMLFile (outArgument_outSemanticContext.getter_mTypeMap (HERE), outArgument_outSemanticContext.getter_mRoutineMap (HERE), outArgument_outSemanticContext.getter_mInfixOperatorMap (HERE), outArgument_outSemanticContext.getter_mPrefixOperatorMap (HERE), outArgument_outSemanticContext.getter_mAssignmentOperatorMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 226)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.getter_mControlRegisterGroupMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 235)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mTaskListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticEntityMap, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 240)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'combineTypeNamesForInfixOperator'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_combineTypeNamesForInfixOperator (const GALGAS_string & constinArgument_inLeftTypeName,
                                                          const GALGAS_string & constinArgument_inRightTypeName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = constinArgument_inLeftTypeName.add_operation (GALGAS_string (","), inCompiler COMMA_SOURCE_FILE ("context.galgas", 253)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 253)).getter_nowhere (SOURCE_FILE ("context.galgas", 253)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_combineTypeNamesForInfixOperator [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_combineTypeNamesForInfixOperator (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_combineTypeNamesForInfixOperator (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_combineTypeNamesForInfixOperator ("combineTypeNamesForInfixOperator",
                                                                                  functionWithGenericHeader_combineTypeNamesForInfixOperator,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_combineTypeNamesForInfixOperator) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Once function 'compileTimeIntegerType'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_omnibusType onceFunction_compileTimeIntegerType (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 172)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 173)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 174)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 175)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 176)), GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 177)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 177)) COMMA_SOURCE_FILE ("types.galgas", 177)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 178)), GALGAS_typeKind::constructor_compileTimeInteger (SOURCE_FILE ("types.galgas", 179)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 171)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_compileTimeIntegerType = false ;
static GALGAS_omnibusType gOnceFunctionResult_compileTimeIntegerType ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType function_compileTimeIntegerType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeIntegerType) {
    gOnceFunctionResult_compileTimeIntegerType = onceFunction_compileTimeIntegerType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeIntegerType = true ;
  }
  return gOnceFunctionResult_compileTimeIntegerType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_compileTimeIntegerType (void) {
  gOnceFunctionResult_compileTimeIntegerType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_compileTimeIntegerType (NULL,
                                                                    releaseOnceFunctionResult_compileTimeIntegerType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_compileTimeIntegerType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_compileTimeIntegerType (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_compileTimeIntegerType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_compileTimeIntegerType ("compileTimeIntegerType",
                                                                        functionWithGenericHeader_compileTimeIntegerType,
                                                                        & kTypeDescriptor_GALGAS_omnibusType,
                                                                        0,
                                                                        functionArgs_compileTimeIntegerType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Once function 'compileTimeBoolType'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_omnibusType onceFunction_compileTimeBoolType (C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 188)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 189)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 190)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 191)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 192)), GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 194)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 194)) COMMA_SOURCE_FILE ("types.galgas", 194)), function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 195)), GALGAS_typeKind::constructor_compileTimeBool (SOURCE_FILE ("types.galgas", 196)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 187)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_compileTimeBoolType = false ;
static GALGAS_omnibusType gOnceFunctionResult_compileTimeBoolType ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType function_compileTimeBoolType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeBoolType) {
    gOnceFunctionResult_compileTimeBoolType = onceFunction_compileTimeBoolType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeBoolType = true ;
  }
  return gOnceFunctionResult_compileTimeBoolType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_compileTimeBoolType (void) {
  gOnceFunctionResult_compileTimeBoolType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_compileTimeBoolType (NULL,
                                                                 releaseOnceFunctionResult_compileTimeBoolType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_compileTimeBoolType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_compileTimeBoolType (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_compileTimeBoolType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_compileTimeBoolType ("compileTimeBoolType",
                                                                     functionWithGenericHeader_compileTimeBoolType,
                                                                     & kTypeDescriptor_GALGAS_omnibusType,
                                                                     0,
                                                                     functionArgs_compileTimeBoolType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Once function 'literalStringType'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_omnibusType onceFunction_literalStringType (C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 205)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 206)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 207)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 208)), GALGAS_subscript::constructor_literalString (SOURCE_FILE ("types.galgas", 209)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("types.galgas", 211)).operator_or (GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 211)) COMMA_SOURCE_FILE ("types.galgas", 211)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 211)) COMMA_SOURCE_FILE ("types.galgas", 211)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 212)), GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("types.galgas", 213)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 214))  COMMA_SOURCE_FILE ("types.galgas", 204)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_literalStringType = false ;
static GALGAS_omnibusType gOnceFunctionResult_literalStringType ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType function_literalStringType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_literalStringType) {
    gOnceFunctionResult_literalStringType = onceFunction_literalStringType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_literalStringType = true ;
  }
  return gOnceFunctionResult_literalStringType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_literalStringType (void) {
  gOnceFunctionResult_literalStringType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_literalStringType (NULL,
                                                               releaseOnceFunctionResult_literalStringType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_literalStringType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_literalStringType (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_literalStringType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_literalStringType ("literalStringType",
                                                                   functionWithGenericHeader_literalStringType,
                                                                   & kTypeDescriptor_GALGAS_omnibusType,
                                                                   0,
                                                                   functionArgs_literalStringType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Once function 'voidType'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_omnibusType onceFunction_voidType (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  result_result = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 222)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 223)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 224)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 225)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 226)), GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("types.galgas", 228)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_void (SOURCE_FILE ("types.galgas", 230)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 221)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_voidType = false ;
static GALGAS_omnibusType gOnceFunctionResult_voidType ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_omnibusType function_voidType (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_voidType) {
    gOnceFunctionResult_voidType = onceFunction_voidType (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_voidType = true ;
  }
  return gOnceFunctionResult_voidType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_voidType (void) {
  gOnceFunctionResult_voidType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_voidType (NULL,
                                                      releaseOnceFunctionResult_voidType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_voidType [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_voidType (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_voidType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_voidType ("voidType",
                                                          functionWithGenericHeader_voidType,
                                                          & kTypeDescriptor_GALGAS_omnibusType,
                                                          0,
                                                          functionArgs_voidType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'buildTypeMapHTMLFile'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildTypeMapHTMLFile (const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                                   const GALGAS_routineMapForContext constinArgument_inRoutineMap,
                                   const GALGAS_infixOperatorMap constinArgument_inTerminusInfixOperatorMap,
                                   const GALGAS_prefixOperatorMap constinArgument_inTerminusPrefixOperatorMap,
                                   const GALGAS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_18612 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 461)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_emitTypeMap.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringset var_firstLetterSet_18733 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 463)) ;
      cEnumerator_unifiedTypeMap enumerator_18762 (constinArgument_inTypeMap, kENUMERATION_UP) ;
      while (enumerator_18762.hasCurrentObject ()) {
        var_firstLetterSet_18733.addAssign_operation (enumerator_18762.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 465)).getter_string (SOURCE_FILE ("types.galgas", 465))  COMMA_SOURCE_FILE ("types.galgas", 465)) ;
        enumerator_18762.gotoNextObject () ;
      }
      GALGAS_string var_tableOfTypeString_18870 = GALGAS_string::makeEmptyString () ;
      GALGAS_char var_currentFirstLetter_18904 = GALGAS_char (TO_UNICODE (32)) ;
      cEnumerator_unifiedTypeMap enumerator_18940 (constinArgument_inTypeMap, kENUMERATION_UP) ;
      while (enumerator_18940.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_18904.objectCompare (enumerator_18940.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 470)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_currentFirstLetter_18904 = enumerator_18940.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 471)) ;
            var_tableOfTypeString_18870.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_18904.getter_uint (SOURCE_FILE ("types.galgas", 472)).getter_string (SOURCE_FILE ("types.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 472)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 472)).add_operation (var_currentFirstLetter_18904.getter_string (SOURCE_FILE ("types.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 472)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 472)) ;
          }
        }
        var_tableOfTypeString_18870.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_18940.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 474)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 474)) ;
        enumerator_18940.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_19333 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("types.galgas", 477)), constinArgument_inTypeMap, var_firstLetterSet_18733, var_tableOfTypeString_18870, constinArgument_inRoutineMap, constinArgument_inTerminusInfixOperatorMap, constinArgument_inTerminusPrefixOperatorMap, constinArgument_inAssignmentOperatorMap COMMA_SOURCE_FILE ("types.galgas", 476))) ;
      GALGAS_bool joker_19683 ; // Joker input parameter
      var_typeDumpString_19333.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_18612, joker_19683, inCompiler COMMA_SOURCE_FILE ("types.galgas", 486)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_18612, inCompiler COMMA_SOURCE_FILE ("types.galgas", 488)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Filewrapper 'typeDumpGenerationTemplate'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Filewrapper template 'typeDumpGenerationTemplate dump'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    "<h1>Types defined by " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_GLOBAL_5F_TYPE_5F_MAP.getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 53)).stringValue () ;
  result << " defined types, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_987_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_987 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_987.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_987.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).stringValue () ;
      result << "\">" ;
      result << enumerator_987.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_987.hasNextObject ()) {
        result << " - " ;
      }
      index_987_.increment () ;
      enumerator_987.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n" ;
  GALGAS_uint index_1163_ (0) ;
  if (in_GLOBAL_5F_TYPE_5F_MAP.isValid ()) {
    cEnumerator_unifiedTypeMap enumerator_1163 (in_GLOBAL_5F_TYPE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1163.hasCurrentObject ()) {
      result << "\n"
        "<h2>\n"
        "  <a name=\"" ;
      result << enumerator_1163.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "\">" ;
      result << enumerator_1163.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</a>\n"
        "</h2>\n"
        "<p>\n"
        "Kind: " ;
      result << callExtensionGetter_descriptionForHTMLFile ((const cPtr_omnibusType *) enumerator_1163.current_type (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 68)).stringValue () ;
      result << "<br>\n"
        "Description: " ;
      result << enumerator_1163.current_type (HERE).getter_omnibusTypeDescriptionName (SOURCE_FILE ("typeDump.html.galgasTemplate", 69)).stringValue () ;
      result << "<br>\n"
        "LLVM Base Name: " ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1163.current_type (HERE).getter_llvmBaseTypeName (SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << GALGAS_string ("<i>none, compile time type</i>").stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << enumerator_1163.current_type (HERE).getter_llvmBaseTypeName (SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).stringValue () ;
      }
      result << "<br>\n"
        "LLVM Name: " ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_1163.current_type (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << GALGAS_string ("<i>none, compile time type</i>").stringValue () ;
      }else if (kBoolFalse == test_1) {
        result << callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_1163.current_type (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).stringValue () ;
      }
      result << "\n"
        "</p>\n"
        "  " ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_1163.current_type (HERE).getter_propertyGetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 73)).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 73)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "\n"
          "    <table class=\"result\">\n"
          "      <tr>\n"
          "        <td class=\"result_title\">Getter Name</td>\n"
          "        <td class=\"result_title\">Visibility</td>\n"
          "        <td class=\"result_title\">Kind</td>\n"
          "      </tr>\n"
          "    " ;
        GALGAS_uint index_1860_ (0) ;
        if (enumerator_1163.current_type (HERE).getter_propertyGetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 80)).isValid ()) {
          cEnumerator_propertyGetterMap enumerator_1860 (enumerator_1163.current_type (HERE).getter_propertyGetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 80)), kENUMERATION_UP) ;
          while (enumerator_1860.hasCurrentObject ()) {
            result << "\n"
              "      <tr class=\"result_line\">\n"
              "        <td>" ;
            result << enumerator_1860.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "</td>\n"
              "        <td>" ;
            const enumGalgasBool test_3 = enumerator_1860.current_mIsPublic (HERE).boolEnum () ;
            if (kBoolTrue == test_3) {
              result << GALGAS_string ("public").stringValue () ;
            }else if (kBoolFalse == test_3) {
              result << GALGAS_string ("private").stringValue () ;
            }
            result << "</td>\n"
              "        <td>" ;
            switch (enumerator_1860.current_mAccess (HERE).enumValue ()) {
            case GALGAS_propertyGetterKind::kNotBuilt :
              break ;
            case GALGAS_propertyGetterKind::kEnum_storedProperty :
              {
                const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_2204 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (enumerator_1860.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_omnibusType extractedValue_propertyType = extractPtr_2204->mAssociatedValue0 ;
                const GALGAS_uint extractedValue_propertyIndex = extractPtr_2204->mAssociatedValue1 ;
                result << "Stored property, index " ;
                result << extractedValue_propertyIndex.getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 87)).stringValue () ;
                result << ", type " ;
                result << callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_propertyType.ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 87)).stringValue () ;
              }
              break ;
            case GALGAS_propertyGetterKind::kEnum_computedProperty :
              {
                const cEnumAssociatedValues_propertyGetterKind_computedProperty * extractPtr_2458 = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) (enumerator_1860.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_unifiedTypeMap_2D_proxy extractedValue_propertyTypeProxy = extractPtr_2458->mAssociatedValue0 ;
                const GALGAS_routineLLVMNameDict extractedValue_modeDictionary = extractPtr_2458->mAssociatedValue1 ;
                result << "Computed property, type " ;
                result << extractedValue_propertyTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 89)).stringValue () ;
                result << ", routine LLVM name:" ;
                GALGAS_uint index_2400_ (0) ;
                if (extractedValue_modeDictionary.isValid ()) {
                  cEnumerator_routineLLVMNameDict enumerator_2400 (extractedValue_modeDictionary, kENUMERATION_UP) ;
                  while (enumerator_2400.hasCurrentObject ()) {
                    result << "<br>" ;
                    result << extensionGetter_string (enumerator_2400.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 90)).stringValue () ;
                    result << " : " ;
                    result << enumerator_2400.current_mRoutineLLVMName (HERE).stringValue () ;
                    index_2400_.increment () ;
                    enumerator_2400.gotoNextObject () ;
                  }
                }
              }
              break ;
            case GALGAS_propertyGetterKind::kEnum_constantProperty :
              {
                const cEnumAssociatedValues_propertyGetterKind_constantProperty * extractPtr_2614 = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) (enumerator_1860.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_objectIR extractedValue_propertyValue = extractPtr_2614->mAssociatedValue0 ;
                result << "Constant property, type " ;
                result << callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (extractedValue_propertyValue, inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).stringValue () ;
                result << ", value " ;
                result << extensionGetter_llvmName (extractedValue_propertyValue, inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).stringValue () ;
              }
              break ;
            }
            result << "</td>\n"
              "      </tr>\n"
              "    " ;
            index_1860_.increment () ;
            enumerator_1860.gotoNextObject () ;
          }
        }
        result << "\n"
          "    </table>\n"
          "    <br>\n"
          "  " ;
      }else if (kBoolFalse == test_2) {
      }
      result << "\n"
        "  " ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, enumerator_1163.current_type (HERE).getter_propertySetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 100)).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 100)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "\n"
          "    <table class=\"result\">\n"
          "      <tr>\n"
          "        <td class=\"result_title\">Setter Name</td>\n"
          "        <td class=\"result_title\">Visibility</td>\n"
          "        <td class=\"result_title\">Kind</td>\n"
          "      </tr>\n"
          "    " ;
        GALGAS_uint index_2987_ (0) ;
        if (enumerator_1163.current_type (HERE).getter_propertySetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 107)).isValid ()) {
          cEnumerator_propertySetterMap enumerator_2987 (enumerator_1163.current_type (HERE).getter_propertySetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 107)), kENUMERATION_UP) ;
          while (enumerator_2987.hasCurrentObject ()) {
            result << "\n"
              "      <tr class=\"result_line\">\n"
              "        <td>" ;
            result << enumerator_2987.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "</td>\n"
              "        <td>" ;
            const enumGalgasBool test_5 = enumerator_2987.current_mIsPublic (HERE).boolEnum () ;
            if (kBoolTrue == test_5) {
              result << GALGAS_string ("public").stringValue () ;
            }else if (kBoolFalse == test_5) {
              result << GALGAS_string ("private").stringValue () ;
            }
            result << "</td>\n"
              "        <td>" ;
            switch (enumerator_2987.current_mAccess (HERE).enumValue ()) {
            case GALGAS_propertySetterKind::kNotBuilt :
              break ;
            case GALGAS_propertySetterKind::kEnum_storedProperty :
              {
                const cEnumAssociatedValues_propertySetterKind_storedProperty * extractPtr_3331 = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) (enumerator_2987.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_omnibusType extractedValue_propertyType = extractPtr_3331->mAssociatedValue0 ;
                const GALGAS_uint extractedValue_propertyIndex = extractPtr_3331->mAssociatedValue1 ;
                result << "Stored property, index " ;
                result << extractedValue_propertyIndex.getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 114)).stringValue () ;
                result << ", type " ;
                result << callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_propertyType.ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 114)).stringValue () ;
              }
              break ;
            case GALGAS_propertySetterKind::kEnum_computedProperty :
              {
                const cEnumAssociatedValues_propertySetterKind_computedProperty * extractPtr_3618 = (const cEnumAssociatedValues_propertySetterKind_computedProperty *) (enumerator_2987.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_unifiedTypeMap_2D_proxy extractedValue_propertyTypeProxy = extractPtr_3618->mAssociatedValue0 ;
                const GALGAS_routineLLVMNameDict extractedValue_getterModeDictionary = extractPtr_3618->mAssociatedValue1 ;
                const GALGAS_routineLLVMNameDict extractedValue_setterModeDictionary = extractPtr_3618->mAssociatedValue2 ;
                result << "Computed property, type " ;
                result << extractedValue_propertyTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 116)).stringValue () ;
                result << ", routine LLVM name:" ;
                GALGAS_uint index_3560_ (0) ;
                if (extractedValue_setterModeDictionary.isValid ()) {
                  cEnumerator_routineLLVMNameDict enumerator_3560 (extractedValue_setterModeDictionary, kENUMERATION_UP) ;
                  while (enumerator_3560.hasCurrentObject ()) {
                    result << "<br>" ;
                    result << extensionGetter_string (enumerator_3560.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 117)).stringValue () ;
                    result << " : " ;
                    result << enumerator_3560.current_mRoutineLLVMName (HERE).stringValue () ;
                    index_3560_.increment () ;
                    enumerator_3560.gotoNextObject () ;
                  }
                }
              }
              break ;
            }
            result << "</td>\n"
              "      </tr>\n"
              "    " ;
            index_2987_.increment () ;
            enumerator_2987.gotoNextObject () ;
          }
        }
        result << "\n"
          "    </table>\n"
          "    <br>\n"
          "  " ;
      }else if (kBoolFalse == test_4) {
      }
      result << "\n" ;
      index_1163_.increment () ;
      enumerator_1163.gotoNextObject () ;
    }
  }
  result << "\n"
    "<p>\n"
    "<h2>\n"
    "  Routines\n"
    "</h2>\n"
    "  <table class=\"result\">\n"
    "    <tr>\n"
    "      <td class=\"result_title\">Standalone routine Name</td>\n"
    "      <td class=\"result_title\">Visibility</td>\n"
    "      <td class=\"result_title\">Typed signature</td>\n"
    "      <td class=\"result_title\">Routine LLVM Name, by mode</td>\n"
    "    </tr>\n"
    "  " ;
  GALGAS_uint index_4037_ (0) ;
  if (in_ALL_5F_ROUTINE_5F_MAP.isValid ()) {
    cEnumerator_routineMapForContext enumerator_4037 (in_ALL_5F_ROUTINE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_4037.hasCurrentObject ()) {
      result << "\n"
        "    <tr class=\"result_line\">\n"
        "      <td>" ;
      result << enumerator_4037.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</td>\n"
        "      <td>" ;
      const enumGalgasBool test_6 = enumerator_4037.current_mIsPublic (HERE).boolEnum () ;
      if (kBoolTrue == test_6) {
        result << GALGAS_string ("public").stringValue () ;
      }else if (kBoolFalse == test_6) {
        result << GALGAS_string ("private").stringValue () ;
      }
      result << "</td>\n"
        "      <td>" ;
      result << extensionGetter_typedString (enumerator_4037.current_mSignature (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).stringValue () ;
      const enumGalgasBool test_7 = enumerator_4037.current_mReturnTypeProxy (HERE).getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).boolEnum () ;
      if (kBoolTrue == test_7) {
      }else if (kBoolFalse == test_7) {
        result << " -> " ;
        result << enumerator_4037.current_mReturnTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).stringValue () ;
      }
      result << "</td>\n"
        "      <td>" ;
      GALGAS_uint index_4374_ (0) ;
      if (enumerator_4037.current_mModeDictionary (HERE).isValid ()) {
        cEnumerator_routineLLVMNameDict enumerator_4374 (enumerator_4037.current_mModeDictionary (HERE), kENUMERATION_UP) ;
        while (enumerator_4374.hasCurrentObject ()) {
          result << extensionGetter_string (enumerator_4374.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 142)).stringValue () ;
          result << " : " ;
          result << enumerator_4374.current_mRoutineLLVMName (HERE).stringValue () ;
          if (enumerator_4374.hasNextObject ()) {
            result << "<br>" ;
          }
          index_4374_.increment () ;
          enumerator_4374.gotoNextObject () ;
        }
      }
      result << "</td>\n"
        "    </tr>\n"
        "  " ;
      index_4037_.increment () ;
      enumerator_4037.gotoNextObject () ;
    }
  }
  result << "\n"
    "  </table>\n"
    "</p>\n"
    "<p>\n"
    "<h2>\n"
    "  Infix Operators\n"
    "</h2>\n"
    "  <table class=\"result\">\n"
    "    <tr>\n"
    "      <td class=\"result_title\">Infix operator</td>\n"
    "      <td class=\"result_title\">Result Type</td>\n"
    "    </tr>\n"
    "  " ;
  GALGAS_uint index_4697_ (0) ;
  if (in_INFIX_5F_OPERATOR_5F_MAP.isValid ()) {
    cEnumerator_infixOperatorMap enumerator_4697 (in_INFIX_5F_OPERATOR_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_4697.hasCurrentObject ()) {
      result << "\n"
        "    <tr class=\"result_line\">\n"
        "      <td>" ;
      result << enumerator_4697.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</td>\n"
        "      <td>" ;
      result << enumerator_4697.current_mResultType (HERE).getter_omnibusTypeDescriptionName (SOURCE_FILE ("typeDump.html.galgasTemplate", 159)).stringValue () ;
      result << "</td>\n"
        "    </tr>\n"
        "  " ;
      index_4697_.increment () ;
      enumerator_4697.gotoNextObject () ;
    }
  }
  result << "\n"
    "  </table>\n"
    "</p>\n"
    "<p>\n"
    "<h2>\n"
    "  Prefix Operators\n"
    "</h2>\n"
    "  <table class=\"result\">\n"
    "    <tr>\n"
    "      <td class=\"result_title\">Prefix operator</td>\n"
    "      <td class=\"result_title\">Result Type</td>\n"
    "    </tr>\n"
    "  " ;
  GALGAS_uint index_5075_ (0) ;
  if (in_PREFIX_5F_OPERATOR_5F_MAP.isValid ()) {
    cEnumerator_prefixOperatorMap enumerator_5075 (in_PREFIX_5F_OPERATOR_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_5075.hasCurrentObject ()) {
      result << "\n"
        "    <tr class=\"result_line\">\n"
        "      <td>" ;
      result << enumerator_5075.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</td>\n"
        "      <td>" ;
      result << enumerator_5075.current_mResultType (HERE).getter_omnibusTypeDescriptionName (SOURCE_FILE ("typeDump.html.galgasTemplate", 176)).stringValue () ;
      result << "</td>\n"
        "    </tr>\n"
        "  " ;
      index_5075_.increment () ;
      enumerator_5075.gotoNextObject () ;
    }
  }
  result << "\n"
    "  </table>\n"
    "</p>\n"
    "<h2>\n"
    "  Assignment Operators\n"
    "</h2>\n"
    "  <table class=\"result\">\n"
    "    <tr>\n"
    "      <td class=\"result_title\">Operator</td>\n"
    "    </tr>\n"
    "  " ;
  GALGAS_uint index_5402_ (0) ;
  if (in_ASSIGNMENT_5F_OPERATOR_5F_MAP.isValid ()) {
    cEnumerator_assignmentOperatorMap enumerator_5402 (in_ASSIGNMENT_5F_OPERATOR_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_5402.hasCurrentObject ()) {
      result << "\n"
        "    <tr class=\"result_line\">\n"
        "      <td>" ;
      result << enumerator_5402.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</td>\n"
        "    </tr>\n"
        "  " ;
      index_5402_.increment () ;
      enumerator_5402.gotoNextObject () ;
    }
  }
  result << "\n"
    "  </table>\n"
    "</p>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'linkForHTMLTypeMap'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_linkForHTMLTypeMap (const GALGAS_string & constinArgument_inTypeName,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 511)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 511)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 511)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 511)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_linkForHTMLTypeMap [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_linkForHTMLTypeMap ("linkForHTMLTypeMap",
                                                                    functionWithGenericHeader_linkForHTMLTypeMap,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    1,
                                                                    functionArgs_linkForHTMLTypeMap) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'declareLLVMTypes'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_declareLLVMTypes (const GALGAS_userLLVMTypeDefinitionListIR constinArgument_inUserLLVMTypeDefinitionListIR,
                               GALGAS_string & ioArgument_ioLLVMcode,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("User Defined Types"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 523)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%ptrtype = type i8* ; Generic pointer type for dynamic objects\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 524)) ;
  cEnumerator_userLLVMTypeDefinitionListIR enumerator_21340 (constinArgument_inUserLLVMTypeDefinitionListIR, kENUMERATION_UP) ;
  while (enumerator_21340.hasCurrentObject ()) {
    callExtensionMethod_generateLLVMType ((const cPtr_userLLVMTypeDefinitionIR *) enumerator_21340.current_mType (HERE).ptr (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("types.galgas", 526)) ;
    enumerator_21340.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 528)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'checkAssignmentCompatibility'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR function_checkAssignmentCompatibility (const GALGAS_objectIR & constinArgument_inSourceValue,
                                                       const GALGAS_omnibusType & constinArgument_inOptionalTargetAnnotationType,
                                                       const GALGAS_location & constinArgument_inErrorLocation,
                                                       const GALGAS_bool & constinArgument_inStaticTypeAllowed,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result_result ; // Returned variable
  GALGAS_omnibusType var_sourceType_880 = extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 14)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetAnnotationType.getter_omnibusTypeDescriptionName (HERE).objectCompare (var_sourceType_880.getter_omnibusTypeDescriptionName (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = constinArgument_inSourceValue ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = constinArgument_inOptionalTargetAnnotationType.getter_kind (HERE).getter_isVoid (SOURCE_FILE ("semantic-analysis.galgas", 17)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result = constinArgument_inSourceValue ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_bool test_3 = var_sourceType_880.getter_kind (HERE).getter_isCompileTimeInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
        if (kBoolTrue == test_3.boolEnum ()) {
          test_3 = constinArgument_inOptionalTargetAnnotationType.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
        }
        test_2 = test_3.boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_bigint var_value_1282 ;
          GALGAS_omnibusType joker_1263_1 ; // Joker input parameter
          constinArgument_inSourceValue.method_literalInteger (joker_1263_1, var_value_1282, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
          GALGAS_bigint var_minTarget_1351 ;
          GALGAS_bigint var_maxTarget_1370 ;
          GALGAS_bool joker_1372_2 ; // Joker input parameter
          GALGAS_uint joker_1372_1 ; // Joker input parameter
          constinArgument_inOptionalTargetAnnotationType.getter_kind (HERE).method_integer (var_minTarget_1351, var_maxTarget_1370, joker_1372_2, joker_1372_1, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            GALGAS_bool test_5 = GALGAS_bool (kIsStrictInf, var_value_1282.objectCompare (var_minTarget_1351)) ;
            if (kBoolTrue != test_5.boolEnum ()) {
              test_5 = GALGAS_bool (kIsStrictInf, var_maxTarget_1370.objectCompare (var_value_1282)) ;
            }
            test_4 = test_5.boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("literal integer too large"), fixItArray6  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 23)) ;
              result_result.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_4) {
            result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 25)) ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type ").add_operation (constinArgument_inOptionalTargetAnnotationType.getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (GALGAS_string (" cannot be assigned from expression of type "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (extensionGetter_omnibusTypeDescriptionName (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 33)).boolEnum () ;
    if (kBoolTrue == test_8) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, extensionGetter_omnibusTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)).add_operation (GALGAS_string (" static type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), fixItArray10  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)) ;
        }
      }
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_checkAssignmentCompatibility [5] = {
  & kTypeDescriptor_GALGAS_objectIR,
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_checkAssignmentCompatibility (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_objectIR operand0 = GALGAS_objectIR::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_omnibusType operand1 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_bool operand3 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_checkAssignmentCompatibility (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_checkAssignmentCompatibility ("checkAssignmentCompatibility",
                                                                              functionWithGenericHeader_checkAssignmentCompatibility,
                                                                              & kTypeDescriptor_GALGAS_objectIR,
                                                                              4,
                                                                              functionArgs_checkAssignmentCompatibility) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'getNewTempValue'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_getNewTempValue (const GALGAS_omnibusType constinArgument_inType,
                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                              GALGAS_objectIR & outArgument_outTempVariable,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 71)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outTempVariable = GALGAS_objectIR::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 72)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_3424 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3424, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 74)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmValue (constinArgument_inType, var_llvmName_3424  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 75)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'getNewTempReference'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_getNewTempReference (const GALGAS_omnibusType constinArgument_inType,
                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                  GALGAS_objectIR & outArgument_outTempVariable,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 86)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outTempVariable = GALGAS_objectIR::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 87)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_3868 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3868, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 89)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_reference (constinArgument_inType, var_llvmName_3868  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 90)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 108)) ;
  outArgument_outIntermediateCodeStruct.mProperty_mRoutineListIR = constinArgument_inRoutineListIR ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.getter_mTargetParameters (HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticEntityMap = constinArgument_inStaticEntityMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.getter_mGlobalTaskVariableList (HERE) ;
  GALGAS_semanticTemporariesStruct var_temporaries_5064 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 114)) ;
  cEnumerator_declarationDecorationList enumerator_5125 (constinArgument_inDecoratedDeclarationList, kENUMERATION_UP) ;
  while (enumerator_5125.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDecoratedDeclaration *) enumerator_5125.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_5064, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 116)) ;
    enumerator_5125.gotoNextObject () ;
  }
  extensionMethod_routineSemanticAnalysis (constinArgument_inDecoratedRoutineList, constinArgument_inSemanticContext, var_temporaries_5064, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 123)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.getter_mExternFunctionListAST (HERE), constinArgument_inSemanticContext, var_temporaries_5064, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 128)) ;
  {
  routine_appendPanicRoutines (constinArgument_inSourceFileAbsolutePathSet, outArgument_outIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 134)) ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 139)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@typeAliasDeclarationAST locationForErrorSignaling'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_typeAliasDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  result_result = object->mProperty_mAliasTypeName.getter_location (HERE) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeAliasDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                                  extensionGetter_typeAliasDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeAliasDeclarationAST_locationForErrorSignaling (defineExtensionGetter_typeAliasDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@typeAliasDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  {
  const GALGAS_typeAliasDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mAliasTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 49)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mAliasTypeName, object->mProperty_mOriginalTypeName COMMA_SOURCE_FILE ("type-alias.galgas", 50)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                               extensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeAliasDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@typeAliasDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  result_result = GALGAS_string ("typealias ").add_operation (object->mProperty_mAliasTypeName.getter_string (SOURCE_FILE ("type-alias.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                                           extensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@typeAliasDeclarationAST enterInContext'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeAliasDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  GALGAS_omnibusType var_type_3736 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mOriginalTypeName, var_type_3736, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 74)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mAliasTypeName, var_type_3736, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 76)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeAliasDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                       extensionMethod_typeAliasDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeAliasDeclarationAST_enterInContext (defineExtensionMethod_typeAliasDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@staticArrayTypeDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticArrayTypeDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayTypeDeclarationAST * object = (const cPtr_staticArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayTypeDeclarationAST) ;
  {
  const GALGAS_staticArrayTypeDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mArrayTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 46)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mArrayTypeName, object->mProperty_mElementTypeName COMMA_SOURCE_FILE ("type-static-array.galgas", 47)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), object->mProperty_mArrayTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 48)) ;
  GALGAS_lstring var_rootNode_2381 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 49)), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-static-array.galgas", 49)) ;
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mArrayTypeName, var_rootNode_2381 COMMA_SOURCE_FILE ("type-static-array.galgas", 50)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticArrayTypeDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_staticArrayTypeDeclarationAST.mSlotID,
                                               extensionMethod_staticArrayTypeDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticArrayTypeDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_staticArrayTypeDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@staticArrayTypeDeclarationAST keyRepresentationForErrorSignaling'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_staticArrayTypeDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_staticArrayTypeDeclarationAST * object = (const cPtr_staticArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayTypeDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("anonymous $").add_operation (object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("type-static-array.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_staticArrayTypeDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_staticArrayTypeDeclarationAST.mSlotID,
                                                           extensionGetter_staticArrayTypeDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_staticArrayTypeDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_staticArrayTypeDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@staticArrayTypeDeclarationAST locationForErrorSignaling'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_staticArrayTypeDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_staticArrayTypeDeclarationAST * object = (const cPtr_staticArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayTypeDeclarationAST) ;
  result_outLocation = object->mProperty_mArrayTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_staticArrayTypeDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_staticArrayTypeDeclarationAST.mSlotID,
                                                  extensionGetter_staticArrayTypeDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_staticArrayTypeDeclarationAST_locationForErrorSignaling (defineExtensionGetter_staticArrayTypeDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@staticArrayTypeDeclarationAST enterInContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticArrayTypeDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticContext & ioArgument_ioContext,
                                                                          GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                          GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                          GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                          GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                          GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                          GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayTypeDeclarationAST * object = (const cPtr_staticArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayTypeDeclarationAST) ;
  GALGAS_omnibusType var_elementType_4114 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mElementTypeName, var_elementType_4114, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 80)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4114.ptr (), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 81)).operator_not (SOURCE_FILE ("type-static-array.galgas", 81)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-static-array.galgas", 82)), GALGAS_string ("an array element should be copyable"), fixItArray1  COMMA_SOURCE_FILE ("type-static-array.galgas", 82)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4114.ptr (), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 84)).operator_not (SOURCE_FILE ("type-static-array.galgas", 84)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-static-array.galgas", 85)), GALGAS_string ("an array element should be instanciable"), fixItArray3  COMMA_SOURCE_FILE ("type-static-array.galgas", 85)) ;
    }
  }
  GALGAS_objectIR var_sizeExpressionIR_4623 ;
  {
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSizeExpression, object->mProperty_mSizeExpressionLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 93)), var_sizeExpressionIR_4623, inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 88)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_sizeExpressionIR_4623.getter_isLiteralInteger (SOURCE_FILE ("type-static-array.galgas", 96)).operator_not (SOURCE_FILE ("type-static-array.galgas", 96)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is a literal interger expression"), fixItArray5  COMMA_SOURCE_FILE ("type-static-array.galgas", 97)) ;
    }
  }
  if (kBoolFalse == test_4) {
    GALGAS_bigint var_arraySize_4839 ;
    GALGAS_omnibusType joker_4816_1 ; // Joker input parameter
    var_sizeExpressionIR_4623.method_literalInteger (joker_4816_1, var_arraySize_4839, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 99)) ;
    GALGAS_lstring var_omnibusTypeDescriptionName_4942 = GALGAS_lstring::constructor_new (GALGAS_string ("[").add_operation (var_arraySize_4839.getter_string (SOURCE_FILE ("type-static-array.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 101)).add_operation (GALGAS_string (" \xE2""\x80""\xA2"" "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 101)).add_operation (var_elementType_4114.getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 101)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 101)), object->mProperty_mArrayTypeName.getter_location (SOURCE_FILE ("type-static-array.galgas", 101))  COMMA_SOURCE_FILE ("type-static-array.galgas", 101)) ;
    GALGAS_lstring var_llvmBaseTypeName_5072 = GALGAS_lstring::constructor_new (var_elementType_4114.getter_llvmBaseTypeName (HERE).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 102)).add_operation (var_arraySize_4839.getter_string (SOURCE_FILE ("type-static-array.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 102)), object->mProperty_mArrayTypeName.getter_location (SOURCE_FILE ("type-static-array.galgas", 102))  COMMA_SOURCE_FILE ("type-static-array.galgas", 102)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_omnibusTypeDescriptionName_4942.getter_string (SOURCE_FILE ("type-static-array.galgas", 103)) COMMA_SOURCE_FILE ("type-static-array.galgas", 103)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_omnibusType var_type_5305 ;
        ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (var_omnibusTypeDescriptionName_4942, var_type_5305, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 104)) ;
        {
        ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mArrayTypeName, var_type_5305, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 105)) ;
        }
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_classConstantMap var_classConstantMap_5544 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-static-array.galgas", 111)) ;
      {
      var_classConstantMap_5544.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mArrayTypeName.getter_location (SOURCE_FILE ("type-static-array.galgas", 112))  COMMA_SOURCE_FILE ("type-static-array.galgas", 112)), var_arraySize_4839, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 112)).getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 112)) ;
      }
      GALGAS_propertyGetterMap var_arrayTypePropertyMap_5770 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-static-array.galgas", 114)) ;
      {
      var_arrayTypePropertyMap_5770.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), var_omnibusTypeDescriptionName_4942.getter_location (HERE)  COMMA_SOURCE_FILE ("type-static-array.galgas", 116)), GALGAS_bool (true), GALGAS_propertyGetterKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 118)), var_arraySize_4839  COMMA_SOURCE_FILE ("type-static-array.galgas", 118))  COMMA_SOURCE_FILE ("type-static-array.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 115)) ;
      }
      GALGAS_constructorMap var_constructorMap_6134 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-static-array.galgas", 121)) ;
      {
      var_constructorMap_6134.setter_insertKey (GALGAS_string ("(!repeated)").getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 123)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 123)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_4114, var_arraySize_4839.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 123))  COMMA_SOURCE_FILE ("type-static-array.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 123)) ;
      }
      GALGAS_string var_constructorName_6346 = GALGAS_string ("(") ;
      cEnumerator_range enumerator_6390 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_arraySize_4839.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 126)).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 126))), kENUMERATION_UP) ;
      while (enumerator_6390.hasCurrentObject ()) {
        var_constructorName_6346.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 127)) ;
        enumerator_6390.gotoNextObject () ;
      }
      var_constructorName_6346.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 129)) ;
      {
      var_constructorMap_6134.setter_insertKey (var_constructorName_6346.getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 130)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 130)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_4114, var_arraySize_4839.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 130))  COMMA_SOURCE_FILE ("type-static-array.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 130)) ;
      }
      GALGAS_omnibusTypeAttributes var_typeAttributes_6695 = GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-static-array.galgas", 132)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-static-array.galgas", 132)) COMMA_SOURCE_FILE ("type-static-array.galgas", 132)) ;
      GALGAS_omnibusType var_arrayType_6811 = GALGAS_omnibusType::constructor_new (var_arrayTypePropertyMap_5770, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-static-array.galgas", 136)), var_classConstantMap_5544, var_constructorMap_6134, GALGAS_subscript::constructor_staticSubscript (var_elementType_4114, var_arraySize_4839  COMMA_SOURCE_FILE ("type-static-array.galgas", 139)), var_typeAttributes_6695, var_omnibusTypeDescriptionName_4942.getter_string (SOURCE_FILE ("type-static-array.galgas", 141)), GALGAS_typeKind::constructor_staticArrayType (var_elementType_4114, var_arraySize_4839  COMMA_SOURCE_FILE ("type-static-array.galgas", 142)), var_llvmBaseTypeName_5072.getter_string (SOURCE_FILE ("type-static-array.galgas", 143))  COMMA_SOURCE_FILE ("type-static-array.galgas", 134)) ;
      {
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mArrayTypeName, var_arrayType_6811, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 145)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_omnibusTypeDescriptionName_4942, var_arrayType_6811, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 149)) ;
      }
      ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMStaticArrayTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_6811.ptr (), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 155)), var_elementType_4114, var_arraySize_4839  COMMA_SOURCE_FILE ("type-static-array.galgas", 154))  COMMA_SOURCE_FILE ("type-static-array.galgas", 154)) ;
      GALGAS_string var_assignmentFunctionLLVMName_7844 = function_assignmentOperatorFuncName (var_arrayType_6811, var_arrayType_6811, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 160)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_staticArrayTypeAssignFunctionIR::constructor_new (var_assignmentFunctionLLVMName_7844.getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 162)), GALGAS_bool (true), GALGAS_bool (false), var_arrayType_6811  COMMA_SOURCE_FILE ("type-static-array.galgas", 161))  COMMA_SOURCE_FILE ("type-static-array.galgas", 161)) ;
      GALGAS_lstring var_key_8104 = GALGAS_lstring::constructor_new (var_arrayType_6811.getter_omnibusTypeDescriptionName (SOURCE_FILE ("type-static-array.galgas", 168)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 168)).add_operation (var_arrayType_6811.getter_omnibusTypeDescriptionName (SOURCE_FILE ("type-static-array.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 168)), object->mProperty_mArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-static-array.galgas", 167)) ;
      GALGAS_llvmGenerationInstructionElementList var_instructionElements_8323 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 171)) ;
      var_instructionElements_8323.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string ("call void @").add_operation (var_assignmentFunctionLLVMName_7844.getter_assemblerRepresentation (SOURCE_FILE ("type-static-array.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 172)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 172))  COMMA_SOURCE_FILE ("type-static-array.galgas", 172))  COMMA_SOURCE_FILE ("type-static-array.galgas", 172)) ;
      var_instructionElements_8323.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("TGT").getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 173))  COMMA_SOURCE_FILE ("type-static-array.galgas", 173))  COMMA_SOURCE_FILE ("type-static-array.galgas", 173)) ;
      var_instructionElements_8323.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string ("* ")  COMMA_SOURCE_FILE ("type-static-array.galgas", 174))  COMMA_SOURCE_FILE ("type-static-array.galgas", 174)) ;
      var_instructionElements_8323.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("TGT").getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 175))  COMMA_SOURCE_FILE ("type-static-array.galgas", 175))  COMMA_SOURCE_FILE ("type-static-array.galgas", 175)) ;
      var_instructionElements_8323.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", ")  COMMA_SOURCE_FILE ("type-static-array.galgas", 176))  COMMA_SOURCE_FILE ("type-static-array.galgas", 176)) ;
      var_instructionElements_8323.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("SRC").getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 177))  COMMA_SOURCE_FILE ("type-static-array.galgas", 177))  COMMA_SOURCE_FILE ("type-static-array.galgas", 177)) ;
      var_instructionElements_8323.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string ("* ")  COMMA_SOURCE_FILE ("type-static-array.galgas", 178))  COMMA_SOURCE_FILE ("type-static-array.galgas", 178)) ;
      var_instructionElements_8323.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("SRC").getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 179))  COMMA_SOURCE_FILE ("type-static-array.galgas", 179))  COMMA_SOURCE_FILE ("type-static-array.galgas", 179)) ;
      var_instructionElements_8323.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (")")  COMMA_SOURCE_FILE ("type-static-array.galgas", 180))  COMMA_SOURCE_FILE ("type-static-array.galgas", 180)) ;
      GALGAS_llvmGenerationInstructionElementList temp_7 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 181)) ;
      temp_7.plusAssign_operation (var_instructionElements_8323, inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 181)) ;
      GALGAS_llvmGenerationInstruction var_llvmAssignmentInstruction_8952 = GALGAS_llvmGenerationInstruction::constructor_new (temp_7  COMMA_SOURCE_FILE ("type-static-array.galgas", 181)) ;
      {
      GALGAS_llvmGenerationInstructionList temp_8 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 191)) ;
      temp_8.addAssign_operation (var_llvmAssignmentInstruction_8952  COMMA_SOURCE_FILE ("type-static-array.galgas", 191)) ;
      ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8104, var_elementType_4114, GALGAS_string ("TGT").getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 185)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 186)), var_elementType_4114, GALGAS_string ("SRC").getter_nowhere (SOURCE_FILE ("type-static-array.galgas", 188)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 189)), GALGAS_ctTrueExpressionAST::constructor_new (SOURCE_FILE ("type-static-array.galgas", 190)), temp_8, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 182)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticArrayTypeDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_staticArrayTypeDeclarationAST.mSlotID,
                                       extensionMethod_staticArrayTypeDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticArrayTypeDeclarationAST_enterInContext (defineExtensionMethod_staticArrayTypeDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@userLLVMStaticArrayTypeDefinitionIR generateLLVMType'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType (const cPtr_userLLVMTypeDefinitionIR * inObject,
                                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_userLLVMStaticArrayTypeDefinitionIR * object = (const cPtr_userLLVMStaticArrayTypeDefinitionIR *) inObject ;
  macroValidSharedObject (object, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(object->mProperty_mLLVMDefinedTypeName.add_operation (GALGAS_string (" = type ["), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 209)).add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("type-static-array.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 209)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 209)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mElementType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 209)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 209)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType (void) {
  enterExtensionMethod_generateLLVMType (kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR.mSlotID,
                                         extensionMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType (defineExtensionMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@staticArrayTypeAssignFunctionIR llvmCodeGeneration'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayTypeAssignFunctionIR * object = (const cPtr_staticArrayTypeAssignFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayTypeAssignFunctionIR) ;
  GALGAS_string var_llvmTypeName_10713 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mStaticArrayType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 227)) ;
  GALGAS_arcAssignmentList var_arcAssignmentList_10771 = callExtensionGetter_arcList ((const cPtr_omnibusType *) object->mProperty_mStaticArrayType.ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-static-array.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 228)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-static-array.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 229)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 230)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 230)).add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 230)).add_operation (GALGAS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 230)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 231)) ;
  cEnumerator_arcAssignmentList enumerator_11113 (var_arcAssignmentList_10771, kENUMERATION_UP) ;
  while (enumerator_11113.hasCurrentObject ()) {
    GALGAS_string var_propertyTypeLLVMName_11145 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_11113.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 233)) ;
    GALGAS_string var_llvmVarName_11195 = GALGAS_string ("%arc.retain.").add_operation (enumerator_11113.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-static-array.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 234)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-static-array.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 234)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 235)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_11195, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 236)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 236)).add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 236)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 236)).add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 236)).add_operation (GALGAS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 236)) ;
    cEnumerator_uintlist enumerator_11477 (enumerator_11113.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_11477.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_11477.current_mValue (HERE).getter_string (SOURCE_FILE ("type-static-array.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 238)) ;
      enumerator_11477.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_11113.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 240)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 240)) ;
    GALGAS_string var_llvmLoadedVarName_11595 = var_llvmVarName_11195.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 241)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_11595, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 242)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 242)).add_operation (var_propertyTypeLLVMName_11145, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 242)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 242)).add_operation (var_propertyTypeLLVMName_11145, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 242)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 242)).add_operation (var_llvmVarName_11195, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 242)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 242)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_11145, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 243)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 243)).add_operation (var_llvmLoadedVarName_11595, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 243)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 243)) ;
    enumerator_11113.gotoNextObject () ;
  }
  cEnumerator_arcAssignmentList enumerator_11934 (var_arcAssignmentList_10771, kENUMERATION_UP) ;
  while (enumerator_11934.hasCurrentObject ()) {
    GALGAS_string var_llvmVarName_11957 = GALGAS_string ("%arc.release.").add_operation (enumerator_11934.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-static-array.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 246)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-static-array.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 246)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 247)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_11957, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 248)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 248)).add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 248)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 248)).add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 248)).add_operation (GALGAS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 248)) ;
    cEnumerator_uintlist enumerator_12240 (enumerator_11934.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_12240.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_12240.current_mValue (HERE).getter_string (SOURCE_FILE ("type-static-array.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 250)) ;
      enumerator_12240.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_11934.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 252)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 252)) ;
    GALGAS_string var_propertyTypeLLVMName_12361 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_11934.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 253)) ;
    GALGAS_string var_llvmLoadedVarName_12417 = var_llvmVarName_11957.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 254)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_12417, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 255)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 255)).add_operation (var_propertyTypeLLVMName_12361, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 255)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 255)).add_operation (var_propertyTypeLLVMName_12361, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 255)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 255)).add_operation (var_llvmVarName_11957, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 255)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 255)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_12361, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 256)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 256)).add_operation (var_llvmLoadedVarName_12417, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 256)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 256)) ;
    enumerator_11934.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 258)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 259)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 259)).add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 259)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 259)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 260)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 260)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 261)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 263)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %v = load ").add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 265)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 265)).add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 265)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 266)).add_operation (GALGAS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 266)).add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 266)).add_operation (GALGAS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 268)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 271)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 272)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 273)).add_operation (GALGAS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 273)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 274)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 275)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 276)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 277)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 278)).add_operation (GALGAS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 278)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 279)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 280)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 281)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 282)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 283)).add_operation (GALGAS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 283)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 284)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 284)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %byteCount, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 285)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 286)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 287)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 288)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 290)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target8 = bitcast ").add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 291)).add_operation (GALGAS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source8 = bitcast ").add_operation (var_llvmTypeName_10713, inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 292)).add_operation (GALGAS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-static-array.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 292)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 293)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 294)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-static-array.galgas", 297)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR.mSlotID,
                                           extensionMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration (defineExtensionMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@typeDynamicArrayDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mDynamicArrayTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 36)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mDynamicArrayTypeName, object->mProperty_mElementTypeName COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 37)) ;
  }
  GALGAS_lstring var_rootNode_2082 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 38)), object->mProperty_mDynamicArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 38)) ;
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mDynamicArrayTypeName, var_rootNode_2082 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 39)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                               extensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension getter '@typeDynamicArrayDeclarationAST keyRepresentationForErrorSignaling'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("anonymous ").add_operation (object->mProperty_mDynamicArrayTypeName.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 45)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                                           extensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@typeDynamicArrayDeclarationAST locationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  result_outLocation = object->mProperty_mDynamicArrayTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                                  extensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling (defineExtensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@typeDynamicArrayDeclarationAST enterInContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeDynamicArrayDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioContext.getter_mTargetParameters (HERE).getter_mHandleDynamicArray (HERE).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 68)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 69)), GALGAS_string ("this target does not handle dynamic array"), fixItArray1  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 69)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_arrayTypeProxy_4000 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mDynamicArrayTypeName, var_arrayTypeProxy_4000 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 71)) ;
  }
  GALGAS_omnibusType var_elementType_4141 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mElementTypeName, var_elementType_4141, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 73)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4141.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 74)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 74)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 75)), GALGAS_string ("an array element should be copyable"), fixItArray3  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 75)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4141.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 77)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 78)), GALGAS_string ("an array element should be instanciable"), fixItArray5  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 78)) ;
    }
  }
  GALGAS_lstring var_omnibusTypeDescriptionName_4468 = GALGAS_lstring::constructor_new (GALGAS_string ("[").add_operation (var_elementType_4141.getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 81))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)) ;
  GALGAS_lstring var_llvmBaseTypeName_4583 = GALGAS_lstring::constructor_new (GALGAS_string ("dyn-").add_operation (var_elementType_4141.getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 82)), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 82))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 82)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_omnibusTypeDescriptionName_4468.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 84)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 84)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_omnibusType var_type_4875 ;
      ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (var_omnibusTypeDescriptionName_4468, var_type_4875, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 85)) ;
      {
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mDynamicArrayTypeName, var_type_4875, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 86)) ;
      }
    }
  }
  if (kBoolFalse == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_uint_33__32_TypeProxy_5076 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_string ("uint32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 91)), var_uint_33__32_TypeProxy_5076 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 91)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_5175 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mElementTypeName, var_elementTypeProxy_5175 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 92)) ;
    }
    GALGAS_propertyGetterMap var_propertyGetterMap_5278 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 94)) ;
    GALGAS_lstring var_routineLLVMName_5629 ;
    {
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4468.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 97)), var_llvmBaseTypeName_4583.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 98)), GALGAS_lstring::constructor_new (GALGAS_string ("removeAll"), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 99))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 99)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 100)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 101)), var_routineLLVMName_5629, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 96)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayRemoveAllFunctionIR::constructor_new (var_routineLLVMName_5629, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 104))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 104)) ;
    {
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4468.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 111)), var_llvmBaseTypeName_4583.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 112)), GALGAS_lstring::constructor_new (GALGAS_string ("length"), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 113))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 113)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 114)), var_uint_33__32_TypeProxy_5076, var_routineLLVMName_5629, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 110)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayLengthFunctionIR::constructor_new (var_routineLLVMName_5629, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 118))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 118)) ;
    GALGAS_lstring var_insertFunctionMangledName_6897 ;
    {
    extensionSetter_addFunctionWithTwoInputArguments (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4468.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 125)), ioArgument_ioContext, var_llvmBaseTypeName_4583.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 127)), GALGAS_lstring::constructor_new (GALGAS_string ("insert"), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 128))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 128)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 129)), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5175, GALGAS_string ("inValue"), GALGAS_string ("atIndex"), var_uint_33__32_TypeProxy_5076, GALGAS_string ("inIndex"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 136)), var_insertFunctionMangledName_6897, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 124)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayInsertFunctionIR::constructor_new (var_insertFunctionMangledName_6897, GALGAS_bool (false), GALGAS_bool (false), var_elementTypeProxy_5175  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 139))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 139)) ;
    {
    extensionSetter_addFunctionWithInputArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4468.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 147)), ioArgument_ioContext, var_llvmBaseTypeName_4583.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 149)), GALGAS_lstring::constructor_new (GALGAS_string ("append"), object->mProperty_mDynamicArrayTypeName.getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 150))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 150)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 151)), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5175, GALGAS_string ("inValue"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 155)), var_routineLLVMName_5629, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 146)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayAppendFunctionIR::constructor_new (var_routineLLVMName_5629, GALGAS_bool (false), GALGAS_bool (false), var_arrayTypeProxy_4000, var_elementTypeProxy_5175, var_insertFunctionMangledName_6897.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 164))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 158))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 158)) ;
    GALGAS_constructorMap var_constructorMap_7883 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 167)) ;
    {
    var_constructorMap_7883.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 168)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 168)), GALGAS_constructorValue::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 168)) ;
    }
    GALGAS_omnibusTypeAttributes var_typeAttributes_8058 = GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-dynamic-array.galgas", 170)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-dynamic-array.galgas", 170)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 170)) ;
    GALGAS_omnibusType var_dynamicArrayType_8177 = GALGAS_omnibusType::constructor_new (var_propertyGetterMap_5278, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 174)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 175)), var_constructorMap_7883, GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-dynamic-array.galgas", 177)), var_typeAttributes_8058, var_omnibusTypeDescriptionName_4468.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 179)), GALGAS_typeKind::constructor_dynamicArrayType (var_elementType_4141  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 180)), var_llvmBaseTypeName_4583.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 181))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 172)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mDynamicArrayTypeName, var_dynamicArrayType_8177, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 183)) ;
    }
    GALGAS_llvmGenerationInstructionList var_llvmInstructionList_8782 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 188)) ;
    var_llvmInstructionList_8782.addAssign_operation (GALGAS_llvmVarInstruction::constructor_new (GALGAS_string ("SOURCE").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 189))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 189))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 189)) ;
    var_llvmInstructionList_8782.addAssign_operation (GALGAS_llvmVarInstruction::constructor_new (GALGAS_string ("TARGET").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 190))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 190))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 190)) ;
    var_llvmInstructionList_8782.addAssign_operation (GALGAS_llvmVarInstruction::constructor_new (GALGAS_string ("SOURCE.LOADED").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 191))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 191))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 191)) ;
    var_llvmInstructionList_8782.addAssign_operation (GALGAS_llvmVarInstruction::constructor_new (GALGAS_string ("TARGET.LOADED").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 192))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 192))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 192)) ;
    GALGAS_llvmGenerationInstructionElementList var_instructionElements_9255 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 195)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("SOURCE").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 196))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 196))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 196)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = bitcast ")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 197))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 197)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("SRC").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 198))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 198))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 198)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string ("* ")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 199))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 199)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("SRC").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 200))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 200))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 200)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" to %ptrtype*")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 201))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 201)) ;
    GALGAS_llvmGenerationInstructionElementList temp_7 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 202)) ;
    temp_7.plusAssign_operation (var_instructionElements_9255, inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 202)) ;
    var_llvmInstructionList_8782.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_7  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 202))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 202)) ;
    var_instructionElements_9255 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 205)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("TARGET").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 206))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 206))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 206)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = bitcast ")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 207))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 207)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("TGT").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 208))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 208))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 208)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string ("* ")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 209))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 209)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("TGT").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 210))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 210))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 210)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" to %ptrtype*")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 211))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 211)) ;
    GALGAS_llvmGenerationInstructionElementList temp_8 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 212)) ;
    temp_8.plusAssign_operation (var_instructionElements_9255, inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 212)) ;
    var_llvmInstructionList_8782.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_8  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 212))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 212)) ;
    var_instructionElements_9255 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 215)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("SOURCE.LOADED").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 216))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 216))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 216)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = load %ptrtype, %ptrtype*  ")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 217))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 217)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("SRC").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 218))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 218))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 218)) ;
    GALGAS_llvmGenerationInstructionElementList temp_9 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 219)) ;
    temp_9.plusAssign_operation (var_instructionElements_9255, inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 219)) ;
    var_llvmInstructionList_8782.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 219))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 219)) ;
    var_instructionElements_9255 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 222)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string ("call void @arc.retain (%ptrtype ")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 223))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 223)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("SOURCE.LOADED").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 224))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 224))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 224)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (")")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 225))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 225)) ;
    GALGAS_llvmGenerationInstructionElementList temp_10 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 226)) ;
    temp_10.plusAssign_operation (var_instructionElements_9255, inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 226)) ;
    var_llvmInstructionList_8782.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 226))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 226)) ;
    var_instructionElements_9255 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 229)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("TARGET.LOADED").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 230))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 230))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 230)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = load %ptrtype, %ptrtype*  ")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 231))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 231)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("TGT").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 232))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 232))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 232)) ;
    GALGAS_llvmGenerationInstructionElementList temp_11 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 233)) ;
    temp_11.plusAssign_operation (var_instructionElements_9255, inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 233)) ;
    var_llvmInstructionList_8782.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 233))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 233)) ;
    var_instructionElements_9255 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 236)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string ("call void @arc.release (%ptrtype ")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 237))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 237)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("TARGET.LOADED").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 238))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 238))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 238)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (")")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 239))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 239)) ;
    GALGAS_llvmGenerationInstructionElementList temp_12 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 240)) ;
    temp_12.plusAssign_operation (var_instructionElements_9255, inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 240)) ;
    var_llvmInstructionList_8782.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 240))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 240)) ;
    var_instructionElements_9255 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 243)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string ("store %ptrtype ")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 244))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 244)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("SOURCE.LOADED").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 245))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 245))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 245)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", %ptrtype* ")  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 246))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 246)) ;
    var_instructionElements_9255.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("TGT").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 247))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 247))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 247)) ;
    GALGAS_llvmGenerationInstructionElementList temp_13 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 248)) ;
    temp_13.plusAssign_operation (var_instructionElements_9255, inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 248)) ;
    var_llvmInstructionList_8782.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 248))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 248)) ;
    GALGAS_lstring var_key_12298 = GALGAS_lstring::constructor_new (var_dynamicArrayType_8177.getter_omnibusTypeDescriptionName (SOURCE_FILE ("type-dynamic-array.galgas", 251)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 251)).add_operation (var_dynamicArrayType_8177.getter_omnibusTypeDescriptionName (SOURCE_FILE ("type-dynamic-array.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 251)), object->mProperty_mDynamicArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 250)) ;
    {
    ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_12298, var_dynamicArrayType_8177, GALGAS_string ("TGT").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 257)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 258)), var_dynamicArrayType_8177, GALGAS_string ("SRC").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 260)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 261)), GALGAS_ctTrueExpressionAST::constructor_new (SOURCE_FILE ("type-dynamic-array.galgas", 262)), var_llvmInstructionList_8782, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 254)) ;
    }
    GALGAS_assignmentGenerationVarMap var_varMap_12748 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 265)) ;
    {
    var_varMap_12748.setter_insertKey (GALGAS_string ("SRC").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 266)), GALGAS_string ("%SRC"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 266)) ;
    }
    {
    var_varMap_12748.setter_insertKey (GALGAS_string ("TGT").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 267)), GALGAS_string ("%TGT"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 267)) ;
    }
    GALGAS_assignmentGenerationVarMap var_typeMap_12893 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 268)) ;
    {
    var_typeMap_12893.setter_insertKey (GALGAS_string ("SRC").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 269)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_dynamicArrayType_8177.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 269)) ;
    }
    {
    var_typeMap_12893.setter_insertKey (GALGAS_string ("TGT").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 270)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_dynamicArrayType_8177.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 270)) ;
    }
    GALGAS_stringlist var_generatedInstructions_13088 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 271)) ;
    GALGAS_allocaList var_allocaList_13120 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 272)) ;
    GALGAS_uint var_temporaryIndex_13150 = GALGAS_uint ((uint32_t) 0U) ;
    extensionMethod_generateIRCode (var_llvmInstructionList_8782, var_varMap_12748, var_typeMap_12893, var_generatedInstructions_13088, var_temporaryIndex_13150, var_allocaList_13120, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 274)) ;
    GALGAS_assignmentRoutineIR var_routine_13282 = GALGAS_assignmentRoutineIR::constructor_new (GALGAS_lstring::constructor_new (function_assignmentOperatorFuncName (var_dynamicArrayType_8177, var_dynamicArrayType_8177, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 276)), object->mProperty_mDynamicArrayTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 276)), GALGAS_bool (false), GALGAS_bool (false), var_dynamicArrayType_8177, GALGAS_string ("TGT"), var_dynamicArrayType_8177, GALGAS_string ("SRC"), var_generatedInstructions_13088, var_allocaList_13120  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 275)) ;
    ioArgument_ioRoutineListIR.addAssign_operation (var_routine_13282  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 286)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                       extensionMethod_typeDynamicArrayDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeDynamicArrayDeclarationAST_enterInContext (defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@dynArrayRemoveAllFunctionIR llvmCodeGeneration'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                            GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayRemoveAllFunctionIR * object = (const cPtr_dynArrayRemoveAllFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayRemoveAllFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 305)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 306)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 306)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype null, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 309)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 311)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR.mSlotID,
                                           extensionMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@dynArrayLengthFunctionIR llvmCodeGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayLengthFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayLengthFunctionIR * object = (const cPtr_dynArrayLengthFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayLengthFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal i32 @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 329)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 330)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 330)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 331)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %length = call i32 @arc.length (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 332)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i32 %length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 333)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 334)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayLengthFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR.mSlotID,
                                           extensionMethod_dynArrayLengthFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayLengthFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayLengthFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@dynArrayAppendFunctionIR enterAccessibleEntities'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayAppendFunctionIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                              GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayAppendFunctionIR * object = (const cPtr_dynArrayAppendFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayAppendFunctionIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mInsertFunctionMangledName  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 353)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayAppendFunctionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR.mSlotID,
                                                extensionMethod_dynArrayAppendFunctionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayAppendFunctionIR_enterAccessibleEntities (defineExtensionMethod_dynArrayAppendFunctionIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@dynArrayAppendFunctionIR llvmCodeGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayAppendFunctionIR * object = (const cPtr_dynArrayAppendFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayAppendFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  GALGAS_omnibusType var_elementType_16983 = object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 364)) ;
  GALGAS_routineFormalArgumentListAST temp_0 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 374)) ;
  temp_0.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 366)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 367)), var_elementType_16983.getter_llvmBaseTypeName (HERE).getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 368)), GALGAS_string ("inValue").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 369))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 369)) ;
  temp_0.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 371)), GALGAS_string ("atIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 372)), GALGAS_string ("uint32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 373)), GALGAS_string ("inIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 374))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 374)) ;
  GALGAS_routineFormalArgumentListAST var_argumentList_17059 = temp_0 ;
  GALGAS_lstring var_insertRoutineMangledName_17287 = function_routineMangledNameFromAST (object->mProperty_mArrayTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)).getter_llvmBaseTypeName (HERE), GALGAS_string ("insert").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 378)), var_argumentList_17059, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 376)) ;
  GALGAS_string var_insertRoutineLLVMName_17436 = function_llvmNameForFunction (var_insertRoutineMangledName_17287.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 381)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 382)).add_operation (GALGAS_string (" (%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 382)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16983.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 383)).add_operation (GALGAS_string (" %inValue)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 383)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 383)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get buffer length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 385)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.length = call i32 @arc.length (%ptrtype %current.buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 386)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Insert\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_insertRoutineLLVMName_17436, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 388)).add_operation (GALGAS_string ("(%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 388)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16983.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 389)).add_operation (GALGAS_string (" %inValue, i32 %current.buffer.length)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 388)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 392)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR.mSlotID,
                                           extensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayAppendFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@dynArrayInsertFunctionIR enterAccessibleEntities'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                              GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayInsertFunctionIR * object = (const cPtr_dynArrayInsertFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayInsertFunctionIR) ;
  GALGAS_string var_assignRoutineLLVMName_18894 = function_assignmentOperatorFuncName (object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 409)), object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 409)) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (var_assignRoutineLLVMName_18894  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 410)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR.mSlotID,
                                                extensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayInsertFunctionIR_enterAccessibleEntities (defineExtensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@dynArrayInsertFunctionIR llvmCodeGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayInsertFunctionIR * object = (const cPtr_dynArrayInsertFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayInsertFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  GALGAS_string var_elementLLVMTypeName_19409 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 422)).add_operation (GALGAS_string (" (%ptrtype* %ioArray"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 422)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_elementLLVMTypeName_19409, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)).add_operation (GALGAS_string (" %inValue, i32 %inIndex)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 424)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %insert.address = alloca %ptrtype\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 425)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- value pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.pointer = alloca ").add_operation (var_elementLLVMTypeName_19409, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementLLVMTypeName_19409, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)).add_operation (GALGAS_string (" %inValue, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)).add_operation (var_elementLLVMTypeName_19409, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)).add_operation (GALGAS_string ("* %value.pointer\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Size of element\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_elementLLVMTypeName_19409, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)).add_operation (var_elementLLVMTypeName_19409, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %element.byte.size = ptrtoint ").add_operation (var_elementLLVMTypeName_19409, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 431)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 431)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 432)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 433)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %new.buffer.pointer = call %ptrtype @arc.insert.at.index "), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 434)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%ptrtype %current.buffer.pointer, i32 %inIndex, i32 %element.byte.size, %ptrtype* %insert.address)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 435)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Perform copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 436)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %typed.insert.address = bitcast %ptrtype* %insert.address to ").add_operation (var_elementLLVMTypeName_19409, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 437)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 437)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 437)) ;
  GALGAS_string var_assignRoutineLLVMName_20781 = function_assignmentOperatorFuncName (object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 438)), object->mProperty_mElementTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 438)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_assignRoutineLLVMName_20781.getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 439)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_elementLLVMTypeName_19409, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 440)).add_operation (GALGAS_string ("* %typed.insert.address, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 440)).add_operation (var_elementLLVMTypeName_19409, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 440)).add_operation (GALGAS_string ("* %value.pointer)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 440)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Store new buffer pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 441)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %new.buffer.pointer, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 442)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 443)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 444)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 445)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR.mSlotID,
                                           extensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dynArrayInsertFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@booleanDeclarationAST locationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_booleanDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 11)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_booleanDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                                  extensionGetter_booleanDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_booleanDeclarationAST_locationForErrorSignaling (defineExtensionGetter_booleanDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@booleanDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_booleanDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclarationAST * object = (const cPtr_booleanDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclarationAST) ;
  {
  const GALGAS_booleanDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 19)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 19)), temp_0, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 19)) ;
  }
  {
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("uint1").getter_nowhere (SOURCE_FILE ("type-bool.galgas", 20)) COMMA_SOURCE_FILE ("type-bool.galgas", 20)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_booleanDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                               extensionMethod_booleanDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_booleanDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_booleanDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@booleanDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 26)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                                           extensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_booleanDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Once function 'boolTypeName'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_boolTypeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("bool") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_boolTypeName = false ;
static GALGAS_string gOnceFunctionResult_boolTypeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolTypeName) {
    gOnceFunctionResult_boolTypeName = onceFunction_boolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolTypeName = true ;
  }
  return gOnceFunctionResult_boolTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_boolTypeName (void) {
  gOnceFunctionResult_boolTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_boolTypeName (NULL,
                                                          releaseOnceFunctionResult_boolTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_boolTypeName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_boolTypeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_boolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@booleanDeclarationAST enterInContext'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_booleanDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
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
  GALGAS_unifiedTypeMap_2D_proxy var_uint_31_TypeProxy_2781 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("uint1"), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 50)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 50)).getter_location (SOURCE_FILE ("type-bool.galgas", 50))  COMMA_SOURCE_FILE ("type-bool.galgas", 50)), var_uint_31_TypeProxy_2781 COMMA_SOURCE_FILE ("type-bool.galgas", 50)) ;
  }
  {
  GALGAS_lstring joker_3062 ; // Joker input parameter
  extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 53)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 54)), GALGAS_string ("uint1").getter_nowhere (SOURCE_FILE ("type-bool.galgas", 55)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-bool.galgas", 56)), var_uint_31_TypeProxy_2781, joker_3062, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 52)) ;
  }
  GALGAS_omnibusType var_booleanType_3129 = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 62)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 63)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 64)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 65)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-bool.galgas", 66)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-bool.galgas", 67)).operator_or (GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("type-bool.galgas", 67)) COMMA_SOURCE_FILE ("type-bool.galgas", 67)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-bool.galgas", 67)) COMMA_SOURCE_FILE ("type-bool.galgas", 67)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 68)), GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("type-bool.galgas", 69)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 70))  COMMA_SOURCE_FILE ("type-bool.galgas", 61)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 74)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 74)), var_booleanType_3129, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 73)) ;
  }
  GALGAS_omnibusType var_selfType_3622 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 78)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 78)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 78)) ;
  GALGAS_lstring var_boolBoolOp_3729 = function_combineTypeNamesForInfixOperator (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 79)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 79)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_boolBoolOp_3729, var_selfType_3622, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-bool.galgas", 83))  COMMA_SOURCE_FILE ("type-bool.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 80)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_boolBoolOp_3729, var_selfType_3622, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-bool.galgas", 88))  COMMA_SOURCE_FILE ("type-bool.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 85)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_boolBoolOp_3729, var_selfType_3622, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-bool.galgas", 93))  COMMA_SOURCE_FILE ("type-bool.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 90)) ;
  }
  {
  ioArgument_ioContext.mProperty_mBooleanXorOperatorMap.setter_insertKey (var_boolBoolOp_3729, var_selfType_3622, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-bool.galgas", 98))  COMMA_SOURCE_FILE ("type-bool.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 95)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_boolBoolOp_3729, var_selfType_3622, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-bool.galgas", 103))  COMMA_SOURCE_FILE ("type-bool.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 100)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_boolBoolOp_3729, var_selfType_3622, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-bool.galgas", 108))  COMMA_SOURCE_FILE ("type-bool.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 105)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNotOperatorMap.setter_insertKey (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 111)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 110)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_booleanDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                       extensionMethod_booleanDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_booleanDeclarationAST_enterInContext (defineExtensionMethod_booleanDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  {
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mEnumerationName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 55)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mEnumerationName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 56)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 56)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 56)) ;
  }
  GALGAS_bigint var_maxValue_2548 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 58)) ;
  cEnumerator_enumerationConstantList enumerator_2586 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_2586.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsStrictInf, var_maxValue_2548.objectCompare (enumerator_2586.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_maxValue_2548 = enumerator_2586.current_mConstantValue (HERE) ;
      }
    }
    enumerator_2586.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_2686 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 65)).isValid ()) {
    uint32_t variant_2697 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 65)).uintValue () ;
    bool loop_2697 = true ;
    while (loop_2697) {
      loop_2697 = GALGAS_bool (kIsStrictSup, var_maxValue_2548.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 65)))).isValid () ;
      if (loop_2697) {
        loop_2697 = GALGAS_bool (kIsStrictSup, var_maxValue_2548.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 65)))).boolValue () ;
      }
      if (loop_2697 && (0 == variant_2697)) {
        loop_2697 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 65)) ;
      }
      if (loop_2697) {
        variant_2697 -- ;
        var_representationBitCount_2686.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) ;
        var_maxValue_2548 = var_maxValue_2548.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) ;
      }
    }
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mEnumerationName, GALGAS_string ("uint").add_operation (var_representationBitCount_2686.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 69)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 69)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 69)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                               extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension getter '@enumerationDeclarationAST locationForErrorSignaling'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_enumerationDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outLocation = object->mProperty_mEnumerationName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_enumerationDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                  extensionGetter_enumerationDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_locationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("enum ").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 81)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                           extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@enumerationDeclarationAST enterInContext'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumerationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  GALGAS_classConstantMap var_enumConstantMap_4782 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 108)) ;
  GALGAS_bigint var_maxValue_4806 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 109)) ;
  cEnumerator_enumerationConstantList enumerator_4847 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_4847.hasCurrentObject ()) {
    {
    var_enumConstantMap_4782.setter_insertKey (enumerator_4847.current_mConstantName (HERE), enumerator_4847.current_mConstantValue (HERE), object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 111)) ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictInf, var_maxValue_4806.objectCompare (enumerator_4847.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_maxValue_4806 = enumerator_4847.current_mConstantValue (HERE) ;
      }
    }
    enumerator_4847.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_5063 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 118)).isValid ()) {
    uint32_t variant_5074 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 118)).uintValue () ;
    bool loop_5074 = true ;
    while (loop_5074) {
      loop_5074 = GALGAS_bool (kIsStrictSup, var_maxValue_4806.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 118)))).isValid () ;
      if (loop_5074) {
        loop_5074 = GALGAS_bool (kIsStrictSup, var_maxValue_4806.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 118)))).boolValue () ;
      }
      if (loop_5074 && (0 == variant_5074)) {
        loop_5074 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 118)) ;
      }
      if (loop_5074) {
        variant_5074 -- ;
        var_representationBitCount_5063.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 119)) ;
        var_maxValue_4806 = var_maxValue_4806.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 120)) ;
      }
    }
  }
  GALGAS_propertyGetterMap var_propertyGetterMap_5268 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 123)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_integerTypeProxy_5296 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_representationBitCount_5063.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 126)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 126))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 124)) ;
  GALGAS_lstring var_conversionToUIntN_5703 ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_5268, object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 129)), GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_representationBitCount_5063.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 130)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 130))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 130)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-enumeration-declaration.galgas", 131)), GALGAS_bool (true), var_integerTypeProxy_5296, var_conversionToUIntN_5703, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 128)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_enumToUintRoutineIR::constructor_new (var_conversionToUIntN_5703, GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("i").add_operation (var_representationBitCount_5063.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 140))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)) ;
  {
  routine_enterEnumerationComparisonOperators (object->mProperty_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 143)) ;
  }
  GALGAS_omnibusType var_enumerationType_6088 = GALGAS_omnibusType::constructor_new (var_propertyGetterMap_5268, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 147)), var_enumConstantMap_4782, GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 149)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-enumeration-declaration.galgas", 150)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-enumeration-declaration.galgas", 151)).operator_or (GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("type-enumeration-declaration.galgas", 151)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 151)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-enumeration-declaration.galgas", 151)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 151)), object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 152)), GALGAS_typeKind::constructor_enumeration (var_representationBitCount_5063  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 153)), object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 154))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 145)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mEnumerationName, var_enumerationType_6088, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 156)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumerationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                       extensionMethod_enumerationDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInContext (defineExtensionMethod_enumerationDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Routine 'enterEnumerationComparisonOperators'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterEnumerationComparisonOperators (GALGAS_lstring inArgument_inTypeName,
                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key_6815 = function_combineTypeNamesForInfixOperator (inArgument_inTypeName.getter_string (HERE), inArgument_inTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 168)) ;
  GALGAS_omnibusType var_booleanType_6908 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 169)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_key_6815, var_booleanType_6908, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-enumeration-declaration.galgas", 173))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 170)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_key_6815, var_booleanType_6908, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-enumeration-declaration.galgas", 178))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 175)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_key_6815, var_booleanType_6908, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-enumeration-declaration.galgas", 183))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 180)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@enumToUintRoutineIR llvmCodeGeneration'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumToUintRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumToUintRoutineIR * object = (const cPtr_enumToUintRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_enumToUintRoutineIR) ;
  GALGAS_string var_routineLLVMName_8116 = function_llvmNameForFunction (object->mProperty_mRoutineMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 202)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 203)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 203)).add_operation (var_routineLLVMName_8116, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 203)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 204)).add_operation (GALGAS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 204)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %r = load ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 205)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 205)).add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 205)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 205)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 206)).add_operation (GALGAS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 206)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 207)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumToUintRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_enumToUintRoutineIR.mSlotID,
                                           extensionMethod_enumToUintRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumToUintRoutineIR_llvmCodeGeneration (defineExtensionMethod_enumToUintRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structureDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  {
  const GALGAS_structureDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mReceiverTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 273)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_9217 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_9217.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_9217.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mReceiverTypeName, enumerator_9217.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 277)) ;
        }
      }
    }
    switch (enumerator_9217.current_mPropertyKind (HERE).enumValue ()) {
    case GALGAS_propertyKindAST::kNotBuilt:
      break ;
    case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
      {
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_9564 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (enumerator_9217.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_9564->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mReceiverTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_9709 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (enumerator_9217.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_9709->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mReceiverTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_9841 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (enumerator_9217.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_instructionList = extractPtr_9841->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_instructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 286)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_9980 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (enumerator_9217.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_writeInstructionList = extractPtr_9980->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_writeInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 288)) ;
      }
      break ;
    }
    enumerator_9217.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                               extensionMethod_structureDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outRepresentation = object->mProperty_mReceiverTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 296)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                           extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@structureDeclarationAST locationForErrorSignaling'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_structureDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outLocation = object->mProperty_mReceiverTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_structureDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                  extensionGetter_structureDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_structureDeclarationAST_locationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@structureDeclarationAST enterInContext'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structureDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                    GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                    GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                    GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                    GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_propertyList var_propertyList_11949 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 336)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_11993 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 337)) ;
  GALGAS_propertySetterMap var_propertySetterMap_12037 = GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 338)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_12085 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 339)) ;
  GALGAS_constructorSignature var_constructorSignature_12135 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 340)) ;
  GALGAS_string var_constructorKey_12165 = GALGAS_string ("(") ;
  GALGAS_bool var_canBeCopied_12189 = GALGAS_bool (true) ;
  cEnumerator_structurePropertyListAST enumerator_12240 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_12240.hasCurrentObject ()) {
    extensionMethod_enterPropertyInContext (enumerator_12240.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mReceiverTypeName, object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 348)), ioArgument_ioDecoratedRoutineList, var_propertyList_11949, var_propertyGetterMap_11993, var_propertySetterMap_12037, var_sortedOperandIRList_12085, var_constructorSignature_12135, var_constructorKey_12165, var_canBeCopied_12189, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 344)) ;
    enumerator_12240.gotoNextObject () ;
  }
  var_constructorKey_12165.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 359)) ;
  GALGAS_constructorMap var_constructorMap_12772 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 361)) ;
  {
  var_constructorMap_12772.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_12165, object->mProperty_mReceiverTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 363)), var_constructorSignature_12135, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_12085  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 362)) ;
  }
  GALGAS_omnibusTypeAttributes var_typeAttributes_13046 = GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 368)) ;
  cEnumerator_lstringlist enumerator_13185 (object->mProperty_mAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_13185.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_13185.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 371)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_typeAttributes_13046.getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 372)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_13185.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 373)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 373)) ;
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_canBeCopied_12189.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 374)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (object->mProperty_mReceiverTypeName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 375)), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 375)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_13185.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 378)), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 378)) ;
    }
    enumerator_13185.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = object->mProperty_mGenerateAssignmentRoutine.operator_and (var_canBeCopied_12189 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 381)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_typeAttributes_13046 = var_typeAttributes_13046.operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 382)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 382)) ;
    }
  }
  GALGAS_omnibusType var_structureType_13719 = GALGAS_omnibusType::constructor_new (var_propertyGetterMap_11993, var_propertySetterMap_12037, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 388)), var_constructorMap_12772, GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-structure-declaration.galgas", 390)), var_typeAttributes_13046, object->mProperty_mOmnibusTypeSpecificName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 393)), GALGAS_typeKind::constructor_structure (var_propertyList_11949  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 394)), object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 395))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 385)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mReceiverTypeName, var_structureType_13719, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 397)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_13719.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 403)), var_propertyList_11949  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 402))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 402)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structureDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                       extensionMethod_structureDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInContext (defineExtensionMethod_structureDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@userLLVMSructureTypeDefinitionIR generateLLVMType'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (const cPtr_userLLVMTypeDefinitionIR * inObject,
                                                                               GALGAS_string & ioArgument_ioLLVMcode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_userLLVMSructureTypeDefinitionIR * object = (const cPtr_userLLVMSructureTypeDefinitionIR *) inObject ;
  macroValidSharedObject (object, cPtr_userLLVMSructureTypeDefinitionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(object->mProperty_mLLVMDefinedTypeName.add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 627)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 627)) ;
  cEnumerator_propertyList enumerator_23286 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_23286.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_23286.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 629)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 629)) ;
    if (enumerator_23286.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 630)) ;
    }
    enumerator_23286.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 632)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (void) {
  enterExtensionMethod_generateLLVMType (kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR.mSlotID,
                                         extensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (defineExtensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@syncDeclarationAST enterInPrecedenceGraph'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  {
  const GALGAS_syncDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mSyncToolName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 50)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_2432 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_2432.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_2432.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mSyncToolName, enumerator_2432.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 54)) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = enumerator_2432.current_mIsPublic (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_2432.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 57)), GALGAS_string ("a sync tool property cannot be public (should be private)"), fixItArray3  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 57)) ;
      }
    }
    switch (enumerator_2432.current_mPropertyKind (HERE).enumValue ()) {
    case GALGAS_propertyKindAST::kNotBuilt:
      break ;
    case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
      {
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_2885 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (enumerator_2432.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_2885->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mSyncToolName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 62)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_3026 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (enumerator_2432.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_3026->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mSyncToolName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 64)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_3158 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (enumerator_2432.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_instructionList = extractPtr_3158->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_instructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 66)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_3297 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (enumerator_2432.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_writeInstructionList = extractPtr_3297->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_writeInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 68)) ;
      }
      break ;
    }
    enumerator_2432.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                               extensionMethod_syncDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_syncDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@syncDeclarationAST keyRepresentationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("sync ").add_operation (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 76)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                                           extensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension getter '@syncDeclarationAST locationForErrorSignaling'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_syncDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  result_outLocation = object->mProperty_mSyncToolName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_syncDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                                  extensionGetter_syncDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_syncDeclarationAST_locationForErrorSignaling (defineExtensionGetter_syncDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@syncDeclarationAST enterInContext'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                               GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                               GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                               GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  GALGAS_propertyList var_propertyList_4853 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 100)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_4897 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 101)) ;
  GALGAS_propertySetterMap var_propertySetterMap_4941 = GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 102)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_4989 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-sync-declaration.galgas", 103)) ;
  GALGAS_constructorSignature var_constructorSignature_5039 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 104)) ;
  GALGAS_string var_constructorKey_5069 = GALGAS_string ("(") ;
  cEnumerator_structurePropertyListAST enumerator_5119 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_5119.hasCurrentObject ()) {
    GALGAS_bool joker_5505 = GALGAS_bool::constructor_default (SOURCE_FILE ("type-sync-declaration.galgas", 119)) ;
    extensionMethod_enterPropertyInContext (enumerator_5119.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSyncToolName, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 111)), ioArgument_ioDecoratedRoutineList, var_propertyList_4853, var_propertyGetterMap_4897, var_propertySetterMap_4941, var_sortedOperandIRList_4989, var_constructorSignature_5039, var_constructorKey_5069, joker_5505, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 107)) ;
    enumerator_5119.gotoNextObject () ;
  }
  var_constructorKey_5069.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 122)) ;
  GALGAS_constructorMap var_constructorMap_5633 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 124)) ;
  {
  var_constructorMap_5633.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_5069, object->mProperty_mSyncToolName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 126)), var_constructorSignature_5039, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_4989  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 125)) ;
  }
  GALGAS_omnibusType var_structureType_5887 = GALGAS_omnibusType::constructor_new (var_propertyGetterMap_4897, var_propertySetterMap_4941, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 134)), var_constructorMap_5633, GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-sync-declaration.galgas", 136)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-sync-declaration.galgas", 138)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 139)), GALGAS_typeKind::constructor_syncTool (SOURCE_FILE ("type-sync-declaration.galgas", 140)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 141))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 131)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mSyncToolName, var_structureType_5887, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 143)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_5887.ptr (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 149)), var_propertyList_4853  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 148))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 148)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                       extensionMethod_syncDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncDeclarationAST_enterInContext (defineExtensionMethod_syncDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@integerDeclarationAST locationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_integerDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_integerDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                                  extensionGetter_integerDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_integerDeclarationAST_locationForErrorSignaling (defineExtensionGetter_integerDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@integerDeclarationAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_1432 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 29)) ;
  {
  const GALGAS_integerDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName_1432, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 30)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName_1432, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 31)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 31)) COMMA_SOURCE_FILE ("type-integer.galgas", 31)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                               extensionMethod_integerDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@integerDeclarationAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 37)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                                           extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'minValueForInteger'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint function_minValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 46)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 48)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 48)) ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_minValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_minValueForInteger ("minValueForInteger",
                                                                    functionWithGenericHeader_minValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_minValueForInteger) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'maxValueForInteger'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint function_maxValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 56)).left_shift_operation (constinArgument_inBitCount, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 56)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 56)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)) ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_maxValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_maxValueForInteger ("maxValueForInteger",
                                                                    functionWithGenericHeader_maxValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_maxValueForInteger) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@integerDeclarationAST enterInContext'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_3707 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 76)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 76)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_3827 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3707, var_selfTypeProxy_3827 COMMA_SOURCE_FILE ("type-integer.galgas", 77)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolTypeProxy_3938 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 78)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 78))  COMMA_SOURCE_FILE ("type-integer.galgas", 78)), var_boolTypeProxy_3938 COMMA_SOURCE_FILE ("type-integer.galgas", 78)) ;
  }
  GALGAS_bigint var_min_4006 = function_minValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 80)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 80)) ;
  GALGAS_bigint var_max_4061 = function_maxValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 81)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 81)) ;
  GALGAS_string var_llvmTypeName_4179 = GALGAS_string ("i").add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("type-integer.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 83)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_4232 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 84)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, object->mProperty_mSize.modulo_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 86)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_routineLLVMName_4573 ;
      {
      extensionSetter_addPropertyGetter (var_propertyGetterMap_4232, var_integerTypeName_3707.getter_string (SOURCE_FILE ("type-integer.galgas", 88)), GALGAS_string ("byteSwapped").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 89)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 90)), GALGAS_bool (true), var_selfTypeProxy_3827, var_routineLLVMName_4573, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 87)) ;
      }
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_4573, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4179, GALGAS_string ("bswap")  COMMA_SOURCE_FILE ("type-integer.galgas", 95))  COMMA_SOURCE_FILE ("type-integer.galgas", 95)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = GALGAS_bool (kIsEqual, object->mProperty_mSize.objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 104)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_routineLLVMName_5137 ;
      {
      extensionSetter_addPropertyGetter (var_propertyGetterMap_4232, var_integerTypeName_3707.getter_string (SOURCE_FILE ("type-integer.galgas", 106)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 107)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 107)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 108)), GALGAS_bool (true), var_boolTypeProxy_3938, var_routineLLVMName_5137, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 105)) ;
      }
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_uint_31_ToBoolFunctionIR::constructor_new (var_routineLLVMName_5137, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4179  COMMA_SOURCE_FILE ("type-integer.galgas", 113))  COMMA_SOURCE_FILE ("type-integer.galgas", 113)) ;
    }
  }
  GALGAS_lstring var_routineLLVMName_5593 ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_4232, var_integerTypeName_3707.getter_string (SOURCE_FILE ("type-integer.galgas", 122)), GALGAS_string ("bitReversed").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 123)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 124)), GALGAS_bool (true), var_selfTypeProxy_3827, var_routineLLVMName_5593, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 121)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5593, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4179, GALGAS_string ("bitreverse")  COMMA_SOURCE_FILE ("type-integer.galgas", 129))  COMMA_SOURCE_FILE ("type-integer.galgas", 129)) ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_4232, var_integerTypeName_3707.getter_string (SOURCE_FILE ("type-integer.galgas", 138)), GALGAS_string ("leadingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 139)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 140)), GALGAS_bool (true), var_selfTypeProxy_3827, var_routineLLVMName_5593, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 137)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5593, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4179, GALGAS_string ("ctlz")  COMMA_SOURCE_FILE ("type-integer.galgas", 145))  COMMA_SOURCE_FILE ("type-integer.galgas", 145)) ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_4232, var_integerTypeName_3707.getter_string (SOURCE_FILE ("type-integer.galgas", 154)), GALGAS_string ("trainingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 155)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 156)), GALGAS_bool (true), var_selfTypeProxy_3827, var_routineLLVMName_5593, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 153)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5593, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4179, GALGAS_string ("cttz")  COMMA_SOURCE_FILE ("type-integer.galgas", 161))  COMMA_SOURCE_FILE ("type-integer.galgas", 161)) ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_4232, var_integerTypeName_3707.getter_string (SOURCE_FILE ("type-integer.galgas", 170)), GALGAS_string ("setBitCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 171)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 172)), GALGAS_bool (true), var_selfTypeProxy_3827, var_routineLLVMName_5593, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 169)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5593, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4179, GALGAS_string ("ctpop")  COMMA_SOURCE_FILE ("type-integer.galgas", 177))  COMMA_SOURCE_FILE ("type-integer.galgas", 177)) ;
  GALGAS_classConstantMap var_classConstantMap_7233 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 185)) ;
  {
  var_classConstantMap_7233.setter_insertKey (GALGAS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 186)), var_min_4006, var_integerTypeName_3707, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 186)) ;
  }
  {
  var_classConstantMap_7233.setter_insertKey (GALGAS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 187)), var_max_4061, var_integerTypeName_3707, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 187)) ;
  }
  GALGAS_constructorMap var_constructorMap_7472 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 189)) ;
  {
  var_constructorMap_7472.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 190)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 190)), GALGAS_constructorValue::constructor_simple (GALGAS_uint ((uint32_t) 0U).getter_bigint (SOURCE_FILE ("type-integer.galgas", 190))  COMMA_SOURCE_FILE ("type-integer.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 190)) ;
  }
  GALGAS_omnibusType var_integerType_7626 = GALGAS_omnibusType::constructor_new (var_propertyGetterMap_4232, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 194)), var_classConstantMap_7233, var_constructorMap_7472, GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-integer.galgas", 197)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-integer.galgas", 198)).operator_or (GALGAS_omnibusTypeAttributes::constructor_equatable (SOURCE_FILE ("type-integer.galgas", 198)) COMMA_SOURCE_FILE ("type-integer.galgas", 198)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-integer.galgas", 198)) COMMA_SOURCE_FILE ("type-integer.galgas", 198)).operator_or (GALGAS_omnibusTypeAttributes::constructor_comparable (SOURCE_FILE ("type-integer.galgas", 198)) COMMA_SOURCE_FILE ("type-integer.galgas", 198)), var_integerTypeName_3707.getter_string (SOURCE_FILE ("type-integer.galgas", 199)), GALGAS_typeKind::constructor_integer (var_min_4006, var_max_4061, object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 200)), object->mProperty_mSize  COMMA_SOURCE_FILE ("type-integer.galgas", 200)), var_integerTypeName_3707.getter_string (SOURCE_FILE ("type-integer.galgas", 201))  COMMA_SOURCE_FILE ("type-integer.galgas", 192)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3707, var_integerType_7626, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 203)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName_3707, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 208)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName_3707, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 214)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName_3707, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 220)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                       extensionMethod_integerDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInContext (defineExtensionMethod_integerDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'enter_integer_integer_operators'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enter_5F_integer_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_selfType_9225 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 236)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 236)) ;
  GALGAS_omnibusType var_booleanType_9325 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 237)) ;
  GALGAS_lstring var_intIntOp_9397 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (SOURCE_FILE ("type-integer.galgas", 239)), constinArgument_inIntegerTypeName.getter_string (SOURCE_FILE ("type-integer.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 239)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_9397, var_booleanType_9325, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 243))  COMMA_SOURCE_FILE ("type-integer.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 240)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 248)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 248)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_9397, var_booleanType_9325, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 245)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 253)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 253)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_9397, var_booleanType_9325, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 250)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 256)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 260))  COMMA_SOURCE_FILE ("type-integer.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 257)) ;
      }
      {
      ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 265))  COMMA_SOURCE_FILE ("type-integer.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 262)) ;
      }
      {
      ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 270))  COMMA_SOURCE_FILE ("type-integer.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 267)) ;
      }
      {
      ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 272)) ;
      }
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inIsSigned.boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 278)) ;
      }
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 286)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 286)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 283)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 291))  COMMA_SOURCE_FILE ("type-integer.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 288)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_8 ;
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 296)) ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 296)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_8  COMMA_SOURCE_FILE ("type-integer.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 293)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 301))  COMMA_SOURCE_FILE ("type-integer.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 298)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 306)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 306)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 303)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 311))  COMMA_SOURCE_FILE ("type-integer.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 308)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 316)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 316)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 313)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 321)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 321)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 318)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 326)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 326)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 323)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 331)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 331)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 328)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 337))  COMMA_SOURCE_FILE ("type-integer.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 334)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 342)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 342)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_9397, var_selfType_9225, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 339)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@infixObjectObjectOperatorDescription generateInfixOperatorCode'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (const cPtr_omnibusInfixOperatorDescription * inObject,
                                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                            const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                            const GALGAS_location constinArgument_inOperatorLocation,
                                                                                            const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                            const GALGAS_omnibusType constinArgument_inResultType,
                                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixObjectObjectOperatorDescription * object = (const cPtr_infixObjectObjectOperatorDescription *) inObject ;
  macroValidSharedObject (object, cPtr_infixObjectObjectOperatorDescription) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 362)) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 362)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bigint var_left_13473 ;
      GALGAS_omnibusType joker_13447_1 ; // Joker input parameter
      constinArgument_inLeftOperand.method_literalInteger (joker_13447_1, var_left_13473, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)) ;
      GALGAS_bigint var_right_13538 ;
      GALGAS_omnibusType joker_13511_1 ; // Joker input parameter
      constinArgument_inRightOperand.method_literalInteger (joker_13511_1, var_right_13538, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 364)) ;
      const GALGAS_infixObjectObjectOperatorDescription temp_2 = object ;
      GALGAS_bigint var_resultValue_13559 = callExtensionGetter_performStaticOperation ((const cPtr_infixObjectObjectOperatorDescription *) temp_2.ptr (), var_left_13473, var_right_13538, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)) ;
      outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_13559  COMMA_SOURCE_FILE ("type-integer.galgas", 366)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 368)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 372)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription.mSlotID,
                                                  extensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode (defineExtensionMethod_infixObjectObjectOperatorDescription_generateInfixOperatorCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'enter_integer_literal_operators'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enter_5F_integer_5F_literal_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_selfType_14504 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 391)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 391)) ;
  GALGAS_omnibusType var_booleanType_14604 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 392)) ;
  GALGAS_lstring var_intLiteralOp_14680 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 394)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_booleanType_14604, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 398))  COMMA_SOURCE_FILE ("type-integer.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 395)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 403)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 403)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_booleanType_14604, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 400)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 408)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 408)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_booleanType_14604, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 411)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 415))  COMMA_SOURCE_FILE ("type-integer.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 412)) ;
      }
      {
      ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 420))  COMMA_SOURCE_FILE ("type-integer.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 417)) ;
      }
      {
      ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 425))  COMMA_SOURCE_FILE ("type-integer.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 422)) ;
      }
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_5 ;
  const enumGalgasBool test_6 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 432)) ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 432)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_5  COMMA_SOURCE_FILE ("type-integer.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 429)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 437))  COMMA_SOURCE_FILE ("type-integer.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 434)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_7 ;
  const enumGalgasBool test_8 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 442)) ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 442)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_7  COMMA_SOURCE_FILE ("type-integer.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 439)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 447))  COMMA_SOURCE_FILE ("type-integer.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 444)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 452)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 452)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 449)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 457))  COMMA_SOURCE_FILE ("type-integer.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 454)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 462)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 462)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 459)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 467)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 467)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 464)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 472)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 472)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 469)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 477)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 477)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 474)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 483))  COMMA_SOURCE_FILE ("type-integer.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 480)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 488)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 488)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_14680, var_selfType_14504, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 485)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@integerObject_literal_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (const cPtr_omnibusInfixOperatorDescription * inObject,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                 const GALGAS_omnibusType constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_infixOperator * object = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  GALGAS_bigint var_rightLiteralValue_18604 ;
  GALGAS_omnibusType joker_18565_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_18565_1, var_rightLiteralValue_18604, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 509)) ;
  GALGAS_bigint var_min_18663 ;
  GALGAS_bigint var_max_18684 ;
  GALGAS_bool joker_18686_2 ; // Joker input parameter
  GALGAS_uint joker_18686_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 510)).getter_kind (HERE).method_integer (var_min_18663, var_max_18684, joker_18686_2, joker_18686_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 510)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_rightLiteralValue_18604.objectCompare (var_min_18663)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min_18663.getter_string (SOURCE_FILE ("type-integer.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 512)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 512)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 512)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_rightLiteralValue_18604.objectCompare (var_max_18684)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max_18684.getter_string (SOURCE_FILE ("type-integer.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 514)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 514)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 514)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 515)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_bigint var_leftLiteralValue_19110 ;
          GALGAS_omnibusType joker_19072_1 ; // Joker input parameter
          constinArgument_inLeftOperand.method_literalInteger (joker_19072_1, var_leftLiteralValue_19110, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 516)) ;
          const GALGAS_integerObject_5F_literal_5F_infixOperator temp_5 = object ;
          GALGAS_bigint var_resultValue_19131 = callExtensionGetter_performStaticOperation ((const cPtr_integerObject_5F_literal_5F_infixOperator *) temp_5.ptr (), var_leftLiteralValue_19110, var_rightLiteralValue_18604, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 517)) ;
          outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_19131  COMMA_SOURCE_FILE ("type-integer.galgas", 518)) ;
        }
      }
      if (kBoolFalse == test_4) {
        {
        routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 520)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 523)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 521)) ;
        }
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator.mSlotID,
                                                  extensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode (defineExtensionMethod_integerObject_5F_literal_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'enter_literal_integer_operators'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enter_5F_literal_5F_integer_5F_operators (const GALGAS_lstring constinArgument_inIntegerTypeName,
                                                       const GALGAS_bool constinArgument_inIsSigned,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_selfType_20079 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 542)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 542)) ;
  GALGAS_lstring var_intLiteralOp_20211 = function_combineTypeNamesForInfixOperator (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 544)), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 544)) ;
  GALGAS_omnibusType var_booleanType_20314 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 545)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_booleanType_20314, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 549))  COMMA_SOURCE_FILE ("type-integer.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 546)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 554)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 554)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_booleanType_20314, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 551)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 559)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 559)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_booleanType_20314, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 556)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 562)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 566))  COMMA_SOURCE_FILE ("type-integer.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 563)) ;
      }
      {
      ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 571))  COMMA_SOURCE_FILE ("type-integer.galgas", 571)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 568)) ;
      }
      {
      ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 576))  COMMA_SOURCE_FILE ("type-integer.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 573)) ;
      }
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_5 ;
  const enumGalgasBool test_6 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 583)) ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 583)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_5  COMMA_SOURCE_FILE ("type-integer.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 580)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 588))  COMMA_SOURCE_FILE ("type-integer.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 585)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_7 ;
  const enumGalgasBool test_8 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 593)) ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 593)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_7  COMMA_SOURCE_FILE ("type-integer.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 590)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 598))  COMMA_SOURCE_FILE ("type-integer.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 595)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 603)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 603)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 600)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 608))  COMMA_SOURCE_FILE ("type-integer.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 605)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 613)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 613)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 610)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 618)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 618)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 615)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 623)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 623)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 620)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 628)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 628)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 625)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 634))  COMMA_SOURCE_FILE ("type-integer.galgas", 634)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 631)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 639)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 639)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_20211, var_selfType_20079, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 636)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@literal_integerObject_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (const cPtr_omnibusInfixOperatorDescription * inObject,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                 const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                 const GALGAS_omnibusType constinArgument_inResultType,
                                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_integerObject_5F_infixOperator * object = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  GALGAS_bigint var_leftLiteralValue_24152 ;
  GALGAS_omnibusType joker_24114_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_24114_1, var_leftLiteralValue_24152, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 660)) ;
  GALGAS_bigint var_min_24212 ;
  GALGAS_bigint var_max_24233 ;
  GALGAS_bool joker_24235_2 ; // Joker input parameter
  GALGAS_uint joker_24235_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 661)).getter_kind (HERE).method_integer (var_min_24212, var_max_24233, joker_24235_2, joker_24235_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 661)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_leftLiteralValue_24152.objectCompare (var_min_24212)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min_24212.getter_string (SOURCE_FILE ("type-integer.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 663)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 663)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 663)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_leftLiteralValue_24152.objectCompare (var_max_24233)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max_24233.getter_string (SOURCE_FILE ("type-integer.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 665)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 665)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 665)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 666)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_bigint var_rightLiteralValue_24658 ;
          GALGAS_omnibusType joker_24619_1 ; // Joker input parameter
          constinArgument_inRightOperand.method_literalInteger (joker_24619_1, var_rightLiteralValue_24658, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 667)) ;
          const GALGAS_literal_5F_integerObject_5F_infixOperator temp_5 = object ;
          GALGAS_bigint var_resultValue_24679 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_integerObject_5F_infixOperator *) temp_5.ptr (), var_leftLiteralValue_24152, var_rightLiteralValue_24658, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 668)) ;
          outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_24679  COMMA_SOURCE_FILE ("type-integer.galgas", 669)) ;
        }
      }
      if (kBoolFalse == test_4) {
        {
        routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 671)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 674)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 672)) ;
        }
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator.mSlotID,
                                                  extensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (defineExtensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@uint1ToBoolFunctionIR llvmCodeGeneration'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uint_31_ToBoolFunctionIR * object = (const cPtr_uint_31_ToBoolFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_uint_31_ToBoolFunctionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 698)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 698)).add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 698)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 698)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 698)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 699)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 699)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 699)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 700)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 700)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 700)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 700)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 700)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 %value\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 701)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 702)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_uint_31_ToBoolFunctionIR.mSlotID,
                                           extensionMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration (defineExtensionMethod_uint_31_ToBoolFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@integerBuiltinFunctionIR llvmCodeGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerBuiltinFunctionIR * object = (const cPtr_integerBuiltinFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_integerBuiltinFunctionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 721)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 721)).add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 721)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 721)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 722)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 722)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 722)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 723)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 723)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 723)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 723)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 723)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 724)).add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 724)).add_operation (object->mProperty_mIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 724)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 724)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 724)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 724)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 725)).add_operation (GALGAS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 725)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 725)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 726)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 726)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 726)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 727)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (object->mProperty_mLLVMTypeName.add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 729)).add_operation (object->mProperty_mIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 729)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 729)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 729)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 729)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 729)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 729))  COMMA_SOURCE_FILE ("type-integer.galgas", 728)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_integerBuiltinFunctionIR.mSlotID,
                                           extensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerBuiltinFunctionIR_llvmCodeGeneration (defineExtensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@staticIntegerDeclarationAST locationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_staticIntegerDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-static-integer.galgas", 11)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_staticIntegerDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_staticIntegerDeclarationAST.mSlotID,
                                                  extensionGetter_staticIntegerDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_staticIntegerDeclarationAST_locationForErrorSignaling (defineExtensionGetter_staticIntegerDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@staticIntegerDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticIntegerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticIntegerDeclarationAST * object = (const cPtr_staticIntegerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticIntegerDeclarationAST) ;
  GALGAS_lstring var_ctIntegerTypeName_1175 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-static-integer.galgas", 21)) ;
  {
  const GALGAS_staticIntegerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_ctIntegerTypeName_1175, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_ctIntegerTypeName_1175, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 23)).getter_nowhere (SOURCE_FILE ("type-static-integer.galgas", 23)) COMMA_SOURCE_FILE ("type-static-integer.galgas", 23)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticIntegerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_staticIntegerDeclarationAST.mSlotID,
                                               extensionMethod_staticIntegerDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticIntegerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_staticIntegerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension getter '@staticIntegerDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_staticIntegerDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_staticIntegerDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_staticIntegerDeclarationAST.mSlotID,
                                                           extensionGetter_staticIntegerDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_staticIntegerDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_staticIntegerDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@staticIntegerDeclarationAST enterInContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_staticIntegerDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
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
  GALGAS_lstring var_integerTypeName_2587 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 46)).getter_nowhere (SOURCE_FILE ("type-static-integer.galgas", 46)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_2587, function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 48)) ;
  }
  {
  routine_enterLiteralIntegerOperators (ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-static-integer.galgas", 53)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_staticIntegerDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_staticIntegerDeclarationAST.mSlotID,
                                       extensionMethod_staticIntegerDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_staticIntegerDeclarationAST_enterInContext (defineExtensionMethod_staticIntegerDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'enterLiteralIntegerOperators'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterLiteralIntegerOperators (GALGAS_semanticContext & ioArgument_ioContext,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_literalIntegerTypeName_3055 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 63)).getter_nowhere (SOURCE_FILE ("type-static-integer.galgas", 63)) ;
  GALGAS_lstring var_intIntOp_3124 = function_combineTypeNamesForInfixOperator (var_literalIntegerTypeName_3055.getter_string (HERE), var_literalIntegerTypeName_3055.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 65)) ;
  GALGAS_omnibusType var_selfType_3238 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_literalIntegerTypeName_3055, inCompiler  COMMA_SOURCE_FILE ("type-static-integer.galgas", 66)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 66)) ;
  GALGAS_omnibusType var_booleanType_3374 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 68)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_3124, var_booleanType_3374, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-static-integer.galgas", 72))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 69)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3124, var_booleanType_3374, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-static-integer.galgas", 77))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 74)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3124, var_booleanType_3374, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-static-integer.galgas", 82))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 79)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-static-integer.galgas", 88))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 85)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-static-integer.galgas", 93))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 90)) ;
  }
  {
  ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-static-integer.galgas", 98))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 95)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (var_literalIntegerTypeName_3055, inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 100)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (var_literalIntegerTypeName_3055, inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 104)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-static-integer.galgas", 111))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 108)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-static-integer.galgas", 116))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 113)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-static-integer.galgas", 121))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 118)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-static-integer.galgas", 126))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 123)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-static-integer.galgas", 131))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 128)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-static-integer.galgas", 136))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 133)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-static-integer.galgas", 141))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 138)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-static-integer.galgas", 146))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 143)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-static-integer.galgas", 151))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 148)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-static-integer.galgas", 156))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 153)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-static-integer.galgas", 162))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 159)) ;
  }
  {
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_3124, var_selfType_3238, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-static-integer.galgas", 167))  COMMA_SOURCE_FILE ("type-static-integer.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 164)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@literal_literal_integerInfixOperation generateInfixOperatorCode'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (const cPtr_omnibusInfixOperatorDescription * inObject,
                                                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                                   GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                                   const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                   const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                                                   const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                   const GALGAS_omnibusType constinArgument_inResultType,
                                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue_7122 ;
  GALGAS_omnibusType joker_7091_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_7091_1, var_leftValue_7122, inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 189)) ;
  GALGAS_bigint var_rightValue_7190 ;
  GALGAS_omnibusType joker_7158_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_7158_1, var_rightValue_7190, inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 190)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result_7204 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue_7122, var_rightValue_7190, inCompiler COMMA_SOURCE_FILE ("type-static-integer.galgas", 191)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_7204  COMMA_SOURCE_FILE ("type-static-integer.galgas", 192)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation.mSlotID,
                                                  extensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode (defineExtensionMethod_literal_5F_literal_5F_integerInfixOperation_generateInfixOperatorCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@literalStringDeclarationAST locationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_literalStringDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-static-string.galgas", 11)) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_literalStringDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                                  extensionGetter_literalStringDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_literalStringDeclarationAST_locationForErrorSignaling (defineExtensionGetter_literalStringDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@literalStringDeclarationAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  GALGAS_lstring var_literalStringTypeName_1179 = function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 21)) ;
  {
  const GALGAS_literalStringDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1179, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1179, GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 23)) COMMA_SOURCE_FILE ("type-static-string.galgas", 23)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                               extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension getter '@literalStringDeclarationAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                                           extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@literalStringDeclarationAST enterInContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalStringDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
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
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 48)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 48)), function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 47)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalStringDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                       extensionMethod_literalStringDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInContext (defineExtensionMethod_literalStringDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@typeOpaqueDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  {
  const GALGAS_typeOpaqueDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mOpaqueTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 58)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), object->mProperty_mOpaqueTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 60)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                               extensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension getter '@typeOpaqueDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("opaque ").add_operation (object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                                           extensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@typeOpaqueDeclarationAST locationForErrorSignaling'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  result_outLocation = object->mProperty_mOpaqueTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                                  extensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (defineExtensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@typeOpaqueDeclarationAST enterInContext'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeOpaqueDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                     GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                     GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                     GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                     GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  GALGAS_omnibusTypeAttributes var_opaqueTypeAttributes_4232 = GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 89)) ;
  GALGAS_bool var_copyable_4255 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_4299 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4299.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_4299.current_mValue (HERE).getter_string (HERE).objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 92)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_opaqueTypeAttributes_4232.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 93)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4299.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 94)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 94)) ;
          }
        }
        if (kBoolFalse == test_1) {
          var_opaqueTypeAttributes_4232 = var_opaqueTypeAttributes_4232.operator_or (GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 96)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, enumerator_4299.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 98)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = var_copyable_4255.boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_4299.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 100)), GALGAS_string ("duplicated attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 100)) ;
            }
          }
          if (kBoolFalse == test_4) {
            var_copyable_4255 = GALGAS_bool (true) ;
            var_opaqueTypeAttributes_4232 = var_opaqueTypeAttributes_4232.operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 103)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 103)) ;
          }
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_4299.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 106)), GALGAS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GALGAS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)) ;
      }
    }
    enumerator_4299.gotoNextObject () ;
  }
  GALGAS_objectIR var_sizeExpressionIR_5234 ;
  {
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSizeExpression, object->mProperty_mSizeExpressionLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 117)), var_sizeExpressionIR_5234, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 112)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_sizeExpressionIR_5234.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not a literal integer"), fixItArray8  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_7) {
    GALGAS_constructorMap var_constructorMap_5415 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 123)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = var_opaqueTypeAttributes_4232.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 124)).boolEnum () ;
      if (kBoolTrue == test_9) {
        {
        var_constructorMap_5415.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
        }
      }
    }
    GALGAS_bigint var_bitSize_5612 ;
    GALGAS_omnibusType joker_5591_1 ; // Joker input parameter
    var_sizeExpressionIR_5234.method_literalInteger (joker_5591_1, var_bitSize_5612, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 127)) ;
    GALGAS_omnibusType var_opaqueType_5632 = GALGAS_omnibusType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 129)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 130)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 131)), var_constructorMap_5415, GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-opaque-declaration.galgas", 133)), var_opaqueTypeAttributes_4232, object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 136)), GALGAS_typeKind::constructor_opaque (var_bitSize_5612  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 137)), object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 138))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mOpaqueTypeName, var_opaqueType_5632, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_copyable_4255.boolEnum () ;
    if (kBoolTrue == test_10) {
      inCompiler->printMessage (GALGAS_string ("OPAQUE ").add_operation (object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 147)).add_operation (GALGAS_string (" is copyable\n"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 147))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 147)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeOpaqueDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                       extensionMethod_typeOpaqueDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeOpaqueDeclarationAST_enterInContext (defineExtensionMethod_typeOpaqueDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension getter '@controlRegisterGroupDeclarationAST keyRepresentationForErrorSignaling'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  result_outRepresentation = function_registerGroupNameFromOmnibusName (object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 305)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 305)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                                           extensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension getter '@controlRegisterGroupDeclarationAST locationForErrorSignaling'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  result_result = object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 311)).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 311)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                                  extensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (defineExtensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@controlRegisterGroupDeclarationAST enterInPrecedenceGraph'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  GALGAS_lstring var_nodeName_12343 = function_registerGroupNameFromOmnibusName (object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)) ;
  {
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_12343, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)) ;
  }
  cEnumerator_controlRegisterDeclarationList enumerator_12539 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_12539.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12343, enumerator_12539.current (HERE).getter_mRegisterTypeName (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 323)) ;
    }
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12343, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) ;
    }
    GALGAS_stringlist var_split_12803 = enumerator_12539.current (HERE).getter_mRegisterTypeName (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("uint") COMMA_SOURCE_FILE ("declaration-control-register.galgas", 326)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      GALGAS_bool test_2 = GALGAS_bool (kIsEqual, var_split_12803.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = var_split_12803.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas", 327)) ;
      }
      test_1 = test_2.boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_uint var_n_12965 = var_split_12803.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsStrictSup, var_n_12965.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_lstring var_bitSizeTypeName_13064 = GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_n_12965.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)), enumerator_12539.current (HERE).getter_mRegisterTypeName (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 330))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)) ;
            {
            ioArgument_ioGraph.setter_addEdge (var_nodeName_12343, var_bitSizeTypeName_13064 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 331)) ;
            }
          }
        }
      }
    }
    cEnumerator_controlRegisterBitSliceList enumerator_13306 (enumerator_12539.current (HERE).getter_mRegisterBitSliceList (HERE), kENUMERATION_UP) ;
    while (enumerator_13306.hasCurrentObject ()) {
      switch (enumerator_13306.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_13516 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_13306.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_13516->mAssociatedValue1 ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsSupOrEqual, extractedValue_count.getter_bigint (HERE).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 339)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              {
              extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)), extractedValue_count.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)) ;
              }
            }
          }
        }
        break ;
      }
      enumerator_13306.gotoNextObject () ;
    }
    GALGAS_lstring var_rootNode_13590 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 345)), var_nodeName_12343.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 345)) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12343, var_rootNode_13590 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 346)) ;
    }
    cEnumerator_controlRegisterNameListAST enumerator_13803 (enumerator_12539.current (HERE).getter_mRegisterArrayList (HERE), kENUMERATION_UP) ;
    while (enumerator_13803.hasCurrentObject ()) {
      switch (enumerator_13803.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
      case GALGAS_controlRegisterKind::kNotBuilt:
        break ;
      case GALGAS_controlRegisterKind::kEnum_scalar:
        {
        }
        break ;
      case GALGAS_controlRegisterKind::kEnum_registerArray:
        {
          const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_14120 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_13803.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_arraySize = extractPtr_14120->mAssociatedValue0 ;
          const GALGAS_expressionAST extractedValue_arrayElementSize = extractPtr_14120->mAssociatedValue2 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arraySize.ptr (), var_nodeName_12343, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 352)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSize.ptr (), var_nodeName_12343, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 353)) ;
        }
        break ;
      }
      enumerator_13803.gotoNextObject () ;
    }
    enumerator_12539.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                               extensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'controlRegisterType'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_controlRegisterType (const GALGAS_lstring constinArgument_inRegisterTypeName,
                                  GALGAS_semanticContext & ioArgument_ioContext,
                                  GALGAS_omnibusType & outArgument_outRegisterType,
                                  GALGAS_uint & outArgument_outRegisterBitCount,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterBitCount.drop () ; // Release 'out' argument
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (constinArgument_inRegisterTypeName, outArgument_outRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 402)) ;
  switch (outArgument_outRegisterType.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_16058 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_16058->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 407)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 407)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 409)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 409)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 411)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 411)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeBool:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 413)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 413)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeInteger:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 415)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 415)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 417)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 417)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 419)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 421)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 423)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 423)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 425)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 425)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 427)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 427)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_generic:
    {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 429)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 429)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_llvmType:
    {
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 431)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray12  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 431)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'buildControlRegisterSliceMap'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inRegisterBitSliceList.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 451)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_shiftCount_18412 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_controlRegisterBitSliceList enumerator_18455 (constinArgument_inRegisterBitSliceList, kENUMERATION_DOWN) ;
      while (enumerator_18455.hasCurrentObject ()) {
        switch (enumerator_18455.current_mRegisterBitSlice (HERE).enumValue ()) {
        case GALGAS_controlRegisterBitSlice::kNotBuilt:
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_18650 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_18455.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lbigint extractedValue_count = extractPtr_18650->mAssociatedValue0 ;
            var_shiftCount_18412 = var_shiftCount_18412.add_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)), GALGAS_string ("\xE2""\x80""\x94""")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)) ;
          }
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_19171 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_18455.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_name = extractPtr_19171->mAssociatedValue0 ;
            const GALGAS_lbigint extractedValue_count = extractPtr_19171->mAssociatedValue1 ;
            GALGAS_uint var_bitCount_18724 = extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_18724, extractedValue_name.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 460)) ;
            {
            outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_name, var_shiftCount_18412, var_bitCount_18724, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 461)) ;
            }
            GALGAS_bigint var_mask_18960 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_bitCount_18724, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_shiftCount_18412, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)) ;
            {
            outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 470)), var_mask_18960, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 468)) ;
            }
            var_shiftCount_18412 = var_shiftCount_18412.add_operation (var_bitCount_18724, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 474)) ;
          }
          break ;
        }
        enumerator_18455.gotoNextObject () ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_18412)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_18412.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 479)) ;
        }
      }
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@controlRegisterGroupDeclarationAST enterInContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_controlRegisterGroupDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                                               GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                               GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                               GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                               GALGAS_controlRegisterUserAccesMapAST & ioArgument_ioControlRegisterUserAccesMapAST,
                                                                               GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  GALGAS_controlRegisterMap var_regMap_23951 = GALGAS_controlRegisterMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 596)) ;
  cEnumerator_controlRegisterDeclarationList enumerator_23980 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_23980.hasCurrentObject ()) {
    extensionMethod_buildControlRegisterMapForGroup (enumerator_23980.current (HERE), ioArgument_ioContext, var_regMap_23951, ioArgument_ioStaticEntityMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 598)) ;
    enumerator_23980.gotoNextObject () ;
  }
  cEnumerator_registerGroupListAST enumerator_24153 (object->mProperty_mRegisterGroupList, kENUMERATION_UP) ;
  while (enumerator_24153.hasCurrentObject ()) {
    GALGAS_controlRegisterMap var_registerMap_24192 = var_regMap_23951 ;
    cEnumerator_controlRegisterMap enumerator_24263 (var_regMap_23951, kENUMERATION_UP) ;
    while (enumerator_24263.hasCurrentObject ()) {
      GALGAS_string var_key_24280 = GALGAS_string ("#").add_operation (enumerator_24153.current (HERE).getter_mRegisterGroupName (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (enumerator_24263.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = ioArgument_ioControlRegisterUserAccesMapAST.getter_hasKey (var_key_24280 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 609)).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          var_registerMap_24192.setter_setMUserAccessForKey (GALGAS_bool (true), enumerator_24263.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 610)) ;
          }
          {
          ioArgument_ioControlRegisterUserAccesMapAST.setter_removeKey (var_key_24280.getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 611)) ;
          }
        }
      }
      enumerator_24263.gotoNextObject () ;
    }
    switch (enumerator_24153.current (HERE).getter_mControlRegisterGroupKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterGroupKindAST::kNotBuilt:
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_single:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_single * extractPtr_24814 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_single *) (enumerator_24153.current (HERE).getter_mControlRegisterGroupKind (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_baseAddress = extractPtr_24814->mAssociatedValue0 ;
        GALGAS_registerGroupKind var_groupKind_24654 = GALGAS_registerGroupKind::constructor_single (extractedValue_baseAddress.getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 617))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 617)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24153.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_24654, var_registerMap_24192, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 618)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_groupArray:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray * extractPtr_26108 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *) (enumerator_24153.current (HERE).getter_mControlRegisterGroupKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_groupSizeExpression = extractPtr_26108->mAssociatedValue0 ;
        const GALGAS_location extractedValue_groupSizeExpressionLocation = extractPtr_26108->mAssociatedValue1 ;
        const GALGAS_lbigintlist extractedValue_baseAddresses = extractPtr_26108->mAssociatedValue2 ;
        GALGAS_objectIR var_groupArraySizeExpressionResult_25206 ;
        {
        routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_groupSizeExpression, extractedValue_groupSizeExpressionLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 625)), var_groupArraySizeExpressionResult_25206, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 620)) ;
        }
        GALGAS_bigint var_groupSize_25238 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_groupArraySizeExpressionResult_25206.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 629)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 629)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (extractedValue_groupSizeExpressionLocation, GALGAS_string ("control register group size is not a static integer expression"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 630)) ;
            var_groupSize_25238.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_omnibusType joker_25515_1 ; // Joker input parameter
          var_groupArraySizeExpressionResult_25206.method_literalInteger (joker_25515_1, var_groupSize_25238, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 634)) ;
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsNotEqual, var_groupSize_25238.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 636)).objectCompare (extractedValue_baseAddresses.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 636)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_groupSizeExpressionLocation, GALGAS_string ("the group size is ").add_operation (var_groupSize_25238.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GALGAS_string (", but "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (extractedValue_baseAddresses.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 638)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GALGAS_string (" base addresses are defined"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 637)) ;
          }
        }
        GALGAS_registerGroupKind var_groupKind_25785 = GALGAS_registerGroupKind::constructor_arrayGroup (extractedValue_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 640)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24153.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_25785, var_registerMap_24192, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 641)) ;
        }
        ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (enumerator_24153.current (HERE).getter_mRegisterGroupName (HERE), extractedValue_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 642))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 642)) ;
      }
      break ;
    }
    enumerator_24153.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                       extensionMethod_controlRegisterGroupDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_enterInContext (defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@decoratedControlRegisterArrayGroupDeclaration semanticAnalysis'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedControlRegisterArrayGroupDeclaration * object = (const cPtr_decoratedControlRegisterArrayGroupDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mControlRegisterGroupArrayList.addAssign_operation (object->mProperty_mGroupName, object->mProperty_mBaseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 666)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration.mSlotID,
                                         extensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (defineExtensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterGroupMap constinArgument_inControlRegisterGroupMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_byAddressFilePath_29386 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers-sorted-by-address.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 727)) ;
  GALGAS_string var_byNameFilePath_29475 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers-sorted-by-name.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 728)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_controlRegisterByAddress var_controlRegisterByAddress_29668 = GALGAS_controlRegisterByAddress::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 730)) ;
      GALGAS_controlRegisterByName var_controlRegisterByName_29722 = GALGAS_controlRegisterByName::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 731)) ;
      GALGAS_uint var_controlRegisterCount_29758 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_controlRegisterGroupMap enumerator_29809 (constinArgument_inControlRegisterGroupMap, kENUMERATION_UP) ;
      while (enumerator_29809.hasCurrentObject ()) {
        switch (enumerator_29809.current_mGroupKind (HERE).enumValue ()) {
        case GALGAS_registerGroupKind::kNotBuilt:
          break ;
        case GALGAS_registerGroupKind::kEnum_single:
          {
            const cEnumAssociatedValues_registerGroupKind_single * extractPtr_30124 = (const cEnumAssociatedValues_registerGroupKind_single *) (enumerator_29809.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_bigint extractedValue_groupBaseAddress = extractPtr_30124->mAssociatedValue0 ;
            {
            routine_buildControlRegisterMaps (enumerator_29809.current_mControlRegisterMap (HERE), extractedValue_groupBaseAddress, enumerator_29809.current_lkey (HERE).getter_string (HERE), var_controlRegisterByAddress_29668, var_controlRegisterByName_29722, var_controlRegisterCount_29758, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 736)) ;
            }
          }
          break ;
        case GALGAS_registerGroupKind::kEnum_arrayGroup:
          {
            const cEnumAssociatedValues_registerGroupKind_arrayGroup * extractPtr_30514 = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) (enumerator_29809.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_lbigintlist extractedValue_baseAddresses = extractPtr_30514->mAssociatedValue0 ;
            cEnumerator_lbigintlist enumerator_30217 (extractedValue_baseAddresses, kENUMERATION_UP) ;
            GALGAS_uint index_30189 ((uint32_t) 0) ;
            while (enumerator_30217.hasCurrentObject ()) {
              {
              routine_buildControlRegisterMaps (enumerator_29809.current_mControlRegisterMap (HERE), enumerator_30217.current_mValue (HERE).getter_bigint (HERE), enumerator_29809.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (index_30189.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)), var_controlRegisterByAddress_29668, var_controlRegisterByName_29722, var_controlRegisterCount_29758, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 746)) ;
              }
              enumerator_30217.gotoNextObject () ;
              index_30189.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 745)) ;
            }
          }
          break ;
        }
        enumerator_29809.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_30555 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 758)), var_controlRegisterCount_29758, var_controlRegisterByAddress_29668 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 757))) ;
      GALGAS_bool joker_30802 ; // Joker input parameter
      var_typeDumpString_30555.method_writeToFileWhenDifferentContents (var_byAddressFilePath_29386, joker_30802, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)) ;
      var_typeDumpString_30555 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 764)), var_controlRegisterCount_29758, var_controlRegisterByName_29722 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763))) ;
      GALGAS_bool joker_31061 ; // Joker input parameter
      var_typeDumpString_30555.method_writeToFileWhenDifferentContents (var_byNameFilePath_29475, joker_31061, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 768)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byAddressFilePath_29386, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 770)) ;
    }
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byNameFilePath_29475, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 771)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'buildControlRegisterMaps'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildControlRegisterMaps (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                       const GALGAS_bigint constinArgument_inGroupBaseAddress,
                                       const GALGAS_string constinArgument_inGroupName,
                                       GALGAS_controlRegisterByAddress & ioArgument_ioControlRegisterByAddress,
                                       GALGAS_controlRegisterByName & ioArgument_ioControlRegisterByName,
                                       GALGAS_uint & ioArgument_ioControlRegisterCount,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_controlRegisterMap enumerator_31630 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
  while (enumerator_31630.hasCurrentObject ()) {
    GALGAS_bigint var_registerAddress_31657 = constinArgument_inGroupBaseAddress.add_operation (enumerator_31630.current_mAddressOffset (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 786)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_31630.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 788)) ;
        GALGAS_string var_registerName_31812 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)).add_operation (enumerator_31630.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 789)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)) ;
        GALGAS_string var_s_31855 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_31812, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 790)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 791)).add_operation (enumerator_31630.current_mType (HERE).getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (var_registerAddress_31657.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsStrictSup, enumerator_31630.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 794)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_s_31855.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)).add_operation (function_fieldIndexColumns (enumerator_31630.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GALGAS_string ("</tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)) ;
            cEnumerator_controlRegisterFieldList enumerator_32348 (enumerator_31630.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
            while (enumerator_32348.hasCurrentObject ()) {
              var_s_31855.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_32348.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (enumerator_32348.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)) ;
              enumerator_32348.gotoNextObject () ;
            }
            var_s_31855.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 801)) ;
          }
        }
        var_s_31855.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 803)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_31657, var_s_31855  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 804)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_31657, var_s_31855, var_registerName_31812  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 805)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (enumerator_31630.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 807)) ;
      cEnumerator_uintlist enumerator_32796 (function_arrayIndexListFor (enumerator_31630.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 808)), kENUMERATION_UP) ;
      while (enumerator_32796.hasCurrentObject ()) {
        GALGAS_bigint var_address_32819 = var_registerAddress_31657.add_operation (enumerator_32796.current_mValue (HERE).multiply_operation (enumerator_31630.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)).getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 809)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)) ;
        GALGAS_string var_registerName_32895 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_31630.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 810)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_32796.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 810)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)) ;
        GALGAS_string var_s_32970 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_32895, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 811)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 812)).add_operation (enumerator_31630.current_mType (HERE).getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (var_address_32819.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsStrictSup, enumerator_31630.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 816)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_s_32970.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)).add_operation (function_fieldIndexColumns (enumerator_31630.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)).add_operation (GALGAS_string ("</tr><tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)) ;
            cEnumerator_controlRegisterFieldList enumerator_33462 (enumerator_31630.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
            while (enumerator_33462.hasCurrentObject ()) {
              var_s_32970.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_33462.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (enumerator_33462.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)) ;
              enumerator_33462.gotoNextObject () ;
            }
            var_s_32970.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 822)) ;
          }
        }
        var_s_32970.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 824)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_31657, var_s_32970  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 825)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_31657, var_s_32970, var_registerName_32895  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 826)) ;
        enumerator_32796.gotoNextObject () ;
      }
    }
    enumerator_31630.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Filewrapper 'controlRegisterDumpGenerationTemplate'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByName'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (C_Compiler * /* inCompiler */,
                                                                                    const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                    const GALGAS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                    const GALGAS_controlRegisterByName & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by name</title>\n"
    "<style type=\"text/css\">body {\n"
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
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.name {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.type {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
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
  result << ", sorted by name</h1>\n"
    "<p>This document lists all " ;
  result << in_CONTROL_5F_REGISTER_5F_COUNT.getter_string (SOURCE_FILE ("controlRegisterByNameDump.html.galgasTemplate", 78)).stringValue () ;
  result << " defined control registers, sorted by name.</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">Address</td><td class=\"resul"
    "t_title\">Value</td></tr>\n" ;
  GALGAS_uint index_1541_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME.isValid ()) {
    cEnumerator_controlRegisterByName enumerator_1541 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME, kENUMERATION_UP) ;
    while (enumerator_1541.hasCurrentObject ()) {
      result << enumerator_1541.current_mHTML (HERE).stringValue () ;
      index_1541_.increment () ;
      enumerator_1541.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByAddress'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                       const GALGAS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                       const GALGAS_controlRegisterByAddress & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by address</title>\n"
    "<style type=\"text/css\">body {\n"
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
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.name {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.type {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
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
  result << ", sorted by address</h1>\n"
    "<p>This document lists all " ;
  result << in_CONTROL_5F_REGISTER_5F_COUNT.getter_string (SOURCE_FILE ("controlRegisterByAddressDump.html.galgasTemplate", 78)).stringValue () ;
  result << " defined control registers, sorted by address.</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">Address</td><td class=\"resul"
    "t_title\">Value</td></tr>\n" ;
  GALGAS_uint index_1553_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS.isValid ()) {
    cEnumerator_controlRegisterByAddress enumerator_1553 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS, kENUMERATION_UP) ;
    while (enumerator_1553.hasCurrentObject ()) {
      result << enumerator_1553.current_mHTML (HERE).stringValue () ;
      index_1553_.increment () ;
      enumerator_1553.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

