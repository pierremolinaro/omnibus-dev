#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category reader '@abstractDeclaration keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_abstractDeclaration_keyRepresentation> gCategoryReaderTable_abstractDeclaration_keyRepresentation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_keyRepresentation (const int32_t inClassIndex,
                                            categoryReaderSignature_abstractDeclaration_keyRepresentation inReader) {
  gCategoryReaderTable_abstractDeclaration_keyRepresentation.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_abstractDeclaration_keyRepresentation (void) {
  gCategoryReaderTable_abstractDeclaration_keyRepresentation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractDeclaration_keyRepresentation (NULL,
                                                                  freeCategoryReader_abstractDeclaration_keyRepresentation) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_abstractDeclaration_keyRepresentation f = NULL ;
    if (classIndex < gCategoryReaderTable_abstractDeclaration_keyRepresentation.count ()) {
      f = gCategoryReaderTable_abstractDeclaration_keyRepresentation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_abstractDeclaration_keyRepresentation.count ()) {
           f = gCategoryReaderTable_abstractDeclaration_keyRepresentation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_abstractDeclaration_keyRepresentation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mAttribute_mTargetBaseTypeMap (),
mAttribute_mTypeMap (),
mAttribute_mProcedureMap (),
mAttribute_mFunctionMap (),
mAttribute_mRegisterMap (),
mAttribute_mGlobalConstantMap (),
mAttribute_mGlobalVariableMap (),
mAttribute_mModeMap (),
mAttribute_mTypeNameSetForIncDec (),
mAttribute_mEqualOperatorMap (),
mAttribute_mNonEqualOperatorMap (),
mAttribute_mStrictInfOperatorMap (),
mAttribute_mInfEqualOperatorMap (),
mAttribute_mStrictSupOperatorMap (),
mAttribute_mSupEqualOperatorMap (),
mAttribute_mAndOperatorMap (),
mAttribute_mAndShortCircuitOperatorMap (),
mAttribute_mOrOperatorMap (),
mAttribute_mOrShortCircuitOperatorMap (),
mAttribute_mXorOperatorMap (),
mAttribute_mAddOperatorMap (),
mAttribute_mAddNoOvfOperatorMap (),
mAttribute_mSubOperatorMap (),
mAttribute_mSubNoOvfOperatorMap (),
mAttribute_mMulOperatorMap (),
mAttribute_mMulNoOvfOperatorMap (),
mAttribute_mDivOperatorMap (),
mAttribute_mDivNoOvfOperatorMap (),
mAttribute_mModOperatorMap (),
mAttribute_mLeftShiftOperatorMap (),
mAttribute_mRightShiftOperatorMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_targetBaseTypeMap & inOperand0,
                                                const GALGAS_unifiedTypeMap & inOperand1,
                                                const GALGAS_procedureMap & inOperand2,
                                                const GALGAS_functionMap & inOperand3,
                                                const GALGAS_registerMap & inOperand4,
                                                const GALGAS_globalConstantMap & inOperand5,
                                                const GALGAS_globalVariableMap & inOperand6,
                                                const GALGAS_modeMap & inOperand7,
                                                const GALGAS_stringset & inOperand8,
                                                const GALGAS_infixOperatorMap & inOperand9,
                                                const GALGAS_infixOperatorMap & inOperand10,
                                                const GALGAS_infixOperatorMap & inOperand11,
                                                const GALGAS_infixOperatorMap & inOperand12,
                                                const GALGAS_infixOperatorMap & inOperand13,
                                                const GALGAS_infixOperatorMap & inOperand14,
                                                const GALGAS_infixOperatorMap & inOperand15,
                                                const GALGAS_infixOperatorMap & inOperand16,
                                                const GALGAS_infixOperatorMap & inOperand17,
                                                const GALGAS_infixOperatorMap & inOperand18,
                                                const GALGAS_infixOperatorMap & inOperand19,
                                                const GALGAS_infixOperatorMap & inOperand20,
                                                const GALGAS_infixOperatorMap & inOperand21,
                                                const GALGAS_infixOperatorMap & inOperand22,
                                                const GALGAS_infixOperatorMap & inOperand23,
                                                const GALGAS_infixOperatorMap & inOperand24,
                                                const GALGAS_infixOperatorMap & inOperand25,
                                                const GALGAS_infixOperatorMap & inOperand26,
                                                const GALGAS_infixOperatorMap & inOperand27,
                                                const GALGAS_infixOperatorMap & inOperand28,
                                                const GALGAS_infixOperatorMap & inOperand29,
                                                const GALGAS_infixOperatorMap & inOperand30) :
mAttribute_mTargetBaseTypeMap (inOperand0),
mAttribute_mTypeMap (inOperand1),
mAttribute_mProcedureMap (inOperand2),
mAttribute_mFunctionMap (inOperand3),
mAttribute_mRegisterMap (inOperand4),
mAttribute_mGlobalConstantMap (inOperand5),
mAttribute_mGlobalVariableMap (inOperand6),
mAttribute_mModeMap (inOperand7),
mAttribute_mTypeNameSetForIncDec (inOperand8),
mAttribute_mEqualOperatorMap (inOperand9),
mAttribute_mNonEqualOperatorMap (inOperand10),
mAttribute_mStrictInfOperatorMap (inOperand11),
mAttribute_mInfEqualOperatorMap (inOperand12),
mAttribute_mStrictSupOperatorMap (inOperand13),
mAttribute_mSupEqualOperatorMap (inOperand14),
mAttribute_mAndOperatorMap (inOperand15),
mAttribute_mAndShortCircuitOperatorMap (inOperand16),
mAttribute_mOrOperatorMap (inOperand17),
mAttribute_mOrShortCircuitOperatorMap (inOperand18),
mAttribute_mXorOperatorMap (inOperand19),
mAttribute_mAddOperatorMap (inOperand20),
mAttribute_mAddNoOvfOperatorMap (inOperand21),
mAttribute_mSubOperatorMap (inOperand22),
mAttribute_mSubNoOvfOperatorMap (inOperand23),
mAttribute_mMulOperatorMap (inOperand24),
mAttribute_mMulNoOvfOperatorMap (inOperand25),
mAttribute_mDivOperatorMap (inOperand26),
mAttribute_mDivNoOvfOperatorMap (inOperand27),
mAttribute_mModOperatorMap (inOperand28),
mAttribute_mLeftShiftOperatorMap (inOperand29),
mAttribute_mRightShiftOperatorMap (inOperand30) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_targetBaseTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_procedureMap::constructor_emptyMap (HERE),
                                 GALGAS_functionMap::constructor_emptyMap (HERE),
                                 GALGAS_registerMap::constructor_emptyMap (HERE),
                                 GALGAS_globalConstantMap::constructor_emptyMap (HERE),
                                 GALGAS_globalVariableMap::constructor_emptyMap (HERE),
                                 GALGAS_modeMap::constructor_emptyMap (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_targetBaseTypeMap & inOperand0,
                                                                const GALGAS_unifiedTypeMap & inOperand1,
                                                                const GALGAS_procedureMap & inOperand2,
                                                                const GALGAS_functionMap & inOperand3,
                                                                const GALGAS_registerMap & inOperand4,
                                                                const GALGAS_globalConstantMap & inOperand5,
                                                                const GALGAS_globalVariableMap & inOperand6,
                                                                const GALGAS_modeMap & inOperand7,
                                                                const GALGAS_stringset & inOperand8,
                                                                const GALGAS_infixOperatorMap & inOperand9,
                                                                const GALGAS_infixOperatorMap & inOperand10,
                                                                const GALGAS_infixOperatorMap & inOperand11,
                                                                const GALGAS_infixOperatorMap & inOperand12,
                                                                const GALGAS_infixOperatorMap & inOperand13,
                                                                const GALGAS_infixOperatorMap & inOperand14,
                                                                const GALGAS_infixOperatorMap & inOperand15,
                                                                const GALGAS_infixOperatorMap & inOperand16,
                                                                const GALGAS_infixOperatorMap & inOperand17,
                                                                const GALGAS_infixOperatorMap & inOperand18,
                                                                const GALGAS_infixOperatorMap & inOperand19,
                                                                const GALGAS_infixOperatorMap & inOperand20,
                                                                const GALGAS_infixOperatorMap & inOperand21,
                                                                const GALGAS_infixOperatorMap & inOperand22,
                                                                const GALGAS_infixOperatorMap & inOperand23,
                                                                const GALGAS_infixOperatorMap & inOperand24,
                                                                const GALGAS_infixOperatorMap & inOperand25,
                                                                const GALGAS_infixOperatorMap & inOperand26,
                                                                const GALGAS_infixOperatorMap & inOperand27,
                                                                const GALGAS_infixOperatorMap & inOperand28,
                                                                const GALGAS_infixOperatorMap & inOperand29,
                                                                const GALGAS_infixOperatorMap & inOperand30 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid () && inOperand22.isValid () && inOperand23.isValid () && inOperand24.isValid () && inOperand25.isValid () && inOperand26.isValid () && inOperand27.isValid () && inOperand28.isValid () && inOperand29.isValid () && inOperand30.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21, inOperand22, inOperand23, inOperand24, inOperand25, inOperand26, inOperand27, inOperand28, inOperand29, inOperand30) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTargetBaseTypeMap.objectCompare (inOperand.mAttribute_mTargetBaseTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeMap.objectCompare (inOperand.mAttribute_mTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureMap.objectCompare (inOperand.mAttribute_mProcedureMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionMap.objectCompare (inOperand.mAttribute_mFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterMap.objectCompare (inOperand.mAttribute_mRegisterMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalConstantMap.objectCompare (inOperand.mAttribute_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableMap.objectCompare (inOperand.mAttribute_mGlobalVariableMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModeMap.objectCompare (inOperand.mAttribute_mModeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeNameSetForIncDec.objectCompare (inOperand.mAttribute_mTypeNameSetForIncDec) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEqualOperatorMap.objectCompare (inOperand.mAttribute_mEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonEqualOperatorMap.objectCompare (inOperand.mAttribute_mNonEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStrictInfOperatorMap.objectCompare (inOperand.mAttribute_mStrictInfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInfEqualOperatorMap.objectCompare (inOperand.mAttribute_mInfEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStrictSupOperatorMap.objectCompare (inOperand.mAttribute_mStrictSupOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSupEqualOperatorMap.objectCompare (inOperand.mAttribute_mSupEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAndOperatorMap.objectCompare (inOperand.mAttribute_mAndOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAndShortCircuitOperatorMap.objectCompare (inOperand.mAttribute_mAndShortCircuitOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOrOperatorMap.objectCompare (inOperand.mAttribute_mOrOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOrShortCircuitOperatorMap.objectCompare (inOperand.mAttribute_mOrShortCircuitOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mXorOperatorMap.objectCompare (inOperand.mAttribute_mXorOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAddOperatorMap.objectCompare (inOperand.mAttribute_mAddOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAddNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mAddNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubOperatorMap.objectCompare (inOperand.mAttribute_mSubOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mSubNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMulOperatorMap.objectCompare (inOperand.mAttribute_mMulOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMulNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mMulNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDivOperatorMap.objectCompare (inOperand.mAttribute_mDivOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDivNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mDivNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModOperatorMap.objectCompare (inOperand.mAttribute_mModOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLeftShiftOperatorMap.objectCompare (inOperand.mAttribute_mLeftShiftOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRightShiftOperatorMap.objectCompare (inOperand.mAttribute_mRightShiftOperatorMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticContext::isValid (void) const {
  return mAttribute_mTargetBaseTypeMap.isValid () && mAttribute_mTypeMap.isValid () && mAttribute_mProcedureMap.isValid () && mAttribute_mFunctionMap.isValid () && mAttribute_mRegisterMap.isValid () && mAttribute_mGlobalConstantMap.isValid () && mAttribute_mGlobalVariableMap.isValid () && mAttribute_mModeMap.isValid () && mAttribute_mTypeNameSetForIncDec.isValid () && mAttribute_mEqualOperatorMap.isValid () && mAttribute_mNonEqualOperatorMap.isValid () && mAttribute_mStrictInfOperatorMap.isValid () && mAttribute_mInfEqualOperatorMap.isValid () && mAttribute_mStrictSupOperatorMap.isValid () && mAttribute_mSupEqualOperatorMap.isValid () && mAttribute_mAndOperatorMap.isValid () && mAttribute_mAndShortCircuitOperatorMap.isValid () && mAttribute_mOrOperatorMap.isValid () && mAttribute_mOrShortCircuitOperatorMap.isValid () && mAttribute_mXorOperatorMap.isValid () && mAttribute_mAddOperatorMap.isValid () && mAttribute_mAddNoOvfOperatorMap.isValid () && mAttribute_mSubOperatorMap.isValid () && mAttribute_mSubNoOvfOperatorMap.isValid () && mAttribute_mMulOperatorMap.isValid () && mAttribute_mMulNoOvfOperatorMap.isValid () && mAttribute_mDivOperatorMap.isValid () && mAttribute_mDivNoOvfOperatorMap.isValid () && mAttribute_mModOperatorMap.isValid () && mAttribute_mLeftShiftOperatorMap.isValid () && mAttribute_mRightShiftOperatorMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::drop (void) {
  mAttribute_mTargetBaseTypeMap.drop () ;
  mAttribute_mTypeMap.drop () ;
  mAttribute_mProcedureMap.drop () ;
  mAttribute_mFunctionMap.drop () ;
  mAttribute_mRegisterMap.drop () ;
  mAttribute_mGlobalConstantMap.drop () ;
  mAttribute_mGlobalVariableMap.drop () ;
  mAttribute_mModeMap.drop () ;
  mAttribute_mTypeNameSetForIncDec.drop () ;
  mAttribute_mEqualOperatorMap.drop () ;
  mAttribute_mNonEqualOperatorMap.drop () ;
  mAttribute_mStrictInfOperatorMap.drop () ;
  mAttribute_mInfEqualOperatorMap.drop () ;
  mAttribute_mStrictSupOperatorMap.drop () ;
  mAttribute_mSupEqualOperatorMap.drop () ;
  mAttribute_mAndOperatorMap.drop () ;
  mAttribute_mAndShortCircuitOperatorMap.drop () ;
  mAttribute_mOrOperatorMap.drop () ;
  mAttribute_mOrShortCircuitOperatorMap.drop () ;
  mAttribute_mXorOperatorMap.drop () ;
  mAttribute_mAddOperatorMap.drop () ;
  mAttribute_mAddNoOvfOperatorMap.drop () ;
  mAttribute_mSubOperatorMap.drop () ;
  mAttribute_mSubNoOvfOperatorMap.drop () ;
  mAttribute_mMulOperatorMap.drop () ;
  mAttribute_mMulNoOvfOperatorMap.drop () ;
  mAttribute_mDivOperatorMap.drop () ;
  mAttribute_mDivNoOvfOperatorMap.drop () ;
  mAttribute_mModOperatorMap.drop () ;
  mAttribute_mLeftShiftOperatorMap.drop () ;
  mAttribute_mRightShiftOperatorMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTargetBaseTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeNameSetForIncDec.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStrictInfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInfEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStrictSupOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSupEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAndOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAndShortCircuitOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOrOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOrShortCircuitOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mXorOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAddOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAddNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMulOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMulNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDivOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDivNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLeftShiftOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRightShiftOperatorMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetBaseTypeMap GALGAS_semanticContext::reader_mTargetBaseTypeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetBaseTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_semanticContext::reader_mTypeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap GALGAS_semanticContext::reader_mProcedureMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_semanticContext::reader_mFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap GALGAS_semanticContext::reader_mRegisterMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap GALGAS_semanticContext::reader_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap GALGAS_semanticContext::reader_mGlobalVariableMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_semanticContext::reader_mModeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_semanticContext::reader_mTypeNameSetForIncDec (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeNameSetForIncDec ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mNonEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mStrictInfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStrictInfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mInfEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInfEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mStrictSupOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStrictSupOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mSupEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSupEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mAndOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAndOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mAndShortCircuitOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAndShortCircuitOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mOrOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOrOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mOrShortCircuitOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOrShortCircuitOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mXorOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mAddOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mAddNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mSubOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mSubNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mMulOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMulOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mMulNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMulNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mDivOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDivOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mDivNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDivNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mModOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mLeftShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftShiftOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::reader_mRightShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightShiftOperatorMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract category method '@abstractDeclaration enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractDeclaration_enterInContext> gCategoryMethodTable_abstractDeclaration_enterInContext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInContext (const int32_t inClassIndex,
                                         categoryMethodSignature_abstractDeclaration_enterInContext inMethod) {
  gCategoryMethodTable_abstractDeclaration_enterInContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractDeclaration_enterInContext (void) {
  gCategoryMethodTable_abstractDeclaration_enterInContext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDeclaration_enterInContext (NULL,
                                                               freeCategoryMethod_abstractDeclaration_enterInContext) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInContext (const cPtr_abstractDeclaration * inObject,
                                        const GALGAS_procedureDeclarationListAST constin_inProcedureListAST,
                                        GALGAS_semanticContext & io_ioContext,
                                        GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractDeclaration_enterInContext f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractDeclaration_enterInContext.count ()) {
      f = gCategoryMethodTable_abstractDeclaration_enterInContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractDeclaration_enterInContext.count ()) {
           f = gCategoryMethodTable_abstractDeclaration_enterInContext (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractDeclaration_enterInContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inProcedureListAST, io_ioContext, io_ioGlobalLiteralStringMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@abstractDeclaration semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractDeclaration_semanticAnalysis> gCategoryMethodTable_abstractDeclaration_semanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_semanticAnalysis (const int32_t inClassIndex,
                                           categoryMethodSignature_abstractDeclaration_semanticAnalysis inMethod) {
  gCategoryMethodTable_abstractDeclaration_semanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractDeclaration_semanticAnalysis (void) {
  gCategoryMethodTable_abstractDeclaration_semanticAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDeclaration_semanticAnalysis (NULL,
                                                                 freeCategoryMethod_abstractDeclaration_semanticAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                          const GALGAS_semanticContext constin_inContext,
                                          GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractDeclaration_semanticAnalysis f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractDeclaration_semanticAnalysis.count ()) {
      f = gCategoryMethodTable_abstractDeclaration_semanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractDeclaration_semanticAnalysis.count ()) {
           f = gCategoryMethodTable_abstractDeclaration_semanticAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractDeclaration_semanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inContext, io_ioIntermediateCodeStruct, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities::GALGAS_accessibleEntities (void) :
mAttribute_mAccessibleRegisterSet (),
mAttribute_mStaticStringSet (),
mAttribute_mGlobalConstantSet (),
mAttribute_mProcedureSet (),
mAttribute_mFunctionSet (),
mAttribute_mGlobalVariableSet () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities::~ GALGAS_accessibleEntities (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities::GALGAS_accessibleEntities (const GALGAS_stringset & inOperand0,
                                                      const GALGAS_stringset & inOperand1,
                                                      const GALGAS_stringset & inOperand2,
                                                      const GALGAS_stringset & inOperand3,
                                                      const GALGAS_stringset & inOperand4,
                                                      const GALGAS_stringset & inOperand5) :
mAttribute_mAccessibleRegisterSet (inOperand0),
mAttribute_mStaticStringSet (inOperand1),
mAttribute_mGlobalConstantSet (inOperand2),
mAttribute_mProcedureSet (inOperand3),
mAttribute_mFunctionSet (inOperand4),
mAttribute_mGlobalVariableSet (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities GALGAS_accessibleEntities::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_accessibleEntities (GALGAS_stringset::constructor_emptySet (HERE),
                                    GALGAS_stringset::constructor_emptySet (HERE),
                                    GALGAS_stringset::constructor_emptySet (HERE),
                                    GALGAS_stringset::constructor_emptySet (HERE),
                                    GALGAS_stringset::constructor_emptySet (HERE),
                                    GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities GALGAS_accessibleEntities::constructor_new (const GALGAS_stringset & inOperand0,
                                                                      const GALGAS_stringset & inOperand1,
                                                                      const GALGAS_stringset & inOperand2,
                                                                      const GALGAS_stringset & inOperand3,
                                                                      const GALGAS_stringset & inOperand4,
                                                                      const GALGAS_stringset & inOperand5 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_accessibleEntities result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_accessibleEntities (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_accessibleEntities::objectCompare (const GALGAS_accessibleEntities & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAccessibleRegisterSet.objectCompare (inOperand.mAttribute_mAccessibleRegisterSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStaticStringSet.objectCompare (inOperand.mAttribute_mStaticStringSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalConstantSet.objectCompare (inOperand.mAttribute_mGlobalConstantSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureSet.objectCompare (inOperand.mAttribute_mProcedureSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionSet.objectCompare (inOperand.mAttribute_mFunctionSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableSet.objectCompare (inOperand.mAttribute_mGlobalVariableSet) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_accessibleEntities::isValid (void) const {
  return mAttribute_mAccessibleRegisterSet.isValid () && mAttribute_mStaticStringSet.isValid () && mAttribute_mGlobalConstantSet.isValid () && mAttribute_mProcedureSet.isValid () && mAttribute_mFunctionSet.isValid () && mAttribute_mGlobalVariableSet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessibleEntities::drop (void) {
  mAttribute_mAccessibleRegisterSet.drop () ;
  mAttribute_mStaticStringSet.drop () ;
  mAttribute_mGlobalConstantSet.drop () ;
  mAttribute_mProcedureSet.drop () ;
  mAttribute_mFunctionSet.drop () ;
  mAttribute_mGlobalVariableSet.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessibleEntities::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @accessibleEntities:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAccessibleRegisterSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStaticStringSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalConstantSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableSet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::reader_mAccessibleRegisterSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccessibleRegisterSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::reader_mStaticStringSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStaticStringSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::reader_mGlobalConstantSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalConstantSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::reader_mProcedureSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::reader_mFunctionSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_accessibleEntities::reader_mGlobalVariableSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableSet ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @accessibleEntities type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessibleEntities ("accessibleEntities",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_accessibleEntities::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessibleEntities ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_accessibleEntities::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessibleEntities (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessibleEntities GALGAS_accessibleEntities::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_accessibleEntities result ;
  const GALGAS_accessibleEntities * p = (const GALGAS_accessibleEntities *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_accessibleEntities *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessibleEntities", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@abstractInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractInstructionIR_enterAccessibleEntities> gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterAccessibleEntities (const int32_t inClassIndex,
                                                  categoryMethodSignature_abstractInstructionIR_enterAccessibleEntities inMethod) {
  gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractInstructionIR_enterAccessibleEntities (void) {
  gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractInstructionIR_enterAccessibleEntities (NULL,
                                                                          freeCategoryMethod_abstractInstructionIR_enterAccessibleEntities) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                 GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInstructionIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractInstructionIR_enterAccessibleEntities f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities.count ()) {
      f = gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities.count ()) {
           f = gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractInstructionIR_enterAccessibleEntities.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioAccessibleEntities, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@instructionListIR enterAccessibleEntities'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const GALGAS_instructionListIR inObject,
                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListIR temp_0 = inObject ;
  cEnumerator_instructionListIR enumerator_2354 (temp_0, kEnumeration_up) ;
  while (enumerator_2354.hasCurrentObject ()) {
    callCategoryMethod_enterAccessibleEntities ((const cPtr_abstractInstructionIR *) enumerator_2354.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 48)) ;
    enumerator_2354.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category reader '@abstractInstructionIR instructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_abstractInstructionIR_instructionCode> gCategoryReaderTable_abstractInstructionIR_instructionCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_instructionCode (const int32_t inClassIndex,
                                          categoryReaderSignature_abstractInstructionIR_instructionCode inReader) {
  gCategoryReaderTable_abstractInstructionIR_instructionCode.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_abstractInstructionIR_instructionCode (void) {
  gCategoryReaderTable_abstractInstructionIR_instructionCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractInstructionIR_instructionCode (NULL,
                                                                  freeCategoryReader_abstractInstructionIR_instructionCode) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInstructionIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_abstractInstructionIR_instructionCode f = NULL ;
    if (classIndex < gCategoryReaderTable_abstractInstructionIR_instructionCode.count ()) {
      f = gCategoryReaderTable_abstractInstructionIR_instructionCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_abstractInstructionIR_instructionCode.count ()) {
           f = gCategoryReaderTable_abstractInstructionIR_instructionCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_abstractInstructionIR_instructionCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category reader '@abstractTypeIR headerCodeGenerationForType'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_abstractTypeIR_headerCodeGenerationForType> gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_headerCodeGenerationForType (const int32_t inClassIndex,
                                                      categoryReaderSignature_abstractTypeIR_headerCodeGenerationForType inReader) {
  gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_abstractTypeIR_headerCodeGenerationForType (void) {
  gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractTypeIR_headerCodeGenerationForType (NULL,
                                                                       freeCategoryReader_abstractTypeIR_headerCodeGenerationForType) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_headerCodeGenerationForType (const cPtr_abstractTypeIR * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractTypeIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_abstractTypeIR_headerCodeGenerationForType f = NULL ;
    if (classIndex < gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType.count ()) {
      f = gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType.count ()) {
           f = gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_abstractTypeIR_headerCodeGenerationForType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (void) :
mAttribute_mDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST_2D_element::~ GALGAS_declarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (const GALGAS_abstractDeclaration & inOperand0) :
mAttribute_mDeclaration (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::constructor_new (const GALGAS_abstractDeclaration & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_declarationListAST_2D_element::objectCompare (const GALGAS_declarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeclaration.objectCompare (inOperand.mAttribute_mDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_declarationListAST_2D_element::isValid (void) const {
  return mAttribute_mDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationListAST_2D_element::drop (void) {
  mAttribute_mDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @declarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDeclaration GALGAS_declarationListAST_2D_element::reader_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @declarationListAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationListAST_2D_element ("declarationListAST-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_declarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_declarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  const GALGAS_declarationListAST_2D_element * p = (const GALGAS_declarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::GALGAS_initListIR_2D_element (void) :
mAttribute_mInitLocation (),
mAttribute_mInstructionListIR (),
mAttribute_mEndOfInitLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::~ GALGAS_initListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::GALGAS_initListIR_2D_element (const GALGAS_location & inOperand0,
                                                            const GALGAS_instructionListIR & inOperand1,
                                                            const GALGAS_location & inOperand2) :
mAttribute_mInitLocation (inOperand0),
mAttribute_mInstructionListIR (inOperand1),
mAttribute_mEndOfInitLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initListIR_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                       GALGAS_instructionListIR::constructor_emptyList (HERE),
                                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                            const GALGAS_instructionListIR & inOperand1,
                                                                            const GALGAS_location & inOperand2 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_initListIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initListIR_2D_element::objectCompare (const GALGAS_initListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInitLocation.objectCompare (inOperand.mAttribute_mInitLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionListIR.objectCompare (inOperand.mAttribute_mInstructionListIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInitLocation.objectCompare (inOperand.mAttribute_mEndOfInitLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initListIR_2D_element::isValid (void) const {
  return mAttribute_mInitLocation.isValid () && mAttribute_mInstructionListIR.isValid () && mAttribute_mEndOfInitLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR_2D_element::drop (void) {
  mAttribute_mInitLocation.drop () ;
  mAttribute_mInstructionListIR.drop () ;
  mAttribute_mEndOfInitLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @initListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInitLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInitLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initListIR_2D_element::reader_mInitLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_initListIR_2D_element::reader_mInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initListIR_2D_element::reader_mEndOfInitLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInitLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @initListIR-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initListIR_2D_element ("initListIR-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_initListIR_2D_element result ;
  const GALGAS_initListIR_2D_element * p = (const GALGAS_initListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element::GALGAS_instructionListAST_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element::~ GALGAS_instructionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element::GALGAS_instructionListAST_2D_element (const GALGAS_instructionAST & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element GALGAS_instructionListAST_2D_element::constructor_new (const GALGAS_instructionAST & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instructionListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_instructionListAST_2D_element::objectCompare (const GALGAS_instructionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_instructionListAST_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @instructionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionAST GALGAS_instructionListAST_2D_element::reader_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @instructionListAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListAST_2D_element ("instructionListAST-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element GALGAS_instructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_instructionListAST_2D_element result ;
  const GALGAS_instructionListAST_2D_element * p = (const GALGAS_instructionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR_2D_element::GALGAS_instructionListIR_2D_element (void) :
mAttribute_mInstructionGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR_2D_element::~ GALGAS_instructionListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR_2D_element::GALGAS_instructionListIR_2D_element (const GALGAS_abstractInstructionIR & inOperand0) :
mAttribute_mInstructionGeneration (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR_2D_element GALGAS_instructionListIR_2D_element::constructor_new (const GALGAS_abstractInstructionIR & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instructionListIR_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionListIR_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_instructionListIR_2D_element::objectCompare (const GALGAS_instructionListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionGeneration.objectCompare (inOperand.mAttribute_mInstructionGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_instructionListIR_2D_element::isValid (void) const {
  return mAttribute_mInstructionGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR_2D_element::drop (void) {
  mAttribute_mInstructionGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @instructionListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstructionGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInstructionIR GALGAS_instructionListIR_2D_element::reader_mInstructionGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @instructionListIR-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListIR_2D_element ("instructionListIR-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR_2D_element GALGAS_instructionListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_instructionListIR_2D_element result ;
  const GALGAS_instructionListIR_2D_element * p = (const GALGAS_instructionListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionAST::GALGAS_exceptionAST (void) :
mAttribute_mExceptionLocation (),
mAttribute_mExceptionInstructionList (),
mAttribute_mEndOfExceptionInstructions (),
mAttribute_mExceptionDefined () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionAST::~ GALGAS_exceptionAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionAST::GALGAS_exceptionAST (const GALGAS_location & inOperand0,
                                          const GALGAS_instructionListAST & inOperand1,
                                          const GALGAS_location & inOperand2,
                                          const GALGAS_bool & inOperand3) :
mAttribute_mExceptionLocation (inOperand0),
mAttribute_mExceptionInstructionList (inOperand1),
mAttribute_mEndOfExceptionInstructions (inOperand2),
mAttribute_mExceptionDefined (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionAST GALGAS_exceptionAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_exceptionAST (GALGAS_location::constructor_nowhere (HERE),
                              GALGAS_instructionListAST::constructor_emptyList (HERE),
                              GALGAS_location::constructor_nowhere (HERE),
                              GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionAST GALGAS_exceptionAST::constructor_new (const GALGAS_location & inOperand0,
                                                          const GALGAS_instructionListAST & inOperand1,
                                                          const GALGAS_location & inOperand2,
                                                          const GALGAS_bool & inOperand3 
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_exceptionAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_exceptionAST (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_exceptionAST::objectCompare (const GALGAS_exceptionAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionLocation.objectCompare (inOperand.mAttribute_mExceptionLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionInstructionList.objectCompare (inOperand.mAttribute_mExceptionInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfExceptionInstructions.objectCompare (inOperand.mAttribute_mEndOfExceptionInstructions) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionDefined.objectCompare (inOperand.mAttribute_mExceptionDefined) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_exceptionAST::isValid (void) const {
  return mAttribute_mExceptionLocation.isValid () && mAttribute_mExceptionInstructionList.isValid () && mAttribute_mEndOfExceptionInstructions.isValid () && mAttribute_mExceptionDefined.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionAST::drop (void) {
  mAttribute_mExceptionLocation.drop () ;
  mAttribute_mExceptionInstructionList.drop () ;
  mAttribute_mEndOfExceptionInstructions.drop () ;
  mAttribute_mExceptionDefined.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionAST::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "<struct @exceptionAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExceptionLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfExceptionInstructions.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionDefined.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_exceptionAST::reader_mExceptionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_exceptionAST::reader_mExceptionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_exceptionAST::reader_mEndOfExceptionInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExceptionInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_exceptionAST::reader_mExceptionDefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionDefined ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @exceptionAST type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_exceptionAST ("exceptionAST",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_exceptionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exceptionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_exceptionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_exceptionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionAST GALGAS_exceptionAST::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_exceptionAST result ;
  const GALGAS_exceptionAST * p = (const GALGAS_exceptionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_exceptionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("exceptionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@initList-element initSemanticAnalysis'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_initSemanticAnalysis (const GALGAS_initList_2D_element inObject,
                                          const GALGAS_semanticContext constinArgument_inContext,
                                          GALGAS_uint & ioArgument_ioTemporaryIndex,
                                          GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inContext.mAttribute_mModeMap.reader_hasKey (GALGAS_string ("init") COMMA_SOURCE_FILE ("init-declaration.galgas", 45)).operator_not (SOURCE_FILE ("init-declaration.galgas", 45)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (inObject.mAttribute_mInitLocation, GALGAS_string ("the $init mode should be defined in order to use init clauses")  COMMA_SOURCE_FILE ("init-declaration.galgas", 46)) ;
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (constinArgument_inContext, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("init-declaration.galgas", 49)) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("init-declaration.galgas", 51)) ;
  categoryMethod_analyzeRoutineInstructionList (inObject.mAttribute_mInstructionList, GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("init-declaration.galgas", 53)), constinArgument_inContext, GALGAS_string ("init"), GALGAS_bool (true), ioArgument_ioTemporaryIndex, ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("init-declaration.galgas", 52)) ;
  var_variableMap.method_checkAutomatonStates (inObject.mAttribute_mEndOfInitLocation, inCompiler COMMA_SOURCE_FILE ("init-declaration.galgas", 63)) ;
  ioArgument_ioIntermediateCodeStruct.mAttribute_mInitList.addAssign_operation (inObject.mAttribute_mInitLocation, var_instructionGenerationList, inObject.mAttribute_mEndOfInitLocation  COMMA_SOURCE_FILE ("init-declaration.galgas", 65)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@exceptionAST exceptionSemanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_exceptionSemanticAnalysis (const GALGAS_exceptionAST inObject,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               GALGAS_uint & ioArgument_ioTemporaryIndex,
                                               GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = inObject.mAttribute_mExceptionDefined.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = constinArgument_inContext.mAttribute_mModeMap.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 56)) COMMA_SOURCE_FILE ("exception.galgas", 56)).operator_not (SOURCE_FILE ("exception.galgas", 56)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (inObject.mAttribute_mExceptionLocation, GALGAS_string ("the $exception mode should be defined in order to use an exception clause")  COMMA_SOURCE_FILE ("exception.galgas", 57)) ;
    }
    GALGAS_variableMap var_variableMap = function_initialVariableMap (constinArgument_inContext, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 60)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_uintType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, GALGAS_string ("UInt32").reader_nowhere (SOURCE_FILE ("exception.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("exception.galgas", 62)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_StaticStringType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, GALGAS_string ("StaticString").reader_nowhere (SOURCE_FILE ("exception.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("exception.galgas", 63)) ;
    GALGAS_lstring var_codeArg = GALGAS_lstring::constructor_new (GALGAS_string ("CODE"), inObject.mAttribute_mExceptionLocation  COMMA_SOURCE_FILE ("exception.galgas", 64)) ;
    {
    GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("exception.galgas", 68)) ;
    temp_2.addAssign_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 68))  COMMA_SOURCE_FILE ("exception.galgas", 68)) ;
    var_variableMap.modifier_insertUsedConstantInputFormalArgument (var_codeArg, var_uintType, temp_2, function_mangledNameForInArgument (var_codeArg.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("exception.galgas", 69)), GALGAS_variableKindIR::constructor_inArgument (var_codeArg  COMMA_SOURCE_FILE ("exception.galgas", 70)), var_uintType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 65)) ;
    }
    GALGAS_lstring var_fileArg = GALGAS_lstring::constructor_new (GALGAS_string ("FILE"), inObject.mAttribute_mExceptionLocation  COMMA_SOURCE_FILE ("exception.galgas", 73)) ;
    {
    GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("exception.galgas", 77)) ;
    temp_3.addAssign_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 77))  COMMA_SOURCE_FILE ("exception.galgas", 77)) ;
    var_variableMap.modifier_insertUsedConstantInputFormalArgument (var_fileArg, var_StaticStringType, temp_3, function_mangledNameForInArgument (var_fileArg.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("exception.galgas", 78)), GALGAS_variableKindIR::constructor_inArgument (var_fileArg  COMMA_SOURCE_FILE ("exception.galgas", 79)), var_StaticStringType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 74)) ;
    }
    GALGAS_lstring var_lineArg = GALGAS_lstring::constructor_new (GALGAS_string ("LINE"), inObject.mAttribute_mExceptionLocation  COMMA_SOURCE_FILE ("exception.galgas", 82)) ;
    {
    GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("exception.galgas", 86)) ;
    temp_4.addAssign_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 86))  COMMA_SOURCE_FILE ("exception.galgas", 86)) ;
    var_variableMap.modifier_insertUsedConstantInputFormalArgument (var_lineArg, var_uintType, temp_4, function_mangledNameForInArgument (var_lineArg.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("exception.galgas", 87)), GALGAS_variableKindIR::constructor_inArgument (var_lineArg  COMMA_SOURCE_FILE ("exception.galgas", 88)), var_uintType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("exception.galgas", 83)) ;
    }
    GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("exception.galgas", 92)) ;
    categoryMethod_analyzeRoutineInstructionList (inObject.mAttribute_mExceptionInstructionList, GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("exception.galgas", 94)), constinArgument_inContext, function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("exception.galgas", 96)), GALGAS_bool (false), ioArgument_ioTemporaryIndex, ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("exception.galgas", 93)) ;
    var_variableMap.method_checkAutomatonStates (inObject.mAttribute_mEndOfExceptionInstructions, inCompiler COMMA_SOURCE_FILE ("exception.galgas", 104)) ;
    ioArgument_ioIntermediateCodeStruct.mAttribute_mExceptionInstructionListIR = var_instructionGenerationList ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (void) :
mAttribute_mFunctionName (),
mAttribute_mFunctionMode (),
mAttribute_mFuncFormalArgumentList (),
mAttribute_mResultTypeName (),
mAttribute_mResultVarName (),
mAttribute_mInstructionList (),
mAttribute_mEndOfFuncLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::~ GALGAS_functionDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_funcFormalArgumentList & inOperand2,
                                                                                            const GALGAS_lstring & inOperand3,
                                                                                            const GALGAS_lstring & inOperand4,
                                                                                            const GALGAS_instructionListAST & inOperand5,
                                                                                            const GALGAS_location & inOperand6) :
mAttribute_mFunctionName (inOperand0),
mAttribute_mFunctionMode (inOperand1),
mAttribute_mFuncFormalArgumentList (inOperand2),
mAttribute_mResultTypeName (inOperand3),
mAttribute_mResultVarName (inOperand4),
mAttribute_mInstructionList (inOperand5),
mAttribute_mEndOfFuncLocation (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_funcFormalArgumentList::constructor_emptyList (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_funcFormalArgumentList & inOperand2,
                                                                                                            const GALGAS_lstring & inOperand3,
                                                                                                            const GALGAS_lstring & inOperand4,
                                                                                                            const GALGAS_instructionListAST & inOperand5,
                                                                                                            const GALGAS_location & inOperand6 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_functionDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionDeclarationListAST_2D_element::objectCompare (const GALGAS_functionDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionName.objectCompare (inOperand.mAttribute_mFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionMode.objectCompare (inOperand.mAttribute_mFunctionMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFuncFormalArgumentList.objectCompare (inOperand.mAttribute_mFuncFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultTypeName.objectCompare (inOperand.mAttribute_mResultTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultVarName.objectCompare (inOperand.mAttribute_mResultVarName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfFuncLocation.objectCompare (inOperand.mAttribute_mEndOfFuncLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mFunctionName.isValid () && mAttribute_mFunctionMode.isValid () && mAttribute_mFuncFormalArgumentList.isValid () && mAttribute_mResultTypeName.isValid () && mAttribute_mResultVarName.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfFuncLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST_2D_element::drop (void) {
  mAttribute_mFunctionName.drop () ;
  mAttribute_mFunctionMode.drop () ;
  mAttribute_mFuncFormalArgumentList.drop () ;
  mAttribute_mResultTypeName.drop () ;
  mAttribute_mResultVarName.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfFuncLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @functionDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFuncFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfFuncLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::reader_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::reader_mFunctionMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList GALGAS_functionDeclarationListAST_2D_element::reader_mFuncFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFuncFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::reader_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::reader_mResultVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_functionDeclarationListAST_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_functionDeclarationListAST_2D_element::reader_mEndOfFuncLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfFuncLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @functionDeclarationListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDeclarationListAST_2D_element ("functionDeclarationListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationListAST_2D_element result ;
  const GALGAS_functionDeclarationListAST_2D_element * p = (const GALGAS_functionDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category Reader '@functionDeclarationListAST-element mangledName'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mangledName (const GALGAS_functionDeclarationListAST_2D_element & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outMangledName ; // Returned variable
  result_outMangledName = inObject.mAttribute_mFunctionName.mAttribute_string ;
  cEnumerator_funcFormalArgumentList enumerator_4108 (inObject.mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
  while (enumerator_4108.hasCurrentObject ()) {
    result_outMangledName.dotAssign_operation (GALGAS_string (" \?").add_operation (enumerator_4108.current_mSelector (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 113))  COMMA_SOURCE_FILE ("func-declaration.galgas", 113)) ;
    enumerator_4108.gotoNextObject () ;
  }
//---
  return result_outMangledName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@functionDeclarationListAST-element enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_functionDeclarationListAST_2D_element inObject,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_funcSignature var_signature = GALGAS_funcSignature::constructor_emptyList (SOURCE_FILE ("func-declaration.galgas", 123)) ;
  cEnumerator_funcFormalArgumentList enumerator_4502 (inObject.mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
  while (enumerator_4502.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_4502.current_mFormalArgumentTypeName (HERE), var_typeProxy COMMA_SOURCE_FILE ("func-declaration.galgas", 125)) ;
    }
    var_signature.addAssign_operation (enumerator_4502.current_mSelector (HERE), var_typeProxy  COMMA_SOURCE_FILE ("func-declaration.galgas", 126)) ;
    enumerator_4502.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, inObject.mAttribute_mResultTypeName, var_resultType COMMA_SOURCE_FILE ("func-declaration.galgas", 129)) ;
  }
  {
  const GALGAS_functionDeclarationListAST_2D_element temp_0 = inObject ;
  ioArgument_ioContext.mAttribute_mFunctionMap.modifier_insertKey (GALGAS_lstring::constructor_new (categoryReader_mangledName (temp_0, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 132)), inObject.mAttribute_mFunctionName.mAttribute_location  COMMA_SOURCE_FILE ("func-declaration.galgas", 132)), inObject.mAttribute_mFunctionMode, var_signature, var_resultType, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 131)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category method '@functionDeclarationListAST-element functionSemanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_functionSemanticAnalysis (const GALGAS_functionDeclarationListAST_2D_element inObject,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              GALGAS_uint & ioArgument_ioTemporaryIndex,
                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inObject.mAttribute_mFunctionMode.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    constinArgument_inContext.mAttribute_mModeMap.method_searchKey (inObject.mAttribute_mFunctionMode, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 157)) ;
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (constinArgument_inContext, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 160)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, inObject.mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 162)) ;
  {
  GALGAS_stringset temp_1 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("func-declaration.galgas", 166)) ;
  temp_1.addAssign_operation (inObject.mAttribute_mFunctionMode.mAttribute_string  COMMA_SOURCE_FILE ("func-declaration.galgas", 166)) ;
  var_variableMap.modifier_insertOutputFormalArgument (inObject.mAttribute_mResultVarName, var_resultType, temp_1, inObject.mAttribute_mResultVarName.mAttribute_string, GALGAS_variableKindIR::constructor_localVariable (inObject.mAttribute_mResultVarName  COMMA_SOURCE_FILE ("func-declaration.galgas", 168)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 163)) ;
  }
  GALGAS_funcFormalArgumentListForGeneration var_formalArguments = GALGAS_funcFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("func-declaration.galgas", 172)) ;
  cEnumerator_funcFormalArgumentList enumerator_6453 (inObject.mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
  while (enumerator_6453.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_6453.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("func-declaration.galgas", 174)) ;
    {
    GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("func-declaration.galgas", 178)) ;
    temp_2.addAssign_operation (inObject.mAttribute_mFunctionMode.mAttribute_string  COMMA_SOURCE_FILE ("func-declaration.galgas", 178)) ;
    var_variableMap.modifier_insertConstantInputFormalArgument (enumerator_6453.current_mFormalArgumentName (HERE), var_typeProxy, temp_2, function_mangledNameForInArgument (enumerator_6453.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 179)), GALGAS_variableKindIR::constructor_inArgument (enumerator_6453.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("func-declaration.galgas", 180)), var_typeProxy.reader_copiable (inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 175)) ;
    }
    var_formalArguments.addAssign_operation (var_typeProxy, function_mangledNameForInArgument (enumerator_6453.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 183))  COMMA_SOURCE_FILE ("func-declaration.galgas", 183)) ;
    enumerator_6453.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("func-declaration.galgas", 186)) ;
  categoryMethod_analyzeRoutineInstructionList (inObject.mAttribute_mInstructionList, GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("func-declaration.galgas", 188)), constinArgument_inContext, inObject.mAttribute_mFunctionMode.mAttribute_string, GALGAS_bool (kIsNotEqual, inObject.mAttribute_mFunctionMode.mAttribute_string.objectCompare (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 191)))), ioArgument_ioTemporaryIndex, ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 187)) ;
  var_variableMap.method_checkAutomatonStates (inObject.mAttribute_mEndOfFuncLocation, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 198)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.modifier_insertKey (inObject.mAttribute_mFunctionName, var_formalArguments, var_instructionGenerationList, var_resultType, inObject.mAttribute_mResultVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("func-declaration.galgas", 200)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element::GALGAS_functionMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalArgumentListForGeneration (),
mAttribute_mInstructionGenerationList (),
mAttribute_mResultType (),
mAttribute_mResultVarName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element::~ GALGAS_functionMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element::GALGAS_functionMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_funcFormalArgumentListForGeneration & inOperand1,
                                                                  const GALGAS_instructionListIR & inOperand2,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                  const GALGAS_string & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalArgumentListForGeneration (inOperand1),
mAttribute_mInstructionGenerationList (inOperand2),
mAttribute_mResultType (inOperand3),
mAttribute_mResultVarName (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element GALGAS_functionMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_funcFormalArgumentListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_instructionListIR::constructor_emptyList (HERE),
                                          GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element GALGAS_functionMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_funcFormalArgumentListForGeneration & inOperand1,
                                                                                  const GALGAS_instructionListIR & inOperand2,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                                  const GALGAS_string & inOperand4 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_functionMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionMapIR_2D_element::objectCompare (const GALGAS_functionMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentListForGeneration.objectCompare (inOperand.mAttribute_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionGenerationList.objectCompare (inOperand.mAttribute_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultVarName.objectCompare (inOperand.mAttribute_mResultVarName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mResultType.isValid () && mAttribute_mResultVarName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalArgumentListForGeneration.drop () ;
  mAttribute_mInstructionGenerationList.drop () ;
  mAttribute_mResultType.drop () ;
  mAttribute_mResultVarName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMapIR_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @functionMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultVarName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionMapIR_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration GALGAS_functionMapIR_2D_element::reader_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_functionMapIR_2D_element::reader_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionMapIR_2D_element::reader_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_functionMapIR_2D_element::reader_mResultVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVarName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @functionMapIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMapIR_2D_element ("functionMapIR-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR_2D_element GALGAS_functionMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_functionMapIR_2D_element result ;
  const GALGAS_functionMapIR_2D_element * p = (const GALGAS_functionMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Reader '@functionMapIR-element implementationCodeGeneration'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_implementationCodeGeneration (const GALGAS_functionMapIR_2D_element & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string (filewrapperTemplate_functionGenerationTemplate_implementation (inCompiler, inObject.mAttribute_lkey.mAttribute_string, inObject.mAttribute_mFormalArgumentListForGeneration, inObject.mAttribute_mInstructionGenerationList, inObject.mAttribute_mResultType, inObject.mAttribute_mResultVarName COMMA_SOURCE_FILE ("func-declaration.galgas", 242))) ;
//---
  return result_outCode ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureDeclarationListAST_2D_element::GALGAS_procedureDeclarationListAST_2D_element (void) :
mAttribute_mProcedureKind (),
mAttribute_mProcedureMode (),
mAttribute_mProcedureName (),
mAttribute_mProcFormalArgumentList (),
mAttribute_mInstructionList (),
mAttribute_mEndOfProcLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureDeclarationListAST_2D_element::~ GALGAS_procedureDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureDeclarationListAST_2D_element::GALGAS_procedureDeclarationListAST_2D_element (const GALGAS_procedureKindAST & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_lstring & inOperand2,
                                                                                              const GALGAS_procFormalArgumentList & inOperand3,
                                                                                              const GALGAS_instructionListAST & inOperand4,
                                                                                              const GALGAS_location & inOperand5) :
mAttribute_mProcedureKind (inOperand0),
mAttribute_mProcedureMode (inOperand1),
mAttribute_mProcedureName (inOperand2),
mAttribute_mProcFormalArgumentList (inOperand3),
mAttribute_mInstructionList (inOperand4),
mAttribute_mEndOfProcLocation (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureDeclarationListAST_2D_element GALGAS_procedureDeclarationListAST_2D_element::constructor_new (const GALGAS_procedureKindAST & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                              const GALGAS_procFormalArgumentList & inOperand3,
                                                                                                              const GALGAS_instructionListAST & inOperand4,
                                                                                                              const GALGAS_location & inOperand5 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_procedureDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procedureDeclarationListAST_2D_element::objectCompare (const GALGAS_procedureDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureKind.objectCompare (inOperand.mAttribute_mProcedureKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureMode.objectCompare (inOperand.mAttribute_mProcedureMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureName.objectCompare (inOperand.mAttribute_mProcedureName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcFormalArgumentList.objectCompare (inOperand.mAttribute_mProcFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfProcLocation.objectCompare (inOperand.mAttribute_mEndOfProcLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procedureDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mProcedureKind.isValid () && mAttribute_mProcedureMode.isValid () && mAttribute_mProcedureName.isValid () && mAttribute_mProcFormalArgumentList.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfProcLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureDeclarationListAST_2D_element::drop (void) {
  mAttribute_mProcedureKind.drop () ;
  mAttribute_mProcedureMode.drop () ;
  mAttribute_mProcedureName.drop () ;
  mAttribute_mProcFormalArgumentList.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfProcLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureDeclarationListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @procedureDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mProcedureKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfProcLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureKindAST GALGAS_procedureDeclarationListAST_2D_element::reader_mProcedureKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procedureDeclarationListAST_2D_element::reader_mProcedureMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procedureDeclarationListAST_2D_element::reader_mProcedureName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procedureDeclarationListAST_2D_element::reader_mProcFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_procedureDeclarationListAST_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_procedureDeclarationListAST_2D_element::reader_mEndOfProcLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfProcLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @procedureDeclarationListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureDeclarationListAST_2D_element ("procedureDeclarationListAST-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureDeclarationListAST_2D_element GALGAS_procedureDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procedureDeclarationListAST_2D_element result ;
  const GALGAS_procedureDeclarationListAST_2D_element * p = (const GALGAS_procedureDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category Reader '@procedureDeclarationListAST-element mangledName'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mangledName (const GALGAS_procedureDeclarationListAST_2D_element & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outMangledName ; // Returned variable
  result_outMangledName = function_mangledName (inObject.mAttribute_mProcedureKind, inObject.mAttribute_mProcedureName.mAttribute_string, inObject.mAttribute_mProcFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 195)) ;
//---
  return result_outMangledName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@procedureDeclarationListAST-element enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const GALGAS_procedureDeclarationListAST_2D_element inObject,
                                    GALGAS_semanticContext & ioArgument_ioContext,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  switch (inObject.mAttribute_mProcedureKind.enumValue ()) {
  case GALGAS_procedureKindAST::kNotBuilt:
    break ;
  case GALGAS_procedureKindAST::kEnum_standAloneProc:
    {
      GALGAS_procedureSignature var_signature = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("proc-declaration.galgas", 211)) ;
      cEnumerator_procFormalArgumentList enumerator_7534 (inObject.mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
      while (enumerator_7534.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_typeProxy ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_7534.current_mFormalArgumentTypeName (HERE), var_typeProxy COMMA_SOURCE_FILE ("proc-declaration.galgas", 213)) ;
        }
        var_signature.addAssign_operation (enumerator_7534.current_mFormalArgumentPassingMode (HERE), enumerator_7534.current_mSelector (HERE), var_typeProxy  COMMA_SOURCE_FILE ("proc-declaration.galgas", 214)) ;
        enumerator_7534.gotoNextObject () ;
      }
      {
      const GALGAS_procedureDeclarationListAST_2D_element temp_0 = inObject ;
      ioArgument_ioContext.mAttribute_mProcedureMap.modifier_insertKey (GALGAS_lstring::constructor_new (categoryReader_mangledName (temp_0, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 219)), inObject.mAttribute_mProcedureName.mAttribute_location  COMMA_SOURCE_FILE ("proc-declaration.galgas", 218)), GALGAS_bool (false), inObject.mAttribute_mProcedureMode, var_signature, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 217)) ;
      }
    }
    break ;
  case GALGAS_procedureKindAST::kEnum_structureProc:
    {
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@procedureDeclarationListAST-element procedureSemanticAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_procedureSemanticAnalysis (const GALGAS_procedureDeclarationListAST_2D_element inObject,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               GALGAS_uint & ioArgument_ioTemporaryIndex,
                                               GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inObject.mAttribute_mProcedureMode.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    constinArgument_inContext.mAttribute_mModeMap.method_searchKey (inObject.mAttribute_mProcedureMode, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 249)) ;
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (constinArgument_inContext, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 252)) ;
  GALGAS_procFormalArgumentListForGeneration var_formalArguments = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("proc-declaration.galgas", 254)) ;
  GALGAS_receiverType var_receiverType ;
  switch (inObject.mAttribute_mProcedureKind.enumValue ()) {
  case GALGAS_procedureKindAST::kNotBuilt:
    break ;
  case GALGAS_procedureKindAST::kEnum_standAloneProc:
    {
      var_receiverType = GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("proc-declaration.galgas", 258)) ;
    }
    break ;
  case GALGAS_procedureKindAST::kEnum_structureProc:
    {
      const cEnumAssociatedValues_procedureKindAST_structureProc * extractPtr_11164 = (const cEnumAssociatedValues_procedureKindAST_structureProc *) (inObject.mAttribute_mProcedureKind.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_structureTypeName = extractPtr_11164->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_mutating = extractPtr_11164->mAssociatedValue1 ;
      GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, extractedValue_structureTypeName, inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 260)) ;
      GALGAS_propertyList var_propertyList ;
      switch (var_type.reader_kind (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 262)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          const cEnumAssociatedValues_typeKind_structure * extractPtr_9555 = (const cEnumAssociatedValues_typeKind_structure *) (var_type.reader_kind (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 262)).unsafePointer ()) ;
          const GALGAS_propertyList extractedValue_propList = extractPtr_9555->mAssociatedValue0 ;
          var_propertyList = extractedValue_propList ;
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          var_propertyList = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("proc-declaration.galgas", 264)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          var_propertyList = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("proc-declaration.galgas", 265)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          var_propertyList = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("proc-declaration.galgas", 266)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolset:
        {
          var_propertyList = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("proc-declaration.galgas", 267)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          var_propertyList = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("proc-declaration.galgas", 268)) ;
        }
        break ;
      }
      const enumGalgasBool test_1 = extractedValue_mutating.boolEnum () ;
      if (kBoolTrue == test_1) {
        var_receiverType = GALGAS_receiverType::constructor_mutatingReceiver (var_type, function_receiverPtrName (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 273))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 271)) ;
        cEnumerator_propertyList enumerator_9955 (var_propertyList, kEnumeration_up) ;
        while (enumerator_9955.hasCurrentObject ()) {
          {
          GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("proc-declaration.galgas", 279)) ;
          temp_2.addAssign_operation (inObject.mAttribute_mProcedureMode.mAttribute_string  COMMA_SOURCE_FILE ("proc-declaration.galgas", 279)) ;
          var_variableMap.modifier_insertDefinedLocalVariable (enumerator_9955.current_mPropertyName (HERE), enumerator_9955.current_mTypeProxy (HERE), temp_2, function_receiverPtrName (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 280)).add_operation (GALGAS_string ("->"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 280)).add_operation (function_mangledNameForProperty (enumerator_9955.current_mPropertyName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 280)), GALGAS_variableKindIR::constructor_localAccess (function_receiverPtrName (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 282)).add_operation (GALGAS_string ("->"), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 282)).add_operation (function_mangledNameForProperty (enumerator_9955.current_mPropertyName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 282)), enumerator_9955.current_mPropertyName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("proc-declaration.galgas", 281)), enumerator_9955.current_mTypeProxy (HERE).reader_copiable (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 276)) ;
          }
          enumerator_9955.gotoNextObject () ;
        }
        var_formalArguments.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_inputOutput (SOURCE_FILE ("proc-declaration.galgas", 288)), var_type, function_receiverPtrName (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 288))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 288)) ;
      }else if (kBoolFalse == test_1) {
        var_receiverType = GALGAS_receiverType::constructor_receiver (var_type, function_receiverName (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 292))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 290)) ;
        cEnumerator_propertyList enumerator_10645 (var_propertyList, kEnumeration_up) ;
        while (enumerator_10645.hasCurrentObject ()) {
          {
          GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("proc-declaration.galgas", 298)) ;
          temp_3.addAssign_operation (inObject.mAttribute_mProcedureMode.mAttribute_string  COMMA_SOURCE_FILE ("proc-declaration.galgas", 298)) ;
          var_variableMap.modifier_insertUsedLocalConstant (enumerator_10645.current_mPropertyName (HERE), enumerator_10645.current_mTypeProxy (HERE), temp_3, function_receiverName (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 299)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 299)).add_operation (function_mangledNameForProperty (enumerator_10645.current_mPropertyName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 299)), GALGAS_variableKindIR::constructor_localAccess (function_receiverName (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 301)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 301)).add_operation (function_mangledNameForProperty (enumerator_10645.current_mPropertyName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 301)), enumerator_10645.current_mPropertyName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("proc-declaration.galgas", 300)), enumerator_10645.current_mTypeProxy (HERE).reader_copiable (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 295)) ;
          }
          enumerator_10645.gotoNextObject () ;
        }
        var_formalArguments.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("proc-declaration.galgas", 307)), var_type, function_receiverName (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 307))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 307)) ;
      }
    }
    break ;
  }
  cEnumerator_procFormalArgumentList enumerator_11292 (inObject.mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
  while (enumerator_11292.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_11292.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("proc-declaration.galgas", 312)) ;
    switch (enumerator_11292.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        {
        GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("proc-declaration.galgas", 318)) ;
        temp_4.addAssign_operation (inObject.mAttribute_mProcedureMode.mAttribute_string  COMMA_SOURCE_FILE ("proc-declaration.galgas", 318)) ;
        var_variableMap.modifier_insertConstantInputFormalArgument (enumerator_11292.current_mFormalArgumentName (HERE), var_typeProxy, temp_4, function_mangledNameForInArgument (enumerator_11292.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 319)), GALGAS_variableKindIR::constructor_inArgument (enumerator_11292.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("proc-declaration.galgas", 320)), var_typeProxy.reader_copiable (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 315)) ;
        }
        var_formalArguments.addAssign_operation (enumerator_11292.current_mFormalArgumentPassingMode (HERE), var_typeProxy, function_mangledNameForInArgument (enumerator_11292.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 323))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 323)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        {
        GALGAS_stringset temp_5 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("proc-declaration.galgas", 328)) ;
        temp_5.addAssign_operation (inObject.mAttribute_mProcedureMode.mAttribute_string  COMMA_SOURCE_FILE ("proc-declaration.galgas", 328)) ;
        var_variableMap.modifier_insertInputOutputFormalArgument (enumerator_11292.current_mFormalArgumentName (HERE), var_typeProxy, temp_5, GALGAS_string ("*").add_operation (function_mangledNameForInOutArgument (enumerator_11292.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 329)), GALGAS_variableKindIR::constructor_inOutArgument (enumerator_11292.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("proc-declaration.galgas", 330)), var_typeProxy.reader_copiable (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 325)) ;
        }
        var_formalArguments.addAssign_operation (enumerator_11292.current_mFormalArgumentPassingMode (HERE), var_typeProxy, function_mangledNameForInOutArgument (enumerator_11292.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 333))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 333)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        GALGAS_stringset temp_6 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("proc-declaration.galgas", 338)) ;
        temp_6.addAssign_operation (inObject.mAttribute_mProcedureMode.mAttribute_string  COMMA_SOURCE_FILE ("proc-declaration.galgas", 338)) ;
        var_variableMap.modifier_insertOutputFormalArgument (enumerator_11292.current_mFormalArgumentName (HERE), var_typeProxy, temp_6, GALGAS_string ("*").add_operation (function_mangledNameForOutArgument (enumerator_11292.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 339)), GALGAS_variableKindIR::constructor_outArgument (enumerator_11292.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("proc-declaration.galgas", 340)), var_typeProxy.reader_copiable (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 335)) ;
        }
        var_formalArguments.addAssign_operation (enumerator_11292.current_mFormalArgumentPassingMode (HERE), var_typeProxy, function_mangledNameForOutArgument (enumerator_11292.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 343))  COMMA_SOURCE_FILE ("proc-declaration.galgas", 343)) ;
      }
      break ;
    }
    enumerator_11292.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("proc-declaration.galgas", 347)) ;
  categoryMethod_analyzeRoutineInstructionList (inObject.mAttribute_mInstructionList, var_receiverType, constinArgument_inContext, inObject.mAttribute_mProcedureMode.mAttribute_string, GALGAS_bool (kIsNotEqual, inObject.mAttribute_mProcedureMode.mAttribute_string.objectCompare (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 352)))), ioArgument_ioTemporaryIndex, ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 348)) ;
  var_variableMap.method_checkAutomatonStates (inObject.mAttribute_mEndOfProcLocation, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 359)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mProcedureMapIR.modifier_insertKey (inObject.mAttribute_mProcedureName, var_formalArguments, var_instructionGenerationList, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.reader_hasKey (inObject.mAttribute_mProcedureName.mAttribute_string COMMA_SOURCE_FILE ("proc-declaration.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 361)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element::GALGAS_procedureMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalArgumentListForGeneration (),
mAttribute_mInstructionGenerationList (),
mAttribute_mIsRequired () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element::~ GALGAS_procedureMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element::GALGAS_procedureMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                    const GALGAS_instructionListIR & inOperand2,
                                                                    const GALGAS_bool & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalArgumentListForGeneration (inOperand1),
mAttribute_mInstructionGenerationList (inOperand2),
mAttribute_mIsRequired (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element GALGAS_procedureMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_procedureMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (HERE),
                                           GALGAS_instructionListIR::constructor_emptyList (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element GALGAS_procedureMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                                    const GALGAS_instructionListIR & inOperand2,
                                                                                    const GALGAS_bool & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_procedureMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procedureMapIR_2D_element::objectCompare (const GALGAS_procedureMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentListForGeneration.objectCompare (inOperand.mAttribute_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionGenerationList.objectCompare (inOperand.mAttribute_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsRequired.objectCompare (inOperand.mAttribute_mIsRequired) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procedureMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mIsRequired.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalArgumentListForGeneration.drop () ;
  mAttribute_mInstructionGenerationList.drop () ;
  mAttribute_mIsRequired.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMapIR_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @procedureMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsRequired.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procedureMapIR_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procedureMapIR_2D_element::reader_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_procedureMapIR_2D_element::reader_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMapIR_2D_element::reader_mIsRequired (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsRequired ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @procedureMapIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureMapIR_2D_element ("procedureMapIR-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR_2D_element GALGAS_procedureMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procedureMapIR_2D_element result ;
  const GALGAS_procedureMapIR_2D_element * p = (const GALGAS_procedureMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category Reader '@procedureMapIR-element implementationCodeGeneration'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_implementationCodeGeneration (const GALGAS_procedureMapIR_2D_element & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string (filewrapperTemplate_procedureGenerationTemplate_implementation (inCompiler, function_mangledNameForProcedure (inObject.mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 399)), inObject.mAttribute_mFormalArgumentListForGeneration, inObject.mAttribute_mInstructionGenerationList COMMA_SOURCE_FILE ("proc-declaration.galgas", 398))) ;
//---
  return result_outCode ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR_2D_element::GALGAS_registerMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRegisterTypeName (),
mAttribute_mRegisterAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR_2D_element::~ GALGAS_registerMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR_2D_element::GALGAS_registerMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_uint_36__34_ & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mRegisterTypeName (inOperand1),
mAttribute_mRegisterAddress (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR_2D_element GALGAS_registerMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_uint_36__34_::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR_2D_element GALGAS_registerMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_uint_36__34_ & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_registerMapIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerMapIR_2D_element::objectCompare (const GALGAS_registerMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterTypeName.objectCompare (inOperand.mAttribute_mRegisterTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddress.objectCompare (inOperand.mAttribute_mRegisterAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_registerMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegisterTypeName.isValid () && mAttribute_mRegisterAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRegisterTypeName.drop () ;
  mAttribute_mRegisterAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMapIR_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @registerMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerMapIR_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_registerMapIR_2D_element::reader_mRegisterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_registerMapIR_2D_element::reader_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @registerMapIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerMapIR_2D_element ("registerMapIR-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR_2D_element GALGAS_registerMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerMapIR_2D_element result ;
  const GALGAS_registerMapIR_2D_element * p = (const GALGAS_registerMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category Reader '@procEffectiveParameterPassingModeAST passingModeForActualSelector'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_passingModeForActualSelector (const GALGAS_procEffectiveParameterPassingModeAST & inObject,
                                                           GALGAS_lstring inArgument_inSelector,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_procEffectiveParameterPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
    {
      result_outResult = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
    {
      result_outResult = GALGAS_string ("!\?") ;
    }
    break ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, inArgument_inSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult.dotAssign_operation (inArgument_inSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Category method '@infixOperatorMap checkWith'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_checkWith (const GALGAS_infixOperatorMap inObject,
                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inLeftType,
                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRightType,
                               const GALGAS_location constinArgument_inOperatorLocation,
                               GALGAS_unifiedTypeMap_2D_proxy & outArgument_outResultType,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultType.drop () ; // Release 'out' argument
  GALGAS_lstring var_lkey = GALGAS_lstring::constructor_new (constinArgument_inLeftType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 338)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 338)).add_operation (constinArgument_inRightType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 338)), constinArgument_inOperatorLocation  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 338)) ;
  const GALGAS_infixOperatorMap temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.reader_hasKey (var_lkey.mAttribute_string COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 339)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_infixOperatorMap temp_2 = inObject ;
    temp_2.method_searchKey (var_lkey, outArgument_outResultType, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 340)) ;
  }else if (kBoolFalse == test_1) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("infix operation between '").add_operation (constinArgument_inLeftType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 343)).add_operation (GALGAS_string (" and "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 343)).add_operation (constinArgument_inRightType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 343)).add_operation (GALGAS_string ("' is not defined"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 343))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 342)) ;
    outArgument_outResultType.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Category Reader '@variableKindIR location'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location categoryReader_location (const GALGAS_variableKindIR & inObject,
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_variableKindIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_variableKindIR::kNotBuilt:
    break ;
  case GALGAS_variableKindIR::kEnum_register:
    {
      const cEnumAssociatedValues_variableKindIR_register * extractPtr_1469 = (const cEnumAssociatedValues_variableKindIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1469->mAssociatedValue0 ;
      result_outLocation = extractedValue_name.mAttribute_location ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_variableKindIR_globalConstant * extractPtr_1541 = (const cEnumAssociatedValues_variableKindIR_globalConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1541->mAssociatedValue0 ;
      result_outLocation = extractedValue_name.mAttribute_location ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_variableKindIR_globalVariable * extractPtr_1613 = (const cEnumAssociatedValues_variableKindIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1613->mAssociatedValue0 ;
      result_outLocation = extractedValue_name.mAttribute_location ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_localVariable:
    {
      const cEnumAssociatedValues_variableKindIR_localVariable * extractPtr_1684 = (const cEnumAssociatedValues_variableKindIR_localVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1684->mAssociatedValue0 ;
      result_outLocation = extractedValue_name.mAttribute_location ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_inArgument:
    {
      const cEnumAssociatedValues_variableKindIR_inArgument * extractPtr_1752 = (const cEnumAssociatedValues_variableKindIR_inArgument *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1752->mAssociatedValue0 ;
      result_outLocation = extractedValue_name.mAttribute_location ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_inOutArgument:
    {
      const cEnumAssociatedValues_variableKindIR_inOutArgument * extractPtr_1823 = (const cEnumAssociatedValues_variableKindIR_inOutArgument *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1823->mAssociatedValue0 ;
      result_outLocation = extractedValue_name.mAttribute_location ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_outArgument:
    {
      const cEnumAssociatedValues_variableKindIR_outArgument * extractPtr_1892 = (const cEnumAssociatedValues_variableKindIR_outArgument *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1892->mAssociatedValue0 ;
      result_outLocation = extractedValue_name.mAttribute_location ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_localConstant:
    {
      const cEnumAssociatedValues_variableKindIR_localConstant * extractPtr_1963 = (const cEnumAssociatedValues_variableKindIR_localConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1963->mAssociatedValue0 ;
      result_outLocation = extractedValue_name.mAttribute_location ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_temporaryConstant:
    {
      const cEnumAssociatedValues_variableKindIR_temporaryConstant * extractPtr_2034 = (const cEnumAssociatedValues_variableKindIR_temporaryConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_luint extractedValue_idx = extractPtr_2034->mAssociatedValue0 ;
      result_outLocation = extractedValue_idx.mAttribute_location ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_localAccess:
    {
      const cEnumAssociatedValues_variableKindIR_localAccess * extractPtr_2105 = (const cEnumAssociatedValues_variableKindIR_localAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_2105->mAssociatedValue1 ;
      result_outLocation = extractedValue_location ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_literalUnsignedInteger:
    {
      const cEnumAssociatedValues_variableKindIR_literalUnsignedInteger * extractPtr_2189 = (const cEnumAssociatedValues_variableKindIR_literalUnsignedInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_luint_36__34_ extractedValue_value = extractPtr_2189->mAssociatedValue1 ;
      result_outLocation = extractedValue_value.mAttribute_location ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_literalSignedInteger:
    {
      const cEnumAssociatedValues_variableKindIR_literalSignedInteger * extractPtr_2271 = (const cEnumAssociatedValues_variableKindIR_literalSignedInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_lsint_36__34_ extractedValue_value = extractPtr_2271->mAssociatedValue1 ;
      result_outLocation = extractedValue_value.mAttribute_location ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_variableKindIR_literalString * extractPtr_2346 = (const cEnumAssociatedValues_variableKindIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_value = extractPtr_2346->mAssociatedValue0 ;
      result_outLocation = extractedValue_value.mAttribute_location ;
    }
    break ;
  }
//---
  return result_outLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Category Reader '@variableKindIR isStatic'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool categoryReader_isStatic (const GALGAS_variableKindIR & inObject,
                                     C_Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_variableKindIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_variableKindIR::kNotBuilt:
    break ;
  case GALGAS_variableKindIR::kEnum_register:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_globalConstant:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_globalVariable:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_localVariable:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_inArgument:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_inOutArgument:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_outArgument:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_localConstant:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_temporaryConstant:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_localAccess:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_literalUnsignedInteger:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_literalSignedInteger:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_literalString:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (void) :
mAttribute_mGlobalLiteralStringMap (),
mAttribute_mRegisterMap (),
mAttribute_mGlobalVariableMap (),
mAttribute_mGlobalConstantMap (),
mAttribute_mTypeMapIR (),
mAttribute_mProcedureMapIR (),
mAttribute_mFunctionMapIR (),
mAttribute_mRequiredProcedureSet (),
mAttribute_mInitList (),
mAttribute_mExceptionInstructionListIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::~ GALGAS_intermediateCodeStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (const GALGAS_globalLiteralStringMap & inOperand0,
                                                              const GALGAS_registerMapIR & inOperand1,
                                                              const GALGAS_globalVariableMapIR & inOperand2,
                                                              const GALGAS_globalConstantMapIR & inOperand3,
                                                              const GALGAS_typeMapIR & inOperand4,
                                                              const GALGAS_procedureMapIR & inOperand5,
                                                              const GALGAS_functionMapIR & inOperand6,
                                                              const GALGAS_stringset & inOperand7,
                                                              const GALGAS_initListIR & inOperand8,
                                                              const GALGAS_instructionListIR & inOperand9) :
mAttribute_mGlobalLiteralStringMap (inOperand0),
mAttribute_mRegisterMap (inOperand1),
mAttribute_mGlobalVariableMap (inOperand2),
mAttribute_mGlobalConstantMap (inOperand3),
mAttribute_mTypeMapIR (inOperand4),
mAttribute_mProcedureMapIR (inOperand5),
mAttribute_mFunctionMapIR (inOperand6),
mAttribute_mRequiredProcedureSet (inOperand7),
mAttribute_mInitList (inOperand8),
mAttribute_mExceptionInstructionListIR (inOperand9) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_intermediateCodeStruct (GALGAS_globalLiteralStringMap::constructor_emptyMap (HERE),
                                        GALGAS_registerMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalVariableMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalConstantMapIR::constructor_emptyMap (HERE),
                                        GALGAS_typeMapIR::constructor_emptyMap (HERE),
                                        GALGAS_procedureMapIR::constructor_emptyMap (HERE),
                                        GALGAS_functionMapIR::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE),
                                        GALGAS_initListIR::constructor_emptyList (HERE),
                                        GALGAS_instructionListIR::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_new (const GALGAS_globalLiteralStringMap & inOperand0,
                                                                              const GALGAS_registerMapIR & inOperand1,
                                                                              const GALGAS_globalVariableMapIR & inOperand2,
                                                                              const GALGAS_globalConstantMapIR & inOperand3,
                                                                              const GALGAS_typeMapIR & inOperand4,
                                                                              const GALGAS_procedureMapIR & inOperand5,
                                                                              const GALGAS_functionMapIR & inOperand6,
                                                                              const GALGAS_stringset & inOperand7,
                                                                              const GALGAS_initListIR & inOperand8,
                                                                              const GALGAS_instructionListIR & inOperand9 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid ()) {
    result = GALGAS_intermediateCodeStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_intermediateCodeStruct::objectCompare (const GALGAS_intermediateCodeStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalLiteralStringMap.objectCompare (inOperand.mAttribute_mGlobalLiteralStringMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterMap.objectCompare (inOperand.mAttribute_mRegisterMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableMap.objectCompare (inOperand.mAttribute_mGlobalVariableMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalConstantMap.objectCompare (inOperand.mAttribute_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeMapIR.objectCompare (inOperand.mAttribute_mTypeMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureMapIR.objectCompare (inOperand.mAttribute_mProcedureMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionMapIR.objectCompare (inOperand.mAttribute_mFunctionMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredProcedureSet.objectCompare (inOperand.mAttribute_mRequiredProcedureSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitList.objectCompare (inOperand.mAttribute_mInitList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExceptionInstructionListIR.objectCompare (inOperand.mAttribute_mExceptionInstructionListIR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_intermediateCodeStruct::isValid (void) const {
  return mAttribute_mGlobalLiteralStringMap.isValid () && mAttribute_mRegisterMap.isValid () && mAttribute_mGlobalVariableMap.isValid () && mAttribute_mGlobalConstantMap.isValid () && mAttribute_mTypeMapIR.isValid () && mAttribute_mProcedureMapIR.isValid () && mAttribute_mFunctionMapIR.isValid () && mAttribute_mRequiredProcedureSet.isValid () && mAttribute_mInitList.isValid () && mAttribute_mExceptionInstructionListIR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::drop (void) {
  mAttribute_mGlobalLiteralStringMap.drop () ;
  mAttribute_mRegisterMap.drop () ;
  mAttribute_mGlobalVariableMap.drop () ;
  mAttribute_mGlobalConstantMap.drop () ;
  mAttribute_mTypeMapIR.drop () ;
  mAttribute_mProcedureMapIR.drop () ;
  mAttribute_mFunctionMapIR.drop () ;
  mAttribute_mRequiredProcedureSet.drop () ;
  mAttribute_mInitList.drop () ;
  mAttribute_mExceptionInstructionListIR.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @intermediateCodeStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mGlobalLiteralStringMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredProcedureSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExceptionInstructionListIR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalLiteralStringMap GALGAS_intermediateCodeStruct::reader_mGlobalLiteralStringMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalLiteralStringMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMapIR GALGAS_intermediateCodeStruct::reader_mRegisterMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR GALGAS_intermediateCodeStruct::reader_mGlobalVariableMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR GALGAS_intermediateCodeStruct::reader_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR GALGAS_intermediateCodeStruct::reader_mTypeMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMapIR GALGAS_intermediateCodeStruct::reader_mProcedureMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMapIR GALGAS_intermediateCodeStruct::reader_mFunctionMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_intermediateCodeStruct::reader_mRequiredProcedureSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredProcedureSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_intermediateCodeStruct::reader_mInitList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_intermediateCodeStruct::reader_mExceptionInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExceptionInstructionListIR ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @intermediateCodeStruct type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_intermediateCodeStruct ("intermediateCodeStruct",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_intermediateCodeStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_intermediateCodeStruct ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_intermediateCodeStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_intermediateCodeStruct (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@variableKindIR enterAccessibleEntities'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const GALGAS_variableKindIR inObject,
                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                             C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_variableKindIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_variableKindIR::kNotBuilt:
    break ;
  case GALGAS_variableKindIR::kEnum_register:
    {
      const cEnumAssociatedValues_variableKindIR_register * extractPtr_1145 = (const cEnumAssociatedValues_variableKindIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1145->mAssociatedValue0 ;
      ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (extractedValue_name.mAttribute_string  COMMA_SOURCE_FILE ("code-optimisation.galgas", 21)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_variableKindIR_globalConstant * extractPtr_1252 = (const cEnumAssociatedValues_variableKindIR_globalConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1252->mAssociatedValue0 ;
      ioArgument_ioAccessibleEntities.mAttribute_mGlobalConstantSet.addAssign_operation (extractedValue_name.mAttribute_string  COMMA_SOURCE_FILE ("code-optimisation.galgas", 23)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_variableKindIR_globalVariable * extractPtr_1359 = (const cEnumAssociatedValues_variableKindIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1359->mAssociatedValue0 ;
      ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (extractedValue_name.mAttribute_string  COMMA_SOURCE_FILE ("code-optimisation.galgas", 25)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_localVariable:
    {
      const cEnumAssociatedValues_variableKindIR_localVariable * extractPtr_1405 = (const cEnumAssociatedValues_variableKindIR_localVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1405->mAssociatedValue0 ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_inArgument:
    {
      const cEnumAssociatedValues_variableKindIR_inArgument * extractPtr_1448 = (const cEnumAssociatedValues_variableKindIR_inArgument *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1448->mAssociatedValue0 ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_inOutArgument:
    {
      const cEnumAssociatedValues_variableKindIR_inOutArgument * extractPtr_1494 = (const cEnumAssociatedValues_variableKindIR_inOutArgument *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1494->mAssociatedValue0 ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_outArgument:
    {
      const cEnumAssociatedValues_variableKindIR_outArgument * extractPtr_1538 = (const cEnumAssociatedValues_variableKindIR_outArgument *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1538->mAssociatedValue0 ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_localConstant:
    {
      const cEnumAssociatedValues_variableKindIR_localConstant * extractPtr_1584 = (const cEnumAssociatedValues_variableKindIR_localConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1584->mAssociatedValue0 ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_temporaryConstant:
    {
      const cEnumAssociatedValues_variableKindIR_temporaryConstant * extractPtr_1631 = (const cEnumAssociatedValues_variableKindIR_temporaryConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_luint extractedValue_idx = extractPtr_1631->mAssociatedValue0 ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_localAccess:
    {
      const cEnumAssociatedValues_variableKindIR_localAccess * extractPtr_1678 = (const cEnumAssociatedValues_variableKindIR_localAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_access = extractPtr_1678->mAssociatedValue0 ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_literalUnsignedInteger:
    {
    }
    break ;
  case GALGAS_variableKindIR::kEnum_literalSignedInteger:
    {
    }
    break ;
  case GALGAS_variableKindIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_variableKindIR_literalString * extractPtr_1871 = (const cEnumAssociatedValues_variableKindIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_value = extractPtr_1871->mAssociatedValue0 ;
      const GALGAS_string extractedValue_name = extractPtr_1871->mAssociatedValue1 ;
      ioArgument_ioAccessibleEntities.mAttribute_mStaticStringSet.addAssign_operation (extractedValue_value.mAttribute_string  COMMA_SOURCE_FILE ("code-optimisation.galgas", 36)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@procedureMapIR-element enterAccessibleEntities'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const GALGAS_procedureMapIR_2D_element inObject,
                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  categoryMethod_enterAccessibleEntities (inObject.mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 55)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@functionMapIR-element enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const GALGAS_functionMapIR_2D_element inObject,
                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  categoryMethod_enterAccessibleEntities (inObject.mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 61)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Category Reader '@variableKindIR mangledName'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mangledName (const GALGAS_variableKindIR & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_variableKindIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_variableKindIR::kNotBuilt:
    break ;
  case GALGAS_variableKindIR::kEnum_register:
    {
      const cEnumAssociatedValues_variableKindIR_register * extractPtr_769 = (const cEnumAssociatedValues_variableKindIR_register *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_769->mAssociatedValue0 ;
      result_outResult = function_mangledNameForRegister (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 10)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_variableKindIR_globalConstant * extractPtr_868 = (const cEnumAssociatedValues_variableKindIR_globalConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_868->mAssociatedValue0 ;
      result_outResult = function_mangledNameForConstant (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 12)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_variableKindIR_globalVariable * extractPtr_973 = (const cEnumAssociatedValues_variableKindIR_globalVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_973->mAssociatedValue0 ;
      result_outResult = function_mangledNameForGlobalVariable (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 14)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_localVariable:
    {
      const cEnumAssociatedValues_variableKindIR_localVariable * extractPtr_1076 = (const cEnumAssociatedValues_variableKindIR_localVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1076->mAssociatedValue0 ;
      result_outResult = function_mangledNameForLocalVariable (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 16)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_inArgument:
    {
      const cEnumAssociatedValues_variableKindIR_inArgument * extractPtr_1173 = (const cEnumAssociatedValues_variableKindIR_inArgument *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1173->mAssociatedValue0 ;
      result_outResult = function_mangledNameForInArgument (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 18)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_inOutArgument:
    {
      const cEnumAssociatedValues_variableKindIR_inOutArgument * extractPtr_1276 = (const cEnumAssociatedValues_variableKindIR_inOutArgument *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1276->mAssociatedValue0 ;
      result_outResult = function_mangledNameForInOutArgument (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 20)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_outArgument:
    {
      const cEnumAssociatedValues_variableKindIR_outArgument * extractPtr_1382 = (const cEnumAssociatedValues_variableKindIR_outArgument *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1382->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("* ").add_operation (function_mangledNameForOutArgument (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 22)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_localConstant:
    {
      const cEnumAssociatedValues_variableKindIR_localConstant * extractPtr_1480 = (const cEnumAssociatedValues_variableKindIR_localConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_1480->mAssociatedValue0 ;
      result_outResult = function_mangledNameForConstant (extractedValue_name.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 24)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_temporaryConstant:
    {
      const cEnumAssociatedValues_variableKindIR_temporaryConstant * extractPtr_1584 = (const cEnumAssociatedValues_variableKindIR_temporaryConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_luint extractedValue_idx = extractPtr_1584->mAssociatedValue0 ;
      result_outResult = function_mangledNameForTemporaryConstant (extractedValue_idx.mAttribute_uint, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 26)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_localAccess:
    {
      const cEnumAssociatedValues_variableKindIR_localAccess * extractPtr_1671 = (const cEnumAssociatedValues_variableKindIR_localAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_access = extractPtr_1671->mAssociatedValue0 ;
      const GALGAS_location extractedValue_location = extractPtr_1671->mAssociatedValue1 ;
      result_outResult = extractedValue_access ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_literalUnsignedInteger:
    {
      const cEnumAssociatedValues_variableKindIR_literalUnsignedInteger * extractPtr_1836 = (const cEnumAssociatedValues_variableKindIR_literalUnsignedInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1836->mAssociatedValue0 ;
      const GALGAS_luint_36__34_ extractedValue_value = extractPtr_1836->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("((").add_operation (function_mangledNameForType (extractedValue_type.reader_key (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 30)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 30)).add_operation (extractedValue_value.mAttribute_uint_36__34_.reader_string (SOURCE_FILE ("code-generation.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 30)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 30)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_literalSignedInteger:
    {
      const cEnumAssociatedValues_variableKindIR_literalSignedInteger * extractPtr_1999 = (const cEnumAssociatedValues_variableKindIR_literalSignedInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_1999->mAssociatedValue0 ;
      const GALGAS_lsint_36__34_ extractedValue_value = extractPtr_1999->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("((").add_operation (function_mangledNameForType (extractedValue_type.reader_key (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 32)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 32)).add_operation (extractedValue_value.mAttribute_sint_36__34_.reader_string (SOURCE_FILE ("code-generation.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 32)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 32)) ;
    }
    break ;
  case GALGAS_variableKindIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_variableKindIR_literalString * extractPtr_2060 = (const cEnumAssociatedValues_variableKindIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_name = extractPtr_2060->mAssociatedValue1 ;
      result_outResult = extractedValue_name ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumConstantMap_2D_element::objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @enumConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumConstantMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_enumConstantMap_2D_element::reader_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap_2D_element ("enumConstantMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  const GALGAS_enumConstantMap_2D_element * p = (const GALGAS_enumConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element::GALGAS_funcFormalArgumentList_2D_element (void) :
mAttribute_mSelector (),
mAttribute_mFormalArgumentTypeName (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element::~ GALGAS_funcFormalArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element::GALGAS_funcFormalArgumentList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mAttribute_mSelector (inOperand0),
mAttribute_mFormalArgumentTypeName (inOperand1),
mAttribute_mFormalArgumentName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element GALGAS_funcFormalArgumentList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_funcFormalArgumentList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element GALGAS_funcFormalArgumentList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_funcFormalArgumentList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_funcFormalArgumentList_2D_element::objectCompare (const GALGAS_funcFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentTypeName.objectCompare (inOperand.mAttribute_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_funcFormalArgumentList_2D_element::isValid (void) const {
  return mAttribute_mSelector.isValid () && mAttribute_mFormalArgumentTypeName.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList_2D_element::drop (void) {
  mAttribute_mSelector.drop () ;
  mAttribute_mFormalArgumentTypeName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @funcFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcFormalArgumentList_2D_element::reader_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcFormalArgumentList_2D_element::reader_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcFormalArgumentList_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @funcFormalArgumentList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_funcFormalArgumentList_2D_element ("funcFormalArgumentList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_funcFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_funcFormalArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_funcFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_funcFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element GALGAS_funcFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentList_2D_element result ;
  const GALGAS_funcFormalArgumentList_2D_element * p = (const GALGAS_funcFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_funcFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("funcFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element::GALGAS_funcSignature_2D_element (void) :
mAttribute_mFormalSelector (),
mAttribute_mArgumentType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element::~ GALGAS_funcSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element::GALGAS_funcSignature_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mArgumentType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element GALGAS_funcSignature_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_funcSignature_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element GALGAS_funcSignature_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_funcSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_funcSignature_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_funcSignature_2D_element::objectCompare (const GALGAS_funcSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalSelector.objectCompare (inOperand.mAttribute_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArgumentType.objectCompare (inOperand.mAttribute_mArgumentType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_funcSignature_2D_element::isValid (void) const {
  return mAttribute_mFormalSelector.isValid () && mAttribute_mArgumentType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature_2D_element::drop (void) {
  mAttribute_mFormalSelector.drop () ;
  mAttribute_mArgumentType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @funcSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArgumentType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcSignature_2D_element::reader_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_funcSignature_2D_element::reader_mArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArgumentType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @funcSignature-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_funcSignature_2D_element ("funcSignature-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_funcSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_funcSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_funcSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_funcSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element GALGAS_funcSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_funcSignature_2D_element result ;
  const GALGAS_funcSignature_2D_element * p = (const GALGAS_funcSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_funcSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("funcSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFunctionMode (),
mAttribute_mSignature (),
mAttribute_mResultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::~ GALGAS_functionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_funcSignature & inOperand2,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mFunctionMode (inOperand1),
mAttribute_mSignature (inOperand2),
mAttribute_mResultType (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_funcSignature::constructor_emptyList (HERE),
                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstring & inOperand1,
                                                                              const GALGAS_funcSignature & inOperand2,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand3 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_functionMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionMap_2D_element::objectCompare (const GALGAS_functionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionMode.objectCompare (inOperand.mAttribute_mFunctionMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFunctionMode.isValid () && mAttribute_mSignature.isValid () && mAttribute_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFunctionMode.drop () ;
  mAttribute_mSignature.drop () ;
  mAttribute_mResultType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @functionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionMap_2D_element::reader_mFunctionMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature GALGAS_functionMap_2D_element::reader_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionMap_2D_element::reader_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @functionMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap_2D_element ("functionMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  const GALGAS_functionMap_2D_element * p = (const GALGAS_functionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element::GALGAS_funcFormalArgumentListForGeneration_2D_element (void) :
mAttribute_mFormalArgumentType (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element::~ GALGAS_funcFormalArgumentListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element::GALGAS_funcFormalArgumentListForGeneration_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                              const GALGAS_string & inOperand1) :
mAttribute_mFormalArgumentType (inOperand0),
mAttribute_mFormalArgumentName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element GALGAS_funcFormalArgumentListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_funcFormalArgumentListForGeneration_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element GALGAS_funcFormalArgumentListForGeneration_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                              const GALGAS_string & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_funcFormalArgumentListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_funcFormalArgumentListForGeneration_2D_element::objectCompare (const GALGAS_funcFormalArgumentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentType.objectCompare (inOperand.mAttribute_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_funcFormalArgumentListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentType.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration_2D_element::drop (void) {
  mAttribute_mFormalArgumentType.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @funcFormalArgumentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_funcFormalArgumentListForGeneration_2D_element::reader_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_funcFormalArgumentListForGeneration_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @funcFormalArgumentListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_funcFormalArgumentListForGeneration_2D_element ("funcFormalArgumentListForGeneration-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_funcFormalArgumentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_funcFormalArgumentListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_funcFormalArgumentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_funcFormalArgumentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element GALGAS_funcFormalArgumentListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentListForGeneration_2D_element result ;
  const GALGAS_funcFormalArgumentListForGeneration_2D_element * p = (const GALGAS_funcFormalArgumentListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_funcFormalArgumentListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("funcFormalArgumentListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element::GALGAS_procFormalArgumentList_2D_element (void) :
mAttribute_mFormalArgumentPassingMode (),
mAttribute_mSelector (),
mAttribute_mFormalArgumentTypeName (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element::~ GALGAS_procFormalArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element::GALGAS_procFormalArgumentList_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2,
                                                                                    const GALGAS_lstring & inOperand3) :
mAttribute_mFormalArgumentPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mFormalArgumentTypeName (inOperand2),
mAttribute_mFormalArgumentName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element GALGAS_procFormalArgumentList_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2,
                                                                                                    const GALGAS_lstring & inOperand3 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_procFormalArgumentList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procFormalArgumentList_2D_element::objectCompare (const GALGAS_procFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingMode.objectCompare (inOperand.mAttribute_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentTypeName.objectCompare (inOperand.mAttribute_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procFormalArgumentList_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mFormalArgumentTypeName.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList_2D_element::drop (void) {
  mAttribute_mFormalArgumentPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mFormalArgumentTypeName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @procFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentList_2D_element::reader_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList_2D_element::reader_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList_2D_element::reader_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @procFormalArgumentList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentList_2D_element ("procFormalArgumentList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element GALGAS_procFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentList_2D_element result ;
  const GALGAS_procFormalArgumentList_2D_element * p = (const GALGAS_procFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element::GALGAS_procedureSignature_2D_element (void) :
mAttribute_mFormalArgumentPassingMode (),
mAttribute_mSelector (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element::~ GALGAS_procedureSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element::GALGAS_procedureSignature_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mAttribute_mFormalArgumentPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element GALGAS_procedureSignature_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procedureSignature_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procedureSignature_2D_element::objectCompare (const GALGAS_procedureSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingMode.objectCompare (inOperand.mAttribute_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procedureSignature_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature_2D_element::drop (void) {
  mAttribute_mFormalArgumentPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @procedureSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procedureSignature_2D_element::reader_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procedureSignature_2D_element::reader_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procedureSignature_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @procedureSignature-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureSignature_2D_element ("procedureSignature-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element GALGAS_procedureSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procedureSignature_2D_element result ;
  const GALGAS_procedureSignature_2D_element * p = (const GALGAS_procedureSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element::GALGAS_procedureMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mMutating (),
mAttribute_mProcedureMode (),
mAttribute_mSignature () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element::~ GALGAS_procedureMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element::GALGAS_procedureMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_bool & inOperand1,
                                                                const GALGAS_lstring & inOperand2,
                                                                const GALGAS_procedureSignature & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mMutating (inOperand1),
mAttribute_mProcedureMode (inOperand2),
mAttribute_mSignature (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element GALGAS_procedureMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_procedureMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_bool::constructor_default (HERE),
                                         GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_procedureSignature::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element GALGAS_procedureMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_bool & inOperand1,
                                                                                const GALGAS_lstring & inOperand2,
                                                                                const GALGAS_procedureSignature & inOperand3 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_procedureMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procedureMap_2D_element::objectCompare (const GALGAS_procedureMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMutating.objectCompare (inOperand.mAttribute_mMutating) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureMode.objectCompare (inOperand.mAttribute_mProcedureMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procedureMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mMutating.isValid () && mAttribute_mProcedureMode.isValid () && mAttribute_mSignature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mMutating.drop () ;
  mAttribute_mProcedureMode.drop () ;
  mAttribute_mSignature.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @procedureMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMutating.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procedureMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMap_2D_element::reader_mMutating (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMutating ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procedureMap_2D_element::reader_mProcedureMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_procedureMap_2D_element::reader_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @procedureMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureMap_2D_element ("procedureMap-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element GALGAS_procedureMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_procedureMap_2D_element result ;
  const GALGAS_procedureMap_2D_element * p = (const GALGAS_procedureMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element::GALGAS_procFormalArgumentListForGeneration_2D_element (void) :
mAttribute_mFormalArgumentKind (),
mAttribute_mFormalArgumentType (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element::~ GALGAS_procFormalArgumentListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element::GALGAS_procFormalArgumentListForGeneration_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                              const GALGAS_string & inOperand2) :
mAttribute_mFormalArgumentKind (inOperand0),
mAttribute_mFormalArgumentType (inOperand1),
mAttribute_mFormalArgumentName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element GALGAS_procFormalArgumentListForGeneration_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procFormalArgumentListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procFormalArgumentListForGeneration_2D_element::objectCompare (const GALGAS_procFormalArgumentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentKind.objectCompare (inOperand.mAttribute_mFormalArgumentKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentType.objectCompare (inOperand.mAttribute_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procFormalArgumentListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentKind.isValid () && mAttribute_mFormalArgumentType.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration_2D_element::drop (void) {
  mAttribute_mFormalArgumentKind.drop () ;
  mAttribute_mFormalArgumentType.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @procFormalArgumentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentListForGeneration_2D_element::reader_mFormalArgumentKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procFormalArgumentListForGeneration_2D_element::reader_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_procFormalArgumentListForGeneration_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @procFormalArgumentListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration_2D_element ("procFormalArgumentListForGeneration-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element GALGAS_procFormalArgumentListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration_2D_element result ;
  const GALGAS_procFormalArgumentListForGeneration_2D_element * p = (const GALGAS_procFormalArgumentListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::GALGAS_requiredProcedureDeclarationListAST_2D_element (void) :
mAttribute_mRequiredProcedureName (),
mAttribute_mRequiredMode (),
mAttribute_mProcFormalArgumentList (),
mAttribute_mEndOfProcLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::~ GALGAS_requiredProcedureDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::GALGAS_requiredProcedureDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_procFormalArgumentList & inOperand2,
                                                                                                              const GALGAS_location & inOperand3) :
mAttribute_mRequiredProcedureName (inOperand0),
mAttribute_mRequiredMode (inOperand1),
mAttribute_mProcFormalArgumentList (inOperand2),
mAttribute_mEndOfProcLocation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_requiredProcedureDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_procFormalArgumentList::constructor_emptyList (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                                              const GALGAS_procFormalArgumentList & inOperand2,
                                                                                                                              const GALGAS_location & inOperand3 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_requiredProcedureDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_requiredProcedureDeclarationListAST_2D_element::objectCompare (const GALGAS_requiredProcedureDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredProcedureName.objectCompare (inOperand.mAttribute_mRequiredProcedureName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredMode.objectCompare (inOperand.mAttribute_mRequiredMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcFormalArgumentList.objectCompare (inOperand.mAttribute_mProcFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfProcLocation.objectCompare (inOperand.mAttribute_mEndOfProcLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_requiredProcedureDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mRequiredProcedureName.isValid () && mAttribute_mRequiredMode.isValid () && mAttribute_mProcFormalArgumentList.isValid () && mAttribute_mEndOfProcLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST_2D_element::drop (void) {
  mAttribute_mRequiredProcedureName.drop () ;
  mAttribute_mRequiredMode.drop () ;
  mAttribute_mProcFormalArgumentList.drop () ;
  mAttribute_mEndOfProcLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @requiredProcedureDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRequiredProcedureName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfProcLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_requiredProcedureDeclarationListAST_2D_element::reader_mRequiredProcedureName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredProcedureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_requiredProcedureDeclarationListAST_2D_element::reader_mRequiredMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_requiredProcedureDeclarationListAST_2D_element::reader_mProcFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_requiredProcedureDeclarationListAST_2D_element::reader_mEndOfProcLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfProcLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @requiredProcedureDeclarationListAST-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST_2D_element ("requiredProcedureDeclarationListAST-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_requiredProcedureDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_requiredProcedureDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_requiredProcedureDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST_2D_element result ;
  const GALGAS_requiredProcedureDeclarationListAST_2D_element * p = (const GALGAS_requiredProcedureDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_requiredProcedureDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredProcedureDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST_2D_element::GALGAS_procEffectiveParameterListAST_2D_element (void) :
mAttribute_mEffectiveParameterKind (),
mAttribute_mSelector () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST_2D_element::~ GALGAS_procEffectiveParameterListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST_2D_element::GALGAS_procEffectiveParameterListAST_2D_element (const GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1) :
mAttribute_mEffectiveParameterKind (inOperand0),
mAttribute_mSelector (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST_2D_element GALGAS_procEffectiveParameterListAST_2D_element::constructor_new (const GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_procEffectiveParameterListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procEffectiveParameterListAST_2D_element::objectCompare (const GALGAS_procEffectiveParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEffectiveParameterKind.objectCompare (inOperand.mAttribute_mEffectiveParameterKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procEffectiveParameterListAST_2D_element::isValid (void) const {
  return mAttribute_mEffectiveParameterKind.isValid () && mAttribute_mSelector.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterListAST_2D_element::drop (void) {
  mAttribute_mEffectiveParameterKind.drop () ;
  mAttribute_mSelector.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterListAST_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @procEffectiveParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEffectiveParameterKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeAST GALGAS_procEffectiveParameterListAST_2D_element::reader_mEffectiveParameterKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procEffectiveParameterListAST_2D_element::reader_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @procEffectiveParameterListAST-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterListAST_2D_element ("procEffectiveParameterListAST-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procEffectiveParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST_2D_element GALGAS_procEffectiveParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterListAST_2D_element result ;
  const GALGAS_procEffectiveParameterListAST_2D_element * p = (const GALGAS_procEffectiveParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procEffectiveParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (void) :
mAttribute_mEffectiveParameterPassingMode (),
mAttribute_mSelector (),
mAttribute_mParameterType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::~ GALGAS_procEffectiveParameterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (const GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mAttribute_mEffectiveParameterPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mParameterType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::constructor_new (const GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procEffectiveParameterList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procEffectiveParameterList_2D_element::objectCompare (const GALGAS_procEffectiveParameterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEffectiveParameterPassingMode.objectCompare (inOperand.mAttribute_mEffectiveParameterPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParameterType.objectCompare (inOperand.mAttribute_mParameterType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procEffectiveParameterList_2D_element::isValid (void) const {
  return mAttribute_mEffectiveParameterPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mParameterType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList_2D_element::drop (void) {
  mAttribute_mEffectiveParameterPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mParameterType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @procEffectiveParameterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEffectiveParameterPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParameterType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeAST GALGAS_procEffectiveParameterList_2D_element::reader_mEffectiveParameterPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procEffectiveParameterList_2D_element::reader_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procEffectiveParameterList_2D_element::reader_mParameterType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameterType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @procEffectiveParameterList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ("procEffectiveParameterList-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procEffectiveParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  const GALGAS_procEffectiveParameterList_2D_element * p = (const GALGAS_procEffectiveParameterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procEffectiveParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::GALGAS_procCallEffectiveParameterListIR_2D_element (void) :
mAttribute_mEffectiveParameterPassingMode (),
mAttribute_mSelector (),
mAttribute_mParameterType (),
mAttribute_mParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::~ GALGAS_procCallEffectiveParameterListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::GALGAS_procCallEffectiveParameterListIR_2D_element (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                                        const GALGAS_variableKindIR & inOperand3) :
mAttribute_mEffectiveParameterPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mParameterType (inOperand2),
mAttribute_mParameter (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element GALGAS_procCallEffectiveParameterListIR_2D_element::constructor_new (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                                                        const GALGAS_variableKindIR & inOperand3 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_procCallEffectiveParameterListIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
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
    result = mAttribute_mParameterType.objectCompare (inOperand.mAttribute_mParameterType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParameter.objectCompare (inOperand.mAttribute_mParameter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procCallEffectiveParameterListIR_2D_element::isValid (void) const {
  return mAttribute_mEffectiveParameterPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mParameterType.isValid () && mAttribute_mParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR_2D_element::drop (void) {
  mAttribute_mEffectiveParameterPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mParameterType.drop () ;
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
    mAttribute_mParameterType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procCallEffectiveParameterListIR_2D_element::reader_mEffectiveParameterPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procCallEffectiveParameterListIR_2D_element::reader_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procCallEffectiveParameterListIR_2D_element::reader_mParameterType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameterType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableKindIR GALGAS_procCallEffectiveParameterListIR_2D_element::reader_mParameter (UNUSED_LOCATION_ARGS) const {
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

GALGAS_functionCallEffectiveParameterList_2D_element::GALGAS_functionCallEffectiveParameterList_2D_element (void) :
mAttribute_mSelector (),
mAttribute_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::~ GALGAS_functionCallEffectiveParameterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::GALGAS_functionCallEffectiveParameterList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_expressionAST & inOperand1) :
mAttribute_mSelector (inOperand0),
mAttribute_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element GALGAS_functionCallEffectiveParameterList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                            const GALGAS_expressionAST & inOperand1 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_functionCallEffectiveParameterList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionCallEffectiveParameterList_2D_element::objectCompare (const GALGAS_functionCallEffectiveParameterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionCallEffectiveParameterList_2D_element::isValid (void) const {
  return mAttribute_mSelector.isValid () && mAttribute_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList_2D_element::drop (void) {
  mAttribute_mSelector.drop () ;
  mAttribute_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @functionCallEffectiveParameterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionCallEffectiveParameterList_2D_element::reader_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_functionCallEffectiveParameterList_2D_element::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @functionCallEffectiveParameterList-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallEffectiveParameterList_2D_element ("functionCallEffectiveParameterList-element",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionCallEffectiveParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionCallEffectiveParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallEffectiveParameterList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element GALGAS_functionCallEffectiveParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterList_2D_element result ;
  const GALGAS_functionCallEffectiveParameterList_2D_element * p = (const GALGAS_functionCallEffectiveParameterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallEffectiveParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallEffectiveParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableListIR_2D_element::GALGAS_variableListIR_2D_element (void) :
mAttribute_mVar () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableListIR_2D_element::~ GALGAS_variableListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableListIR_2D_element::GALGAS_variableListIR_2D_element (const GALGAS_variableKindIR & inOperand0) :
mAttribute_mVar (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableListIR_2D_element GALGAS_variableListIR_2D_element::constructor_new (const GALGAS_variableKindIR & inOperand0 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_variableListIR_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_variableListIR_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_variableListIR_2D_element::objectCompare (const GALGAS_variableListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mVar.objectCompare (inOperand.mAttribute_mVar) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_variableListIR_2D_element::isValid (void) const {
  return mAttribute_mVar.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableListIR_2D_element::drop (void) {
  mAttribute_mVar.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableListIR_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @variableListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mVar.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableKindIR GALGAS_variableListIR_2D_element::reader_mVar (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVar ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @variableListIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_variableListIR_2D_element ("variableListIR-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_variableListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_variableListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableListIR_2D_element GALGAS_variableListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_variableListIR_2D_element result ;
  const GALGAS_variableListIR_2D_element * p = (const GALGAS_variableListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_variableListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mInlineGeneratedCode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::~ GALGAS_constructorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_string & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mInlineGeneratedCode (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constructorMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_string & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_constructorMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constructorMap_2D_element::objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInlineGeneratedCode.objectCompare (inOperand.mAttribute_mInlineGeneratedCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constructorMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mInlineGeneratedCode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mInlineGeneratedCode.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @constructorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInlineGeneratedCode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_constructorMap_2D_element::reader_mInlineGeneratedCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInlineGeneratedCode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @constructorMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap_2D_element ("constructorMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  const GALGAS_constructorMap_2D_element * p = (const GALGAS_constructorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap_2D_element::GALGAS_registerMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType (),
mAttribute_mIsReadOnly () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap_2D_element::~ GALGAS_registerMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap_2D_element::GALGAS_registerMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                              const GALGAS_bool & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mIsReadOnly (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap_2D_element GALGAS_registerMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                        GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap_2D_element GALGAS_registerMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_bool & inOperand2 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_registerMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerMap_2D_element::objectCompare (const GALGAS_registerMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsReadOnly.objectCompare (inOperand.mAttribute_mIsReadOnly) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_registerMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mIsReadOnly.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mIsReadOnly.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @registerMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsReadOnly.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_registerMap_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_registerMap_2D_element::reader_mIsReadOnly (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsReadOnly ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @registerMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerMap_2D_element ("registerMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap_2D_element GALGAS_registerMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_registerMap_2D_element result ;
  const GALGAS_registerMap_2D_element * p = (const GALGAS_registerMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mResultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::~ GALGAS_infixOperatorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mResultType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_infixOperatorMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_infixOperatorMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_infixOperatorMap_2D_element::objectCompare (const GALGAS_infixOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_infixOperatorMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mResultType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @infixOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_infixOperatorMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_infixOperatorMap_2D_element::reader_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @infixOperatorMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ("infixOperatorMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  const GALGAS_infixOperatorMap_2D_element * p = (const GALGAS_infixOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalLiteralStringMap_2D_element::GALGAS_globalLiteralStringMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLiteralStringCname () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalLiteralStringMap_2D_element::~ GALGAS_globalLiteralStringMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalLiteralStringMap_2D_element::GALGAS_globalLiteralStringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_string & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLiteralStringCname (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalLiteralStringMap_2D_element GALGAS_globalLiteralStringMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_globalLiteralStringMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalLiteralStringMap_2D_element GALGAS_globalLiteralStringMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_string & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalLiteralStringMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalLiteralStringMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalLiteralStringMap_2D_element::objectCompare (const GALGAS_globalLiteralStringMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLiteralStringCname.objectCompare (inOperand.mAttribute_mLiteralStringCname) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalLiteralStringMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLiteralStringCname.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalLiteralStringMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLiteralStringCname.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalLiteralStringMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @globalLiteralStringMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLiteralStringCname.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalLiteralStringMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalLiteralStringMap_2D_element::reader_mLiteralStringCname (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralStringCname ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @globalLiteralStringMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalLiteralStringMap_2D_element ("globalLiteralStringMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalLiteralStringMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalLiteralStringMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalLiteralStringMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalLiteralStringMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalLiteralStringMap_2D_element GALGAS_globalLiteralStringMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_globalLiteralStringMap_2D_element result ;
  const GALGAS_globalLiteralStringMap_2D_element * p = (const GALGAS_globalLiteralStringMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalLiteralStringMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalLiteralStringMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mConstantType (),
mAttribute_mExpressionCode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::~ GALGAS_globalConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                          const GALGAS_variableKindIR & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mConstantType (inOperand1),
mAttribute_mExpressionCode (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                          const GALGAS_variableKindIR & inOperand2 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_globalConstantMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalConstantMap_2D_element::objectCompare (const GALGAS_globalConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstantType.objectCompare (inOperand.mAttribute_mConstantType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExpressionCode.objectCompare (inOperand.mAttribute_mExpressionCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mConstantType.isValid () && mAttribute_mExpressionCode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mConstantType.drop () ;
  mAttribute_mExpressionCode.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @globalConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstantType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExpressionCode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalConstantMap_2D_element::reader_mConstantType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableKindIR GALGAS_globalConstantMap_2D_element::reader_mExpressionCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionCode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalConstantMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMap_2D_element ("globalConstantMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  const GALGAS_globalConstantMap_2D_element * p = (const GALGAS_globalConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetBaseTypeMap_2D_element::GALGAS_targetBaseTypeMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mCType (),
mAttribute_mSize (),
mAttribute_mIsSigned () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetBaseTypeMap_2D_element::~ GALGAS_targetBaseTypeMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetBaseTypeMap_2D_element::GALGAS_targetBaseTypeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_string & inOperand1,
                                                                          const GALGAS_uint & inOperand2,
                                                                          const GALGAS_bool & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mCType (inOperand1),
mAttribute_mSize (inOperand2),
mAttribute_mIsSigned (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetBaseTypeMap_2D_element GALGAS_targetBaseTypeMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_targetBaseTypeMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_string::constructor_default (HERE),
                                              GALGAS_uint::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetBaseTypeMap_2D_element GALGAS_targetBaseTypeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_string & inOperand1,
                                                                                          const GALGAS_uint & inOperand2,
                                                                                          const GALGAS_bool & inOperand3 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_targetBaseTypeMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_targetBaseTypeMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_targetBaseTypeMap_2D_element::objectCompare (const GALGAS_targetBaseTypeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCType.objectCompare (inOperand.mAttribute_mCType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSize.objectCompare (inOperand.mAttribute_mSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsSigned.objectCompare (inOperand.mAttribute_mIsSigned) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_targetBaseTypeMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCType.isValid () && mAttribute_mSize.isValid () && mAttribute_mIsSigned.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_targetBaseTypeMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mCType.drop () ;
  mAttribute_mSize.drop () ;
  mAttribute_mIsSigned.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_targetBaseTypeMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @targetBaseTypeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsSigned.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_targetBaseTypeMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_targetBaseTypeMap_2D_element::reader_mCType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_targetBaseTypeMap_2D_element::reader_mSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_targetBaseTypeMap_2D_element::reader_mIsSigned (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsSigned ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @targetBaseTypeMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_targetBaseTypeMap_2D_element ("targetBaseTypeMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_targetBaseTypeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetBaseTypeMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_targetBaseTypeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_targetBaseTypeMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetBaseTypeMap_2D_element GALGAS_targetBaseTypeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_targetBaseTypeMap_2D_element result ;
  const GALGAS_targetBaseTypeMap_2D_element * p = (const GALGAS_targetBaseTypeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_targetBaseTypeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("targetBaseTypeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::GALGAS_globalVariableMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mVariableType (),
mAttribute_mExecutionModeSet (),
mAttribute_mInitialValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::~ GALGAS_globalVariableMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::GALGAS_globalVariableMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                          const GALGAS_stringset & inOperand2,
                                                                          const GALGAS_variableKindIR & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mVariableType (inOperand1),
mAttribute_mExecutionModeSet (inOperand2),
mAttribute_mInitialValue (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element GALGAS_globalVariableMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                          const GALGAS_stringset & inOperand2,
                                                                                          const GALGAS_variableKindIR & inOperand3 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalVariableMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_globalVariableMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalVariableMap_2D_element::objectCompare (const GALGAS_globalVariableMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mVariableType.objectCompare (inOperand.mAttribute_mVariableType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExecutionModeSet.objectCompare (inOperand.mAttribute_mExecutionModeSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitialValue.objectCompare (inOperand.mAttribute_mInitialValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVariableMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mVariableType.isValid () && mAttribute_mExecutionModeSet.isValid () && mAttribute_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mVariableType.drop () ;
  mAttribute_mExecutionModeSet.drop () ;
  mAttribute_mInitialValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @globalVariableMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mVariableType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExecutionModeSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVariableMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalVariableMap_2D_element::reader_mVariableType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariableType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_globalVariableMap_2D_element::reader_mExecutionModeSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExecutionModeSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableKindIR GALGAS_globalVariableMap_2D_element::reader_mInitialValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalVariableMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVariableMap_2D_element ("globalVariableMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVariableMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVariableMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVariableMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVariableMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element GALGAS_globalVariableMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableMap_2D_element result ;
  const GALGAS_globalVariableMap_2D_element * p = (const GALGAS_globalVariableMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVariableMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVariableMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element::GALGAS_modeMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element::~ GALGAS_modeMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element::GALGAS_modeMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element GALGAS_modeMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_modeMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element GALGAS_modeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_modeMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_modeMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_modeMap_2D_element::objectCompare (const GALGAS_modeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_modeMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modeMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modeMap_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @modeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_modeMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @modeMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_modeMap_2D_element ("modeMap-element",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_modeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_modeMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_modeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_modeMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element GALGAS_modeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_modeMap_2D_element result ;
  const GALGAS_modeMap_2D_element * p = (const GALGAS_modeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_modeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("modeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (void) :
mAttribute_mTypeProxy (),
mAttribute_mPropertyName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::~ GALGAS_propertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                const GALGAS_lstring & inOperand1) :
mAttribute_mTypeProxy (inOperand0),
mAttribute_mPropertyName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                         GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                const GALGAS_lstring & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_propertyList_2D_element::objectCompare (const GALGAS_propertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTypeProxy.objectCompare (inOperand.mAttribute_mTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyName.objectCompare (inOperand.mAttribute_mPropertyName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyList_2D_element::isValid (void) const {
  return mAttribute_mTypeProxy.isValid () && mAttribute_mPropertyName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::drop (void) {
  mAttribute_mTypeProxy.drop () ;
  mAttribute_mPropertyName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @propertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_propertyList_2D_element::reader_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyList_2D_element::reader_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @propertyList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyList_2D_element ("propertyList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  const GALGAS_propertyList_2D_element * p = (const GALGAS_propertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element::GALGAS_typeList_2D_element (void) :
mAttribute_mActualType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element::~ GALGAS_typeList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element::GALGAS_typeList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0) :
mAttribute_mActualType (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element GALGAS_typeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_typeList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element GALGAS_typeList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typeList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeList_2D_element::objectCompare (const GALGAS_typeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActualType.objectCompare (inOperand.mAttribute_mActualType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typeList_2D_element::isValid (void) const {
  return mAttribute_mActualType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeList_2D_element::drop (void) {
  mAttribute_mActualType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @typeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActualType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_typeList_2D_element::reader_mActualType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @typeList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeList_2D_element ("typeList-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element GALGAS_typeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeList_2D_element result ;
  const GALGAS_typeList_2D_element * p = (const GALGAS_typeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element::GALGAS_typeMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element::~ GALGAS_typeMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element::GALGAS_typeMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_abstractTypeIR & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element GALGAS_typeMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_abstractTypeIR & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_typeMapIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeMapIR_2D_element::objectCompare (const GALGAS_typeMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typeMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeMapIR_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @typeMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeMapIR_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractTypeIR GALGAS_typeMapIR_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @typeMapIR-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMapIR_2D_element ("typeMapIR-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element GALGAS_typeMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeMapIR_2D_element result ;
  const GALGAS_typeMapIR_2D_element * p = (const GALGAS_typeMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast::GALGAS_ast (void) :
mAttribute_mDeclarationList (),
mAttribute_mProcedureListAST (),
mAttribute_mRequiredProcList (),
mAttribute_mFunctionListAST (),
mAttribute_mTargetList (),
mAttribute_mInitList (),
mAttribute_mException () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast::~ GALGAS_ast (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast::GALGAS_ast (const GALGAS_declarationListAST & inOperand0,
                        const GALGAS_procedureDeclarationListAST & inOperand1,
                        const GALGAS_requiredProcedureDeclarationListAST & inOperand2,
                        const GALGAS_functionDeclarationListAST & inOperand3,
                        const GALGAS_lstringlist & inOperand4,
                        const GALGAS_initList & inOperand5,
                        const GALGAS_exceptionAST & inOperand6) :
mAttribute_mDeclarationList (inOperand0),
mAttribute_mProcedureListAST (inOperand1),
mAttribute_mRequiredProcList (inOperand2),
mAttribute_mFunctionListAST (inOperand3),
mAttribute_mTargetList (inOperand4),
mAttribute_mInitList (inOperand5),
mAttribute_mException (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast GALGAS_ast::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ast (GALGAS_declarationListAST::constructor_emptyList (HERE),
                     GALGAS_procedureDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_requiredProcedureDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                     GALGAS_lstringlist::constructor_emptyList (HERE),
                     GALGAS_initList::constructor_emptyList (HERE),
                     GALGAS_exceptionAST::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast GALGAS_ast::constructor_new (const GALGAS_declarationListAST & inOperand0,
                                        const GALGAS_procedureDeclarationListAST & inOperand1,
                                        const GALGAS_requiredProcedureDeclarationListAST & inOperand2,
                                        const GALGAS_functionDeclarationListAST & inOperand3,
                                        const GALGAS_lstringlist & inOperand4,
                                        const GALGAS_initList & inOperand5,
                                        const GALGAS_exceptionAST & inOperand6 
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_ast (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ast::objectCompare (const GALGAS_ast & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeclarationList.objectCompare (inOperand.mAttribute_mDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureListAST.objectCompare (inOperand.mAttribute_mProcedureListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredProcList.objectCompare (inOperand.mAttribute_mRequiredProcList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionListAST.objectCompare (inOperand.mAttribute_mFunctionListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetList.objectCompare (inOperand.mAttribute_mTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitList.objectCompare (inOperand.mAttribute_mInitList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mException.objectCompare (inOperand.mAttribute_mException) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ast::isValid (void) const {
  return mAttribute_mDeclarationList.isValid () && mAttribute_mProcedureListAST.isValid () && mAttribute_mRequiredProcList.isValid () && mAttribute_mFunctionListAST.isValid () && mAttribute_mTargetList.isValid () && mAttribute_mInitList.isValid () && mAttribute_mException.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ast::drop (void) {
  mAttribute_mDeclarationList.drop () ;
  mAttribute_mProcedureListAST.drop () ;
  mAttribute_mRequiredProcList.drop () ;
  mAttribute_mFunctionListAST.drop () ;
  mAttribute_mTargetList.drop () ;
  mAttribute_mInitList.drop () ;
  mAttribute_mException.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ast::description (C_String & ioString,
                              const int32_t inIndentation) const {
  ioString << "<struct @ast:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mException.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationListAST GALGAS_ast::reader_mDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureDeclarationListAST GALGAS_ast::reader_mProcedureListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST GALGAS_ast::reader_mRequiredProcList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_ast::reader_mFunctionListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_ast::reader_mTargetList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList GALGAS_ast::reader_mInitList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionAST GALGAS_ast::reader_mException (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mException ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                      @ast type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ast ("ast",
                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ast::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ast ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ast::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ast (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::GALGAS_globalVariableMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mActualTypeName (),
mAttribute_mGenerateVolatile (),
mAttribute_mInitialValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::~ GALGAS_globalVariableMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::GALGAS_globalVariableMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_variableKindIR & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mActualTypeName (inOperand1),
mAttribute_mGenerateVolatile (inOperand2),
mAttribute_mInitialValue (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element GALGAS_globalVariableMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_string & inOperand1,
                                                                                              const GALGAS_bool & inOperand2,
                                                                                              const GALGAS_variableKindIR & inOperand3 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalVariableMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_globalVariableMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalVariableMapIR_2D_element::objectCompare (const GALGAS_globalVariableMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActualTypeName.objectCompare (inOperand.mAttribute_mActualTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGenerateVolatile.objectCompare (inOperand.mAttribute_mGenerateVolatile) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitialValue.objectCompare (inOperand.mAttribute_mInitialValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVariableMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mActualTypeName.isValid () && mAttribute_mGenerateVolatile.isValid () && mAttribute_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mActualTypeName.drop () ;
  mAttribute_mGenerateVolatile.drop () ;
  mAttribute_mInitialValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @globalVariableMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActualTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGenerateVolatile.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVariableMapIR_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalVariableMapIR_2D_element::reader_mActualTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMapIR_2D_element::reader_mGenerateVolatile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGenerateVolatile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableKindIR GALGAS_globalVariableMapIR_2D_element::reader_mInitialValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @globalVariableMapIR-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVariableMapIR_2D_element ("globalVariableMapIR-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVariableMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVariableMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVariableMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVariableMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element GALGAS_globalVariableMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableMapIR_2D_element result ;
  const GALGAS_globalVariableMapIR_2D_element * p = (const GALGAS_globalVariableMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVariableMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVariableMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mValueExpressionGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::~ GALGAS_globalConstantMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_variableKindIR & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mValueExpressionGeneration (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element GALGAS_globalConstantMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_variableKindIR & inOperand1 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalConstantMapIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalConstantMapIR_2D_element::objectCompare (const GALGAS_globalConstantMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValueExpressionGeneration.objectCompare (inOperand.mAttribute_mValueExpressionGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValueExpressionGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mValueExpressionGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @globalConstantMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValueExpressionGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMapIR_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableKindIR GALGAS_globalConstantMapIR_2D_element::reader_mValueExpressionGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValueExpressionGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @globalConstantMapIR-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMapIR_2D_element ("globalConstantMapIR-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalConstantMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalConstantMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element GALGAS_globalConstantMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMapIR_2D_element result ;
  const GALGAS_globalConstantMapIR_2D_element * p = (const GALGAS_globalConstantMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@functionDeclarationListAST-element enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInPrecedenceGraph (const GALGAS_functionDeclarationListAST_2D_element inObject,
                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_funcFormalArgumentList enumerator_2894 (inObject.mAttribute_mFuncFormalArgumentList, kEnumeration_up) ;
  while (enumerator_2894.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.modifier_noteNode (enumerator_2894.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("func-declaration.galgas", 83)) ;
    }
    enumerator_2894.gotoNextObject () ;
  }
  {
  ioArgument_ioGraph.modifier_noteNode (inObject.mAttribute_mResultTypeName COMMA_SOURCE_FILE ("func-declaration.galgas", 85)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@functionMapIR-element headerCodeGeneration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_headerCodeGeneration (const GALGAS_functionMapIR_2D_element & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string (filewrapperTemplate_functionGenerationTemplate_declaration (inCompiler, inObject.mAttribute_lkey.mAttribute_string, inObject.mAttribute_mFormalArgumentListForGeneration, inObject.mAttribute_mResultType COMMA_SOURCE_FILE ("func-declaration.galgas", 232))) ;
//---
  return result_outCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@procedureDeclarationListAST-element enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInPrecedenceGraph (const GALGAS_procedureDeclarationListAST_2D_element inObject,
                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  switch (inObject.mAttribute_mProcedureKind.enumValue ()) {
  case GALGAS_procedureKindAST::kNotBuilt:
    break ;
  case GALGAS_procedureKindAST::kEnum_standAloneProc:
    {
      cEnumerator_procFormalArgumentList enumerator_4887 (inObject.mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
      while (enumerator_4887.hasCurrentObject ()) {
        {
        ioArgument_ioGraph.modifier_noteNode (enumerator_4887.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("proc-declaration.galgas", 139)) ;
        }
        enumerator_4887.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_procedureKindAST::kEnum_structureProc:
    {
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@procedureMapIR-element headerCodeGeneration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_headerCodeGeneration (const GALGAS_procedureMapIR_2D_element & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string (filewrapperTemplate_procedureGenerationTemplate_declaration (inCompiler, function_mangledNameForProcedure (inObject.mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("proc-declaration.galgas", 390)), inObject.mAttribute_mFormalArgumentListForGeneration COMMA_SOURCE_FILE ("proc-declaration.galgas", 389))) ;
//---
  return result_outCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category Reader '@registerMapIR-element headerCodeGenerationForRegister'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_headerCodeGenerationForRegister (const GALGAS_registerMapIR_2D_element & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string (filewrapperTemplate_registerGenerationTemplate_declaration (inCompiler, inObject.mAttribute_mRegisterTypeName, inObject.mAttribute_lkey.mAttribute_string, inObject.mAttribute_mRegisterAddress COMMA_SOURCE_FILE ("register-declaration.galgas", 160))) ;
//---
  return result_outCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category Reader '@globalVariableMapIR-element implementationCodeGeneration'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_implementationCodeGeneration (const GALGAS_globalVariableMapIR_2D_element & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  GALGAS_string var_initialValueString = categoryReader_mangledName (inObject.mAttribute_mInitialValue, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 161)) ;
  const enumGalgasBool test_0 = inObject.mAttribute_mInitialValue.reader_isLiteralUnsignedInteger (SOURCE_FILE ("global-variable-declaration.galgas", 162)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_luint_36__34_ var_value ;
    GALGAS_unifiedTypeMap_2D_proxy joker_6689 ; // Joker input parameter
    inObject.mAttribute_mInitialValue.method_literalUnsignedInteger (joker_6689, var_value, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 163)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_value.mAttribute_uint_36__34_.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 0ULL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_initialValueString = GALGAS_string::makeEmptyString () ;
    }
  }
  result_outCode = GALGAS_string (filewrapperTemplate_globalVariableGenerationTemplate_implementation (inCompiler, inObject.mAttribute_lkey.mAttribute_string, inObject.mAttribute_mActualTypeName, inObject.mAttribute_mGenerateVolatile, var_initialValueString COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 168))) ;
//---
  return result_outCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category Reader '@globalConstantMapIR-element headerCodeGeneration'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_headerCodeGeneration (const GALGAS_globalConstantMapIR_2D_element & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  result_outCode = GALGAS_string (filewrapperTemplate_globalConstantGenerationTemplate_declaration (inCompiler, inObject.mAttribute_lkey.mAttribute_string, categoryReader_mangledName (inObject.mAttribute_mValueExpressionGeneration, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 145)) COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 143))) ;
//---
  return result_outCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category reader '@newBaseTypeDeclaration location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_newBaseTypeDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_newBaseTypeDeclaration * object = (const cPtr_newBaseTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_newBaseTypeDeclaration) ;
  result_outLocation = object->mAttribute_mBaseTypeName.mAttribute_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_newBaseTypeDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_newBaseTypeDeclaration.mSlotID,
                                categoryReader_newBaseTypeDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_newBaseTypeDeclaration_location (defineCategoryReader_newBaseTypeDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@newBaseTypeDeclaration enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_newBaseTypeDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_newBaseTypeDeclaration * object = (const cPtr_newBaseTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_newBaseTypeDeclaration) ;
  {
  const GALGAS_newBaseTypeDeclaration temp_0 = object ;
  ioArgument_ioGraph.modifier_addNode (GALGAS_lstring::constructor_new (GALGAS_string ("basetype ").add_operation (object->mAttribute_mBaseTypeName.reader_string (SOURCE_FILE ("new-base-type.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("new-base-type.galgas", 65)), object->mAttribute_mBaseTypeName.mAttribute_location  COMMA_SOURCE_FILE ("new-base-type.galgas", 65)), temp_0, inCompiler COMMA_SOURCE_FILE ("new-base-type.galgas", 65)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_newBaseTypeDeclaration_enterInPrecedenceGraph (void) {
  enterCategoryMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_newBaseTypeDeclaration.mSlotID,
                                              categoryMethod_newBaseTypeDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_newBaseTypeDeclaration_enterInPrecedenceGraph (defineCategoryMethod_newBaseTypeDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@newBaseTypeDeclaration keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_newBaseTypeDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_newBaseTypeDeclaration * object = (const cPtr_newBaseTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_newBaseTypeDeclaration) ;
  result_outRepresentation = GALGAS_string ("bool ").add_operation (object->mAttribute_mBaseTypeName.reader_string (SOURCE_FILE ("new-base-type.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("new-base-type.galgas", 71)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_newBaseTypeDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_newBaseTypeDeclaration.mSlotID,
                                         categoryReader_newBaseTypeDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_newBaseTypeDeclaration_keyRepresentation (defineCategoryReader_newBaseTypeDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@newBaseTypeDeclaration enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_newBaseTypeDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                  const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_newBaseTypeDeclaration * object = (const cPtr_newBaseTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_newBaseTypeDeclaration) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSize.mAttribute_uint_36__34_.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 8ULL))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSize.mAttribute_uint_36__34_.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 16ULL))) ;
  }
  GALGAS_bool test_1 = test_0 ;
  if (kBoolTrue == test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSize.mAttribute_uint_36__34_.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 32ULL))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSize.mAttribute_uint_36__34_.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 64ULL))) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mSize.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("Only 8, 16, 32 or 64 are accepted here")  COMMA_SOURCE_FILE ("new-base-type.galgas", 85)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mTargetBaseTypeMap.modifier_insertKey (object->mAttribute_mBaseTypeName, object->mAttribute_mCType.mAttribute_string, object->mAttribute_mSize.mAttribute_uint_36__34_.reader_uint (inCompiler COMMA_SOURCE_FILE ("new-base-type.galgas", 91)), object->mAttribute_mIsSigned, inCompiler COMMA_SOURCE_FILE ("new-base-type.galgas", 88)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_newBaseTypeDeclaration_enterInContext (void) {
  enterCategoryMethod_enterInContext (kTypeDescriptor_GALGAS_newBaseTypeDeclaration.mSlotID,
                                      categoryMethod_newBaseTypeDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_newBaseTypeDeclaration_enterInContext (defineCategoryMethod_newBaseTypeDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@newBaseTypeDeclaration semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_newBaseTypeDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_newBaseTypeDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_newBaseTypeDeclaration.mSlotID,
                                        categoryMethod_newBaseTypeDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_newBaseTypeDeclaration_semanticAnalysis (defineCategoryMethod_newBaseTypeDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category reader '@booleanDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_booleanDeclaration_location (const cPtr_abstractDeclaration * inObject,
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

static void defineCategoryReader_booleanDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                categoryReader_booleanDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_booleanDeclaration_location (defineCategoryReader_booleanDeclaration_location, NULL) ;

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
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mBooleanTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 50)) ;
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
//                         Overriding category reader '@booleanDeclaration keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_booleanDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  result_outRepresentation = GALGAS_string ("bool ").add_operation (object->mAttribute_mBooleanTypeName.reader_string (SOURCE_FILE ("bool-type.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_booleanDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_booleanDeclaration.mSlotID,
                                         categoryReader_booleanDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_booleanDeclaration_keyRepresentation (defineCategoryReader_booleanDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@booleanDeclaration enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                              const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                              GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  GALGAS_bool var_copiable = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_3147 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3147.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3147.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_copiable.operator_not (SOURCE_FILE ("bool-type.galgas", 72)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_3147.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("bool-type.galgas", 73)) ;
      }
      var_copiable = GALGAS_bool (false) ;
    }
    enumerator_3147.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("bool-type.galgas", 79)) ;
  {
  var_constructorMap.modifier_insertKey (GALGAS_string ("false").reader_nowhere (SOURCE_FILE ("bool-type.galgas", 80)), GALGAS_string ("(").add_operation (function_mangledNameForType (object->mAttribute_mBooleanTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 80)).add_operation (GALGAS_string (") 0"), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 80)) ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_string ("true").reader_nowhere (SOURCE_FILE ("bool-type.galgas", 81)), GALGAS_string ("(").add_operation (function_mangledNameForType (object->mAttribute_mBooleanTypeName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 81)).add_operation (GALGAS_string (") 1"), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 81)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mBooleanTypeName, GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("bool-type.galgas", 85)), var_constructorMap, GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("bool-type.galgas", 87)), var_copiable, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 83)) ;
  }
  {
  routine_enterBooleanOperators (object->mAttribute_mBooleanTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("bool-type.galgas", 93)) ;
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
//                          Overriding category method '@booleanDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_booleanDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanDeclaration * object = (const cPtr_booleanDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanDeclaration) ;
  GALGAS_string var_cType = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_6664 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_6664.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_6664.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_cType.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_6664.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("base type already defined as '").add_operation (var_cType, inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 166)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 166))  COMMA_SOURCE_FILE ("bool-type.galgas", 166)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_uint joker_6908 ; // Joker input parameter
        GALGAS_bool joker_6911 ; // Joker input parameter
        constinArgument_inContext.mAttribute_mTargetBaseTypeMap.method_searchKey (enumerator_6664.current_mValue (HERE), var_cType, joker_6908, joker_6911, inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 168)) ;
      }
    }
    enumerator_6664.gotoNextObject () ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mTypeMapIR.modifier_insertKey (object->mAttribute_mBooleanTypeName, GALGAS_booleanIR::constructor_new (object->mAttribute_mBooleanTypeName.mAttribute_string, var_cType  COMMA_SOURCE_FILE ("bool-type.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("bool-type.galgas", 172)) ;
  }
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
//                         Overriding category reader '@booleanIR headerCodeGenerationForType'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_booleanIR_headerCodeGenerationForType (const cPtr_abstractTypeIR * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_booleanIR * object = (const cPtr_booleanIR *) inObject ;
  macroValidSharedObject (object, cPtr_booleanIR) ;
  result_outCode = GALGAS_string (filewrapperTemplate_booleanGenerationTemplate_declaration (inCompiler, object->mAttribute_mBooleanTypeName, object->mAttribute_mActualTypeName COMMA_SOURCE_FILE ("bool-type.galgas", 200))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_booleanIR_headerCodeGenerationForType (void) {
  enterCategoryReader_headerCodeGenerationForType (kTypeDescriptor_GALGAS_booleanIR.mSlotID,
                                                   categoryReader_booleanIR_headerCodeGenerationForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_booleanIR_headerCodeGenerationForType (defineCategoryReader_booleanIR_headerCodeGenerationForType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category reader '@modeDeclaration location'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_modeDeclaration_location (const cPtr_abstractDeclaration * inObject,
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

static void defineCategoryReader_modeDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                categoryReader_modeDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_modeDeclaration_location (defineCategoryReader_modeDeclaration_location, NULL) ;

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
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mModeName, temp_0, inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 40)) ;
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
//                           Overriding category reader '@modeDeclaration keyRepresentation'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_modeDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  result_outRepresentation = GALGAS_string ("mode ").add_operation (object->mAttribute_mModeName.reader_string (SOURCE_FILE ("mode-declaration.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 46)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_modeDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_modeDeclaration.mSlotID,
                                         categoryReader_modeDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_modeDeclaration_keyRepresentation (defineCategoryReader_modeDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@modeDeclaration enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_modeDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                           const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                           GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_modeDeclaration * object = (const cPtr_modeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_modeDeclaration) ;
  {
  ioArgument_ioContext.mAttribute_mModeMap.modifier_insertKey (object->mAttribute_mModeName, inCompiler COMMA_SOURCE_FILE ("mode-declaration.galgas", 58)) ;
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
//                            Overriding category reader '@enumerationDeclaration location'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location categoryReader_enumerationDeclaration_location (const cPtr_abstractDeclaration * inObject,
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

static void defineCategoryReader_enumerationDeclaration_location (void) {
  enterCategoryReader_location (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                categoryReader_enumerationDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_enumerationDeclaration_location (defineCategoryReader_enumerationDeclaration_location, NULL) ;

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
//                       Overriding category reader '@enumerationDeclaration keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_enumerationDeclaration_keyRepresentation (const cPtr_abstractDeclaration * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  result_outRepresentation = GALGAS_string ("enum ").add_operation (object->mAttribute_mEnumerationName.reader_string (SOURCE_FILE ("enumeration-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 67)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_enumerationDeclaration_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_enumerationDeclaration.mSlotID,
                                         categoryReader_enumerationDeclaration_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_enumerationDeclaration_keyRepresentation (defineCategoryReader_enumerationDeclaration_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@enumerationDeclaration enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumerationDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                  const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_bool var_copiable = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_3659 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3659.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3659.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_copiable.operator_not (SOURCE_FILE ("enumeration-declaration.galgas", 91)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_3659.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 92)) ;
      }
      var_copiable = GALGAS_bool (false) ;
    }
    enumerator_3659.gotoNextObject () ;
  }
  GALGAS_enumConstantMap var_enumConstantMap = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration-declaration.galgas", 97)) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("enumeration-declaration.galgas", 98)) ;
  cEnumerator_lstringlist enumerator_3917 (object->mAttribute_mCaseNameList, kEnumeration_up) ;
  while (enumerator_3917.hasCurrentObject ()) {
    GALGAS_uint var_idx = var_enumConstantMap.reader_count (SOURCE_FILE ("enumeration-declaration.galgas", 100)) ;
    {
    var_enumConstantMap.modifier_insertKey (enumerator_3917.current_mValue (HERE), var_idx, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 101)) ;
    }
    {
    var_constructorMap.modifier_insertKey (enumerator_3917.current_mValue (HERE), GALGAS_string ("(").add_operation (function_mangledNameForType (object->mAttribute_mEnumerationName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)).add_operation (var_idx.reader_string (SOURCE_FILE ("enumeration-declaration.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 102)) ;
    }
    enumerator_3917.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mEnumerationName, GALGAS_typeKind::constructor_enumeration (var_enumConstantMap  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 106)), var_constructorMap, GALGAS_procedureMap::constructor_emptyMap (SOURCE_FILE ("enumeration-declaration.galgas", 108)), var_copiable, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 104)) ;
  }
  {
  routine_enterEnumerationOperators (object->mAttribute_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 114)) ;
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
//                        Overriding category method '@enumerationDeclaration semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumerationDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclaration * object = (const cPtr_enumerationDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclaration) ;
  GALGAS_string var_cType = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_6483 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_6483.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_6483.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("unique"))).boolEnum () ;
    if (kBoolTrue == test_0) {
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_cType.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_6483.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 167)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_bool var_isSigned ;
        GALGAS_uint joker_6727 ; // Joker input parameter
        constinArgument_inContext.mAttribute_mTargetBaseTypeMap.method_searchKey (enumerator_6483.current_mValue (HERE), var_cType, joker_6727, var_isSigned, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 169)) ;
        const enumGalgasBool test_3 = var_isSigned.boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_string var_s = GALGAS_string ("an unsigned base type should be used here; possible values:") ;
          cEnumerator_targetBaseTypeMap enumerator_6924 (constinArgument_inContext.mAttribute_mTargetBaseTypeMap, kEnumeration_up) ;
          while (enumerator_6924.hasCurrentObject ()) {
            const enumGalgasBool test_4 = enumerator_6924.current_mIsSigned (HERE).operator_not (SOURCE_FILE ("enumeration-declaration.galgas", 173)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_s.dotAssign_operation (GALGAS_string ("\n"
                "- %").add_operation (enumerator_6924.current_lkey (HERE).reader_string (SOURCE_FILE ("enumeration-declaration.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 174))  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 174)) ;
            }
            enumerator_6924.gotoNextObject () ;
          }
          GALGAS_location location_5 (enumerator_6483.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, var_s  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 177)) ;
        }
      }
    }
    enumerator_6483.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_cType.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_uint joker_7223 ; // Joker input parameter
    GALGAS_bool joker_7226 ; // Joker input parameter
    constinArgument_inContext.mAttribute_mTargetBaseTypeMap.method_searchKey (GALGAS_string ("size").reader_nowhere (SOURCE_FILE ("enumeration-declaration.galgas", 183)), var_cType, joker_7223, joker_7226, inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 183)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mTypeMapIR.modifier_insertKey (object->mAttribute_mEnumerationName, GALGAS_enumerationIR::constructor_new (object->mAttribute_mEnumerationName.mAttribute_string, var_cType  COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 186)) ;
  }
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
//                       Overriding category reader '@enumerationIR headerCodeGenerationForType'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_enumerationIR_headerCodeGenerationForType (const cPtr_abstractTypeIR * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_enumerationIR * object = (const cPtr_enumerationIR *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationIR) ;
  result_outCode = GALGAS_string (filewrapperTemplate_enumerationGenerationTemplate_declaration (inCompiler, object->mAttribute_mEnumerationName, object->mAttribute_mActualTypeName COMMA_SOURCE_FILE ("enumeration-declaration.galgas", 214))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_enumerationIR_headerCodeGenerationForType (void) {
  enterCategoryReader_headerCodeGenerationForType (kTypeDescriptor_GALGAS_enumerationIR.mSlotID,
                                                   categoryReader_enumerationIR_headerCodeGenerationForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_enumerationIR_headerCodeGenerationForType (defineCategoryReader_enumerationIR_headerCodeGenerationForType, NULL) ;

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
      const cEnumAssociatedValues_generalizedTypeEnumAST_valueType * extractPtr_4619 = (const cEnumAssociatedValues_generalizedTypeEnumAST_valueType *) (object->mAttribute_mType.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_typeName = extractPtr_4619->mAssociatedValue0 ;
      GALGAS_unifiedTypeMap_2D_proxy var_constantType ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, extractedValue_typeName, var_constantType COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 78)) ;
      }
      GALGAS_uint var_temporaryIndex = GALGAS_uint ((uint32_t) 0U) ;
      GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("global-variable-declaration.galgas", 81)) ;
      GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("global-variable-declaration.galgas", 82)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
      GALGAS_variableKindIR var_resultValueName ;
      callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("global-variable-declaration.galgas", 84)), var_constantType, ioArgument_ioContext, GALGAS_string::makeEmptyString (), GALGAS_bool (true), var_temporaryIndex, ioArgument_ioGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, var_expressionType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 83)) ;
      GALGAS_bool test_0 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList.reader_length (SOURCE_FILE ("global-variable-declaration.galgas", 96)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      if (kBoolTrue != test_0.boolEnum ()) {
        test_0 = categoryReader_isStatic (var_resultValueName, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 96)).operator_not (SOURCE_FILE ("global-variable-declaration.galgas", 96)) ;
      }
      const enumGalgasBool test_1 = test_0.boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("source expression cannot be statically computed")  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 97)) ;
      }
      GALGAS_stringset var_executionModes = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("global-variable-declaration.galgas", 100)) ;
      cEnumerator_lstringlist enumerator_4415 (object->mAttribute_mModeList, kEnumeration_up) ;
      while (enumerator_4415.hasCurrentObject ()) {
        var_executionModes.addAssign_operation (enumerator_4415.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 102)) ;
        enumerator_4415.gotoNextObject () ;
      }
      {
      ioArgument_ioContext.mAttribute_mGlobalVariableMap.modifier_insertKey (object->mAttribute_mVarName, var_expressionType, var_executionModes, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 105)) ;
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
                                                                  GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalVarDeclaration * object = (const cPtr_globalVarDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalVarDeclaration) ;
  GALGAS_stringset var_executionModes = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("global-variable-declaration.galgas", 124)) ;
  cEnumerator_lstringlist enumerator_5273 (object->mAttribute_mModeList, kEnumeration_up) ;
  while (enumerator_5273.hasCurrentObject ()) {
    constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_5273.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 126)) ;
    var_executionModes.addAssign_operation (enumerator_5273.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 127)) ;
    enumerator_5273.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_stringset var_executionModeSet ;
  GALGAS_variableKindIR var_expressionGeneratedCode ;
  constinArgument_inContext.mAttribute_mGlobalVariableMap.method_searchKey (object->mAttribute_mVarName, var_inferredType, var_executionModeSet, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 130)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap.modifier_insertKey (object->mAttribute_mVarName, var_inferredType.reader_key (inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 138)), GALGAS_bool (kIsStrictSup, var_executionModeSet.reader_count (SOURCE_FILE ("global-variable-declaration.galgas", 139)).objectCompare (GALGAS_uint ((uint32_t) 1U))), var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-variable-declaration.galgas", 136)) ;
  }
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
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 50)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (object->mAttribute_mConstantName, object->mAttribute_mTypeName COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 51)) ;
  }
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), object->mAttribute_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 52)) ;
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
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mAttribute_mConstantName.reader_string (SOURCE_FILE ("global-constant-declaration.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 58)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, var_constantType COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 79)) ;
  }
  GALGAS_uint var_temporaryIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("global-constant-declaration.galgas", 82)) ;
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("global-constant-declaration.galgas", 83)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_resultValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("global-constant-declaration.galgas", 85)), var_constantType, ioArgument_ioContext, GALGAS_string::makeEmptyString (), GALGAS_bool (true), var_temporaryIndex, ioArgument_ioGlobalLiteralStringMap, var_variableMap, var_instructionGenerationList, var_expressionType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 84)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList.reader_length (SOURCE_FILE ("global-constant-declaration.galgas", 97)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = categoryReader_isStatic (var_resultValueName, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 97)).operator_not (SOURCE_FILE ("global-constant-declaration.galgas", 97)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mConstantName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("source expression cannot be statically computed")  COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 98)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mGlobalConstantMap.modifier_insertKey (object->mAttribute_mConstantName, var_expressionType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 101)) ;
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

static void categoryMethod_globalConstantDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  GALGAS_variableKindIR var_expressionGeneratedCode ;
  GALGAS_unifiedTypeMap_2D_proxy joker_5391 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mGlobalConstantMap.method_searchKey (object->mAttribute_mConstantName, joker_5391, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 117)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalConstantMap.modifier_insertKey (object->mAttribute_mConstantName, var_expressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("global-constant-declaration.galgas", 122)) ;
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
                                                                GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclaration * object = (const cPtr_integerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclaration) ;
  GALGAS_string var_cType ;
  GALGAS_uint joker_8666 ; // Joker input parameter
  GALGAS_bool joker_8669 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mTargetBaseTypeMap.method_searchKey (object->mAttribute_mBaseType, var_cType, joker_8666, joker_8669, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 219)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mTypeMapIR.modifier_insertKey (object->mAttribute_mIntegerTypeName, GALGAS_integerIR::constructor_new (object->mAttribute_mIntegerTypeName.mAttribute_string, var_cType  COMMA_SOURCE_FILE ("type-integer.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 221)) ;
  }
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
//                         Overriding category reader '@integerIR headerCodeGenerationForType'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_integerIR_headerCodeGenerationForType (const cPtr_abstractTypeIR * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_integerIR * object = (const cPtr_integerIR *) inObject ;
  macroValidSharedObject (object, cPtr_integerIR) ;
  result_outCode = GALGAS_string (filewrapperTemplate_integerGenerationTemplate_declaration (inCompiler, object->mAttribute_mIntegerTypeName, object->mAttribute_mActualTypeName COMMA_SOURCE_FILE ("type-integer.galgas", 249))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_integerIR_headerCodeGenerationForType (void) {
  enterCategoryReader_headerCodeGenerationForType (kTypeDescriptor_GALGAS_integerIR.mSlotID,
                                                   categoryReader_integerIR_headerCodeGenerationForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_integerIR_headerCodeGenerationForType (defineCategoryReader_integerIR_headerCodeGenerationForType, NULL) ;

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
                                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mTypeMapIR.modifier_insertKey (object->mAttribute_mLiteralStringTypeName, GALGAS_literalStringTypeIR::constructor_new (object->mAttribute_mLiteralStringTypeName.mAttribute_string  COMMA_SOURCE_FILE ("type-static-string.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 118)) ;
  }
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
//                    Overriding category reader '@literalStringTypeIR headerCodeGenerationForType'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_literalStringTypeIR_headerCodeGenerationForType (const cPtr_abstractTypeIR * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_literalStringTypeIR * object = (const cPtr_literalStringTypeIR *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringTypeIR) ;
  result_outCode = GALGAS_string (filewrapperTemplate_literalStringGenerationTemplate_declaration (inCompiler, object->mAttribute_mLiteralStringTypeName COMMA_SOURCE_FILE ("type-static-string.galgas", 144))) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_literalStringTypeIR_headerCodeGenerationForType (void) {
  enterCategoryReader_headerCodeGenerationForType (kTypeDescriptor_GALGAS_literalStringTypeIR.mSlotID,
                                                   categoryReader_literalStringTypeIR_headerCodeGenerationForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_literalStringTypeIR_headerCodeGenerationForType (defineCategoryReader_literalStringTypeIR_headerCodeGenerationForType, NULL) ;

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
  ioArgument_ioGraph.modifier_addNode (object->mAttribute_mRegisterName, temp_0, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 58)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (object->mAttribute_mRegisterName, object->mAttribute_mRegisterTypeName COMMA_SOURCE_FILE ("register-declaration.galgas", 59)) ;
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
  result_outRepresentation = GALGAS_string ("register ").add_operation (object->mAttribute_mRegisterName.reader_string (SOURCE_FILE ("register-declaration.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 65)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mRegisterTypeName, var_registerType COMMA_SOURCE_FILE ("register-declaration.galgas", 78)) ;
  }
  GALGAS_bool var_isReadOnly = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_3516 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3516.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_3516.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("ro"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_3516.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("only @ro attribute (read only) is accepted here")  COMMA_SOURCE_FILE ("register-declaration.galgas", 83)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = var_isReadOnly.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (enumerator_3516.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("register-declaration.galgas", 85)) ;
      }else if (kBoolFalse == test_2) {
        var_isReadOnly = GALGAS_bool (true) ;
      }
    }
    enumerator_3516.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mRegisterMap.modifier_insertKey (object->mAttribute_mRegisterName, var_registerType, var_isReadOnly, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 91)) ;
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
                                                                 GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerDeclaration * object = (const cPtr_registerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_registerDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_registerType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mRegisterTypeName, inCompiler  COMMA_SOURCE_FILE ("register-declaration.galgas", 107)) ;
  switch (var_registerType.reader_kind (inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 108)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      GALGAS_location location_0 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_0, GALGAS_string ("a boolean type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 109)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
    {
      GALGAS_location location_1 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("a boolset type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 110)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      GALGAS_location location_2 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("a literal string type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 112)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      GALGAS_location location_3 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("a structure type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 113)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      GALGAS_location location_4 (object->mAttribute_mRegisterTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("an enumeration type is not valid for a register")  COMMA_SOURCE_FILE ("register-declaration.galgas", 114)) ;
    }
    break ;
  }
  GALGAS_uint var_size ;
  GALGAS_bool var_isSigned ;
  GALGAS_string joker_5097 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mTargetBaseTypeMap.method_searchKey (GALGAS_string ("size").reader_nowhere (SOURCE_FILE ("register-declaration.galgas", 117)), joker_5097, var_size, var_isSigned, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 117)) ;
  const enumGalgasBool test_5 = var_isSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_location location_6 (object->mAttribute_mRegisterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_6, GALGAS_string ("base type 'size' should be unsigned")  COMMA_SOURCE_FILE ("register-declaration.galgas", 119)) ;
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
        var_maxAddress = GALGAS_uint::constructor_max (SOURCE_FILE ("register-declaration.galgas", 127)).reader_uint_36__34_ (SOURCE_FILE ("register-declaration.galgas", 127)) ;
      }else if (kBoolFalse == test_9) {
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_size.objectCompare (GALGAS_uint ((uint32_t) 16U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          var_maxAddress = GALGAS_uint_36__34_::constructor_max (SOURCE_FILE ("register-declaration.galgas", 129)) ;
        }else if (kBoolFalse == test_10) {
          GALGAS_location location_11 (object->mAttribute_mRegisterName.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_11, GALGAS_string ("base type 'size' has an invalid size")  COMMA_SOURCE_FILE ("register-declaration.galgas", 131)) ;
          var_maxAddress.drop () ; // Release error dropped variable
        }
      }
    }
  }
  const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, object->mAttribute_mRegisterAddress.mAttribute_uint_36__34_.objectCompare (var_maxAddress)).boolEnum () ;
  if (kBoolTrue == test_12) {
    GALGAS_location location_13 (object->mAttribute_mRegisterAddress.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_13, GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxAddress.reader_hexString (SOURCE_FILE ("register-declaration.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 134))  COMMA_SOURCE_FILE ("register-declaration.galgas", 134)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mRegisterMap.modifier_insertKey (object->mAttribute_mRegisterName, object->mAttribute_mRegisterTypeName.mAttribute_string, object->mAttribute_mRegisterAddress.mAttribute_uint_36__34_, inCompiler COMMA_SOURCE_FILE ("register-declaration.galgas", 137)) ;
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
//                             Overriding category method '@incDecInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_string constinArgument_inMode,
                                                         const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                         GALGAS_uint & /* ioArgument_ioTemporaryIndex */,
                                                         GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionAST * object = (const cPtr_incDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_stringset var_acceptedModeSet ;
  GALGAS_string var_variableCName ;
  GALGAS_variableKindIR var_variable ;
  {
  GALGAS_bool joker_3584 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mVarName, var_type, var_acceptedModeSet, var_variableCName, var_variable, joker_3584, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 88)) ;
  }
  const enumGalgasBool test_0 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 97)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 97)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 98)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 98))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 98)) ;
  }
  const enumGalgasBool test_2 = constinArgument_inContext.mAttribute_mTypeNameSetForIncDec.reader_hasKey (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 101)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 102)).add_operation (GALGAS_string (" type does not handle incrementation/decrementation operator"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 102))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 102)) ;
  }
  GALGAS_sint_36__34_ var_min ;
  GALGAS_uint_36__34_ var_max ;
  switch (var_type.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 106)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_boolset:
  case GALGAS_typeKind::kEnum_literalString:
    {
      GALGAS_location location_4 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 108)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      GALGAS_location location_5 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 110)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      GALGAS_location location_6 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 112)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_4283 = (const cEnumAssociatedValues_typeKind_integer *) (var_type.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 106)).unsafePointer ()) ;
      const GALGAS_sint_36__34_ extractedValue_kMin = extractPtr_4283->mAssociatedValue0 ;
      const GALGAS_uint_36__34_ extractedValue_kMax = extractPtr_4283->mAssociatedValue1 ;
      var_min = extractedValue_kMin ;
      var_max = extractedValue_kMax ;
    }
    break ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_incNoOverflowCheck:
  case GALGAS_incDecKind::kEnum_decNoOverflowCheck:
    {
    }
    break ;
  case GALGAS_incDecKind::kEnum_incWithOverflowCheck:
  case GALGAS_incDecKind::kEnum_decWithOverflowCheck:
    {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, constinArgument_inMode.objectCompare (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 121)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_location location_8 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("operations that can generate exception are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122)) ;
      }
    }
    break ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_incDecInstructionIR::constructor_new (var_min, var_max, object->mAttribute_mKind, var_variable, object->mAttribute_mVarName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 126))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 126)) ;
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
//                          Overriding category reader '@incDecInstructionIR instructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_incDecInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_incDecInstructionIR * object = (const cPtr_incDecInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionIR) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_incWithOverflowCheck:
    {
      result_outCode = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 153)).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_outCode.dotAssign_operation (GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)).add_operation (object->mAttribute_mMax.reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (1, ").add_operation (categoryReader_location (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 156)).reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 156)).reader_lastPathComponent (SOURCE_FILE ("instruction-inc-dec.galgas", 156)).reader_utf_38_Representation (SOURCE_FILE ("instruction-inc-dec.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 155)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 156)).add_operation (object->mAttribute_mVariableLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 157)).reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 156)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 157))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 155)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 158)) ;
      }
      result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160)).add_operation (GALGAS_string (" ++ ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decWithOverflowCheck:
    {
      result_outCode = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 163)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_outCode.dotAssign_operation (GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)).add_operation (object->mAttribute_mMin.reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (2, ").add_operation (categoryReader_location (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 166)).reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 166)).reader_lastPathComponent (SOURCE_FILE ("instruction-inc-dec.galgas", 166)).reader_utf_38_Representation (SOURCE_FILE ("instruction-inc-dec.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 165)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 166)).add_operation (object->mAttribute_mVariableLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167)).reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 165)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 168)) ;
      }
      result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_incNoOverflowCheck:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 172)).add_operation (GALGAS_string (" ++ ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 172)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decNoOverflowCheck:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 174)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 174)) ;
    }
    break ;
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_incDecInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_incDecInstructionIR.mSlotID,
                                       categoryReader_incDecInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_incDecInstructionIR_instructionCode (defineCategoryReader_incDecInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@incDecInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionIR * object = (const cPtr_incDecInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 181)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_incDecInstructionIR.mSlotID,
                                               categoryMethod_incDecInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionIR_enterAccessibleEntities (defineCategoryMethod_incDecInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@varInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                    const GALGAS_receiverType constinArgument_inReceiverType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_string constinArgument_inMode,
                                                                    const GALGAS_bool constinArgument_inAllowExceptions,
                                                                    GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                                    GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 77)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 78)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_variableKindIR var_expressionResultValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_inferredType, var_expressionResultValueName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 81)) ;
  GALGAS_variableKindIR var_targetVar = GALGAS_variableKindIR::constructor_localVariable (object->mAttribute_mVarName  COMMA_SOURCE_FILE ("instruction-var.galgas", 96)) ;
  {
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-var.galgas", 100)) ;
  temp_2.addAssign_operation (constinArgument_inMode  COMMA_SOURCE_FILE ("instruction-var.galgas", 100)) ;
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVarName, var_inferredType, temp_2, function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 101)), var_targetVar, var_inferredType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 97)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_varDeclarationInstructionWithSimpleAssignmentIR::constructor_new (var_inferredType, var_targetVar, var_expressionResultValueName  COMMA_SOURCE_FILE ("instruction-var.galgas", 106))  COMMA_SOURCE_FILE ("instruction-var.galgas", 106)) ;
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
                                                      const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                      GALGAS_uint & /* ioArgument_ioTemporaryIndex */,
                                                      GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 125)) ;
  GALGAS_variableKindIR var_targetVar = GALGAS_variableKindIR::constructor_localVariable (object->mAttribute_mVarName  COMMA_SOURCE_FILE ("instruction-var.galgas", 127)) ;
  {
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-var.galgas", 131)) ;
  temp_0.addAssign_operation (constinArgument_inMode  COMMA_SOURCE_FILE ("instruction-var.galgas", 131)) ;
  ioArgument_ioVariableMap.modifier_insertUndefinedLocalVariable (object->mAttribute_mVarName, var_targetType, temp_0, function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 132)), var_targetVar, var_targetType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_varDeclarationIR::constructor_new (var_targetType, var_targetVar  COMMA_SOURCE_FILE ("instruction-var.galgas", 137))  COMMA_SOURCE_FILE ("instruction-var.galgas", 137)) ;
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
//            Overriding category reader '@varDeclarationInstructionWithSimpleAssignmentIR instructionCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_varDeclarationInstructionWithSimpleAssignmentIR * object = (const cPtr_varDeclarationInstructionWithSimpleAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationInstructionWithSimpleAssignmentIR) ;
  result_outCode = function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 158)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 158)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 158)) ;
  result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mSourceVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159))  COMMA_SOURCE_FILE ("instruction-var.galgas", 159)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_varDeclarationInstructionWithSimpleAssignmentIR.mSlotID,
                                       categoryReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode (defineCategoryReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@varDeclarationInstructionWithSimpleAssignmentIR enterAccessibleEntities'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                                    GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationInstructionWithSimpleAssignmentIR * object = (const cPtr_varDeclarationInstructionWithSimpleAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationInstructionWithSimpleAssignmentIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVar, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 167)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceVar, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 168)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_varDeclarationInstructionWithSimpleAssignmentIR.mSlotID,
                                               categoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities (defineCategoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category reader '@varDeclarationIR instructionCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_varDeclarationIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_varDeclarationIR * object = (const cPtr_varDeclarationIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationIR) ;
  result_outCode = function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_varDeclarationIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_varDeclarationIR.mSlotID,
                                       categoryReader_varDeclarationIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_varDeclarationIR_instructionCode (defineCategoryReader_varDeclarationIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@varDeclarationIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varDeclarationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationIR * object = (const cPtr_varDeclarationIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVar, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 189)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varDeclarationIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_varDeclarationIR.mSlotID,
                                               categoryMethod_varDeclarationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varDeclarationIR_enterAccessibleEntities (defineCategoryMethod_varDeclarationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@letInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_letInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                    const GALGAS_receiverType constinArgument_inReceiverType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_string constinArgument_inMode,
                                                                    const GALGAS_bool constinArgument_inAllowExceptions,
                                                                    GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                                    GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
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
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_variableKindIR var_resultValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_inferredType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 81)) ;
  GALGAS_variableKindIR var_targetConstant = GALGAS_variableKindIR::constructor_localConstant (object->mAttribute_mVarName  COMMA_SOURCE_FILE ("instruction-let.galgas", 95)) ;
  {
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-let.galgas", 99)) ;
  temp_2.addAssign_operation (constinArgument_inMode  COMMA_SOURCE_FILE ("instruction-let.galgas", 99)) ;
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVarName, var_inferredType, temp_2, function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)), var_targetConstant, var_inferredType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 96)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_letInstructionWithAssignmentIR::constructor_new (var_inferredType, var_targetConstant, var_resultValueName  COMMA_SOURCE_FILE ("instruction-let.galgas", 105))  COMMA_SOURCE_FILE ("instruction-let.galgas", 105)) ;
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
//                    Overriding category reader '@letInstructionWithAssignmentIR instructionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_letInstructionWithAssignmentIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_letInstructionWithAssignmentIR * object = (const cPtr_letInstructionWithAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentIR) ;
  result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 125)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 125)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetConstantIR, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 125)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 126)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceIR, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 127)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 128)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_letInstructionWithAssignmentIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_letInstructionWithAssignmentIR.mSlotID,
                                       categoryReader_letInstructionWithAssignmentIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_letInstructionWithAssignmentIR_instructionCode (defineCategoryReader_letInstructionWithAssignmentIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@letInstructionWithAssignmentIR enterAccessibleEntities'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_letInstructionWithAssignmentIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                   GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentIR * object = (const cPtr_letInstructionWithAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetConstantIR, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 134)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceIR, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 135)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_letInstructionWithAssignmentIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_letInstructionWithAssignmentIR.mSlotID,
                                               categoryMethod_letInstructionWithAssignmentIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentIR_enterAccessibleEntities (defineCategoryMethod_letInstructionWithAssignmentIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@assignmentInstructionAST analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                             const GALGAS_receiverType constinArgument_inReceiverType,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             const GALGAS_string constinArgument_inMode,
                                                             const GALGAS_bool constinArgument_inAllowExceptions,
                                                             GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                             GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  {
  GALGAS_stringset joker_2280_4 ; // Joker input parameter
  GALGAS_string joker_2280_3 ; // Joker input parameter
  GALGAS_variableKindIR joker_2280_2 ; // Joker input parameter
  GALGAS_bool joker_2280_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2280_4, joker_2280_3, joker_2280_2, joker_2280_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 47)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_variableKindIR var_sourceValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_inferredType, var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 53)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 67)).objectCompare (var_inferredType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 67)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("source expression type is '").add_operation (var_inferredType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 68)).add_operation (GALGAS_string ("', and is not compatible with target type '"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 68)).add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 69)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 69))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 68)) ;
  }
  GALGAS_stringset var_acceptedModeSet ;
  GALGAS_string var_targetVar ;
  GALGAS_variableKindIR var_targetVariableKind ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3088 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mTargetVarName, joker_3088, var_acceptedModeSet, var_targetVar, var_targetVariableKind, var_isCopiable, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 72)) ;
  }
  const enumGalgasBool test_2 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-assignment.galgas", 81)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82)) ;
  }
  const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 84)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.reader_string (SOURCE_FILE ("instruction-assignment.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 85)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 85))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 85)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assignmentInstructionIR::constructor_new (var_targetVariableKind, var_targetType, var_sourceValueName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 88))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 88)) ;
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
//                        Overriding category reader '@assignmentInstructionIR instructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_assignmentInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_assignmentInstructionIR * object = (const cPtr_assignmentInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionIR) ;
  result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 108)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 108)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 108)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 108)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_assignmentInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_assignmentInstructionIR.mSlotID,
                                       categoryReader_assignmentInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_assignmentInstructionIR_instructionCode (defineCategoryReader_assignmentInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@assignmentInstructionIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                            GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionIR * object = (const cPtr_assignmentInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 114)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 115)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_assignmentInstructionIR.mSlotID,
                                               categoryMethod_assignmentInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionIR_enterAccessibleEntities (defineCategoryMethod_assignmentInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@operatorAssignInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorAssignInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                 const GALGAS_receiverType constinArgument_inReceiverType,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_string constinArgument_inMode,
                                                                 const GALGAS_bool constinArgument_inAllowExceptions,
                                                                 GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                                 GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorAssignInstructionAST * object = (const cPtr_operatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  {
  GALGAS_stringset joker_2788_4 ; // Joker input parameter
  GALGAS_string joker_2788_3 ; // Joker input parameter
  GALGAS_variableKindIR joker_2788_2 ; // Joker input parameter
  GALGAS_bool joker_2788_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2788_4, joker_2788_3, joker_2788_2, joker_2788_1, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 67)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightExpressionType ;
  GALGAS_variableKindIR var_sourceValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_rightExpressionType, var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 73)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 87)).objectCompare (var_rightExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 87)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("source expression type is '").add_operation (var_rightExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 88)).add_operation (GALGAS_string ("', and is not compatible with target type '"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 88)).add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 89)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 89))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 88)) ;
  }
  GALGAS_stringset var_acceptedModeSet ;
  GALGAS_string var_targetVar ;
  GALGAS_variableKindIR var_targetVariableKind ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3621 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mTargetVarName, joker_3621, var_acceptedModeSet, var_targetVar, var_targetVariableKind, var_isCopiable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 92)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap ;
  GALGAS_string var_generatedOperator ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
      var_generatedOperator = GALGAS_string ("&=") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
      var_generatedOperator = GALGAS_string ("|=") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
      var_generatedOperator = GALGAS_string ("^=") ;
    }
    break ;
  }
  GALGAS_unifiedTypeMap_2D_proxy joker_4295 ; // Joker input parameter
  categoryMethod_checkWith (var_operatorMap, var_targetType, var_rightExpressionType, object->mAttribute_mTargetVarName.mAttribute_location, joker_4295, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 114)) ;
  const enumGalgasBool test_2 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 121)).operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 121)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 122)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 122))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 122)) ;
  }
  const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 124)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.reader_string (SOURCE_FILE ("instruction-operator-assign.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 125)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 125))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 125)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_operatorAssignInstructionIR::constructor_new (var_targetVariableKind, var_targetType, object->mAttribute_mOperator, var_sourceValueName  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 128))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 128)) ;
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
//                      Overriding category reader '@operatorAssignInstructionIR instructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_operatorAssignInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_operatorAssignInstructionIR * object = (const cPtr_operatorAssignInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionIR) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 152)).add_operation (GALGAS_string (" |= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 152)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 152)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 152)) ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)).add_operation (GALGAS_string (" &= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)) ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)).add_operation (GALGAS_string (" ^= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)) ;
    }
    break ;
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_operatorAssignInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_operatorAssignInstructionIR.mSlotID,
                                       categoryReader_operatorAssignInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_operatorAssignInstructionIR_instructionCode (defineCategoryReader_operatorAssignInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@operatorAssignInstructionIR enterAccessibleEntities'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorAssignInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorAssignInstructionIR * object = (const cPtr_operatorAssignInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 163)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 164)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_operatorAssignInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_operatorAssignInstructionIR.mSlotID,
                                               categoryMethod_operatorAssignInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_operatorAssignInstructionIR_enterAccessibleEntities (defineCategoryMethod_operatorAssignInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@ifInstructionAST analyze'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                     const GALGAS_receiverType constinArgument_inReceiverType,
                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                     const GALGAS_string constinArgument_inMode,
                                                     const GALGAS_bool constinArgument_inAllowExceptions,
                                                     GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                     GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_testExpressionType ;
  GALGAS_variableKindIR var_testResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 82)), constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_testExpressionType, var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 80)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 95)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 95)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (var_testExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 96)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 96))  COMMA_SOURCE_FILE ("instruction-if.galgas", 96)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 98)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 100)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mThenInstructionList, object->mAttribute_mEndOfThenInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_thenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 101)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 113)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mElseInstructionList, object->mAttribute_mEndOfElseInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_elseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 114)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 125)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult, var_thenInstructionGenerationList, var_elseInstructionGenerationList  COMMA_SOURCE_FILE ("instruction-if.galgas", 127))  COMMA_SOURCE_FILE ("instruction-if.galgas", 127)) ;
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
//                            Overriding category reader '@ifInstructionIR instructionCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ifInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  result_outCode = GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 147)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mThenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 148))  COMMA_SOURCE_FILE ("instruction-if.galgas", 148)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionGenerationList.reader_length (SOURCE_FILE ("instruction-if.galgas", 149)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("instruction-if.galgas", 150)) ;
    result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mElseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 151))  COMMA_SOURCE_FILE ("instruction-if.galgas", 151)) ;
  }
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-if.galgas", 153)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ifInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                       categoryReader_ifInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ifInstructionIR_instructionCode (defineCategoryReader_ifInstructionIR_instructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 159)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 160)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 161)) ;
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
//                            Overriding category method '@procCallInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                           const GALGAS_receiverType constinArgument_inReceiverType,
                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                           const GALGAS_string constinArgument_inMode,
                                                           const GALGAS_bool constinArgument_inAllowExceptions,
                                                           GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                           GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  GALGAS_string var_procMangledName = object->mAttribute_mProcRoutineName.mAttribute_string ;
  cEnumerator_procEffectiveParameterListAST enumerator_3872 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_3872.hasCurrentObject ()) {
    var_procMangledName.dotAssign_operation (GALGAS_string (" ")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 96)) ;
    switch (enumerator_3872.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 99)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 103)) ;
      }
      break ;
    }
    var_procMangledName.dotAssign_operation (enumerator_3872.current_mSelector (HERE).mAttribute_string  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 105)) ;
    enumerator_3872.gotoNextObject () ;
  }
  GALGAS_lstring var_procedureMode ;
  GALGAS_procedureSignature var_procSignature ;
  GALGAS_bool joker_4284 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mProcedureMap.method_searchKey (GALGAS_lstring::constructor_new (var_procMangledName, object->mAttribute_mProcRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 109)), joker_4284, var_procedureMode, var_procSignature, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 108)) ;
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 115)) ;
  GALGAS_procCallEffectiveParameterListIR var_procCallEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 116)) ;
  cEnumerator_procedureSignature enumerator_4534 (var_procSignature, kEnumeration_up) ;
  cEnumerator_procEffectiveParameterListAST enumerator_4565 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_4534.hasCurrentObject () && enumerator_4565.hasCurrentObject ()) {
    switch (enumerator_4565.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input * extractPtr_5250 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input *) (enumerator_4565.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_5250->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_variableAccess ;
        GALGAS_variableKindIR var_parameterAccess ;
        GALGAS_bool var_isCopiable ;
        {
        ioArgument_ioVariableMap.modifier_searchForWriteAccess (extractedValue_name, var_type, var_acceptedModeSet, var_variableAccess, var_parameterAccess, var_isCopiable, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 120)) ;
        }
        const enumGalgasBool test_0 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 129)).operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 129)).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_location location_1 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_1, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)) ;
        }
        const enumGalgasBool test_2 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 132)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (extractedValue_name.reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 133)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 133))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 133)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4565.current_mEffectiveParameterKind (HERE), enumerator_4565.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 135)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("instruction-proc-call.galgas", 136)), enumerator_4565.current_mSelector (HERE), var_type, var_parameterAccess  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 136)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * extractPtr_5963 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *) (enumerator_4565.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_5963->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
        GALGAS_variableKindIR var_expressionResult ;
        callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inReceiverType, enumerator_4534.current_mType (HERE), constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 138)) ;
        var_parameterList.addAssign_operation (enumerator_4565.current_mEffectiveParameterKind (HERE), enumerator_4565.current_mSelector (HERE), var_expressionType  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("instruction-proc-call.galgas", 152)), enumerator_4565.current_mSelector (HERE), var_expressionType, var_expressionResult  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput * extractPtr_6506 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput *) (enumerator_4565.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6506->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_acceptedModeSet ;
        GALGAS_string var_variableAccess ;
        GALGAS_variableKindIR var_parameterAccess ;
        {
        GALGAS_bool joker_6185 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (extractedValue_name, var_type, var_acceptedModeSet, var_variableAccess, var_parameterAccess, joker_6185, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 154)) ;
        }
        const enumGalgasBool test_4 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)).operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 163)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 164)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 164))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 164)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4565.current_mEffectiveParameterKind (HERE), enumerator_4565.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 166)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 167)), enumerator_4565.current_mSelector (HERE), var_type, var_parameterAccess  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
      }
      break ;
    }
    enumerator_4534.gotoNextObject () ;
    enumerator_4565.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_procedureMode.mAttribute_string.objectCompare (constinArgument_inMode)).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mProcRoutineName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this procedure cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 172)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 172))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 172)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 174)).objectCompare (var_parameterList.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 174)))).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mProcRoutineName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_9, GALGAS_string ("this proc requires ").add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 175)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 175)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 175)).add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 176)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 175)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 176))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 175)) ;
  }else if (kBoolFalse == test_8) {
    cEnumerator_procedureSignature enumerator_6928 (var_procSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_6957 (var_parameterList, kEnumeration_up) ;
    while (enumerator_6928.hasCurrentObject () && enumerator_6957.hasCurrentObject ()) {
      const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_6928.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 179)).objectCompare (enumerator_6957.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 179)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_location location_11 (enumerator_6957.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_11, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_6957.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 180)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 180)).add_operation (enumerator_6928.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 181)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 181))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 180)) ;
      }
      GALGAS_string var_requiredPassingMode = categoryReader_requiredActualPassingModeForSelector (enumerator_6928.current_mFormalArgumentPassingMode (HERE), enumerator_6928.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 183)) ;
      GALGAS_string var_testedPassingMode = categoryReader_passingModeForActualSelector (enumerator_6957.current_mEffectiveParameterPassingMode (HERE), enumerator_6957.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 184)) ;
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (enumerator_6957.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_13, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 186)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 186))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 186)) ;
      }
      enumerator_6928.gotoNextObject () ;
      enumerator_6957.gotoNextObject () ;
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (object->mAttribute_mProcRoutineName.mAttribute_string, var_procCallEffectiveParameterListIR  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 191))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 191)) ;
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
//                         Overriding category reader '@procCallInstructionIR instructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_procCallInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  result_outCode = function_mangledNameForProcedure (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 226)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 226)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_9101 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_9101.hasCurrentObject ()) {
    switch (enumerator_9101.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        result_outCode.dotAssign_operation (GALGAS_string ("&(").add_operation (categoryReader_mangledName (enumerator_9101.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 230)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 230))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 230)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        result_outCode.dotAssign_operation (categoryReader_mangledName (enumerator_9101.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 232))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 232)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        result_outCode.dotAssign_operation (GALGAS_string ("&(").add_operation (categoryReader_mangledName (enumerator_9101.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 234)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 234))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 234)) ;
      }
      break ;
    }
    if (enumerator_9101.hasNextObject ()) {
      result_outCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 237)) ;
    }
    enumerator_9101.gotoNextObject () ;
  }
  result_outCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 239)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_procCallInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                       categoryReader_procCallInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_procCallInstructionIR_instructionCode (defineCategoryReader_procCallInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@procCallInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mProcedureSet.addAssign_operation (object->mAttribute_mProcName  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 245)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_9726 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_9726.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_9726.current_mParameter (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 247)) ;
    enumerator_9726.gotoNextObject () ;
  }
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
                                                        const GALGAS_receiverType constinArgument_inReceiverType,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_string constinArgument_inMode,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                        GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 55)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_testExpressionType ;
  GALGAS_variableKindIR var_testValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 58)), constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_testInstructionGenerationList, var_testExpressionType, var_testValueName, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 56)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 70)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 70)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (var_testExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 71)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 71))  COMMA_SOURCE_FILE ("instruction-while.galgas", 71)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 73)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 75)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 76)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mAttribute_mEndOf_5F_test_5F_expression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 90)), var_testInstructionGenerationList, var_testValueName, var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-while.galgas", 89))  COMMA_SOURCE_FILE ("instruction-while.galgas", 89)) ;
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
//                          Overriding category reader '@whileInstructionIR instructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_whileInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  result_outCode = GALGAS_string ("LABEL_").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 111)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 111)) ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mTestInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 112))  COMMA_SOURCE_FILE ("instruction-while.galgas", 112)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("  if (").add_operation (categoryReader_mangledName (object->mAttribute_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 113)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 113))  COMMA_SOURCE_FILE ("instruction-while.galgas", 113)) ;
  {
  result_outCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 114)) ;
  }
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 115))  COMMA_SOURCE_FILE ("instruction-while.galgas", 115)) ;
  {
  result_outCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 116)) ;
  }
  result_outCode.dotAssign_operation (GALGAS_string ("    goto LABEL_").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 117)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 117))  COMMA_SOURCE_FILE ("instruction-while.galgas", 117)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("  }\n")  COMMA_SOURCE_FILE ("instruction-while.galgas", 118)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-while.galgas", 119)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_whileInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                       categoryReader_whileInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_whileInstructionIR_instructionCode (defineCategoryReader_whileInstructionIR_instructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 125)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestExpression, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 126)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 127)) ;
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
//                             Overriding category method '@foreverInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreverInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                          const GALGAS_receiverType constinArgument_inReceiverType,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_string constinArgument_inMode,
                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                          GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                          GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreverInstructionAST * object = (const cPtr_foreverInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_foreverInstructionAST) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 48)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-forever.galgas", 49)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 50)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 61)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_foreverInstructionGeneration::constructor_new (var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-forever.galgas", 63))  COMMA_SOURCE_FILE ("instruction-forever.galgas", 63)) ;
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

static GALGAS_string categoryReader_foreverInstructionGeneration_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_foreverInstructionGeneration * object = (const cPtr_foreverInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_foreverInstructionGeneration) ;
  result_outCode = GALGAS_string ("while (1) {\n") ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 80))  COMMA_SOURCE_FILE ("instruction-forever.galgas", 80)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-forever.galgas", 81)) ;
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
//                 Overriding category method '@foreverInstructionGeneration enterAccessibleEntities'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreverInstructionGeneration_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreverInstructionGeneration * object = (const cPtr_foreverInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_foreverInstructionGeneration) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 87)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreverInstructionGeneration_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_foreverInstructionGeneration.mSlotID,
                                               categoryMethod_foreverInstructionGeneration_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreverInstructionGeneration_enterAccessibleEntities (defineCategoryMethod_foreverInstructionGeneration_enterAccessibleEntities, NULL) ;

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
//                           Overriding category method '@constructorCall analyzeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                              const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                              const GALGAS_string /* constinArgument_inMode */,
                                                              const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                              GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                              GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                              GALGAS_variableKindIR & outArgument_outResultValueName,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-constructor-call.galgas", 68)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 69)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_optionalSourceType = temp_0 ;
  outArgument_outExpressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_optionalSourceType, object->mAttribute_mConstructorName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 72)) ;
  GALGAS_constructorMap var_constructorMap = outArgument_outExpressionType.reader_constructorMap (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 78)) ;
  GALGAS_string var_generatedCodeString ;
  var_constructorMap.method_searchKey (object->mAttribute_mConstructorName, var_generatedCodeString, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 80)) ;
  {
  routine_getNewTempVariable (ioArgument_ioTemporaryIndex, object->mAttribute_mConstructorName.mAttribute_location, outArgument_outResultValueName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 82)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_constructorCallIR::constructor_new (outArgument_outExpressionType, outArgument_outResultValueName, var_generatedCodeString  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 85))  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 85)) ;
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
//                           Overriding category reader '@constructorCallIR instructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_constructorCallIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_constructorCallIR * object = (const cPtr_constructorCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallIR) ;
  result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)) ;
  result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mTargetTemporaryVariable, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 106)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 106))  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 106)) ;
  result_outCode.dotAssign_operation (object->mAttribute_mCallExpression.add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 107))  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 107)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_constructorCallIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_constructorCallIR.mSlotID,
                                       categoryReader_constructorCallIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_constructorCallIR_instructionCode (defineCategoryReader_constructorCallIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@constructorCallIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorCallIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallIR * object = (const cPtr_constructorCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetTemporaryVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 113)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorCallIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_constructorCallIR.mSlotID,
                                               categoryMethod_constructorCallIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCallIR_enterAccessibleEntities (defineCategoryMethod_constructorCallIR_enterAccessibleEntities, NULL) ;

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
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 315)) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 316)) ;
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
//                 Overriding category method '@asExpressionAST addDependenceEdgeForStaticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_asExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inConstantName,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_asExpressionAST * object = (const cPtr_asExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_asExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 325)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_asExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_asExpressionAST.mSlotID,
                                                            categoryMethod_asExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_asExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_asExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

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
                                                                         const GALGAS_bool constinArgument_inAllowExceptions,
                                                                         GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                                         GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                         GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                         GALGAS_variableKindIR & outArgument_outResult,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftExpressionType ;
  GALGAS_variableKindIR var_leftResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_leftExpressionType, var_leftResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 364)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightExpressionType ;
  GALGAS_variableKindIR var_rightResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inReceiverType, var_leftExpressionType, constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_rightExpressionType, var_rightResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 378)) ;
  GALGAS_infixOperatorMap var_operatorMap ;
  GALGAS_infixOperatorIR var_infixOperatorIR ;
  switch (object->mAttribute_mOp.enumValue ()) {
  case GALGAS_infixOperator::kNotBuilt:
    break ;
  case GALGAS_infixOperator::kEnum_equal:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mEqualOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("==")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 397)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_nonEqual:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mNonEqualOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("!=")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 400)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictInf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mStrictInfOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("<")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 403)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_infEqual:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mInfEqualOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("<=")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 406)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictSup:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mStrictSupOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string (">")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 409)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_supEqual:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mSupEqualOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string (">=")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 412)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("&")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 415)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andShortCircuitOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndShortCircuitOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("&&")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 418)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("|")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 421)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orShortCircuitOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrShortCircuitOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("||")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 424)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_xorOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("^")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 427)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOp:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inMode.objectCompare (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 429)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate exception are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 430)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 430))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 430)) ;
      }
      var_operatorMap = constinArgument_inContext.mAttribute_mAddOperatorMap ;
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("+")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 434)) ;
      }else if (kBoolFalse == test_1) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixOvf (GALGAS_string ("__builtin_add_overflow"), GALGAS_uint ((uint32_t) 3U)  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 436)) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOpNoOvf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("+")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 440)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOp:
    {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inMode.objectCompare (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 442)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate exception are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 443)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 443))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 443)) ;
      }
      var_operatorMap = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
      const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("-")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 447)) ;
      }else if (kBoolFalse == test_3) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixOvf (GALGAS_string ("__builtin_sub_overflow"), GALGAS_uint ((uint32_t) 4U)  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 449)) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOpNoOvf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mSubOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("-")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 453)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inMode.objectCompare (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 455)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate exception are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 456)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 456))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 456)) ;
      }
      var_operatorMap = constinArgument_inContext.mAttribute_mMulOperatorMap ;
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("*")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 460)) ;
      }else if (kBoolFalse == test_5) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixOvf (GALGAS_string ("__builtin_mul_overflow"), GALGAS_uint ((uint32_t) 5U)  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 462)) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOpNoOvf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("*")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 466)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOp:
    {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inMode.objectCompare (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 468)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate exception are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 469)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 469))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 469)) ;
      }
      var_operatorMap = constinArgument_inContext.mAttribute_mDivOperatorMap ;
      const enumGalgasBool test_7 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("/")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 473)) ;
      }else if (kBoolFalse == test_7) {
        var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infixUnsignedDivide (GALGAS_uint ((uint32_t) 6U)  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 475)) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOpNoOvf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("/")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 479)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mModOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("%")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 482)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_leftShiftOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mLeftShiftOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string ("<<")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 485)) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_rightShiftOp:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mRightShiftOperatorMap ;
      var_infixOperatorIR = GALGAS_infixOperatorIR::constructor_infix (GALGAS_string (">>")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 488)) ;
    }
    break ;
  }
  categoryMethod_checkWith (var_operatorMap, var_leftExpressionType, var_rightExpressionType, object->mAttribute_mOperatorLocation, outArgument_outExpressionType, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 490)) ;
  GALGAS_bool test_8 = var_leftResult.reader_isLiteralUnsignedInteger (SOURCE_FILE ("expression-infix-operators.galgas", 497)) ;
  if (kBoolTrue == test_8.boolEnum ()) {
    test_8 = var_rightResult.reader_isLiteralUnsignedInteger (SOURCE_FILE ("expression-infix-operators.galgas", 497)) ;
  }
  const enumGalgasBool test_9 = test_8.boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_luint_36__34_ var_leftValue ;
    GALGAS_unifiedTypeMap_2D_proxy joker_16596 ; // Joker input parameter
    var_leftResult.method_literalUnsignedInteger (joker_16596, var_leftValue, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 498)) ;
    GALGAS_luint_36__34_ var_rightValue ;
    GALGAS_unifiedTypeMap_2D_proxy joker_16675 ; // Joker input parameter
    var_rightResult.method_literalUnsignedInteger (joker_16675, var_rightValue, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 499)) ;
    GALGAS_uint_36__34_ var_result ;
    switch (object->mAttribute_mOp.enumValue ()) {
    case GALGAS_infixOperator::kNotBuilt:
      break ;
    case GALGAS_infixOperator::kEnum_equal:
      {
        var_result = GALGAS_bool (kIsEqual, var_leftValue.mAttribute_uint_36__34_.objectCompare (var_rightValue.mAttribute_uint_36__34_)).reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 502)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_nonEqual:
      {
        var_result = GALGAS_bool (kIsNotEqual, var_leftValue.mAttribute_uint_36__34_.objectCompare (var_rightValue.mAttribute_uint_36__34_)).reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 503)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_strictInf:
      {
        var_result = GALGAS_bool (kIsStrictInf, var_leftValue.mAttribute_uint_36__34_.objectCompare (var_rightValue.mAttribute_uint_36__34_)).reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 504)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_infEqual:
      {
        var_result = GALGAS_bool (kIsInfOrEqual, var_leftValue.mAttribute_uint_36__34_.objectCompare (var_rightValue.mAttribute_uint_36__34_)).reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 505)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_strictSup:
      {
        var_result = GALGAS_bool (kIsStrictSup, var_leftValue.mAttribute_uint_36__34_.objectCompare (var_rightValue.mAttribute_uint_36__34_)).reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 506)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_supEqual:
      {
        var_result = GALGAS_bool (kIsSupOrEqual, var_leftValue.mAttribute_uint_36__34_.objectCompare (var_rightValue.mAttribute_uint_36__34_)).reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 507)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_andOp:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.operator_and (var_rightValue.mAttribute_uint_36__34_ COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 508)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_andShortCircuitOp:
      {
        GALGAS_bool test_10 = GALGAS_bool (kIsNotEqual, var_leftValue.mAttribute_uint_36__34_.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 0ULL))) ;
        if (kBoolTrue == test_10.boolEnum ()) {
          test_10 = GALGAS_bool (kIsNotEqual, var_rightValue.mAttribute_uint_36__34_.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 0ULL))) ;
        }
        var_result = test_10.reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 509)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_orOp:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.operator_or (var_rightValue.mAttribute_uint_36__34_ COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 510)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_orShortCircuitOp:
      {
        GALGAS_bool test_11 = GALGAS_bool (kIsNotEqual, var_leftValue.mAttribute_uint_36__34_.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 0ULL))) ;
        if (kBoolTrue == test_11.boolEnum ()) {
          test_11 = GALGAS_bool (kIsNotEqual, var_rightValue.mAttribute_uint_36__34_.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 0ULL))) ;
        }
        var_result = test_11.reader_uint_36__34_ (SOURCE_FILE ("expression-infix-operators.galgas", 511)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_xorOp:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.operator_xor (var_rightValue.mAttribute_uint_36__34_ COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 512)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_addOp:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.add_operation_no_ovf (var_rightValue.mAttribute_uint_36__34_) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_addOpNoOvf:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.add_operation (var_rightValue.mAttribute_uint_36__34_, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 514)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_subOp:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.substract_operation (var_rightValue.mAttribute_uint_36__34_, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 515)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_subOpNoOvf:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.substract_operation_no_ovf (var_rightValue.mAttribute_uint_36__34_) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_mulOp:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.multiply_operation (var_rightValue.mAttribute_uint_36__34_, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 517)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_mulOpNoOvf:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.multiply_operation_no_ovf (var_rightValue.mAttribute_uint_36__34_) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_divOp:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.divide_operation (var_rightValue.mAttribute_uint_36__34_, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 519)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_divOpNoOvf:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.divide_operation_no_ovf (var_rightValue.mAttribute_uint_36__34_) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_modOp:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.modulo_operation (var_rightValue.mAttribute_uint_36__34_, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 521)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_leftShiftOp:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.left_shift_operation (var_rightValue.mAttribute_uint_36__34_.reader_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 522)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 522)) ;
      }
      break ;
    case GALGAS_infixOperator::kEnum_rightShiftOp:
      {
        var_result = var_leftValue.mAttribute_uint_36__34_.right_shift_operation (var_rightValue.mAttribute_uint_36__34_.reader_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 523)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 523)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_variableKindIR::constructor_literalUnsignedInteger (outArgument_outExpressionType, GALGAS_luint_36__34_::constructor_new (var_result, object->mAttribute_mOperatorLocation  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 525))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 525)) ;
  }else if (kBoolFalse == test_9) {
    {
    routine_getNewTempVariable (ioArgument_ioTemporaryIndex, object->mAttribute_mOperatorLocation, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 528)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_operatorInfixExpressionIR::constructor_new (outArgument_outExpressionType, outArgument_outResult, var_leftResult, var_infixOperatorIR, var_rightResult  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 530))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 530)) ;
  }
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
//                           Overriding category method '@asExpressionAST analyzeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_asExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                              const GALGAS_receiverType constinArgument_inReceiverType,
                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                              const GALGAS_string constinArgument_inMode,
                                                              const GALGAS_bool constinArgument_inAllowExceptions,
                                                              GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                              GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                              GALGAS_variableKindIR & outArgument_outResult,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_asExpressionAST * object = (const cPtr_asExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_asExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 557)) ;
  outArgument_outExpressionType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 571)) ;
  {
  routine_getNewTempVariable (ioArgument_ioTemporaryIndex, object->mAttribute_mTypeName.mAttribute_location, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 573)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_asOperatorInstructionIR::constructor_new (outArgument_outExpressionType, outArgument_outResult, var_expressionResult  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 575))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 575)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_asExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_asExpressionAST.mSlotID,
                                         categoryMethod_asExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_asExpressionAST_analyzeExpression (defineCategoryMethod_asExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@asOperatorInstructionIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_asOperatorInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                            GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_asOperatorInstructionIR * object = (const cPtr_asOperatorInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_asOperatorInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mOperand, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 597)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_asOperatorInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_asOperatorInstructionIR.mSlotID,
                                               categoryMethod_asOperatorInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_asOperatorInstructionIR_enterAccessibleEntities (defineCategoryMethod_asOperatorInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@asOperatorInstructionIR instructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_asOperatorInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_asOperatorInstructionIR * object = (const cPtr_asOperatorInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_asOperatorInstructionIR) ;
  result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 603)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 603)).add_operation (categoryReader_mangledName (object->mAttribute_mTemporaryResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 603)) ;
  result_outCode.dotAssign_operation (GALGAS_string (" = ((").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 604)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 604)).add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 604)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 604))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 604)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_asOperatorInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_asOperatorInstructionIR.mSlotID,
                                       categoryReader_asOperatorInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_asOperatorInstructionIR_instructionCode (defineCategoryReader_asOperatorInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@operatorInfixExpressionIR instructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_operatorInfixExpressionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_operatorInfixExpressionIR * object = (const cPtr_operatorInfixExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_operatorInfixExpressionIR) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_infixOperatorIR::kNotBuilt:
    break ;
  case GALGAS_infixOperatorIR::kEnum_infix:
    {
      const cEnumAssociatedValues_infixOperatorIR_infix * extractPtr_22951 = (const cEnumAssociatedValues_infixOperatorIR_infix *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_string extractedValue_infixOperator = extractPtr_22951->mAssociatedValue0 ;
      result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 632)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 632)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 632)) ;
      result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 633)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 633)).add_operation (extractedValue_infixOperator, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 633)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 633)).add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 633)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 633))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 633)) ;
    }
    break ;
  case GALGAS_infixOperatorIR::kEnum_infixOvf:
    {
      const cEnumAssociatedValues_infixOperatorIR_infixOvf * extractPtr_23602 = (const cEnumAssociatedValues_infixOperatorIR_infixOvf *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_string extractedValue_builtinFunction = extractPtr_23602->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_code = extractPtr_23602->mAssociatedValue1 ;
      GALGAS_string var_ovfVar = GALGAS_string ("ovf").add_operation (categoryReader_location (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 635)).reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 635)).reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 635)) ;
      result_outCode = function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 636)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 636)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 636)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 636)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("const bool ").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 637)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 637)).add_operation (extractedValue_builtinFunction, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 637)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 637)).add_operation (categoryReader_mangledName (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 637)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 638)).add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 638)).add_operation (GALGAS_string (", &"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 639)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 640)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 640))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 637)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 641)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 641))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 641)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (").add_operation (extractedValue_code.reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 642)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 642)).add_operation (categoryReader_location (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 643)).reader_file (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 643)).reader_lastPathComponent (SOURCE_FILE ("expression-infix-operators.galgas", 643)).reader_utf_38_Representation (SOURCE_FILE ("expression-infix-operators.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 643)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 643)).add_operation (categoryReader_location (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 644)).reader_line (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 644)).reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 644)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 644))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 642)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 645)) ;
    }
    break ;
  case GALGAS_infixOperatorIR::kEnum_infixUnsignedDivide:
    {
      const cEnumAssociatedValues_infixOperatorIR_infixUnsignedDivide * extractPtr_24108 = (const cEnumAssociatedValues_infixOperatorIR_infixUnsignedDivide *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_uint extractedValue_code = extractPtr_24108->mAssociatedValue0 ;
      result_outCode = GALGAS_string ("if (0 == ").add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 647)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 647)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (").add_operation (extractedValue_code.reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 648)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 648)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 648)).add_operation (categoryReader_location (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 649)).reader_file (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 649)).reader_lastPathComponent (SOURCE_FILE ("expression-infix-operators.galgas", 649)).reader_utf_38_Representation (SOURCE_FILE ("expression-infix-operators.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 649)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 649)).add_operation (categoryReader_location (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 650)).reader_line (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 650)).reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 650)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 650))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 648)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 651)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 652)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 652)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 652))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 652)) ;
      result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 653)).add_operation (GALGAS_string (" / "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 653)).add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 653)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 653))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 653)) ;
    }
    break ;
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_operatorInfixExpressionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_operatorInfixExpressionIR.mSlotID,
                                       categoryReader_operatorInfixExpressionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_operatorInfixExpressionIR_instructionCode (defineCategoryReader_operatorInfixExpressionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@operatorInfixExpressionIR enterAccessibleEntities'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorInfixExpressionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorInfixExpressionIR * object = (const cPtr_operatorInfixExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_operatorInfixExpressionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mLeftOperand, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 660)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mRighOperand, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 661)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_operatorInfixExpressionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_operatorInfixExpressionIR.mSlotID,
                                               categoryMethod_operatorInfixExpressionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_operatorInfixExpressionIR_enterAccessibleEntities (defineCategoryMethod_operatorInfixExpressionIR_enterAccessibleEntities, NULL) ;

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
                                                                            const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                            const GALGAS_string /* constinArgument_inMode */,
                                                                            const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                            GALGAS_uint & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                            GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                            GALGAS_variableKindIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-literal-integer.galgas", 49)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 50)) ;
    outArgument_outExpressionType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    switch (constinArgument_inOptionalTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 52)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_3036 = (const cEnumAssociatedValues_typeKind_integer *) (constinArgument_inOptionalTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 52)).unsafePointer ()) ;
        const GALGAS_uint_36__34_ extractedValue_max = extractPtr_3036->mAssociatedValue1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mAttribute_mLiteralInteger.mAttribute_uint_36__34_.objectCompare (extractedValue_max)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("literal integer is > ").add_operation (constinArgument_inOptionalTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 55)).add_operation (GALGAS_string (" max value ("), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 55)).add_operation (extractedValue_max.reader_string (SOURCE_FILE ("expression-literal-integer.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 55)) ;
          outArgument_outExpressionType.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_2) {
          outArgument_outExpressionType = constinArgument_inOptionalTargetType ;
        }
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_4 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("an enumeration cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 61)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        GALGAS_location location_5 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_5, GALGAS_string ("a structure cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_6 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("a boolean cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 65)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_7 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a boolset cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 67)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_8 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("a literal string cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 69)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    }
  }
  outArgument_outResult = GALGAS_variableKindIR::constructor_literalUnsignedInteger (outArgument_outExpressionType, object->mAttribute_mLiteralInteger  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 73)) ;
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
                                                                           const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_string /* constinArgument_inMode */,
                                                                           const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryIndex */,
                                                                           GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                           GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_string var_literalStringName ;
  const enumGalgasBool test_0 = ioArgument_ioGlobalLiteralStringMap.reader_hasKey (object->mAttribute_mLiteralString.mAttribute_string COMMA_SOURCE_FILE ("expression-literal-string.galgas", 50)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGlobalLiteralStringMap.method_searchKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 51)) ;
  }else if (kBoolFalse == test_0) {
    var_literalStringName = function_literalStringPrefix (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 53)).add_operation (ioArgument_ioGlobalLiteralStringMap.reader_count (SOURCE_FILE ("expression-literal-string.galgas", 53)).reader_string (SOURCE_FILE ("expression-literal-string.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 53)) ;
    {
    ioArgument_ioGlobalLiteralStringMap.modifier_insertKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 54)) ;
    }
  }
  outArgument_outExpressionType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 58)).reader_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 58)) ;
  outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalString (object->mAttribute_mLiteralString, var_literalStringName  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 59)) ;
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
//                         Overriding category method '@varInExpressionAST analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                 const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                 const GALGAS_string constinArgument_inMode,
                                                                 const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                 GALGAS_uint & /* ioArgument_ioTemporaryIndex */,
                                                                 GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                 GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_sourceVarType ;
  GALGAS_stringset var_acceptedModeSet ;
  GALGAS_string var_varAccess ;
  GALGAS_variableKindIR var_variable ;
  {
  GALGAS_bool joker_2758 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadAccess (object->mAttribute_mSourceVarName, var_sourceVarType, var_acceptedModeSet, var_varAccess, var_variable, joker_2758, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 51)) ;
  }
  const enumGalgasBool test_0 = var_acceptedModeSet.reader_hasKey (constinArgument_inMode COMMA_SOURCE_FILE ("expression-var.galgas", 60)).operator_not (SOURCE_FILE ("expression-var.galgas", 60)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSourceVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this variable cannot be used in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 61)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 61))  COMMA_SOURCE_FILE ("expression-var.galgas", 61)) ;
  }
  outArgument_outExpressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_sourceVarType, object->mAttribute_mSourceVarName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 64)) ;
  outArgument_outResultValueName = var_variable ;
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
//                     Overriding category method '@functionCallInExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_string constinArgument_inMode,
                                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                                          GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                                          GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                          GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallInExpressionAST * object = (const cPtr_functionCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallInExpressionAST) ;
  GALGAS_lstring var_functionMode ;
  GALGAS_funcSignature var_formalParameterList ;
  constinArgument_inContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionVarName, var_functionMode, var_formalParameterList, outArgument_outExpressionType, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 66)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inMode.objectCompare (var_functionMode.mAttribute_string)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFunctionVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this function should be called in $").add_operation (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 74)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 74))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 74)) ;
  }
  GALGAS_variableListIR var_variableList = GALGAS_variableListIR::constructor_emptyList (SOURCE_FILE ("expression-func-call.galgas", 77)) ;
  GALGAS_string var_s = function_mangledNameForFunction (object->mAttribute_mFunctionVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 78)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 78)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_formalParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 79)).objectCompare (object->mAttribute_mParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 79)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mFunctionVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this function declares ").add_operation (var_formalParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 80)).reader_string (SOURCE_FILE ("expression-func-call.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 80)).add_operation (GALGAS_string (" formal parameters, the call names "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 80)).add_operation (object->mAttribute_mParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 81)).reader_string (SOURCE_FILE ("expression-func-call.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 81)).add_operation (GALGAS_string (" effective arguments"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 81))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 80)) ;
  }else if (kBoolFalse == test_2) {
    cEnumerator_funcSignature enumerator_3734 (var_formalParameterList, kEnumeration_up) ;
    cEnumerator_functionCallEffectiveParameterList enumerator_3760 (object->mAttribute_mParameterList, kEnumeration_up) ;
    while (enumerator_3734.hasCurrentObject () && enumerator_3760.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_3760.current (HERE).mAttribute_mSelector.mAttribute_string.objectCompare (enumerator_3734.current (HERE).mAttribute_mFormalSelector.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_s = GALGAS_string ("!") ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_3734.current (HERE).mAttribute_mFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_s.dotAssign_operation (enumerator_3734.current (HERE).mAttribute_mFormalSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 88))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 88)) ;
        }
        GALGAS_location location_6 (enumerator_3760.current (HERE).mAttribute_mSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("required selector: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 90))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 90)) ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_argumentExpressionType ;
      GALGAS_variableKindIR var_resultValueName ;
      callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_3760.current (HERE).mAttribute_mExpression.ptr (), GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("expression-func-call.galgas", 93)), enumerator_3734.current (HERE).mAttribute_mArgumentType, constinArgument_inContext, constinArgument_inMode, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_argumentExpressionType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 92)) ;
      var_variableList.addAssign_operation (var_resultValueName  COMMA_SOURCE_FILE ("expression-func-call.galgas", 105)) ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_argumentExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 106)).objectCompare (enumerator_3734.current (HERE).mAttribute_mArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 106)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_location location_8 (enumerator_3760.current (HERE).mAttribute_mSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the actual parameter has the ").add_operation (var_argumentExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 107)).add_operation (GALGAS_string (", but the formal argument has the "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 107)).add_operation (enumerator_3734.current (HERE).mAttribute_mArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 108)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 108))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 107)) ;
      }
      if (enumerator_3734.hasNextObject () && enumerator_3760.hasNextObject ()) {
        var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 111)) ;
      }
      enumerator_3734.gotoNextObject () ;
      enumerator_3760.gotoNextObject () ;
    }
  }
  var_s.dotAssign_operation (GALGAS_string (")")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 114)) ;
  {
  routine_getNewTempVariable (ioArgument_ioTemporaryIndex, object->mAttribute_mFunctionVarName.mAttribute_location, outArgument_outResultValueName, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 116)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (outArgument_outExpressionType, object->mAttribute_mFunctionVarName.mAttribute_string, outArgument_outResultValueName, var_variableList  COMMA_SOURCE_FILE ("expression-func-call.galgas", 118))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 118)) ;
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
//                            Overriding category reader '@functionCallIR instructionCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_functionCallIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 138)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 138)) ;
  result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mTempConstantTarget, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 139)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 139))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 139)) ;
  result_outCode.dotAssign_operation (function_mangledNameForFunction (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 140)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 140))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 140)) ;
  cEnumerator_variableListIR enumerator_5907 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_5907.hasCurrentObject ()) {
    result_outCode.dotAssign_operation (categoryReader_mangledName (enumerator_5907.current_mVar (HERE), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 142))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 142)) ;
    if (enumerator_5907.hasNextObject ()) {
      result_outCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 143)) ;
    }
    enumerator_5907.gotoNextObject () ;
  }
  result_outCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 145)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_functionCallIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_functionCallIR.mSlotID,
                                       categoryReader_functionCallIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_functionCallIR_instructionCode (defineCategoryReader_functionCallIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@functionCallIR enterAccessibleEntities'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mFunctionSet.addAssign_operation (object->mAttribute_mFunctionName  COMMA_SOURCE_FILE ("expression-func-call.galgas", 151)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTempConstantTarget, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 152)) ;
  cEnumerator_variableListIR enumerator_6384 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_6384.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_6384.current_mVar (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 154)) ;
    enumerator_6384.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_functionCallIR.mSlotID,
                                               categoryMethod_functionCallIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallIR_enterAccessibleEntities (defineCategoryMethod_functionCallIR_enterAccessibleEntities, NULL) ;

